#pragma once
#include <string>
using namespace std;
typedef std::basic_string<unsigned char> ustring;


class AES {
public:
	static const unsigned char AESIrrPoly;
	static const unsigned char s[256];
	static const unsigned  char inv_s[256];
	static const unsigned char MixColumnCons[16];
	static const unsigned char rcon[15];
	static const unsigned char Mult_2[256];
	static const unsigned char Mult_3[256];
	static const unsigned char Mult_9[256];
	static const unsigned char Mult_11[256];
	static const unsigned char Mult_13[256];
	static const unsigned char Mult_14[256];
	
	static void printProgress(double);


	static void Substitue(unsigned char *);
	static void InvSubstitue(unsigned char *);
	static void ShiftRow(unsigned char *);
	static void InvShiftRow(unsigned char *);
	static void MixColumn(unsigned char *);
	static void InvMixColumn(unsigned char *);
	static void ExpandKey(unsigned char *, unsigned char *, int);
	static void KeyAddition(unsigned char *, unsigned char *);
	static void Encrypt128(unsigned char *, unsigned char *, unsigned char *, int);
	static void Decrypt128(unsigned char *, unsigned char *, unsigned char *, int);

public:
	static void Encrypt(ustring , ustring, ustring *, int, bool);
	static bool Decrypt(ustring, ustring, ustring *, int, bool);
	static void EncryptTest(ustring, ustring *, int);
	static bool DecryptTest(ustring, ustring, ustring, ustring *, int);


};



