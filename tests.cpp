#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "caesar.h"

TEST_CASE("Solving") {
  CHECK(solve("Fx kfw gfhp fx N hfs wjrjrgjw, N fqbfdx bfsyji yt gj f lfslxyjw.") == "As far back as I can remember, I always wanted to be a gangster.");
  CHECK(solve("Xkskshkx sk, Kjjok? Cnkt O qorrkj euax hxuznkx, O zgrqkj, PAYZ! ROQK! ZNOY!") == "Remember me, Eddie? When I killed your brother, I talked, JUST! LIKE! THIS!");
  CHECK(solve("P tla aopz zpe-flhy-vsk jopsk dpao aopz ishur, whsl, ltvapvuslzz mhjl, huk aol ishjrlza lflz, aol klcps'z lflz. P ylhspglk doha dhz spcpun ilopuk aoha ivf'z lflz dhz wbylsf huk zptwsf... lcps.") == "I met this six-year-old child with this blank, pale, emotionless face, and the blackest eyes, the devil's eyes. I realized what was living behind that boy's eyes was purely and simply... evil.");
  CHECK(solve("P'cl zllu aopunz fvb wlvwsl dvbsku'a ilsplcl. Haahjr zopwz vu mpyl vmm aol zovbskly vm Vypvu. P dhajolk J-Ilhtz nspaaly pu aol khyr ulhy aol Ahuuohbzly Nhalz. Hss aovzl tvtluaz dpss il svza pu aptl, sprl alhyz pu yhpu. Aptl av kpl.") == "I've seen things you people wouldn't believe. Attack ships on fire off the shoulder of Orion. I watched C-Beams glitter in the dark near the Tannhauser Gates. All those moments will be lost in time, like tears in rain. Time to die.");
}