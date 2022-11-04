#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "caesar.h"
#include "vigenere.h"
#include "decrypt.h"

TEST_CASE("B") {
  CHECK(encryptCaesar("Way to Go!", 5) == "Bfd yt Lt!");
  CHECK(encryptCaesar("A Light-Year Apart", 5) == "F Qnlmy-Djfw Fufwy");
  CHECK(encryptCaesar("Hello, World!", 10) == "Rovvy, Gybvn!");
  CHECK(encryptCaesar("If he had anything confidential to say, he wrote it in cipher, that is, by so changing the order of the letters of the alphabet, that not a word could be made out.", 7) == "Pm ol ohk hufaopun jvumpkluaphs av zhf, ol dyval pa pu jpwoly, aoha pz, if zv johunpun aol vykly vm aol slaalyz vm aol hswohila, aoha uva h dvyk jvbsk il thkl vba.");
}

TEST_CASE("C") {
  CHECK(encryptVigenere("Hello, World!","cake") == "Jevpq, Wyvnd!");
  CHECK(encryptVigenere("The quick brown fox jumps over 13 lazy dogs.","cryptii") == "Vyc fnqkm spdpv nqo hjfxa qmcg 13 eiha umvl.");
}

TEST_CASE("D (Ceasar)") {
  CHECK(decryptCaesar("Bfd yt Lt!", 5) == "Way to Go!");
  CHECK(decryptCaesar("F Qnlmy-Djfw Fufwy", 5) == "A Light-Year Apart");
  CHECK(decryptCaesar("Rovvy, Gybvn!", 10) == "Hello, World!");
  CHECK(decryptCaesar("Pm ol ohk hufaopun jvumpkluaphs av zhf, ol dyval pa pu jpwoly, aoha pz, if zv johunpun aol vykly vm aol slaalyz vm aol hswohila, aoha uva h dvyk jvbsk il thkl vba.", 7) == "If he had anything confidential to say, he wrote it in cipher, that is, by so changing the order of the letters of the alphabet, that not a word could be made out.");
}

TEST_CASE("D (Vingenere)") {
  CHECK(decryptVigenere("Jevpq, Wyvnd!","cake") == "Hello, World!");
  CHECK(decryptVigenere("Vyc fnqkm spdpv nqo hjfxa qmcg 13 eiha umvl.","cryptii") == "The quick brown fox jumps over 13 lazy dogs.");
}
