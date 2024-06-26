byte A[] = { 0x3C, 0x66, 0xC3, 0xC3, 0xFF, 0xC3, 0xC3, 0xC3 };
byte B[] = { 0x7E, 0xC3, 0xC3, 0xC3, 0x7E, 0xC3, 0xC3, 0x7E };
byte C[] = { 0x3C, 0x66, 0xC0, 0xC0, 0xC0, 0xC0, 0x66, 0x3C };
byte D[] = { 0xFC, 0xC6, 0xC3, 0xC3, 0xC3, 0xC3, 0xC6, 0xFC };
byte E[] = { 0xFF, 0xC0, 0xC0, 0xFC, 0xC0, 0xC0, 0xC0, 0xFF };
byte F[] = { 0xFF, 0xC0, 0xC0, 0xFC, 0xC0, 0xC0, 0xC0, 0xC0 };
byte G[] = { 0x3C, 0x66, 0xC0, 0xC0, 0xCF, 0xC3, 0x66, 0x3C };
byte H[] = { 0xC3, 0xC3, 0xC3, 0xFF, 0xC3, 0xC3, 0xC3, 0xC3 };
byte I[] = { 0x3C, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x3C };
byte J[] = { 0x3C, 0x18, 0x18, 0x18, 0x18, 0x18, 0xD8, 0x70 };
byte K[] = { 0xC3, 0xC6, 0xCC, 0xD8, 0xF0, 0xD8, 0xCC, 0xC6 };
byte L[] = { 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xFF };
byte M[] = { 0xC3, 0xE7, 0xDB, 0xDB, 0xC3, 0xC3, 0xC3, 0xC3 };
byte N[] = { 0xC3, 0xE3, 0xF3, 0xDB, 0xCF, 0xC7, 0xC3, 0xC3 };
byte O[] = { 0x3C, 0x66, 0xC3, 0xC3, 0xC3, 0xC3, 0x66, 0x3C };
byte P[] = { 0x7E, 0xC3, 0xC3, 0xC3, 0x7E, 0xC0, 0xC0, 0xC0 };
byte Q[] = { 0x3C, 0x66, 0xC3, 0xC3, 0xC3, 0xDB, 0x7E, 0x06 };
byte R[] = { 0x7E, 0xC3, 0xC3, 0xC3, 0x7E, 0xCC, 0xC6, 0xC3 };
byte S[] = { 0x3E, 0x63, 0x60, 0x3C, 0x06, 0xC3, 0x66, 0x3C };
byte T[] = { 0xFF, 0xDB, 0x18, 0x18, 0x18, 0x18, 0x18, 0x3C };
byte U[] = { 0xC3, 0xC3, 0xC3, 0xC3, 0xC3, 0xC3, 0xC3, 0x3C };
byte V[] = { 0xC3, 0xC3, 0xC3, 0xC3, 0xC3, 0x66, 0x24, 0x18 };
byte W[] = { 0xC3, 0xC3, 0xC3, 0xDB, 0xDB, 0xDB, 0xE7, 0xC3 };
byte X[] = { 0xC3, 0xC3, 0x66, 0x3C, 0x3C, 0x66, 0xC3, 0xC3 };
byte Y[] = { 0xC3, 0xC3, 0x66, 0x3C, 0x18, 0x18, 0x18, 0x3C };
byte Z[] = { 0xFF, 0x06, 0x0C, 0x18, 0x30, 0x60, 0xC0, 0xFF };

byte sp[] = { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 };

void setup() {
  for (int j = 2; j < 19; j++)
    pinMode(j, OUTPUT);
  Serial.begin(9600);
}

void SetChar(char p) {
  Clear();
  for (int fil = 0; fil < 8; fil++) {
    digitalWrite(fil + 10, LOW);
    byte F = Selecciona(p, fil);
    for (int col = 7; col >= 0; col--) {
      digitalWrite(8 - col, LOW);
      bool b = GetBit(F, col);
      if (b)
        digitalWrite(9 - col, HIGH);
      else
        digitalWrite(9 - col, LOW);
    }
    digitalWrite(fil + 10, HIGH);
  }
}

bool GetBit(byte N, int pos) {
  int b = N >> pos ;
  b = b & 1 ;
  return b ;
}

void Clear() {
  for (int j = 2; j < 10; j++)
    digitalWrite(j, LOW);
  for (int k = 10 ; k < 18 ; k++)
    digitalWrite(k, HIGH);
}

byte Selecciona(char c, byte fil) {
  switch (c) {
    case 'A':
      return A[fil];
      break;
    case 'B':
      return B[fil];
      break;
    case 'C':
      return C[fil];
      break;
    case 'D':
      return D[fil];
      break;
    case 'E':
      return E[fil];
      break;
    case 'F':
      return F[fil];
      break;
    case 'G':
      return G[fil];
      break;
    case 'H':
      return H[fil];
      break;
    case 'I':
      return I[fil];
      break;
    case 'J':
      return J[fil];
      break;
    case 'K':
      return K[fil];
      break;
    case 'L':
      return L[fil];
      break;
    case 'M':
      return M[fil];
      break;
    case 'N':
      return N[fil];
      break;
    case 'O':
      return O[fil];
      break;
    case 'P':
      return P[fil];
      break;
    case 'Q':
      return Q[fil];
      break;
    case 'R':
      return R[fil];
      break;
    case 'S':
      return S[fil];
      break;
    case 'T':
      return T[fil];
      break;
    case 'U':
      return U[fil];
      break;
    case 'V':
      return V[fil];
      break;
    case 'W':
      return W[fil];
      break;
    case 'X':
      return X[fil];
      break;
    case 'Y':
      return Y[fil];
      break;
    case 'Z':
      return Z[fil];
      break;
    case ' ':
      return sp[fil];
      break;
    default:
      return sp[fil];
  }
}

void loop() {
  String s = "ABCDEFGHIJKLMNOPQRSTUVWXYZ " ; 
  int l = s.length();
  for ( int n = 0; n < l; n++ ) {
    long t = millis();
    char c = s[n];
    while ( millis() < t + 800)
      SetChar(c);
  }
}
