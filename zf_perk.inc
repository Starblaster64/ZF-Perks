////////////////////////////////////////////////////////////////////////////////
//
//  Z O M B I E - F O R T R E S S - [TF2]
//
//  ZF Perk File
//
////////////////////////////////////////////////////////////////////////////////
//
//  Perk / Perk Bonus Descriptions
//
////////////////////////////////////////
//
//  Survivor Perks
//
//  Athletic
//    You have innate speed and rate of fire bonuses. You have innate attack and crit penalties.
//
//  Carpenter
//    You have an innate defense bonus. You have an innate attack penalty. Call for medic to place a barricade. Barricades have 350 health and can be destroyed by anyone. Ability has a cooldown of 25s.
//
//  Charitable
//    Each kill or assist grants 'gift points.' Call for medic to redeem these points and toss out a gift for other survivors. Gifts grant various temporary bonuses.
//
//  Cowardly 
//    You have a passive 'panic' ability. When hit, you gain temporary speed and defense bonuses. Panic ability lasts 10s and has a cooldown of 25s.
//
//  Friend
//    Call for medic to select a friend (must be looking at target, setup time only). Friend is randomly selected otherwise. When near your friend, you have attack and regen bonuses. You gain crit time for each kill or assist with your friend. Crit time is activated when your friend dies.
//
//  Heroic 
//    You have innate attack and defense bonuses. You gain crit time for each kill or assist. Crit time is activated when you're the last remaining survivor.
//
//  Holy
//    You have an innate attack penalty. When crouched and not moving, you heal yourself and nearby survivors.
//
//  Juggernaut 
//    You have innate attack and defense bonuses. You have an innate speed penalty. You are immune to self and fall damage. You knockback and stun zombies with melee hits or fall damage impacts.
//
//  Leader
//    You have an innate crit bonus. You grant attack and defense bonuses to nearby survivors. Call for medic to place a rally point. You gain attack and defense bonuses for each survivor near your rally point, and survivors gain attack and defense bonuses when they are near your rally point. Rally lasts 60s and has a cooldown of 120s.
//
//  Ninja
//    You have an innate speed bonus and defense penalty. Call for medic to place a decoy retreat point. When hit, you will retreat to that point. Decoy ability lasts 15s and has a cooldown of 30s. You can perform a high jump every 5s.
//
//  Nonlethal
//    You have an innate attack penalty when using bullet-based weapons. Bullet damage causes knockback.
//
//  Resourceful 
//    You receive ammo, health, and metal from kills. You receive temporary attack bonuses from ammopacks and temporary defense bonuses from medpacks.
//
//  Selfless 
//    You have an innate attack bonus and defense penalty. Other survivors near you gain a defense bonus. You explode on death.
//
//  Stash
//    Call for medic to place a secret stash. Stash can't be placed near other survivors or stashes. Stash becomes active after 40s and grants ammo, health, and a temporary attack bonus. Ability has a cooldown of 30s.
//
//  Stir-Crazy
//    You have innate attack and defense penalties. You receive an attack bonus proportional to how much distance you travel.
//
//  Supplier
//    Your reserve ammo is resupplied periodically, and can hold twice the normal limit. Call for medic to place supply boxes. Other survivors can resupply ammo from these boxes. Supply ability has a cooldown of 10s.
//
//  Tantrum
//    Call for medic to throw a tantrum. Tantrum grants 100% crits and lasts 15s. Ability has a cooldown of 30s, during which you have a speed penalty.
//
//  Traitor 
//    You have an innate crit penalty. You grant a crit bonus to nearby zombies. When you are one of the last two survivors, you poison the other survivor.
//
//  Trapper
//    Call for medic to place proximity mines. You can place up to 3 mines. Ability has a cooldown of 15s.
//
//  Turtle
//    You have an innate defense bonus. You have innate attack and speed penalties. You are immune to backstabs.
//
//  Wise
//    You gain a permanent attack bonus for each kill or assist. You gain a permanent defense bonus for each melee hit received.
//
//  Zenlike 
//    When crouched and not moving, you regenerate health and accumulate a crit bonus. Crit bonus decreases after each attack.
//
////////////////////////////////////////
//
//  Zombie Perks
//
//  Alpha 
//    You acquire minions by killing survivors or assisting existing minions in killing survivors. You receive attack and regen bonuses when near other zombies or minions. Call for medic to summon up to 4 minions. Ability has a cooldown of 15s per minion summoned.
//
//  Combustible 
//    You have an innate defense penalty. You explode on death (unless hit by a melee weapon). You have reduced respawn times. Can't cloak or use Bonk!.
//
//  Horrifying 
//    Each melee hit causes temporary attack, defense, and rate of fire penalties. Survivors' temporary penalties are reduced when you're killed.
//
//  Hunter
//    Call for medic to place your next spawnpoint. You gain a temporary attack bonus when spawning on your spawnpoint. You have reduced respawn times. Ability can be used once per spawn.
//
//  Leap 
//    You have innate attack and defense penalties. You are immune to fall damage. Call for medic to perform a long jump. Ability has a cooldown of 4s.
//
//  Magnetic
//    You can't be targeted by and disable nearby sentries. [Synergy] You disable nearby trapper mines.
//
//  Marked 
//    One survivor is randomly selected as your mark. You gain an attack bonus when attacking your mark and an attack penalty otherwise. New mark is chosen after current mark dies and there are more than 2 remaining survivors.
//
//  Rage 
//    Call for medic to activate rage. Rage grants 150% health and a speed bonus. Below 80% health, rage can't be activated and fades if already active.
//
//  Roar
//    Call for medic to execute a powerful roar. Roar causes knockback and temporary defense penalties. Ability has a cooldown of 15s.
//
//  Scorching
//    You have an innate speed bonus. You have an innate attack penalty. You are immune to fire damage and ignite survivors on touch or melee hit. Can't use Bonk!.
//
//  Sick
//    You have an innate defense penalty. Call for medic to spit acid. Acid lasts for 25s or until you die. Acid causes more damage the longer survivors stand in it.
//
//  Swarming
//    You have an innate speed bonus. You have innate attack and defense penalties. You have instant respawn, and zombies that die near you have instant respawn.
//
//  Tarred
//    Call for medic to spit tar. Tar slicks last for 20s or until you die. You slow survivors with melee hits or when hit with melee.
//
//  Thieving 
//    You have an innate attack penalty. You steal ammo, metal, and ubercharge with each melee hit. If target has no reserve ammo for their primary weapon, you steal it and a limited amount of ammo.
//
//  Toxic 
//    You have an innate attack penalty. You poison survivors with melee hits or when hit with melee. When not moving, you cause damage to nearby survivors.
//
//  Vampiric 
//    You have an innate regen bonus. You leech health when dealing damage.
//
//  Vindictive 
//    You gain permanent attack and defense bonuses for each kill or assist.
//
////////////////////////////////////////

// CRASHES (Confirmed)
// + On map X, server change to zf_fortress_v4, then client crash (no server crash). Occurs between OnClientConnect and OnClientPostAdminCheck. Likely map-related.

// FEATURES
// + CVAR: Zombies can't pick new perk, or can only switch once every X seconds.
// + Radial damage : no damage, but indicators required.
// + Translation hooks?
// + Temporary bonus / penalty overhaul? Diminishing returns, percentage increases in str / dur.
// + Cripple option : More damage on initial stab, instakill on already crippled?
// + Katana : Too powerful for ZF?
// + Zombie melee-resistant perk
// + Zombie defense perk
//   + Call4Med = place rock totem
//   + Near totem = defense bonus.
//   + Totems can be destroyed by anyone.
// + Zombie parasite perk
//   + Melee hit = inject parasite (unless parasite currently active).
//   + Parasite causes icon / glow
//   + Parasite causes low damage (1/s)
//   + Parasite lasts Xs, can't be healed.
//   + If survivor dies with parasite, infector spawns on death point with extra health/power (or something).
// + Alpha : Message to minions about upcoming summon?
// + Charitable : Presents disappear after Xs?
// + Combustible : 'E' to immobilze + larger explosion?
// + Holy: negative stat penalties for nearby zombies while praying?
// + Hunter: Make spawn point damageable?
// + Leader : Rally purges stat penalties
// + Leader : Prevent rally and/or prox bonuses from stacking?
// + Magnetic : High gravity for nearby survivors?
// + Marked : Change mark after X seconds?
// + Marked : Notification when you're no longer marked?
// + Nonlethal : Useless
// + Sick : More damage to buildings
// + Sick/Tarred : Change position of where radial damage is emitted?
// + Stash : Allow multiple.
// + Stash : Becomes more powerful the longer you wait to grab.
// + Supplier : Allow pyro double max reserve ammo (250).
// + Tarred : Change oil slick speed penalty to -150 when near it, 0 otherwise (i.e. strong but limited).
// + Thieving : Recover weapon by killing stealer.
// + Thieving : Passive visual?
// + Toxic : Prevent passive damage if in respawn room.
// + Traitor : Zombies can see traitor icon?
// + Turtle: Hunker ability (toggle for large defense bonus, rof/speed penalty)

// BUGS (Confirmed)
// + Traitor, then next round choose Selfless - initial "Betrayed message" appears - looks like periodic logic applies once before moving to correct state. Why?
// + Lugermorph ammo incorrectly drained in a few cases.
// + Damage : Victims pushed away from current damage inflictor's position (slightly)
// + Damage : DamagePost values do not take into account Fists of Steel ranged damage reduction.
// + Melee-only : Engineers can build sentries with console commands.
// + Going spectator : Going spectator does not count as a team switch, and it should.
// + Sick : Acid kills attributed to currently held weapon.
// + Supplier : Why is ammo picked up? (Select weapon w/no ammo, its reserve ammo get set to 0, causing ammo pickup)

// BUGS (Can't reproduce)
// + Razorback : Does not block backstab attempts?
// + Resourceful : Standing on kit as pyro causes massive def bonus buildup?
// + Thieving : Stealing weapon causes 'T' pose? Why does forced weapon switch not work?

#if defined _ZF_PERK_INC
  #endinput
#endif
#define _ZF_PERK_INC

#include "zf_util_base.inc"
#include "zf_util_fx.inc"
#include "zf_util_pref.inc"

//
// Perk Objects
//
#define ZF_PERK_NONE            0
  
// Survivor perks
#define TOTAL_SUR_PERKS 23
#define ZF_PERK_ATHLETIC        1
#define ZF_PERK_CARPENTER       2
#define ZF_PERK_CHARITABLE      3 
#define ZF_PERK_COWARDLY        4 
#define ZF_PERK_FRIEND          5 
#define ZF_PERK_HEROIC          6 
#define ZF_PERK_HOLY            7
#define ZF_PERK_JUGGERNAUT      8
#define ZF_PERK_LEADER          9 
#define ZF_PERK_NINJA           10
#define ZF_PERK_NONLETHAL       11
#define ZF_PERK_RESOURCEFUL     12
#define ZF_PERK_SELFLESS        13
#define ZF_PERK_STASH           14
#define ZF_PERK_STIRCRAZY       15
#define ZF_PERK_SUPPLIER        16
#define ZF_PERK_TANTRUM         17
#define ZF_PERK_TRAITOR         18
#define ZF_PERK_TRAPPER         19
#define ZF_PERK_TURTLE          20
#define ZF_PERK_WISE            21
#define ZF_PERK_ZENLIKE         22

new String:ZF_SURPERK_NAME[TOTAL_SUR_PERKS][] = 
{ "None",
  "Athletic", "Carpenter", "Charitable", "Cowardly", "Friend", "Heroic", "Holy",
  "Juggernaut", "Leader", "Ninja", "Nonlethal", "Resourceful", "Selfless", 
  "Stash", "Stir-Crazy", "Supplier", "Tantrum", "Traitor", "Trapper", "Turtle",
  "Wise", "Zenlike" };

new String:ZF_SURPERK_SHORTDESC[TOTAL_SUR_PERKS][] =
{  
  "None",
  "Athletic: Fast moving, fast shooting.",
  "Carpenter: Build barricades.",
  "Charitable: Turn kills into gifts.",
  "Cowardly: Flee when attacked.",
  "Friend: Form a dynamic duo.",
  "Heroic: Powerful last stand.",
  "Holy: Pray for health.",
  "Juggernaut: Slow moving, hard hitting.",
  "Leader: Rally and inspire the troops.",
  "Ninja: Agile and deceptive.",
  "Nonlethal: Rubber bullets.",
  "Resourceful: Resupply from kills, pickups.",
  "Selfless: Sacrifice on death.",
  "Stash: Hide supply cache for later.",
  "Stir-Crazy: Movement is power.",
  "Supplier: Place resupply crates.",
  "Tantrum: Throw tantrums.",
  "Traitor: Betray your teammates.",
  "Trapper: Place proximity mines.",
  "Turtle: Slow moving, hard shell.",  
  "Wise: Improve through combat.",
  "Zenlike: Wellness through meditation." 
};

//"0xxxxxxxxxxxxxxx1xxxxxxxxxxxxxxx2xxxxxxxxxxxxxxx\n3xxxxxxxxxxxxxxx4xxxxxxxxxxxxxxx5xxxxxxxxxxxxxxx\n6xxxxxxxxxxxxxxx7xxxxxxxxxxxxxxx8xxxxxxxxxxxxxxx\n9xxxxxxxxxxxxxxxAxxxxxxxxxxxxxxxBxxxxxxxxxxxxxxx\nCxxxxxxxxxxxxxxxDxxxxxxxxxxxxxxxExxxxxxxxxxxxxxx\nFxxxxxxxxxxxxxxxGxxxxxxxxxxxxxxxHxxxxxxxxxxxxxxx\nIxxxxxxxxxxxxxxxJxxxxxxxxxxxxxxxKxxxxxxxxxxxxxxx\nLxxxxxxxxxxxxxxxMxxxxxxxxxxxxxxxNxxxxxxxxxxxxxxx\n",
new String:ZF_SURPERK_LONGDESC[TOTAL_SUR_PERKS][] = 
{
  "",
  "You have innate speed and rate of fire bonuses. \nYou have innate attack and crit penalties.",
  "You have an innate defense bonus. You have an   \ninnate attack penalty. Call for medic to place a\nbarricade. Barricades have 350 health and can be\ndestroyed by anyone. Ability has a cooldown of 25s.",
  "Each kill or assist grants 'gift points.' Call  \nfor medic to redeem these points and toss out a \ngift for other survivors. When picked up, gifts \ngive you and the recipient various temporary    \nbonuses and heal you.",
  "You have a passive 'panic' ability. When hit,   \nyou gain temporary speed and defense bonuses.   \nPanic ability lasts 10s and has a cooldown of 35s.",  
  "Call for medic to select a friend (must be      \nlooking at target, setup time only). Friend is  \nrandomly selected otherwise. When near your     \nfriend, you have attack and regen bonuses. You  \ngain crit time for each kill or assist with your\nfriend. Crit time is activated when your friend \ndies.",
  "You have innate attack and defense bonuses. You \ngain crit time for each kill or assist. Crit    \ntime is activated when you're the last remaining\nsurvivor.",
  "You have an innate attack penalty. When crouched\nand not moving, you heal yourself and nearby    \nsurvivors.",
  "You have innate attack and defense bonuses. You \nhave an innate speed penalty. You are immune to \nself and fall damage. You knockback zombies with\nmelee hits and stun them with fall damage       \nimpacts.",
  "You have an innate crit bonus. You grant attack \nand defense bonuses to nearby survivors. Call   \nfor medic to place a rally point. You gain      \nattack and defense bonuses for each survivor    \nnear your rally point, and survivors gain attack\nand defense bonuses when they are near your     \nrally point. Rally lasts 60s and has a cooldown \nof 120s.",
  "You have an innate speed bonus and defense      \npenalty. Call for medic to place a decoy retreat\npoint. When hit, you will retreat to that point.\nDecoy ability lasts 15s and has a cooldown of  \n25s. You can perform a high jump every 5s.",
  "You have an innate attack penalty when using    \nbullet-based weapons. Bullet damage causes      \nknockback.",
  "You receive ammo, health, and metal from kills. \nYou receive temporary attack bonuses from       \nammopacks and temporary defense bonuses from    \nmedpacks.",
  "You have an innate attack bonus and defense     \npenalty. Other survivors near you gain a defense\nbonus. You explode on death.",
  "Call for medic to place a secret stash. Stash   \ncan't be placed near other survivors or stashes.\nStash becomes active after 40s and grants ammo, \nhealth, and a temporary attack bonus. Ability   \nhas a cooldown of 30s.",
  "You have innate attack and defense penalties.   \nYou receive an attack bonus proportional to how \nmuch distance you travel.",
  "Your reserve ammo is resupplied periodically,   \nand can hold twice the normal limit. Call for   \nmedic to place supply boxes. Other survivors can\nresupply ammo from these boxes. Supply ability  \nhas a cooldown of 10s.",
  "Call for medic to throw a tantrum. Tantrum      \ngrants 100% crits and lasts 15s. Ability has a  \ncooldown of 30s, during which you have a speed  \npenalty.",
  "You have an innate crit penalty. You grant a    \ncrit bonus to nearby zombies. When you are one  \nof the last two survivors, you poison the other \nsurvivor.",
  "Call for medic to place proximity mines. You can\nplace up to 3 mines. Ability has a cooldown of  \n15s.",
  "You have an innate defense bonus. You have      \ninnate attack and speed penalties. You are      \nimmune to backstabs.",
  "You gain a permanent attack bonus for each kill \nor assist. You gain a permanent defense bonus   \nfor each melee hit received.",
  "When crouched and not moving, you regenerate    \nhealth and accumulate a crit bonus. Crit bonus  \ndecreases after each attack."
};

// Zombie perks
#define TOTAL_ZOM_PERKS 18
#define ZF_PERK_ALPHA           1 
#define ZF_PERK_COMBUSTIBLE     2 
#define ZF_PERK_HORRIFYING      3
#define ZF_PERK_HUNTER          4 
#define ZF_PERK_LEAP            5 
#define ZF_PERK_MAGNETIC        6
#define ZF_PERK_MARKED          7
#define ZF_PERK_RAGE            8
#define ZF_PERK_ROAR            9 
#define ZF_PERK_SCORCHING       10
#define ZF_PERK_SICK            11
#define ZF_PERK_SWARMING        12
#define ZF_PERK_TARRED          13
#define ZF_PERK_THIEVING        14
#define ZF_PERK_TOXIC           15
#define ZF_PERK_VAMPIRIC        16
#define ZF_PERK_VINDICTIVE      17

new String:ZF_ZOMPERK_NAME[TOTAL_ZOM_PERKS][] =
{ "None",
  "Alpha", "Combustible", "Horrifying", "Hunter", "Leap", "Magnetic", "Marked",
  "Rage", "Roar", "Scorching", "Sick", "Swarming", "Tarred", "Thieving", 
  "Toxic", "Vampiric", "Vindictive" };

new String:ZF_ZOMPERK_SHORTDESC[TOTAL_ZOM_PERKS][] =
{
  "None",
  "Alpha: Create and summon minions.",
  "Combustible: Explode on death.",
  "Horrifying: Weaken enemies on hit.",
  "Hunter: Place your spawnpoint.",
  "Leap: Jump far, jump often.",
  "Magnetic: Disable sentries and mines.",
  "Marked: Stalk a single target.",
  "Rage: Gain power, ignore damage.",
  "Roar: Toss away your enemies.",
  "Scorching: Fire. Lots of fire.",
  "Sick: Hurl acidic bombs.",
  "Swarming: Instant respawn.",
  "Tarred: Spit tar, slow enemies.",
  "Thieving: Steal from enemies.",
  "Toxic: Poison enemies.",
  "Vampiric: Leech health.",
  "Vindictive: Everlasting power from kills."
};

//"0xxxxxxxxxxxxxxx1xxxxxxxxxxxxxxx2xxxxxxxxxxxxxxx\n3xxxxxxxxxxxxxxx4xxxxxxxxxxxxxxx5xxxxxxxxxxxxxxx\n6xxxxxxxxxxxxxxx7xxxxxxxxxxxxxxx8xxxxxxxxxxxxxxx\n9xxxxxxxxxxxxxxxAxxxxxxxxxxxxxxxBxxxxxxxxxxxxxxx\nCxxxxxxxxxxxxxxxDxxxxxxxxxxxxxxxExxxxxxxxxxxxxxx\nFxxxxxxxxxxxxxxxGxxxxxxxxxxxxxxxHxxxxxxxxxxxxxxx\nIxxxxxxxxxxxxxxxJxxxxxxxxxxxxxxxKxxxxxxxxxxxxxxx\nLxxxxxxxxxxxxxxxMxxxxxxxxxxxxxxxNxxxxxxxxxxxxxxx\n",
new String:ZF_ZOMPERK_LONGDESC[TOTAL_ZOM_PERKS][] = 
{
  "",  
  "You acquire minions by killing survivors or     \nassisting existing minions in killing survivors.\nYou receive attack and regen bonuses when near  \nother zombies or minions. Call for medic to     \nsummon up to 4 minions. Ability has a cooldown  \nof 15s per minion summoned.",
  "You have an innate defense penalty. You explode \non death (unless hit by a melee weapon). You    \nhave reduced respawn times. Can't cloak or use  \nBonk!.",
  "Each melee hit causes temporary attack, defense,\nand rate of fire penalties. Survivors' temporary\npenalties are reduced when you're killed.",
  "Call for medic to place your next spawnpoint.   \nYou gain a temporary attack bonus when spawning \non your spawnpoint. You have reduced respawn    \ntimes. Ability can be used once per spawn.",
  "You have innate attack and defense penalties.   \nYou are immune to fall damage. Call for medic to\nperform a long jump. Ability has a cooldown of 4s.",
  "You can't be targeted by and disable nearby     \nsentries. [Synergy] You disable nearby trapper  \nmines.",
  "One survivor is randomly selected as your mark. \nYou gain an attack bonus when attacking your    \nmark and an attack penalty otherwise. New mark  \nis chosen after current mark dies and there are \nmore than 2 remaining survivors.",
  "Call for medic to activate rage. Rage grants    \n150% health and a speed bonus. Below 80% health,\nrage can't be activated and fades if already    \nactive. While cooling down you suffer -33% attack.",
  "Call for medic to execute a powerful roar. Roar \ncauses knockback and temporary defense          \npenalties. Ability has a cooldown of 15s.",
  "You have an innate speed bonus. You have an     \ninnate attack penalty. You are immune to fire   \ndamage and ignite survivors on touch or melee   \nhit. Can't use \nBonk!.",
  "You have an innate defense penalty. Call for    \nmedic to spit acid. Acid lasts for 25s or until \nyou die. Acid causes more damage the longer     \nsurvivors stand in it. Can't use Bonk!.",
  "You have an innate speed bonus. You have innate \nattack and defense penalties. You have instant  \nrespawn, and zombies that die near you have     \ninstant respawn.",
  "Call for medic to spit tar. Tar slicks last for \n20s or until you die. You slow survivors with   \nmelee hits or when hit with melee.",
  "You have an innate attack penalty. You steal    \nammo, metal, and ubercharge with each melee hit.\nIf target has no reserve ammo for their primary \nweapon, you steal it and a limited amount of ammo.",
  "You have an innate attack penalty. You poison   \nsurvivors with melee hits or when hit with      \nmelee. When not moving, you cause damage to     \nnearby survivors.",
  "You have an innate regen bonus. You leech health\nwhen dealing damage.",
  "You gain permanent attack and defense bonuses   \nfor each kill or assist."
};
  
//
// Perk Bonus Objects
//

//
// Perk Gameplay Objects
//
const Float:ZF_POW_STUNTIME = 8.0;          // Duration of stun from POW! taunt.
const Float:ZF_POW_DAMAGE = 100.0;          // Damage done by POW! taunt.
const ZF_CRIPPLE_DURATION = 30;             // Amount of time crippled/tracked condition lasts. (cannot heal, glow to all players)
const Float:ZF_CRIPPLE_MIN_PCT = 0.5;       // Minimum percentage of victim's max health done on backstab.
const ZF_CRIPPLE_BASEHEALTH = 50;           // Base crippled health - 0% Att Spy stabbing 0% Def victim gives this much crippled health.
const ZF_CRIPPLE_MAXHEALTH = 80;            // Max value for crippled health.
const ZF_CRIPPLE_MINHEALTH = 30;            // Min value for crippled health.
//const ZF_DAZE_DEFENSE = -40;                 // Defense penalty when dazed. (no longer used)
const ZF_POISON_DAMAGE = 5;                 // Amount of poison damage (per sec).
const ZF_POISON_HEAL_MEDIC = 3;             // Amount of poison healed (per sec) by medic healing.
const ZF_POISON_HEAL_MEDPACK = 5;           // Amount of poison healed by medpack pickup.
const ZF_POISON_HEAL_UBER = 100;            // Amount of poison healed when ubered.
const Float:ZF_STILL_VELMAX = 50.0;        // Maximum velocity for perk detection of no movement, to allow for bumping from others.

const ZF_SENT_AMMO_COST = 4;                // Metal per shell refilled on sentries.
const ZF_SENT_AMMO_MAX = 15;                // Max ammo on normal sentries.
const ZF_SENT_AMMO_MINI = 50;               // Max ammo on minisentries (can't be refilled, decays 2/sec)
const ZF_SENT_RELOAD_TIME = 2;              // Disabled time on normal sentries when refilled.

// Survivor perks
const ZF_ATHLETIC_ATTACK = -33;             // Innate attack penalty.
const ZF_ATHLETIC_CRIT = -100;              // Innate crit penalty.
const ZF_ATHLETIC_ROF = 100;                // Innate rate of fire bonus.
const ZF_ATHLETIC_SPEED = 75;               // Innate speed bonus.
const CARPENTER_ATTACK = -25;               // Innate attack penalty.
const CARPENTER_DEFENSE = 25;               // Innate defense bonus.
const CARPENTER_BARRICADE_HEALTH = 350;     // Health of each barricade.
const CARPENTER_COOLDOWN = 25;              // Duration after barricade is placed before a new one can be placed.
const CARPENTER_MAX_ITEMS = 3;              // Maximum number of barricades that can be active at one time.
const CARPENTER_DROP_RADSQ_BARRICADE = (250 * 250); // Radius (squared) inwhich no barricades must be to place barricade.
const CARPENTER_DROP_RADSQ_CLIENT = (150 * 150);    // Radius (squared) inwhich no other players must be to place barricade.
const ZF_CHARITABLE_MAX_ITEMS = 5;          // Maximum number of gifts that can be active at one time.
const ZF_CHARITABLE_POINTS_ASSIST = 1;      // Points earned per assist.
const ZF_CHARITABLE_POINTS_KILL = 2;        // Points earned per kill.
const ZF_CHARITABLE_POINTS_GIFT = 3;        // Points needed to toss gift.
const ZF_CHARITABLE_GIFT_HEALTH = 75; // Health gained by gift owner when gift is picked up.
const ZF_CHARITABLE_GIFT_ATTACK_LIM = 50;   // Attack bonus limit for gift recipients.
const ZF_CHARITABLE_GIFT_DEFENSE_LIM = 30;  // Defense bonus limit for gift recipients.
const ZF_CHARITABLE_GIFT_REGEN_LIM = 10;    // Regen bonus limit for gift recipients.
const Float:ZF_CHARITABLE_GIFT_MIN_PCT = 0.5; // Gift bonus is randomly between (pct * lim) and lim.
const Float:ZF_CHARITABLE_BONUS_SELF = 0.5; // Percent of gift bonus given to self when picked up by teammate.
const ZF_CHARITABLE_GIFT_DURATION = 30;     // Duration of gift bonuses.
const ZF_COWARDLY_DEFENSE = 85;              // Defense bonus when scared.
const ZF_COWARDLY_SPEED = 100;              // Speed bonus when scared.
const ZF_COWARDLY_DURATION_SCARED = 10;     // Duration of scared state after being hit.
const ZF_COWARDLY_DURATION_COOLDOWN = 35;   // Duration after scared state ends before scared state is again possible.
const ZF_FRIEND_ATTACK_LIM = 75;            // Attack bonus limit for perk.
const ZF_FRIEND_REGEN_LIM = 15;             // Regen bonus limit for perk.
const Float:ZF_FRIEND_BONUS_PCT = 0.66;     // Attack/Regen bonus percent per nearby friend.
const ZF_FRIEND_CRITTIME_INIT = 5;          // Starting crit time.
const ZF_FRIEND_CRITTIME_KILL = 8;          // Crit time added per kill.
const ZF_FRIEND_CRITTIME_ASSIST = 5;        // Crit time added per assist.
const ZF_FRIEND_RADIUSSQ = (400 * 400);     // Radius (squared) inwhich passive bonuses apply.
const HEROIC_COMBAT = 15;                   // Attack and defense bonus when using perk.
const HEROIC_CRITTIME_INIT = 20;            // Starting crit time.
const HEROIC_CRITTIME_KILL = 5;             // Crit time added per kill.
const HEROIC_CRITTIME_KILL_ACTIVE = 2;      // Crit time added per kill when crittime is active.
const HEROIC_CRITTIME_ASSIST = 5;           // Crit time added per assist.
const HEROIC_CRITTIME_ASSIST_ACTIVE = 1;    // Crit time added per assist when crittime is active.
const ZF_HOLY_RADIUSSQ = (400 * 400);       // Radius (squared) inwhich regen bonuses apply.
const ZF_HOLY_REGEN_MIN = 5;                // Regen bonus for nearby survivors.
const ZF_HOLY_REGEN_INCTIME = 5;            // Time continuously crouched after which regen increases. (1/sec^2)
const ZF_HOLY_REGEN_MAX = 12;               // Maximum regen amount.
const ZF_JUGGERNAUT_ATTACK = 15;            // Attack bonus when using perk.
const ZF_JUGGERNAUT_DEFENSE = 25;            // Defense bonus when using perk.
const Float:ZF_JUGGERNAUT_FORCE = 500.0;    // Knockback force for nearby zombies when fall damage taken / on melee hit.
const ZF_JUGGERNAUT_RADIUS = 250;           // Radius inwhich fall damage causes stun.
//const ZF_JUGGERNAUT_ROF = -25;              // Rate of fire penalty when using perk. (inactive)
const ZF_JUGGERNAUT_SPEED = -100;           // Speed penalty when using perk.
const Float:ZF_JUGGERNAUT_STUN_DURATION = 2.0; // Duration of stun when fall damage taken.
const Float:ZF_JUGGERNAUT_STUN_SLOWDOWN = 0.5; // Slowdown of stun when fall damage taken.
const ZF_LEADER_SELF_CRIT = 25;                // Crit bonus when using perk.
const ZF_LEADER_OTHERS_ATTACK_LIM = 50;        // Attack bonus limit for applied buff.
const Float:ZF_LEADER_OTHERS_ATTACK_PCT = 0.5; // Attack bonus percent for survivors near user.
const ZF_LEADER_OTHERS_RADIUSSQ = (350 * 350); // Radius (squared) inwhich passive bonuses are applied.
const ZF_LEADER_RALLY_SELF_ATTACK_LIM = 100;   // Attack bonus limit for self from rally.
const ZF_LEADER_RALLY_SELF_DEFENSE_LIM = 50;    // Defense bonus limit for self from rally.
const Float:ZF_LEADER_RALLY_SELF_BONUS_PCT = 0.1; // Bonus percent of each Attack/Defense gained for each survivor near rally.
const ZF_LEADER_RALLY_OTHERS_ATTACK_LIM = 50;      // Attack bonus for survivors near rally point.
const ZF_LEADER_RALLY_OTHERS_DEFENSE_LIM = 40;      // Defense bonus for survivors near rally point.
const Float:ZF_LEADER_RALLY_OTHERS_BONUS_PCT = 0.5; // Bonus percent applied to each survivor near rally.
const ZF_LEADER_RALLY_DURATION = 60;           // Duration after rally is placed before it expires.
const ZF_LEADER_RALLY_COOLDOWN = 120;          // Duration after rally is placed before it can be replaced.
const ZF_LEADER_RALLY_RADIUSSQ = (400 * 400);  // Radius (squared) inwhich rally bonuses apply.
const ZF_NINJA_DEFENSE = -15;                // Defense penalty while using perk.
const ZF_NINJA_SPEED = 50;                  // Speed bonus using perk.
const ZF_NINJA_DURATION_DECOY_ACTIVE = 10;  // Duration of decoy retreat point lifetime.
const ZF_NINJA_DURATION_DECOY_DECAY = 5;    // Duration of decoy before it poofs.
const ZF_NINJA_DURATION_COOLDOWN = 25;      // Duration after decoy before new decoy can be used.
const ZF_NINJA_FALLDMG_RESIST = 50;         // Percentage of fall damage resistance.
const ZF_NINJA_JUMP_COOLDOWN = 5;           // Cooldown for high jump ability.
const Float:ZF_NINJA_FORCE = 600.0;         // Jump force.
const ZF_NONLETHAL_ATTACK_BULLET = -75;     // Attack penalty when using perk and bullet-based weapon.
const Float:ZF_NONLETHAL_FORCE = 25.0;      // Base force applied per bullet-based attack.
const Float:ZF_RESOURCEFUL_AMMOPCT = 0.20;  // Percent of ammo received per kill.
const ZF_RESOURCEFUL_ATTACK_LIM = 25;       // Attack bonus (temporary) when grabbing an ammopack.
const ZF_RESOURCEFUL_DEFENSE_LIM = 25;      // Defense bonus (temporary) when grabbing a medpack.
const Float:ZF_RESOURCEFUL_BONUS_PCT = 1.0; // Percent bonus given on ammo/health pickup.
const ZF_RESOURCEFUL_HEALTH = 25;           // Health gained per kill (up to max).
const ZF_RESOURCEFUL_HEALTH_OVERHEAL = 15;  // Additional health gained per kill (overheal possible).
const ZF_RESOURCEFUL_METAL = 25;            // Amount of metal received per kill.
const ZF_RESOURCEFUL_PICKUP_DURATION = 10;  // Duration of temporary bonuses from pickups.
const ZF_SELFLESS_DAMAGE = 1000;            // Explosion damage applied to zombies on death.
const ZF_SELFLESS_RADIUS = 500;             // Radius of explosion.
const ZF_SELFLESS_SELF_DEFENSE = -20;        // Defense penalty for user.
const ZF_SELFLESS_SELF_ATTACK = 20;         // Attack bonus for user.
const ZF_SELFLESS_OTHERS_DEFENSE_LIM = 30;   // Defense bonus limit for nearby survivors.
const Float:ZF_SELFLESS_OTHERS_DEFENSE_PCT = 0.66; // Percent bonus applied to nearby survivors.
const ZF_SELFLESS_OTHERS_RADIUSSQ = (350 * 350); // Radius (squared) in which defense bonus is applied.
const ZF_STASH_GRAB_ATTACK_DURATION = 45;      // Duration of temporary bonuses from grabbing stash.
const ZF_STASH_GRAB_ATTACK_PERM = 10;          // Permanent attack bonus from grabbing stash.
const ZF_STASH_GRAB_ATTACK_TEMP_LIM = 100;     // Attack bonus limit from grabbing stash.
const Float:ZF_STASH_GRAB_ATTACK_TEMP_PCT = 1.0;// 
const ZF_STASH_GRAB_HEALTH = 200;              // Health bonus from grabbing stash.
const ZF_STASH_COOLDOWN = 30;                  // Duration after stash becomes ready before a new stash can be placed.
const ZF_STASH_WARMUP = 40;                    // Duration after placing stash before it becomes ready.
const ZF_STASH_GRAB_RADSQ = (50 * 50);         // Radius (squared) inwhich you must be to grab stash.
const ZF_STASH_DROP_RADSQ_STASH = (200 * 200); // Radius (squared) inwhich no other stashes must exist in order to place new stash.
const ZF_STASH_DROP_RADSQ_CLIENT = (800 * 800);// Radius (squared) inwhich no other survivors must exist in order to place new stash.
const ZF_STIRCRAZY_MAX_POINTS = 5;          // Number of previous positions used to calculate average position.
const ZF_STIRCRAZY_DIST_MIN = 200;          // Minimum distance from average of last X positions overwhich bonuses apply.
const ZF_STIRCRAZY_DIST_MAX = 750;          // Maximum distance from average of last X positions overwhich no further bonuses apply.
const ZF_STIRCRAZY_ATTACK = 120;            // Attack bonus when ZF_STIRCRAZY_DIST_MAX is reached.
const ZF_STIRCRAZY_COMBAT = -10;            // Base attack and defense penalty.
const ZF_SUPPLIER_MAX_ITEMS = 2;            // Maximum number of supply boxes that can be active at once.
const ZF_SUPPLIER_TIMER = 10;               // Duration after supplies are placed before supplies can be placed again.          
const ZF_SUPPLIER_RADIUSSQ = (75 * 75);     // Radius (squared) inwhich supplies are picked up.
const ZF_SUPPLIER_UPDATERATE = 10;          // Period (in s) of self-resupply.
const Float:ZF_SUPPLIER_AMMOPCT_RESLIMIT = 2.0; // Primary and secondary ammo reserve limit.
const Float:ZF_SUPPLIER_AMMOPCT_SELF = 0.10;    // Percent of ammo (of standard maximum) received per self-resupply.
const Float:ZF_SUPPLIER_AMMOPCT_OTHER = 0.25;   // Percent of ammo (of standard maximum) received per resupply.
const ZF_SUPPLIER_RESUPPLY_COUNT = 4;       // Number of resupplies from each supply box.
const ZF_SUPPLIER_ATTACK_LIM = 100;         // Attack bonus limit for supplier on supply use.
const Float:ZF_SUPPLIER_ATTACK_PCT = 0.25;  // Percent bonus given to supplier on supply use.
const ZF_SUPPLIER_DURATION = 10;            // Duration of bonuses for suppliers when supplies picked up.
const ZF_TANTRUM_ACTIVE = 15;               // Duration of anger (100% crit) state.
const ZF_TANTRUM_COOLDOWN = 30;             // Duration of tired (speed penalty) state.
const ZF_TANTRUM_SPEED = -100;              // Speed penalty given after perk use.
const ZF_TRAITOR_CRIT = -100;               // Crit penalty when using this perk.
const ZF_TRAITOR_CRIT_ZOM = 25;             // Crit bonus for nearby zombies.
const ZF_TRAITOR_POISON = 3;                // Poison damage applied per/s to other remaining survivor.
const ZF_TRAITOR_RADIUSSQ = (500 * 500);    // Radius (squared) inwhich zombie crit bonus applies.
const ZF_TRAPPER_MAX_ITEMS = 3;             // Maximum number of mines that can be active at once.
const ZF_TRAPPER_DAMAGE = 50;               // Damage done by trapper mines.
const ZF_TRAPPER_RADIUS = 200;              // Radius inwhich mines trigger and cause damage.
const ZF_TRAPPER_RADIUSSQ = (200 * 200);    // Radius (squared) inwhich mines trigger and cause damage.
const ZF_TRAPPER_TIMER = 15;                // Time between use of perk.
const ZF_TURTLE_ATTACK = -50;               // Attack penalty when using this perk.
const ZF_TURTLE_DEFENSE = 50;                // Defense bonus when using this perk.
const ZF_TURTLE_SPEED = -100;               // Speed penalty when using perk.
const Float:ZF_TURTLE_STUN_DURATION = 0.5;  // Stun time when zombie backstabs perk user.
const ZF_WISE_ATTACK_LIM = 100;             // Attack bonus limit for perk.
const Float:ZF_WISE_ATTACK_KILL_PCT = 0.04; // Percent bonus given for kill.
const Float:ZF_WISE_ATTACK_ASSIST_PCT = 0.02;// Percent bonus given for assist.
const ZF_WISE_DEFENSE_LIM = 75;             // Defense bonus limit for perk.
const Float:ZF_WISE_DEFENSE_PCT = 0.03;     // Percent bonus given when hit.
const ZF_ZENLIKE_CRIT_INC = 10;             // Crit bonus gained when crouched and not moving.
const ZF_ZENLIKE_CRIT_DEC = 50;            // Crit bonus lost per shot.
const ZF_ZENLIKE_CRIT_MAX = 200;            // Maximum crit bonus.
const ZF_ZENLIKE_HEAL = 5;                  // Poison healed when crouched and not moving.
const ZF_ZENLIKE_REGEN = 15;                // Health regen bonus when crouched and not moving.

// Zombie perks
const ZF_ALPHA_RADIUSSQ = (500 * 500);      // Radius (squared) in which zombies provide attack and regen bonuses.
const ZF_ALPHA_ATTACK_LIM = 80;             // Attack bonus limit gained from nearby zombies.
const ZF_ALPHA_REGEN_LIM = 20;              // Regen bonus gained from nearby zombies.
const Float:ZF_ALPHA_ZOMBIE_PCT = 0.15;      // Bonus percent gained per nearby non-minioned zombie.
const Float:ZF_ALPHA_MINION_PCT = 0.3;      // Bonus percent gained per nearby zombie minion.
const ZF_ALPHA_SUMMON_LIMIT = 4;            // Maximum number of minions that can be summoned at once.
const ZF_ALPHA_TIMER_MINION = 15;           // Time between use of perk per zombie summoned.
const ZF_COMBUSTIBLE_DAMAGE = 100;          // Explosion damage done on death.
const ZF_COMBUSTIBLE_DAMAGE_HEAVY = 150;    // Explosion damage done on death for heavies. 
const ZF_COMBUSTIBLE_DEFENSE = -200;         // Defense penalty for using perk.
const ZF_COMBUSTIBLE_RADIUS = 250;          // Radius of explosion.
const Float:ZF_COMBUSTIBLE_RESPAWNTIME = 4.5; // Respawn time when using perk.
const HORRIFYING_ATTACK_LIM = -30;          // Attack penalty limit for targets.
const HORRIFYING_DEFENSE_LIM = -15;         // Defense penalty limit for targets.
const Float:HORRIFYING_PENALTY_PCT = 0.33;   // Penalty percent applied per hit.
const Float:HORRIFYING_REDUCTION_KILL = 0.75;   // Temp stat penalty reduction when killing perk user.
const Float:HORRIFYING_REDUCTION_ASSIST = 0.25; // Temp stat penalty reduction when assisting in killing perk user.
const HORRIFYING_DURATION = 15;             // Duration of per-hit penalties.
const ZF_HUNTER_ATTACK = 66;                // Attack bonus given when spawning on mark.
const ZF_HUNTER_DURATION = 10;              // Duration of spawn bonuses.
const ZF_HUNTER_RADIUSSQ = (100 * 100);       // Radius (squared) inwhich survivors will destroy a spawn mark.
const Float:ZF_HUNTER_RESPAWNTIME = 5.5;    // Respawn time when using perk.
const ZF_LEAP_COMBAT = -33;                 // Combat penalty when using perk.
const ZF_LEAP_COOLDOWN = 4;                 // Duration after leap before ability is ready.
const Float:ZF_LEAP_FORCE = 800.0;          // Leap force.
const Float:ZF_LEAP_FORCE_SCOUT = 1500.0;   // Leap force for scouts.
const ZF_MAGNETIC_RADIUSSQ = (500 * 500);   // Radius (squared) inwhich sentries are disabled.
const ZF_MARKED_ATTACK_ON_MARK = 100;       // Attack bonus when hitting marked target.
const ZF_MARKED_ATTACK_OFF_MARK = -25;      // Attack penalty when hitting non-marked target.
const ZF_MARKED_MIN_SURVIVORS = 3;          // The minimum amount of survivors that must be alive to select a mark.
const ZF_MARKED_TIMER = 15;                 // Time between old target death and new target selection.
const ZF_RAGE_COOLDOWN = 20;                // Duration after rage ends before ability is ready.
const ZF_RAGE_ATTACK_PENALTY = -33;         // Attack penalty when rage ends until ready.
const ZF_RAGE_SPEED = 100;                  // Speed bonus when ability is active.
const Float:ZF_RAGE_HEALTHPCT_TOUSE = 0.80; // Percent of health above which ability can be activated.
const Float:ZF_RAGE_HEALTHPCT_ONUSE = 0.50; // Percent of health added when ability is activated.
const ZF_ROAR_COOLDOWN = 15;                // Time between use of perk.
const ZF_ROAR_DURATION = 15;                // Base duration of DAZED condition (non-heavies).
const ZF_ROAR_DURATION_HEAVY = 30;          // Base duration of DAZED condition (heavies).
const ZF_ROAR_DEFENSE_LIM = -40;            // Defense penalty limit for Roared targets.
const Float:ZF_ROAR_DEFENSE_PCT = 1.0;      // Penalty percent applied on Roar.
const Float:ZF_ROAR_FORCE = 600.0;          // Knockback force for nearby survivors (non-heavies).
const Float:ZF_ROAR_FORCE_HEAVY = 1000.0;   // Knockback force for nearby survivors (heavies).
const ZF_ROAR_RADIUS = 450;                 // Radius inwhich knockback and defense penalties are applied.
const ZF_SCORCHING_ATTACK = -50;            // Attack penalty when using perk.
const ZF_SCORCHING_SPEED = 50;              // Speed bonus when using perk.
const ZF_SICK_MAX_ITEMS = 5;                // Maximum number of acid projectiles / puddles active at once.
const ZF_SICK_DEFENSE = -50;                 // Defense penalty when using perk.
const ZF_SICK_DAMAGE = 15;                  // Base acid damage done to buildings. Survivor damage should be calculated separately.
const ZF_SICK_DAMAGE_RADIUS = 75;           // Radius inwhich acid causes damage.
const ZF_SICK_TIMER = 25;                   // Time between use of perk.
const ZF_SWARMING_COMBAT = -33;             // Combat penalty when using perk.
const ZF_SWARMING_RADIUSSQ = (200 * 200);   // Radius (squared) inwhich nearby zombies, when killed, get instant respawn.
const ZF_SWARMING_SPEED = 75;               // Speed bonus when using perk.
const Float:ZF_SWARMING_RESPAWNTIME = 0.5;  // Respawn time when using perk.
const ZF_TARRED_MAX_ITEMS = 5;              // Maximum number of oil projectiles / slicks active at once.
const ZF_TARRED_DURATION_MELEE = 10;        // Duration of slowing penalties for melee hits.
const ZF_TARRED_DURATION_SLICK = 2;         // Duration of slowing penalties for oil slick hits.
const ZF_TARRED_ROF = -20;                  // Rate of fire penalty when hit.
const ZF_TARRED_SPEED_MELEE = -50;          // Speed penalty on hit / when hit.
const ZF_TARRED_SPEED_SLICK = -75;          // Speed penalty on oil slick hit.
const ZF_TARRED_SPEED_LIMIT = 100;          // Minimum movement speed for any Tarred survivor.
const ZF_TARRED_TIMER = 20;                 // Time between use of perk.
const ZF_TARRED_RADIUS = 75;                // Radius inwhich oil causes slowing effects.
const Float:ZF_THIEVING_AMMOPCT = 0.30;     // Percent of current ammo reserve stolen per hit.
const Float:ZF_THIEVING_AMMOPCT_SPY = 0.40; // Percent of current ammo reserve stolen per hit as Spy.
const ZF_THIEVING_ATTACK = -66;             // Attack penalty when using perk.
const ZF_THIEVING_METAL = 75;               // Metal stolen per hit.
const Float:ZF_THIEVING_UBERPCT = 0.33;     // Percent of ubercharge stolen per hit.
const ZF_TOXIC_ATTACK = -100;               // Attack penalty when using perk.
const ZF_TOXIC_DURATION_POISON = 10;        // Time each regen penalty lasts.
const ZF_TOXIC_DAMAGE_PASSIVE = 3;          // Damage per/s for survivors nearby stationary zombie.
const ZF_TOXIC_RADIUSSQ = (400 * 400);      // Radius (squared) inwhich toxic passive poison is applied.
const Float:ZF_VAMPIRIC_HEALTHPCT = 0.5;    // Percent of damage leeched on hit.
const ZF_VAMPIRIC_REGEN = 10;               // Regeneration bonus when using perk.
const ZF_VINDICTIVE_ATTACK_LIM = 60;        // Attack bonus limit for perk.
const ZF_VINDICTIVE_DEFENSE_LIM = 30;       // Defense bonus limit for perk.
const Float:ZF_VINDICTIVE_KILL_PCT = 0.25;  // Bonus percent given per kill.
const Float:ZF_VINDICTIVE_ASSIST_PCT = 0.1; // Bonus percent given per assist.

//
// Perk Vars
//

// State
new zf_frameCounter;
new zf_surPerksEnabled;
new zf_zomPerksEnabled;
new zf_surPerksLimit[TOTAL_SUR_PERKS];
new zf_zomPerksLimit[TOTAL_ZOM_PERKS];
new zf_perkMode;
new zf_perkPendingMode;
new zf_perkRandSurPerk;
new zf_perkRandZomPerk;
new zf_perkTeamSurPerk;
new zf_perkTeamZomPerk;
new zf_crippleMode = 1;
new bool:zf_powStunMode = true;
new zf_menuPerk[MAXPLAYERS+1];
new zf_clientCount = 0;
new zf_surCount = 0;
new zf_zomCount = 0;

// Logic
new zf_lastAttack[MAXPLAYERS+1];
new zf_lastButtons[MAXPLAYERS+1];
new zf_lastHealth[MAXPLAYERS+1];
new zf_lastKiller[MAXPLAYERS+1];
new zf_lastPoison[MAXPLAYERS+1];
new zf_lastSick[MAXPLAYERS+1];
new zf_lastTeam[MAXPLAYERS+1];

new zf_perkTimer[MAXPLAYERS+1];           // Timer shared by many perks
new zf_perkState[MAXPLAYERS+1];           // State shared by many perks
new zf_perkState2[MAXPLAYERS+1];          // Second integer value for some perks
new zf_alphaMaster[MAXPLAYERS+1];         // Determines who is the master of the player (zombies only).
new Float:zf_perkPos[MAXPLAYERS+1][5][3]; // Position array shared by many perks
new String:zf_perkStr[MAXPLAYERS+1][32];  // String shared by many perks

// Entities

new zf_sentLastAmmo[MAXPLAYERS+1] = -1;
new zf_sentDisabled[MAXPLAYERS+1] = 0;


// Stats
#define TOTAL_ZFSTATS 6
#define TOTAL_ZFSTAT_TYPES 4
#define TOTAL_ZFCONDS 4
enum ZFStat { 
  ZFStatAtt = 0,    // TODO Desc
  ZFStatCrit,       // TODO Desc
  ZFStatDef,        // TODO Desc
  ZFStatRof,        // TODO Desc
  ZFStatSpeed,      // TODO Desc
  ZFStatRegen
}
enum ZFStatType { 
  ZFStatTypePerm = 0,        // TODO Desc
  ZFStatTypeCond,            // TODO Desc
  ZFStatTypeTemp,            // TODO Desc
  ZFStatTypeTempDuration     // TODO Desc
}
enum ZFCond { 
  ZFCondCrippled = 0, // Stops survivor healing above zf_lastHealth for Crippling backstab.
  ZFCondPoisoned,     // For (Z) Toxic: time remaining for active Toxic damage.
  ZFCondTracked,      // Sets survivor glow for Crippling backstab.
  ZFCondCorroded      // For (Z) Sick: damage increase for standing in acid.
}
new zf_stat[MAXPLAYERS+1][ZFStat][ZFStatType];
new zf_cond[MAXPLAYERS+1][ZFCond];

// FX.Entities
new zf_aura[MAXPLAYERS+1];

#define ICON_SPR 0
#define ICON_ANC 1
new zf_icon[MAXPLAYERS+1][MAXPLAYERS+1][2];

#define MAX_ITEMS 5
new zf_item[MAXPLAYERS+1][MAX_ITEMS];

// FX.HUD
new Handle:zf_hudLine0;
new Handle:zf_hudLine1;
new Handle:zf_hudLine2;

// Menus
new Handle:zf_menuSurPerkList;
new Handle:zf_menuZomPerkList;

// CVARS
new Handle:zf_cvCripple;
new Handle:zf_cvPowStun;

////////////////////////////////////////////////////////////
//
// Perk Init
//
////////////////////////////////////////////////////////////
public perkInit()
{  
  // Initialize game state
  zf_frameCounter = 0;
  zf_surPerksEnabled = 0xFFFF_FFFF;
  zf_zomPerksEnabled = 0xFFFF_FFFF;
  for(new i = 0; i < TOTAL_SUR_PERKS; i++)
    zf_surPerksLimit[i] = -1;
  for(new i = 0; i < TOTAL_ZOM_PERKS; i++)
    zf_zomPerksLimit[i] = -1;
  zf_perkMode = 0;
  zf_perkPendingMode = 0;
  zf_perkRandSurPerk = ZF_PERK_NONE;
  zf_perkRandZomPerk = ZF_PERK_NONE;  
  zf_perkTeamSurPerk = ZF_PERK_NONE;
  zf_perkTeamZomPerk = ZF_PERK_NONE;

  // Initialize client perk state
  resetAllClients();
  
  // Initialize HUD synchronizers
  zf_hudLine0 = CreateHudSynchronizer();
  zf_hudLine1 = CreateHudSynchronizer();
  zf_hudLine2 = CreateHudSynchronizer();
  
  // Initialize menu handles
  zf_menuSurPerkList = perk_buildSurPerkListMenu();
  zf_menuZomPerkList = perk_buildZomPerkListMenu();
    
  // Admin Commands
  // [0|normal|1|randplayer|2|randteam|3|cvarteam]
  RegAdminCmd("sm_zf_perk_setmode", command_zfPerkSetMode, ADMFLAG_KICK, "Sets ZF perk mode. 0 = Normal, 1 = Random per player, 2 = Random per team, 3 = CVAR per team.");
  // [<surperk>]
  RegAdminCmd("sm_zf_perk_setteamsurperk", command_zfPerkSetTeamSurPerk, ADMFLAG_KICK, "Sets survivor perk for CVAR per team mode.");
  // [<zomperk>]
  RegAdminCmd("sm_zf_perk_setteamzomperk", command_zfPerkSetTeamZomPerk, ADMFLAG_KICK, "Sets zombie perk for CVAR per team mode.");
  // [all|allsur|allzom]
  RegAdminCmd("sm_zf_perk_list", command_zfPerkList, ADMFLAG_KICK, "Lists current perks and status.");
  // [all|allsur|allzom|<perk>]
  RegAdminCmd("sm_zf_perk_enable", command_zfPerkEnable, ADMFLAG_KICK, "Enables specified perk. Changes apply on new round.");
  // [all|allsur|allzom|<perk>]
  RegAdminCmd("sm_zf_perk_disable", command_zfPerkDisable, ADMFLAG_KICK, "Disables specified perk. Changes apply on new round.");
  // [all|allsur|allzom|<perk>] [<limit>]
  RegAdminCmd("sm_zf_perk_limit", command_zfPerkLimit, ADMFLAG_KICK, "Sets limit for specified perk. -1 = Unlimited, 0 = None, >0 = Limit. Changes fully apply on new round.");
  // [0|disabled|1|crippling|2|stunning]
  RegAdminCmd("sm_zf_setcripple", command_zfSetCripple, ADMFLAG_KICK, "Sets Crippling backstab mode, usable by any admin. 0 = Disabled, 1 = Crippling, 2 = Stunning.");
  // [0|normal|1|stun]
  RegAdminCmd("sm_zf_setpowstun", command_zfSetPowStun, ADMFLAG_KICK, "Sets Pow! taunt effects, usable by any admin. 0 = 500 damage, 1 = 100 damage and 8 second stun.");
  
  // Client Commands
  // [<perk>]
  AddCommandListener(hook_zfSelectPerk, "zf_perk_select");
  
  // Register CVARS
  zf_cvCripple = CreateConVar("sm_zf_cripple", "1", "0 = Crippling backstab disabled, 1 = Crippling backstab enabled, 2 = Stunning backstab enabled.", FCVAR_PLUGIN, true, 0.0, true, 2.0); 
  zf_cvPowStun = CreateConVar("sm_zf_powstun", "1", "0 = Pow does 500 damage, 1 = Pow does 100 damage and 8 second stun.", FCVAR_PLUGIN, true, 0.0, true, 1.0);
}

////////////////////////////////////////////////////////////
//
// Admin Command Handlers
//
///////////////////////////////////////////////////////////
public Action:command_zfPerkSetMode(client, args)
{
  decl String:cmd[32];
  
  if(args == 0)
  {
    //
    // Display current mode.
    //
    ReplyToCommand(client, "Current game mode: %d", zf_perkMode);
    return Plugin_Handled;
  }  
  else if(args == 1)
  {
    //
    // Set game mode for next round.
    //
    GetCmdArg(1, cmd, sizeof(cmd));
    if(StrEqual(cmd, "0", false) || StrEqual(cmd, "normal", false))
    {
      zf_perkPendingMode = 0;
      ReplyToCommand(client, "Game mode set to 0 (Normal). Changes apply on new round.");
      PrintToChatAll("\x05[ZF ADMIN]\x01 Game mode set to 0 (Normal). Changes apply on new round.");
      return Plugin_Handled;
    }
    if(StrEqual(cmd, "1", false) || StrEqual(cmd, "randplayer", false))
    {
      zf_perkPendingMode = 1;
      ReplyToCommand(client, "Game mode set to 1 (Random perks per player). Changes apply on new round.");
      PrintToChatAll("\x05[ZF ADMIN]\x01 Game mode set to 1 (Random perks per player). Changes apply on new round.");
      return Plugin_Handled;
    }
    if(StrEqual(cmd, "2", false) || StrEqual(cmd, "randteam", false))
    {
      zf_perkPendingMode = 2;
      ReplyToCommand(client, "Game mode set to 2 (Random perks per team). Changes apply on new round.");
      PrintToChatAll("\x05[ZF ADMIN]\x01 Game mode set to 2 (Random perks per team). Changes apply on new round.");
      return Plugin_Handled;
    } 
    if(StrEqual(cmd, "3", false) || StrEqual(cmd, "cvarteam", false))
    {
      zf_perkPendingMode = 3;
      ReplyToCommand(client, "Game mode set to 3 (CVAR perks per team). Changes apply on new round.");
      PrintToChatAll("\x05[ZF ADMIN]\x01 Game mode set to 3 (CVAR perks per team). Changes apply on new round.");
      return Plugin_Handled;
    }      
  }

  //
  // Error in command format, display usage.
  //
  GetCmdArg(0, cmd, sizeof(cmd));
  ReplyToCommand(client, "Usage: %s [0|normal|1|randplayer|2|randteam|3|cvarteam]", cmd);    
  return Plugin_Handled;
}

public Action:command_zfPerkSetTeamSurPerk(client, args)
{
  decl String:cmd[32];
  
  if(args == 1)
  {
    GetCmdArg(1, cmd, sizeof(cmd));
    
    for(new i = 0; i < TOTAL_SUR_PERKS; i++)
    {
      if(StrEqual(cmd, ZF_SURPERK_NAME[i], false))
      {
        zf_perkTeamSurPerk = i;
        ReplyToCommand(client, "Selected %s as survivor perk for CVAR per team mode.", ZF_SURPERK_NAME[i]);
        return Plugin_Handled;
      }
    }  
  }
  
  //
  // Error in command format, display usage.
  //
  GetCmdArg(0, cmd, sizeof(cmd));
  ReplyToCommand(client, "Usage: %s [<surperk>]", cmd);    
  return Plugin_Handled;  
}

public Action:command_zfPerkSetTeamZomPerk(client, args)
{
  decl String:cmd[32];
  
  if(args == 1)
  {
    GetCmdArg(1, cmd, sizeof(cmd));
    
    for(new i = 0; i < TOTAL_ZOM_PERKS; i++)
    {
      if(StrEqual(cmd, ZF_ZOMPERK_NAME[i], false))
      {
        zf_perkTeamZomPerk = i;
        ReplyToCommand(client, "Selected %s as zombie perk for CVAR per team mode.", ZF_ZOMPERK_NAME[i]);
        return Plugin_Handled;
      }
    }  
  }
  
  //
  // Error in command format, display usage.
  //
  GetCmdArg(0, cmd, sizeof(cmd));
  ReplyToCommand(client, "Usage: %s [<zomperk>]", cmd);    
  return Plugin_Handled;  
}

public Action:command_zfPerkList(client, args)
{
  decl String:cmd[32];
  
  if(args == 1)
  {
    GetCmdArg(1, cmd, sizeof(cmd));
    
    new bool:listSur = StrEqual(cmd, "all", false) || StrEqual(cmd, "allsur", false);
    new bool:listZom = StrEqual(cmd, "all", false) || StrEqual(cmd, "allzom", false);
    if(listSur)
    {
      ReplyToCommand(client, "Survivor Perks (enabled unless specified):");
      for(new i = 1; i < TOTAL_SUR_PERKS; i++)
        if(surPerkEnabled(i))
          ReplyToCommand(client, " > %s (Limit: %d)", ZF_SURPERK_NAME[i], zf_surPerksLimit[i]);
        else
          ReplyToCommand(client, " [Disabled] > %s (Limit: %d)", ZF_SURPERK_NAME[i], zf_surPerksLimit[i]);
    } 
    if(listZom)
    {
      ReplyToCommand(client, "Zombie Perks (enabled unless specified):");
      for(new i = 1; i < TOTAL_ZOM_PERKS; i++)
        if(zomPerkEnabled(i))
          ReplyToCommand(client, " > %s (Limit: %d)", ZF_ZOMPERK_NAME[i], zf_zomPerksLimit[i]);
        else
          ReplyToCommand(client, " [Disabled] > %s (Limit: %d)", ZF_ZOMPERK_NAME[i], zf_zomPerksLimit[i]);
    }
    
    if(listSur | listZom)
      return Plugin_Handled;
  }
  
  //
  // Error in command format, display usage.
  //
  GetCmdArg(0, cmd, sizeof(cmd));
  ReplyToCommand(client, "Usage: %s [all|allsur|allzom]", cmd);    
  return Plugin_Handled;
}

public Action:command_zfPerkEnable(client, args)
{
  command_perkUpdate(client, args, true);
  return Plugin_Handled;
}

public Action:command_zfPerkDisable(client, args)
{
  command_perkUpdate(client, args, false);
  return Plugin_Handled;
}

public Action:command_perkUpdate(client, args, bool:doEnable)
{
  decl String:cmd[32];
  
  if(args == 1)
  {
    GetCmdArg(1, cmd, sizeof(cmd));

    new bool:setSur = StrEqual(cmd, "all", false) || StrEqual(cmd, "allsur", false);
    new bool:setZom = StrEqual(cmd, "all", false) || StrEqual(cmd, "allzom", false);
    decl String:strState[16];
    strState = doEnable ? "Enabled" : "Disabled";
    
    //
    // Enable/Disable groups of perks.
    //
    if(setSur)
    {
      zf_surPerksEnabled = doEnable ? 0xFFFF_FFFF : 0x0000_0001;
      ReplyToCommand(client, "%s all survivor perks. Changes apply on new round.", strState);      
    }    
    if(setZom)
    {
      zf_zomPerksEnabled = doEnable ? 0xFFFF_FFFF : 0x0000_0001;
      ReplyToCommand(client, "%s all zombie perks. Changes apply on new round.", strState);        
    }
    if(setSur || setZom)
    {
      return Plugin_Handled;
    }

    //
    // Enable/Disable single perk.
    //
    for(new i = 1; i < TOTAL_SUR_PERKS; i++)
    {
      if(StrEqual(cmd, ZF_SURPERK_NAME[i], false))
      {
        zf_surPerksEnabled = doEnable ? (zf_surPerksEnabled | (1 << i)) : (zf_surPerksEnabled & ~(1 << i));
        ReplyToCommand(client, "%s %s. Changes apply on new round.", strState, ZF_SURPERK_NAME[i]);
        return Plugin_Handled;
      }
    }
    for(new i = 1; i < TOTAL_ZOM_PERKS; i++)
    {
      if(StrEqual(cmd, ZF_ZOMPERK_NAME[i], false))
      {
        zf_zomPerksEnabled = doEnable ? (zf_zomPerksEnabled | (1 << i)) : (zf_zomPerksEnabled & ~(1 << i));
        ReplyToCommand(client, "%s %s. Changes apply on new round.", strState, ZF_ZOMPERK_NAME[i]);
        return Plugin_Handled;
      }
    }
    
    ReplyToCommand(client, "\"%s\" is not a valid perk!", cmd);
    return Plugin_Handled;
  }

  //
  // Error in command format, display usage.
  //
  GetCmdArg(0, cmd, sizeof(cmd));
  ReplyToCommand(client, "Usage: %s [all|allsur|allzom|<perk>]", cmd);    
  return Plugin_Handled;  
}

public Action:command_zfPerkLimit(client, args)
{
  decl String:cmd[32];
  decl String:cmd2[32];
  
  if(args == 2)
  {
    GetCmdArg(1, cmd, sizeof(cmd));
    GetCmdArg(2, cmd2, sizeof(cmd2));

    new bool:setSur = StrEqual(cmd, "all", false) || StrEqual(cmd, "allsur", false);
    new bool:setZom = StrEqual(cmd, "all", false) || StrEqual(cmd, "allzom", false);
    new limit = StringToInt(cmd2);
        
    //
    // Limit groups of perks.
    //
    if(setSur)
    {
      for(new i = 1; i < TOTAL_SUR_PERKS; i++)
        zf_surPerksLimit[i] = limit;
      ReplyToCommand(client, "Survivor perk limits set to %d. Changes fully apply on new round.", limit);      
    }    
    if(setZom)
    {
      for(new i = 1; i < TOTAL_ZOM_PERKS; i++)
        zf_zomPerksLimit[i] = limit;
      ReplyToCommand(client, "Zombie perk limits set to %d. Changes fully apply on new round.", limit);      
    }
    if(setSur || setZom)
    {
      return Plugin_Handled;
    }

    //
    // Limit single perk.
    //
    for(new i = 1; i < TOTAL_SUR_PERKS; i++)
    {
      if(StrEqual(cmd, ZF_SURPERK_NAME[i], false))
      {
        zf_surPerksLimit[i] = limit;
        ReplyToCommand(client, "%s perk limit set to %d. Changes fully apply on new round.", ZF_SURPERK_NAME[i], limit);
        return Plugin_Handled;
      }
    }
    for(new i = 1; i < TOTAL_ZOM_PERKS; i++)
    {
      if(StrEqual(cmd, ZF_ZOMPERK_NAME[i], false))
      {
        zf_zomPerksLimit[i] = limit;
        ReplyToCommand(client, "%s perk limit set to %d. Changes fully apply on new round.", ZF_ZOMPERK_NAME[i], limit);
        return Plugin_Handled;
      }
    }
    
    ReplyToCommand(client, "\"%s\" is not a valid perk!", cmd);
    return Plugin_Handled;
  }

  //
  // Error in command format, display usage.
  //
  GetCmdArg(0, cmd, sizeof(cmd));
  ReplyToCommand(client, "Usage: %s [all|allsur|allzom|<perk>] [<limit>]", cmd);    
  return Plugin_Handled;    
}

public Action:command_zfSetCripple(client, args)
{
  decl String:cmd[32];
  if(args == 1) GetCmdArg(1, cmd, sizeof(cmd));
  else ReplyToCommand(client, "Usage: %s [0|1|2]", cmd);
  if((StringToInt(cmd) == 0) || (StringToInt(cmd) == 1) || (StringToInt(cmd) == 2))
  {
    SetConVarInt(zf_cvCripple, StringToInt(cmd));
    if(StringToInt(cmd) == 0) 
    {
      ReplyToCommand(client, "zf_cvCripple set to 0 (Disabled).");
      PrintToChatAll("\x05[ZF ADMIN]\x01 Backstab mode set to 0 (Normal). Changes apply on new round.");
    }
    else if(StringToInt(cmd) == 1)
    {
      ReplyToCommand(client, "zf_cvCripple set to 1 (Cripple).");
      PrintToChatAll("\x05[ZF ADMIN]\x01 Backstab mode set to 1 (Crippling). Changes apply on new round.");
    }
    else if(StringToInt(cmd) == 2)
    {
      ReplyToCommand(client, "zf_cvCripple set to 2 (Stun).");
      PrintToChatAll("\x05[ZF ADMIN]\x01 Backstab mode set to 2 (Stunning). Changes apply on new round.");
    }
  }
  else ReplyToCommand(client, "Settings for zf_cvCripple: 0 (Disabled), 1 (Cripple), 2 (Stun).");
}

public Action:command_zfSetPowStun(client, args)
{
  decl String:cmd[32];
  if(args == 1) GetCmdArg(1, cmd, sizeof(cmd));
  else ReplyToCommand(client, "Usage: %s [0|1]", cmd);
  if(StringToInt(cmd) == 0)
  {
    SetConVarBool(zf_cvPowStun, false);
    ReplyToCommand(client, "zf_cvPowStun set to 0 (Normal).");
    PrintToChatAll("\x05[ZF ADMIN]\x01 Pow! taunt set to 0 (Normal). Changes apply on new round.");
  }
  else if(StringToInt(cmd) == 1)
  {
    SetConVarBool(zf_cvPowStun, true);
    ReplyToCommand(client, "zf_cvPowStun set to 1 (Stun).");
    PrintToChatAll("\x05[ZF ADMIN]\x01 Pow! taunt set to 1 (Stun). Changes apply on new round.");
  }
  else ReplyToCommand(client, "Settings for zf_cvPowStun: 0 (Normal), 1 (Stun).");
}

////////////////////////////////////////////////////////////
//
// Client Command Handlers
//
///////////////////////////////////////////////////////////
public Action:hook_zfSelectPerk(client, const String:command[], argc)
{
  decl String:cmd[32];
  //
  // Select a single survivor/zombie perk.
  //
  if(argc == 1)
  {
    GetCmdArg(1, cmd, sizeof(cmd));
    
    for(new i = 1; i < TOTAL_SUR_PERKS; i++)
    {
      if(StrEqual(cmd, ZF_SURPERK_NAME[i], false))
      {
        selectSurPerk(client, i);       
        return Plugin_Handled;
      }
    }
    
    for(new i = 1; i < TOTAL_ZOM_PERKS; i++)
    {
      if(StrEqual(cmd, ZF_ZOMPERK_NAME[i], false))
      {
        selectZomPerk(client, i);       
        return Plugin_Handled;      
      }
    }
    
    if(StrEqual(cmd, ZF_SURPERK_NAME[0], false) || StrEqual(cmd, ZF_ZOMPERK_NAME[0], false))
    {
      selectSurPerk(client, 0);
      selectZomPerk(client, 0);
      return Plugin_Handled;
    }
  }
  
  GetCmdArg(0, cmd, sizeof(cmd));
  ReplyToCommand(client, "Usage: %s [<perk>]", cmd);    
  return Plugin_Handled;
}

////////////////////////////////////////////////////////////
//
// Perk Stat Routines
//
////////////////////////////////////////////////////////////
stock getStat(client, ZFStat:stat)
{ return zf_stat[client][stat][ZFStatTypePerm] + zf_stat[client][stat][ZFStatTypeCond] + zf_stat[client][stat][ZFStatTypeTemp]; }

stock getStatType(client, ZFStat:stat, ZFStatType:type)
{ return zf_stat[client][stat][type]; }

stock addStat(client, ZFStat:stat, ZFStatType:type, value)
{
  zf_stat[client][stat][type] += value;
  // Update conditional stats if a higher priority stat was added.
  if(type != ZFStatTypeCond) updateClientCondStats(client, false);
}

stock addStatToLimit(client, ZFStat:stat, ZFStatType:type, Float:valuepct, limit)
// Adds a stat, that falls off the more of the stat the client already has. Asymptotic limit unless valuepct = 1.
{
  new oldStr = (type == ZFStatTypePerm) ? getStatType(client, stat, type) : getStat(client, stat);
  new Float:newStr = ((limit - oldStr) * valuepct);
  if((newStr > 0.0) == (limit > 0))
  {
    new finalStr = (newStr > 0.0) ? RoundToCeil(newStr) : RoundToFloor(newStr);
    addStat(client, stat, type, finalStr);
  }
}



// Temporary setters
stock addStatTempStack(client, ZFStat:stat, newStr, newDur)
{ 
  if((newStr != 0) && (newDur > 0))
  {
    // Set new temp stats
    zf_stat[client][stat][ZFStatTypeTemp] += newStr;
    zf_stat[client][stat][ZFStatTypeTempDuration] = max(zf_stat[client][stat][ZFStatTypeTempDuration], newDur);
    // Update conditional stats since they have lower priority.
    updateClientCondStats(client);
  }
  else
  {
    LogError("[ZF] - addStatTempStack() - Invalid newStr (%d) or newDur (%d)", newStr, newDur);
  }
}

stock addStatTempToLimit(client, ZFStat:stat, Float:valuepct, limit, newDur)
// Adds temporary stats to a limit in the same fashion as AddStatTempStack.
{
  if((limit != 0) && (newDur > 0))
  {
    // oldStr is Perm + Temp stats, as Cond stats take lowest priority and are recalculated after.
    new oldStr = zf_stat[client][stat][ZFStatTypePerm] + zf_stat[client][stat][ZFStatTypeTemp];
    new oldDur = zf_stat[client][stat][ZFStatTypeTempDuration]; 
    new Float:value = (limit - oldStr) * valuepct;
    if((value > 0.0) == (limit > 0))
    {
      new finalStr = (value > 0.0) ? RoundToCeil(value) : RoundToFloor(value);
      new finalDur = max(oldDur, newDur);
      // Set new temp stats
      zf_stat[client][stat][ZFStatTypeTemp] += finalStr;
      zf_stat[client][stat][ZFStatTypeTempDuration] = finalDur;
      // DEBUG
      //PrintToChatAll("\x05[ZF DEBUG]\x01 addStatTempToLimit: Stat %d, Pct %f, Lim %d, FinalStr %d, FinalDur %d", stat, valuepct, limit, finalStr, finalDur);
      // Update conditional stats since they have lowest priority.
      updateClientCondStats(client, false);
    }
  }
  else
  {
    LogError("[ZF] - addStatTempToLimit() - Invalid percent (%d), limit (%d) or newDur (%d)", valuepct, limit, newDur);
  }
}

stock addStatTempExtend(client, ZFStat:stat, newStr, newDur)
// Unused - what is it for?
{
  // Note on result:
  // + Strength is averaged across sum of durations (extends).  
  // Note on use:
  // + newStr must be positive.
  // + newDur must be positive.
  if((newStr > 0) && (newDur > 0))
  {
    new oldStr = zf_stat[client][stat][ZFStatTypeTemp];
    new oldDur = zf_stat[client][stat][ZFStatTypeTempDuration]; 
    new total = (oldStr * oldDur) + (newStr * newDur);    
    new finalDur = oldDur + newDur;
    new finalStr = RoundToCeil(total / float(finalDur));
    
    // Set new temp stats
    zf_stat[client][stat][ZFStatTypeTemp] = finalStr;
    zf_stat[client][stat][ZFStatTypeTempDuration] = finalDur;
    // Update conditional stats since they have lower priority.
    updateClientCondStats(client, false); 
  }
  else
  {
    LogError("[ZF] - addStatTempExtend() - Invalid newStr (%d) or newDur (%d)", newStr, newDur);  
  }
}

stock scaleStatTempPct(client, ZFStat:stat, Float:strPct, Float:durPct = 1.0)
{
  zf_stat[client][stat][ZFStatTypeTemp] = RoundToCeil(float(zf_stat[client][stat][ZFStatTypeTemp]) * strPct);
  zf_stat[client][stat][ZFStatTypeTempDuration] = RoundToCeil(float(zf_stat[client][stat][ZFStatTypeTempDuration]) * durPct);
  //DEBUG
  //PrintToChatAll("\x05[ZF DEBUG]\x01 scaleStatTempPct: client %d, stat %d, strPct %f, finalStr %d", client, stat, strPct,zf_stat[client][stat][ZFStatTypeTemp]);
  // Update conditional stats since they have lower priority.
  updateClientCondStats(client, false);
}

////////////////////////////////////////////////////////////
//
// Perk Cond Routines
//
////////////////////////////////////////////////////////////
stock bool:getCond(client, ZFCond:cond)
{ return zf_cond[client][cond] > 0; }

stock addCond(client, ZFCond:cond, val)
{ zf_cond[client][cond] += val; }

stock subCond(client, ZFCond:cond, val)
{ zf_cond[client][cond] = max(0, zf_cond[client][cond] - val); }

////////////////////////////////////////////////////////////
//
// Perk Reset Logic
// + Used to clear variables with no regard to game state.
//
////////////////////////////////////////////////////////////
stock resetAllClients()
{
  for(new i = 0; i <= MAXPLAYERS; i++)
    resetClient(i);
}

stock resetClient(client)
{  
  // State
  zf_lastAttack[client] = 0;
  zf_lastButtons[client] = 0;
  zf_lastHealth[client] = 0;
  zf_lastKiller[client] = 0;
  zf_lastPoison[client] = 0;
  zf_lastTeam[client] = 0;
  zf_perkTimer[client] = 0;
  // Notify Marked victim that he/she is no longer marked. (doesn't work)
  if(usingZomPerk(client, ZF_PERK_MARKED) && zf_perkState[client] > 0 && validLivingSur(zf_perkState[client])) PrintHintText(zf_perkState[client], "You are no longer marked.");
  for(new i = 0; i < MaxClients; i++) if(validIcon(i, client)) removeIcon(i, client);
  zf_perkState[client] = 0;
  zf_perkState2[client] = 0;
  zf_alphaMaster[client] = 0;
  for(new i = 0; i < 5; i++)
    for(new j = 0; j < 3; j++)
      zf_perkPos[client][i][j] = 0.0;
  zf_perkStr[client] = "";
  
  // Bonuses
  resetClientStats(client);
  resetClientConds(client);
  
  // FX
  removeAura(client);
  for(new i = 0; i < MaxClients; i++) if(zf_icon[client][i][ICON_SPR] != -1) removeIcon(client, i);
  removeItems(client); 
}

stock resetClientStats(client)
{
  for(new stat = 0; stat < TOTAL_ZFSTATS; stat++)
    for(new type = 0; type < TOTAL_ZFSTAT_TYPES; type++)
      zf_stat[client][stat][type] = 0;
}

stock resetStatType(ZFStatType:type)
{
  for(new i = 0; i <= MAXPLAYERS; i++)
    resetClientStatType(i, type);
}

stock resetClientStatType(client, ZFStatType:type)
{
  for(new stat = 0; stat < TOTAL_ZFSTATS; stat++)
    zf_stat[client][stat][type] = 0;
}

stock resetClientConds(client)
{  
  for(new cond = 0; cond < TOTAL_ZFCONDS; cond++)
    zf_cond[client][cond] = 0;
}

////////////////////////////////////////////////////////////
//
// Perk Selection Utilities
//
////////////////////////////////////////////////////////////
stock bool:surPerkEnabled(perk)
{ return (zf_surPerksEnabled & (1 << perk)) != 0; }
stock bool:zomPerkEnabled(perk)
{ return (zf_zomPerksEnabled & (1 << perk)) != 0; }
stock bool:usingSurPerk(client, perk)
{ return (prefGet(client, SurPerk) == perk); }
stock bool:usingZomPerk(client, perk)
{ return (prefGet(client, ZomPerk) == perk); } 

//
// Called by client when he selects a survivor perk (either from menu or by command).
//
stock selectSurPerk(client, perk)
{
  // Do not select invalid perk.
  if((perk < 0) || (perk >= TOTAL_SUR_PERKS))
    PrintToChat(client, "\x05[ZF]\x01 Can't select perk: Invalid perk.");  
  // Do not select disabled perk.
  else if(!surPerkEnabled(perk))
    PrintToChat(client, "\x05[ZF]\x01 Can't select %s as survivor perk: Disabled by server.", ZF_SURPERK_NAME[perk]);
  // Do not select perk during non-standard game modes.
  else if(zf_perkMode > 0)
    PrintToChat(client, "\x05[ZF]\x01 Can't select %s as survivor perk: Non-standard game mode active.", ZF_SURPERK_NAME[perk]);
  // Do not select perk if selecting it violate perk limit.
  else if(surPerkAtLimit(client, perk))
    PrintToChat(client, "\x05[ZF]\x01 Can't select %s as survivor perk: Perk limit reached (%d).", ZF_SURPERK_NAME[perk], zf_surPerksLimit[perk]);
  // Select perk.
  else
  {
    prefSet(client, SurPendPerk, perk);
    prefSet(client, PerkSelectMode, zf_perkMode);
    
    // Defer perk selection for non-survivors.
    if(!isSur(client))
      PrintToChat(client, "\x05[ZF]\x01 Selected %s as survivor perk. Changes apply on next survivor spawn.", ZF_SURPERK_NAME[perk]);
    // Defer perk selection during active rounds.
    else if(roundState() > RoundGrace)
      PrintToChat(client, "\x05[ZF]\x01 Selected %s as survivor perk. Changes apply on next survivor spawn.", ZF_SURPERK_NAME[perk]);
    // Respawn client. This will trigger new perk selection.
    else
      TF2_RespawnPlayer(client);
  }
}

//
// Called by client when he selects a zombie perk (either from menu or by command).
//
stock selectZomPerk(client, perk)
{
  // Do not select invalid perk.
  if((perk < 0) || (perk >= TOTAL_ZOM_PERKS))
    PrintToChat(client, "\x05[ZF]\x01 Can't select perk: Invalid perk.");  
  // Do not select disabled perk.
  else if(!zomPerkEnabled(perk))
    PrintToChat(client, "\x05[ZF]\x01 Can't select %s as zombie perk: Disabled by server.", ZF_ZOMPERK_NAME[perk]);
  // Do not select perk during non-standard game modes.
  else if(zf_perkMode > 0)
    PrintToChat(client, "\x05[ZF]\x01 Can't select %s as zombie perk: Non-standard game mode active.", ZF_ZOMPERK_NAME[perk]);    
  // Do not select perk if selecting it violate perk limit.    
  else if(zomPerkAtLimit(client, perk))
    PrintToChat(client, "\x05[ZF]\x01 Can't select %s as zombie perk: Perk limit reached (%d).", ZF_ZOMPERK_NAME[perk], zf_zomPerksLimit[perk]);    
  // Select perk.
  else
  {
    prefSet(client, ZomPendPerk, perk);
    prefSet(client, PerkSelectMode, zf_perkMode);
    
    // Defer perk selection for non-zombies.
    if(!isZom(client))
      PrintToChat(client, "\x05[ZF]\x01 Selected %s as zombie perk. Changes apply on next zombie spawn.", ZF_ZOMPERK_NAME[perk]);
    // Defer perk selection during active rounds.
    else if(roundState() > RoundGrace)
      PrintToChat(client, "\x05[ZF]\x01 Selected %s as zombie perk. Changes apply on next zombie spawn.", ZF_ZOMPERK_NAME[perk]);
    // Respawn client. This will trigger new perk selection.
    else
      TF2_RespawnPlayer(client);
  }
}

////////////////////////////////////////////////////////////
//
// Perk Limit Utilities
//
////////////////////////////////////////////////////////////
stock bool:surPerkAtLimit(client, perk)
{
  // Perk limit of -1 means no limit.
  if(zf_surPerksLimit[perk] == -1)
  {
    return false;
  }
  // Perk limit of 0 means a limit of 0.
  else if(zf_surPerksLimit[perk] == 0)
  {
    return true;
  }
  // Tally up perk use for all survivors (alive or not).
  // Do not include current client in tally.
  else
  {
    new total = 0;
    for(new i = 1; i <= MaxClients; i++)
      if((i != client) && IsClientInGame(i) && isSur(i) && usingSurPerk(i, perk))
          total++;
  
    return (total >= zf_surPerksLimit[perk]);
  }
}

stock bool:zomPerkAtLimit(client, perk)
{
  // Perk limit of -1 means no limit.
  if(zf_zomPerksLimit[perk] == -1)
  {
    return false;
  }
  // Perk limit of 0 means a limit of 0.
  else if(zf_zomPerksLimit[perk] == 0)
  {
    return true;
  }
  // Tally up perk use for all zombies (alive or not).
  // Do not include current client in tally.
  else
  {
    new total = 0;
    for(new i = 1; i <= MaxClients; i++)
      if((i != client) && IsClientInGame(i) && isZom(i) && usingZomPerk(i, perk))
          total++;
  
    return (total >= zf_zomPerksLimit[perk]);
  }
}

////////////////////////////////////////////////////////////
//
// Perk HUD Logic
//
////////////////////////////////////////////////////////////
updateHud(client)
{
  decl String:strHudPerk[48];
  decl String:strHudBonuses[32];
  
  if(IsClientInGame(client) && !(zf_lastButtons[client] & IN_SCORE))
  {
    if(isSur(client) || isZom(client))
    {
      if(IsPlayerAlive(client))
      {  
        // HUD Element: Perk Selection
        if(isSur(client))
          Format(strHudPerk, sizeof(strHudPerk), "Perk: %s", ZF_SURPERK_NAME[prefGet(client, SurPerk)]);
        else if(isZom(client))
          Format(strHudPerk, sizeof(strHudPerk), "Perk: %s", ZF_ZOMPERK_NAME[prefGet(client, ZomPerk)]);      
        else
          strHudPerk = "";
        SetHudTextParams(0.15, 0.90, 2.1, 200, 200, 200, 150);
        ShowSyncHudText(client, zf_hudLine0, "%s %s", strHudPerk, zf_perkStr[client]);
        
        // HUD Element: Bonuses 1 (Attack, Defense)
        Format(strHudBonuses, sizeof(strHudBonuses), "Att: %d%s, Def: %d%s", getStat(client, ZFStatAtt), "\%", getStat(client, ZFStatDef), "\%"); 
        SetHudTextParams(0.15, 0.93, 2.1, 150, 150, 150, 150);
        ShowSyncHudText(client, zf_hudLine1, "%s", strHudBonuses);
        
        // HUD Element: Bonuses 2 (Crit, Speed)
        Format(strHudBonuses, sizeof(strHudBonuses), "Crit: %d%s, Speed: %d", getStat(client, ZFStatCrit), "\%", getStat(client, ZFStatSpeed)); 
        SetHudTextParams(0.15, 0.96, 2.1, 150, 150, 150, 150);
        ShowSyncHudText(client, zf_hudLine2, "%s", strHudBonuses);      
      }
      else
      {
        // HUD Element: Killer's perk
        new killer = zf_lastKiller[client];
        if(validClient(killer) && (killer != client))
        {
          if(isSur(killer))
            Format(strHudPerk, sizeof(strHudPerk), "Your killer's perk: %s", ZF_SURPERK_NAME[prefGet(killer, SurPerk)]);
          else if(isZom(killer))
            Format(strHudPerk, sizeof(strHudPerk), "Your killer's perk: %s", ZF_ZOMPERK_NAME[prefGet(killer, ZomPerk)]);
          else
            strHudPerk = "";
          SetHudTextParams(0.15, 0.90, 2.1, 250, 200, 200, 150);
          ShowSyncHudText(client, zf_hudLine0, "%s", strHudPerk);            
        }
      }
    }
    else
    {
      // HUD Element: Specator target's perk
      new spectate = GetEntPropEnt(client, Prop_Send, "m_hObserverTarget");
      if(validClient(spectate))
      {
        if(isSur(spectate))
          Format(strHudPerk, sizeof(strHudPerk), "Spectate target perk: %s", ZF_SURPERK_NAME[prefGet(spectate, SurPerk)]);
        else if(isZom(spectate))
          Format(strHudPerk, sizeof(strHudPerk), "Spectate target perk: %s", ZF_ZOMPERK_NAME[prefGet(spectate, ZomPerk)]);
        else
          strHudPerk = "";
        SetHudTextParams(0.15, 0.90, 2.1, 250, 200, 200, 150);
        ShowSyncHudText(client, zf_hudLine0, "%s", strHudPerk);            
      }
    }
  }     
}

////////////////////////////////////////////////////////////
//
// Aura Effect Routines
//
////////////////////////////////////////////////////////////
stock createAura(client, const String:strPart[], ZFParticleAttachStyle:attachStyle, const Float:offset[3] = {0.0, 0.0, 0.0})
{
  removeAura(client);
  zf_aura[client] = fxCreateParticle(strPart, client, attachStyle, 0.0, offset);
}

stock removeAura(client)
{
  fxDeleteParticle(zf_aura[client]);
  zf_aura[client] = -1;
}

stock bool:validAura(client)
{ return fxIsParticleValid(zf_aura[client]); }

stock showAura(client)
{ fxStartParticle(zf_aura[client]); }

stock hideAura(client)
{ fxStopParticle(zf_aura[client]); }

////////////////////////////////////////////////////////////
//
// Icons Effect Routines
//
////////////////////////////////////////////////////////////
stock createIcon(ownerClient, targetClient, const String:strSprite[])
{
  //removeIcon(ownerClient); TODO: Check that removing this doesn't cause any glitches.
  fxCreateSprite(strSprite, targetClient, zf_icon[ownerClient][targetClient][ICON_SPR], zf_icon[ownerClient][targetClient][ICON_ANC]);
}

stock removeIcon(ownerClient, targetClient)
{
  fxDeleteSprite(zf_icon[ownerClient][targetClient][ICON_SPR], zf_icon[ownerClient][targetClient][ICON_ANC]);
  zf_icon[ownerClient][targetClient][ICON_SPR] = -1;
  zf_icon[ownerClient][targetClient][ICON_ANC] = -1;
}

stock bool:validIcon(ownerClient, targetClient)
{ return fxIsSpriteValid(zf_icon[ownerClient][targetClient][ICON_SPR], zf_icon[ownerClient][targetClient][ICON_ANC]); }

stock showIcon(ownerClient, targetClient)
{ fxShowSprite(zf_icon[ownerClient][targetClient][ICON_SPR], zf_icon[ownerClient][targetClient][ICON_ANC]); }

stock hideIcon(ownerClient, targetClient)
{ fxHideSprite(zf_icon[ownerClient][targetClient][ICON_SPR], zf_icon[ownerClient][targetClient][ICON_ANC]); }

////////////////////////////////////////////////////////////
//
// Items Effect Routines
//
////////////////////////////////////////////////////////////
stock removeItem(client, item)
{
  if(validItem(client, item))
    fxPuffSmall(zf_item[client][item]);
  fxDeleteModel(zf_item[client][item]);
  zf_item[client][item] = -1;
}

stock removeItems(client)
{
  for(new i = 0; i < MAX_ITEMS; i++)
    removeItem(client, i);
}

stock bool:validItem(client, itemIndex)
{ return fxIsModelValid(zf_item[client][itemIndex]); }

stock getItemMetadata(item)
{
  // Utilizes an entity prop that is, in theory, not used.
  return GetEntProp(item, Prop_Send, "m_hEffectEntity");
}

stock setItemMetadata(item, value)
{
  // Utilizes an entity prop that is, in theory, not used.
  SetEntProp(item, Prop_Send, "m_hEffectEntity", value);
}

stock getFreeItemIndex(client, maxItems)
{
  // Return first item index in range [0, maxItems-1] that is free (i.e. not valid).
  // Return -1 if no item in range is free.
  for(new i = 0; i < maxItems; i++)
  {
    if(!validItem(client, i))
      return i;
  }
  return -1;
}

////////////////////////////////////////////////////////////
//
// Perk Utility Helpers
//
////////////////////////////////////////////////////////////
stock addHealth(client, health, bool:doOverheal = false)
{
  // Add health up to max (or overheal max [500]).
  new cur = GetClientHealth(client);
  new lim = doOverheal ? 500 : clientMaxHealth(client);
  if(cur < lim)
  {
    SetEntityHealth(client, min((cur+health),lim));
    if(!isCloaked(client)) 
      fxHealthGained(client);
  }
}

// getRandomSur and getRandomZom functions
stock getRandomSur(bool:alive, client = 0)
// Selecting a client will exclude them from selection.
{
  // Build common state information.
  new surCount = 0;
  new validSurs[MAXPLAYERS + 1];
  for(new i = 1; i <= MAXPLAYERS, i++)
  {
    if(validSur(i) && ((alive == false) || (IsPlayerAlive(i))) && (i != client)) validSurs[surCount++] = i;
  }
  
  // Return 0 if no valid targets exist.
  if(surCount == 0) return 0;
  // Randomly select target from Survivor array.
  return validSurs[GetRandomInt(0, surCount - 1)];
  // Warning: Due to the return value on fail, a validClient check may be required afterwards.                                                                         
}

stock getRandomZom(bool:alive, client = 0)
// Selecting a client will exclude them from selection.
{
  // Build common state information.
  new zomCount = 0;
  new validZoms[MAXPLAYERS + 1];
  for(new i = 1; i <= MAXPLAYERS, i++)
  {
    if(validZom(i) && ((alive == false) || (IsPlayerAlive(i))) && (i != client)) validZoms[zomCount++] = i;
  }
  
  // Return 0 if no valid targets exist.
  if(zomCount == 0) return 0;
  // Randomly select target from Survivor array.
  return validZoms[GetRandomInt(0, zomCount - 1)];
  // Warning: Due to the return value on fail, a validClient check may be required afterwards.       

////////////////////////////////////////////////////////////
//
// Perk Logic Helpers
//
////////////////////////////////////////////////////////////
stock bool:doItemCollide(
  ent, 
  const Float:prevPos[3], 
  Float:hitPos[3], 
  Float:hitVec[3])
{
  new bool:didHit = false;
  decl Float:thisPos[3];
  decl Float:diffPos[3];
  decl Float:nextPos[3];
  
  // Use current position(thisPos) and previous position(prevPos)
  // to calculate a difference (diffPos). Normalize and scale
  // difference to compute predicted next position (nextPos).
  getEntityPos(ent, thisPos);
  SubtractVectors(thisPos, prevPos, diffPos);      
  NormalizeVector(diffPos, diffPos);
  ScaleVector(diffPos, 35.0);
  AddVectors(thisPos, diffPos, nextPos);

  // Trace from current to next position, checking for impacts.
  new Handle:TraceEx = TR_TraceRayFilterEx(thisPos, nextPos, MASK_SOLID, RayType_EndPoint, TraceFilter);
  if(TR_DidHit(TraceEx))
  {
    TR_GetEndPosition(hitPos, TraceEx);
    TR_GetPlaneNormal(TraceEx, hitVec);
    if(!TR_PointOutsideWorld(hitPos))
    {
      didHit = true;
    }
  }
  CloseHandle(TraceEx);

  return didHit;     
}

public bool:TraceFilter(ent, contentMask)
{
  return false;
}

stock doItemImpact(
  client, 
  const Float:hitPos[3], 
  const Float:hitVec[3], 
  const color[3])
{
  decl Float:hitAng[3];   
  GetVectorAngles(hitVec, hitAng);
  hitAng[0] += 90.0; // Adjust for ZFMDL_HAYBALE
    
  // Place item at hitPos, oriented based on hitVec.
  return fxCreateModelStatic(ZFMDL_HAYBALE, client, true, false, hitPos, hitAng, color); 
}

stock doItemPlace(client, const String:strModel[])
{
  decl Float:pos[3];
  decl Float:ang[3]; 
  
  GetClientAbsOrigin(client, pos); 
  GetClientAbsAngles(client, ang);    

  // Place item at client's feet.
  return fxCreateModelStatic(strModel, client, true, false, pos, ang);
}

stock doItemThrow(
  client, 
  const String:strModel[], 
  Float:force, 
  const color[3] = {255, ...})
{
  decl Float:pos[3];
  decl Float:ang[3];
    
  GetClientEyePosition(client, pos);  
  GetClientEyeAngles(client, ang);
  ang[0] += GetRandomFloat(-20.0, -10.0); // Pitch (-90.0 is up, 90.0 is down)
  ang[1] += GetRandomFloat(-6.0, 6.0);    // Yaw

  // Throw item from client's eye position and along look vector.
  return fxCreateModelThrown(strModel, client, pos, ang, force, color);  
}

////////////////////////////////////////////////////////////
//
// Perk Logic Helpers
//
////////////////////////////////////////////////////////////
stock doAlphaSummon(client)
{ 
  decl summonCount;
  decl validMinionCount;
  decl validMinions[MAXPLAYERS+1];
  decl Float:clientPos[3];
  decl Float:clientAng[3];
  decl Float:summonVel[3];
  
  GetClientAbsOrigin(client, clientPos);  
  GetClientAbsAngles(client, clientAng);
  
  // Determine which clients to summon.
  validMinionCount = 0;
  for(new i = 1; i <= MaxClients; i++)
  {
    if(i == client) continue;
    if(IsClientInGame(i) && IsPlayerAlive(i) && isZom(i))
      if((zf_alphaMaster[i] == client) && (isScout(i) || isHeavy(i)))
        validMinions[validMinionCount++] = i;
  }
   
  // Summon valid minions.
  summonCount = 0;
  SortIntegers(validMinions, validMinionCount, Sort_Random); 
  for(new i = 0; i < validMinionCount; i++)
  {
    if(i == ZF_ALPHA_SUMMON_LIMIT) break;
    
    summonVel[0] = GetRandomFloat(-100.0, 100.0);
    summonVel[1] = GetRandomFloat(-100.0, 100.0);
    summonVel[2] = GetRandomFloat(300.0, 400.0);
    TeleportEntity(validMinions[i], clientPos, clientAng, summonVel);
    ClientCommand(validMinions[i], "voicemenu 1 0");
    PrintHintText(validMinions[i], "Your master has summoned you!");
    fxTeleportTrail(validMinions[i], 5.0);
    ++summonCount;
  }
  
  if(summonCount == 1)
    PrintHintText(client, "You have summoned %d minion!", summonCount);
  else if(summonCount > 1)
    PrintHintText(client, "You have summoned %d minions!", summonCount);    
    
  return summonCount; 
}

stock doCarpenterBuild(client, Float:physPos[3])
{
  decl Float:pos[3];
  decl Float:ang[3]; 
  decl Float:vecFwd[3];
  decl Float:vecRgt[3];
  GetClientAbsOrigin(client, pos); 
  GetClientAbsAngles(client, ang);   
     
  // Move item in front of client.
  GetAngleVectors(ang, vecFwd, vecRgt, NULL_VECTOR); 
  ScaleVector(vecFwd, 45.0);
  ScaleVector(vecRgt, -30.0);           // Adjust for ZFMDL_FENCE
  AddVectors(pos, vecFwd, pos);         // Adjust for ZFMDL_FENCE
  AddVectors(pos, vecRgt, pos);         // Adjust for ZFMDL_FENCE
  pos[2] += 120.0; 
  ang[0] += GetRandomFloat(-4.0, 4.0);  // Adjust for ZFMDL_FENCE
  ang[1] += GetRandomFloat(85.0, 95.0); // Adjust for ZFMDL_FENCE

  // Calculate physical position (used for distance calculations)
  physPos[0] = pos[0];
  physPos[1] = pos[1];
  physPos[2] = pos[2] - 120.0;
  SubtractVectors(physPos, vecRgt, physPos);
    
  // Barricade build effects
  new Float:off[3] = {0.0,...};
  AddVectors(off, vecFwd, off);
  fxCreateParticle(ZFPART_PUFFBIG, client, AttachNone, 4.0, off);    
   
  ScaleVector(vecRgt, 1.3);
  AddVectors(vecFwd, vecRgt, off);
  fxCreateParticle(ZFPART_PUFFBIG, client, AttachNone, 4.0, off);  
  SubtractVectors(vecFwd, vecRgt, off);
  fxCreateParticle(ZFPART_PUFFBIG, client, AttachNone, 4.0, off);  

  ScaleVector(vecRgt, 1.3);
  AddVectors(vecFwd, vecRgt, off);
  fxCreateParticle(ZFPART_PUFFBIG, client, AttachNone, 4.0, off);  
  SubtractVectors(vecFwd, vecRgt, off);
  fxCreateParticle(ZFPART_PUFFBIG, client, AttachNone, 4.0, off);  
  
  fxCreateSoundToAll(ZFSND_WOOD_HIT[GetRandomInt(0,1)], client);
    
  // Build solid item in front of client.
  return fxCreateModelStatic(ZFMDL_FENCE, client, false, true, pos, ang);  
}

stock doFriendSelect(client, desiredFriend = 0)
{
  new selectedFriend = desiredFriend;
  
  // Find random friend (if no friend is desired already).
  if((selectedFriend == 0) && (zf_surCount > 1))
  {
    selectedFriend = GetRandomSur(true, client);
  }
  
  // Select friend.
  if(selectedFriend == 0)
  {
    zf_perkState[client] = 0;
    zf_perkTimer[client] = 0;
    PrintHintText(client, "You have no friends.");    
  }  
  else
  {
    // Remove FX from old friend and notify if reselecting.
    if(validSur(zf_perkState[client]))
    {
      removeIcon(client, zf_perkState[client]);
      removeIcon(zf_perkState[client], client);
      PrintHintText(zf_perkState[client], "%N has changed his/her friend selection.", client);
    }
    zf_perkState[client] = selectedFriend;
    zf_perkTimer[client] = ZF_FRIEND_CRITTIME_INIT;        
    createIcon(client, zf_perkState[client], ZFSPR_DOMINATED);
    createIcon(zf_perkState[client], client, ZFSPR_DOMINATED);
    PrintHintText(client, "Your friend is %N.", zf_perkState[client]);
    PrintHintText(zf_perkState[client], "%N has selected you as his/her friend.", client);
  }
}

stock doMarkedSelect(client)
{
  // Handle mark select logic.
  if(zf_surCount < ZF_MARKED_MIN_SURVIVORS)
  {
    zf_perkState[client] = -1;

    PrintHintText(client, "Not enough survivors to find new mark.");
  }
  else
  {
    zf_perkState[client] = GetRandomSur(true, 0);
    // Shouldn't return 0 because of the surCount check previously.
    createIcon(client, zf_perkState[client], ZFSPR_EXCLAMATION);
    PrintHintText(client, "You've marked a new target, %N!", zf_perkState[client]);
    createIcon(zf_perkState[client], client, ZFSPR_EXCLAMATION);
    PrintHintText(zf_perkState[client], "You've been marked!");
  }
}

stock doNinjaDecoyPlace(client)
{  
  // Create decoy at client.
  fxPuffSmall(client);
  zf_item[client][0] = doItemPlace(client, ZFMDL_CUTOUT[_:TF2_GetPlayerClass(client)]);
    
  // Move client to retreat position.
  decl Float:retreatPos[3];
  getEntityPos(zf_aura[client], retreatPos);
  TeleportEntity(client, retreatPos, NULL_VECTOR, NULL_VECTOR);
  fxPuffSmall(client);  
  
  // Remove retreat point.
  removeAura(client);
}

stock doNinjaDecoyPoof(client)
{
  // Remove decoy, if it exists.
  if(validItem(client, 0))
  {
    fxPuffBig(zf_item[client][0]);
    removeItem(client, 0);
  }
}

stock doThievingLimit(client)
{
  // Enforce ammo limit.
  new ammo;
  switch(TF2_GetPlayerClass(client))
  {
    case TFClass_Scout: 
    {
      ammo = min(zf_perkState[client], getClipAmmo(client, 0));
      setClipAmmo(client, 0, ammo);
      setResAmmo(client, 0, 0);
      zf_perkState[client] = ammo;
    }
    case TFClass_Heavy:
    {
      ammo = min(zf_perkState[client], getResAmmo(client, 0));
      setResAmmo(client, 0, ammo);
      zf_perkState[client] = ammo;
    }
    case TFClass_Spy:
    {
      ammo = min(zf_perkState[client], getClipAmmo(client, 0));
      setClipAmmo(client, 0, ammo);
      setResAmmo(client, 1, 0); // Slot 0 weapon uses slot 1 ammo reserve.
      zf_perkState[client] = ammo;
    }
  }
  
  // Strip weapon when ammo reaches zero.
  if(zf_perkState[client] == 0)
  { 
    stripWeaponSlot(client, 0);  
    switchToSlot(client, 2);
  }
}

stock doThievingSteal(attacker, victim, slot)
{
  //
  // Handle victim logic. Remove weapon in given slot, switch to melee.
  //
  stripWeaponSlot(victim, slot);
  switchToSlot(victim, 2);
  PrintHintText(victim, "Your weapon has been stolen!");
  
  //
  // Handle attacker logic. Add ammo, give weapon, switch to weapon.
  //
  if(zf_perkState[attacker] == 0)
  {
    new health = GetClientHealth(attacker);
    TF2_RegeneratePlayer(attacker);
    SetEntityHealth(attacker, health);
    switch(TF2_GetPlayerClass(attacker))
    {
      case TFClass_Scout:
      {
        new ammo = 0;
        if(isEquipped(attacker, ZFWEAP_SCATTERGUN))
          ammo = 3;
        if(isEquipped(attacker, ZFWEAP_FORCEANATURE))
          ammo = 2;
        if(isEquipped(attacker, ZFWEAP_SHORTSTOP))
          ammo = 4;
        if(isEquipped(attacker, ZFWEAP_SODAPOPPER))
          ammo = 2;
        if(isEquipped(attacker, ZFWEAP_FESTIVESCATTERGUN))
          ammo = 3;
        setClipAmmo(attacker, 0, ammo);
        setResAmmo(attacker, 0, 0);
        zf_perkState[attacker] = ammo;
      }
      case TFClass_Heavy:
      {
        setResAmmo(attacker, 0, 20);
        zf_perkState[attacker] = 20;
      }
      case TFClass_Spy:
      {
        setClipAmmo(attacker, 0, 4);
        setResAmmo(attacker, 0, 0);
        zf_perkState[attacker] = 4;
      }
    }  
    stripWeapons(attacker, true);
    switchToSlot(attacker, slot);
    PrintHintText(attacker, "You've stolen a weapon!");
  }
}

////////////////////////////////////////////////////////////
//
// Perk Bonus Update Logic
//
////////////////////////////////////////////////////////////
stock updateClientPermStats(client)
{  
  resetClientStatType(client, ZFStatTypePerm);

  //
  // Apply permanent bonuses for survivors.
  // (Survivors must be alive)
  //
  if(validLivingSur(client))
  {        
    // Handle Perk (S): ATHLETIC
    if(usingSurPerk(client, ZF_PERK_ATHLETIC))
    {
      addStat(client, ZFStatAtt, ZFStatTypePerm, ZF_ATHLETIC_ATTACK);
      addStat(client, ZFStatCrit, ZFStatTypePerm, ZF_ATHLETIC_CRIT);
      addStat(client, ZFStatRof, ZFStatTypePerm, ZF_ATHLETIC_ROF);
      addStat(client, ZFStatSpeed, ZFStatTypePerm, ZF_ATHLETIC_SPEED);
    }
    // Handle Perk (S): CARPENTER
    else if(usingSurPerk(client, ZF_PERK_CARPENTER))
    {
      addStat(client, ZFStatAtt, ZFStatTypePerm, CARPENTER_ATTACK);
      addStat(client, ZFStatDef, ZFStatTypePerm, CARPENTER_DEFENSE);
    }
    // Handle Perk (S): HEROIC
    else if(usingSurPerk(client, ZF_PERK_HEROIC))
    {
      addStat(client, ZFStatAtt, ZFStatTypePerm, HEROIC_COMBAT);
      addStat(client, ZFStatDef, ZFStatTypePerm, HEROIC_COMBAT);
      zf_perkTimer[client] = HEROIC_CRITTIME_INIT;
    } 
    // Handle Perk (S): JUGGERNAUT
    else if(usingSurPerk(client, ZF_PERK_JUGGERNAUT))
    {
      addStat(client, ZFStatAtt, ZFStatTypePerm, ZF_JUGGERNAUT_ATTACK);
      addStat(client, ZFStatDef, ZFStatTypePerm, ZF_JUGGERNAUT_DEFENSE);
//    addStat(client, ZFStatRof, ZFStatTypePerm, ZF_JUGGERNAUT_ROF); (inactive)
      addStat(client, ZFStatSpeed, ZFStatTypePerm, ZF_JUGGERNAUT_SPEED);
    }
    // Handle Perk (S): LEADER
    else if(usingSurPerk(client, ZF_PERK_LEADER))
    {
      addStat(client, ZFStatCrit, ZFStatTypePerm, ZF_LEADER_SELF_CRIT);
    }
    // Handle Perk (S): NINJA
    else if(usingSurPerk(client, ZF_PERK_NINJA))
    {
      addStat(client, ZFStatDef, ZFStatTypePerm, ZF_NINJA_DEFENSE);        
      addStat(client, ZFStatSpeed, ZFStatTypePerm, ZF_NINJA_SPEED);      
    }
    // Handle Perk (S): SELFLESS
    else if(usingSurPerk(client, ZF_PERK_SELFLESS))
    {
      addStat(client, ZFStatDef, ZFStatTypePerm, ZF_SELFLESS_SELF_DEFENSE);
      addStat(client, ZFStatAtt, ZFStatTypePerm, ZF_SELFLESS_SELF_ATTACK);
    }
    // Handle Perk (S): STIR-CRAZY
    else if(usingSurPerk(client, ZF_PERK_STIRCRAZY))
    {
      addStat(client, ZFStatAtt, ZFStatTypePerm, ZF_STIRCRAZY_COMBAT);
      addStat(client, ZFStatDef, ZFStatTypePerm, ZF_STIRCRAZY_COMBAT);
    }
    // Handle Perk (S): TRAITOR
    else if(usingSurPerk(client, ZF_PERK_TRAITOR))
    {
      addStat(client, ZFStatCrit, ZFStatTypePerm, ZF_TRAITOR_CRIT);
    }
    // Handle Perk (S): TURTLE
    else if(usingSurPerk(client, ZF_PERK_TURTLE))
    {
      addStat(client, ZFStatAtt, ZFStatTypePerm, ZF_TURTLE_ATTACK);
      addStat(client, ZFStatDef, ZFStatTypePerm, ZF_TURTLE_DEFENSE);
      addStat(client, ZFStatSpeed, ZFStatTypePerm, ZF_TURTLE_SPEED);
    }
  }
    
  //
  // Apply permanent bonuses for zombies.
  // (Zombies can be dead or alive)
  //
  else if(validZom(client))
  {
    // Handle Perk (Z): COMBUSTIBLE
    if(usingZomPerk(client, ZF_PERK_COMBUSTIBLE))
    {
      addStat(client, ZFStatDef, ZFStatTypePerm, ZF_COMBUSTIBLE_DEFENSE);
    }
    // Handle Perk (Z): LEAP
    else if(usingZomPerk(client, ZF_PERK_LEAP))
    {
      addStat(client, ZFStatAtt, ZFStatTypePerm, ZF_LEAP_COMBAT);
      addStat(client, ZFStatDef, ZFStatTypePerm, ZF_LEAP_COMBAT);
    }
    // Handle Perk (Z): SICK
    else if(usingZomPerk(client, ZF_PERK_SICK))
    {
      addStat(client, ZFStatDef, ZFStatTypePerm, ZF_SICK_DEFENSE);          
    }
    // Handle Perk (Z): SCORCHING
    else if(usingZomPerk(client, ZF_PERK_SCORCHING))
    {
      addStat(client, ZFStatSpeed, ZFStatTypePerm, ZF_SCORCHING_SPEED);
      addStat(client, ZFStatAtt, ZFStatTypePerm, ZF_SCORCHING_ATTACK);  
    }
    // Handle Perk (Z): SWARMING
    else if(usingZomPerk(client, ZF_PERK_SWARMING))
    {
      addStat(client, ZFStatAtt, ZFStatTypePerm, ZF_SWARMING_COMBAT);
      addStat(client, ZFStatDef, ZFStatTypePerm, ZF_SWARMING_COMBAT);  
      addStat(client, ZFStatSpeed, ZFStatTypePerm, ZF_SWARMING_SPEED);   
    }
    // Handle Perk (Z): THIEVING
    else if(usingZomPerk(client, ZF_PERK_THIEVING))
    {
      addStat(client, ZFStatAtt, ZFStatTypePerm, ZF_THIEVING_ATTACK);
    }
    // Handle Perk (Z): TOXIC
    else if(usingZomPerk(client, ZF_PERK_TOXIC))
    {
      addStat(client, ZFStatAtt, ZFStatTypePerm, ZF_TOXIC_ATTACK);
    }  
  }       
}

stock updateClientPermEffects(client)
{
  new Float:headOffset[3] = {0.0, 0.0, 15.0};
  
  // Handle survivor effects.
  if(validLivingSur(client))
  {            
    if(usingSurPerk(client, ZF_PERK_HOLY))
      createAura(client, ZFPART_AURAGLOWBEAMS, AttachHead, headOffset);
    else if(usingSurPerk(client, ZF_PERK_LEADER))
      createAura(client, ZFPART_AURAINRED, AttachBase);
  }
  
  // Handle zombie effects.
  else if(validZom(client))
  {
    if(usingZomPerk(client, ZF_PERK_ALPHA))
      createAura(client, ZFPART_AURAINBLU, AttachBase);
    else if(usingZomPerk(client, ZF_PERK_HORRIFYING))
      createAura(client, ZFPART_AURAOUTBLU, AttachBase);
    else if(usingZomPerk(client, ZF_PERK_SWARMING))
      createAura(client, ZFPART_AURAFLIES, AttachHead, headOffset);
    else if(usingZomPerk(client, ZF_PERK_VINDICTIVE) && (zf_stat[client][ZFStatAtt][ZFStatTypePerm] > 0))
      createAura(client, ZFPART_AURAOUTRED, AttachBase);
  }         
}

stock updateClientCondStats(client, bool:updateTimers=false)
{
  decl i,j;
  decl Float:clientPos[3]; 
  decl Float:otherPos[3];
  
  // Reset stats and check client validity.
  if(validLivingClient(client)) resetClientStatType(client, ZFStatTypeCond);
  else return;
  
  // Find client position.
  GetClientAbsOrigin(client, clientPos);
  
  // Update conditions for Survivors.
  if(validLivingSur(client))
  {    
    // Handle Perk (S): CARPENTER
    // + Update cooldown timer.
    // + Update HUD info (ability ready).
    if(usingSurPerk(client, ZF_PERK_CARPENTER))
    {
      // Handle timer.
      if((zf_perkTimer[client] > 0) && updateTimers)
      {
        zf_perkTimer[client]--;
        if(zf_perkTimer[client] == 0)
        {
          PrintHintText(client, "You can build a new barricade.");
        }        
      }
      
      if(getFreeItemIndex(client, CARPENTER_MAX_ITEMS) >= 0)
        Format(zf_perkStr[client], 32, (zf_perkTimer[client] == 0 ? "(Build Ready)" : ""));
      else
        Format(zf_perkStr[client], 32, "(Max barricades placed)");
    }
    // Handle Perk (S): CHARITABLE
    // + Update HUD info (gifts ready).
    else if(usingSurPerk(client, ZF_PERK_CHARITABLE))
    {
      if(getFreeItemIndex(client, ZF_CHARITABLE_MAX_ITEMS) >= 0)
        Format(zf_perkStr[client], 32, "(Gifts Ready: %d)", (zf_perkState[client] / ZF_CHARITABLE_POINTS_GIFT));
      else
        Format(zf_perkStr[client], 32, "(Max gifts active)");
    }    
    // Handle Perk (S): COWARDLY
    // + Apply scared bonuses.
    // + Update scared timer.
    // + Update HUD info (ability ready).
    else if(usingSurPerk(client, ZF_PERK_COWARDLY))
    {      
      if(zf_perkTimer[client] > ZF_COWARDLY_DURATION_COOLDOWN)
      {
        addStat(client, ZFStatDef, ZFStatTypeCond, ZF_COWARDLY_DEFENSE);
        addStat(client, ZFStatSpeed, ZFStatTypeCond, ZF_COWARDLY_SPEED);
      }
      if((zf_perkTimer[client] > 0) && updateTimers)
      {
        zf_perkTimer[client]--;
        if(zf_perkTimer[client] == ZF_COWARDLY_DURATION_COOLDOWN)
        {
          PrintHintText(client, "You are no longer scared.");
        }
        else if(zf_perkTimer[client] == 0)
        {
          PrintHintText(client, "You can be scared again.");
        }
      }
      Format(zf_perkStr[client], 32, (zf_perkTimer[client] == 0 ? "(Panic Ready)" : ""));
    }  
    // Handle Perk (S): FRIEND
    // + Bonuses for client Friends
    else if(usingSurPerk(client, ZF_PERK_FRIEND))
    {
      if(validLivingSur(zf_perkState[client]))
      {
        // Handle passive friend bonus.
        GetClientAbsOrigin(zf_perkState[client], otherPos);
        if(GetVectorDistance(clientPos, otherPos, true) <= ZF_FRIEND_RADIUSSQ)
        {          
          addStatToLimit(client, ZFStatRegen, ZFStatTypeCond, ZF_FRIEND_BONUS_PCT, ZF_FRIEND_REGEN_LIM);
          addStatToLimit(client, ZFStatAtt, ZFStatTypeCond, ZF_FRIEND_BONUS_PCT, ZF_FRIEND_ATTACK_LIM);
        }
      }
      else
      {
        // Handle friend death crit time bonus.
        if(zf_perkState[client] > 0)
        {
          
          PrintHintText(client, "Your friend has died!");
          addCondKritz(client, float(zf_perkTimer[client]));
          fxKritzStart(client);
          fxDeathScream(client);
          createAura(client, ZFPART_AURAOUTRED, AttachBase);
          removeIcon(client, zf_perkState[client]);
          removeIcon(zf_perkState[client], client);
          zf_perkState[client] = 0;
        }
        else
        {
          if((zf_perkTimer[client] > 0) && updateTimers)
          {
            zf_perkTimer[client]--;
            if(zf_perkTimer[client] == 0)
            {
              removeAura(client);
              fxKritzStop(client);
            }
            else
            {
              addCondKritz(client, float(zf_perkTimer[client]));
            }
          }
        }
      }
      
      // Handle HUD string.
      Format(zf_perkStr[client], 32, "(Crit Time: %d)", zf_perkTimer[client]);
    }    
    // Handle Perk (S): HEROIC
    else if(usingSurPerk(client, ZF_PERK_HEROIC))
    {
      if(zf_surCount == 1)
      {
        // Activate bonus
        if(zf_perkState[client] == 0)
        {
          zf_perkState[client] = 1;
          PrintHintText(client, "You're the last survivor remaining!");

          addCondKritz(client, float(zf_perkTimer[client]));
          fxKritzStart(client);
          createAura(client, ZFPART_AURAOUTRED, AttachBase);
        }
        // Continue bonus
        else
        {
          if((zf_perkTimer[client] > 0) && updateTimers)
          {            
            zf_perkTimer[client]--;
            if(zf_perkTimer[client] == 0)
            {
              remCondKritz(client);
              fxKritzStop(client);
            }
            else
              addCondKritz(client, float(zf_perkTimer[client]));
          }
        }        
      }
    }
    // Handle Perk (S): HOLY
    else if(usingSurPerk(client, ZF_PERK_HOLY))
    {
      if(isGrounded(client) && isCrouching(client) && velLessThan(client, ZF_STILL_VELMAX) && updateTimers)
      {
        if(zf_perkState[client] < ZF_HOLY_REGEN_MAX)
        {
          zf_perkState[client]++;
          showAura(client);
        }
        // Regen bonus for self.
        new regen = (zf_perkState[client] > ZF_HOLY_REGEN_INCTIME) ? min(zf_perkState[client], ZF_HOLY_REGEN_MAX) : ZF_HOLY_REGEN_MIN;
        addStatToLimit(client, ZFStatRegen, ZFStatTypeCond, 1.0, regen);
      }
      else
      {
        zf_perkState[client] = 0;
        hideAura(client);
      }
    }
    // Handle Perk (S): LEADER
    else if(usingSurPerk(client, ZF_PERK_LEADER))
    {
      // Handle rally self bonuses.
      new rallyCount = 0;
      decl Float:rallyPos[3];            
      if(validItem(client, 0))
      {
        getEntityPos(zf_item[client][0], rallyPos);
        for(i = 0; i < MAXPLAYERS; i++)
        {
          if(!validLivingSur(i) || (client == i)) continue;
          GetClientAbsOrigin(i, otherPos);
          if(GetVectorDistance(rallyPos, otherPos, true) <= ZF_LEADER_RALLY_RADIUSSQ) rallyCount++;
        }
        new Float:finalPct = fMin(rallyCount * ZF_LEADER_RALLY_SELF_BONUS_PCT, 1.0);
        addStatToLimit(client, ZFStatAtt, ZFStatTypeCond, finalPct, ZF_LEADER_RALLY_SELF_ATTACK_LIM);
        addStatToLimit(client, ZFStatDef, ZFStatTypeCond, finalPct, ZF_LEADER_RALLY_SELF_DEFENSE_LIM);
      }
      
      // Handle timer logic.
      if((zf_perkTimer[client] > 0) && updateTimers)
      {
        zf_perkTimer[client]--;
        if(zf_perkTimer[client] == ZF_LEADER_RALLY_DURATION)
        {
          PrintHintText(client, "Your rally has ended.");
          removeItem(client, 0);
        }
        else if(zf_perkTimer[client] == 0)
        {
          PrintHintText(client, "You can place a new rally point.");
        }
      }
      
      // Handle HUD string.
      Format(zf_perkStr[client], 32, (zf_perkTimer[client] == 0 ? "(Rally Ready)" : ""));        
    }
    // Handle Perk (S): NINJA
    else if(usingSurPerk(client, ZF_PERK_NINJA))
    {
      // Handle timer logic for high jump.
      if((zf_perkState2[client] > 0) && updateTimers)
      {
        zf_perkState2[client]--;
        if(zf_perkState2[client] == 0) PrintHintText(client, "Your high jump is ready.");
      }
      
      // Handle timer logic for decoy.
      if((zf_perkTimer[client] > 0) && updateTimers)
      {
        zf_perkTimer[client]--;
        if(zf_perkTimer[client] == ZF_NINJA_DURATION_COOLDOWN)
        {
          if(zf_perkState[client] == 1)
          {
            zf_perkState[client] = 0;
            removeAura(client);
            PrintHintText(client, "Your decoy ability has faded.");
          }
        }
        else if(zf_perkTimer[client] == 0)
        {
          PrintHintText(client, "Your decoy ability is ready.");
        }
      }
      // Handle HUD string.
      Format(zf_perkStr[client], 32, (zf_perkTimer[client] == 0 ? "(Decoy Ready)" : ""));
    }
    // Handle Perk (S): STASH
    else if(usingSurPerk(client, ZF_PERK_STASH))
    {
      // Handle pickup logic.
      if((validItem(client, 0)) && updateTimers)
      {
        if(zf_perkTimer[client] <= ZF_STASH_COOLDOWN)
        {
          decl Float:stashPos[3];          
          getEntityPos(zf_item[client][0], stashPos);
          
          if(GetVectorDistance(clientPos, stashPos, true) <= ZF_STASH_GRAB_RADSQ)
          {
            addResAmmoPct(client, 0, 1.0);
            addResAmmoPct(client, 1, 1.0);
            addMetal(client, 200);
            addHealth(client, ZF_STASH_GRAB_HEALTH, true);      
            addStat(client, ZFStatAtt, ZFStatTypePerm, ZF_STASH_GRAB_ATTACK_PERM);      
            addStatTempToLimit(client, ZFStatAtt, ZF_STASH_GRAB_ATTACK_TEMP_PCT, ZF_STASH_GRAB_ATTACK_TEMP_LIM, ZF_STASH_GRAB_ATTACK_DURATION);
            fxEvilLaughToAll(client);
            fxCreateSoundToClient(ZFSND_PACKPICKUP, client);            
            removeItem(client, 0);
          }
        }
      }   
      
      // Handle timer logic.
      if((zf_perkTimer[client] > 0) && updateTimers)
      {
        zf_perkTimer[client]--;
        if(zf_perkTimer[client] == ZF_STASH_COOLDOWN)
        {
          PrintHintText(client, "Your stash is ready.");
        }
        else if(zf_perkTimer[client] == 0)
        {
          PrintHintText(client, "You can place a new stash.");
        }
      }
      
      // Handle HUD string.
      Format(zf_perkStr[client], 32, (zf_perkTimer[client] == 0 ? "(Stash Ready)" : ""));     
    }
            
    // Handle Perk (S): STIR-CRAZY
    else if(usingSurPerk(client, ZF_PERK_STIRCRAZY))
    {
      if(updateTimers)
      {
        // Update rotating position buffer.
        GetClientAbsOrigin(client, zf_perkPos[client][zf_frameCounter % ZF_STIRCRAZY_MAX_POINTS]);
        
        // Calculate average position of previous player positions.
        new Float:avgPos[3] = {0.0, 0.0, 0.0};
        for(j = 0; j < ZF_STIRCRAZY_MAX_POINTS; j++) AddVectors(avgPos, zf_perkPos[client][j], avgPos);
        ScaleVector(avgPos, (1 / float(ZF_STIRCRAZY_MAX_POINTS)));
        // Calculate distance between current position and average position.
        // Note: Max distance (when running in a straight line is ~600).
        new dist = RoundToCeil(GetVectorDistance(avgPos, zf_perkPos[client][zf_frameCounter % ZF_STIRCRAZY_MAX_POINTS], false));
        if(dist >= ZF_STIRCRAZY_DIST_MIN)
        {
          new Float:factor = fMin(1.0, dist / float(ZF_STIRCRAZY_DIST_MAX));
          addStat(client, ZFStatAtt, ZFStatTypeCond, RoundToCeil(ZF_STIRCRAZY_ATTACK * factor));
        }
      }
    }
    // Handle Perk (S): SUPPLIER
    else if(usingSurPerk(client, ZF_PERK_SUPPLIER))
    {
      // Handle timer logic.
      if((zf_perkTimer[client] > 0) && updateTimers)
      {
        zf_perkTimer[client]--;
        if(zf_perkTimer[client] == 0)
        {
          PrintHintText(client, "You can place new supplies.");
        }
      }
      
      // Handle self-resupply logic.
      if(((zf_frameCounter % ZF_SUPPLIER_UPDATERATE) == 0) && updateTimers)
      {
        addResAmmoPct(client, 0, ZF_SUPPLIER_AMMOPCT_SELF, ZF_SUPPLIER_AMMOPCT_RESLIMIT);
        addResAmmoPct(client, 1, ZF_SUPPLIER_AMMOPCT_SELF, ZF_SUPPLIER_AMMOPCT_RESLIMIT);
        addMetalPct(client, ZF_SUPPLIER_AMMOPCT_SELF, ZF_SUPPLIER_AMMOPCT_RESLIMIT);
      }
      
      // Handle other resupply logic.
      if(updateTimers)
      {
        decl resupplyCount;
        decl Float:supplyPos[3];
        for(i = 0; i < ZF_SUPPLIER_MAX_ITEMS; i++)
        {        
          if(validItem(client, i))
          {
            // Get resupply count.
            resupplyCount = getItemMetadata(zf_item[client][i]);
            
            getEntityPos(zf_item[client][i], supplyPos);
            for(j = 0; j < MAXPLAYERS; j++)
            {
              if(!validLivingSur(j) || (client == j)) continue;
              GetClientAbsOrigin(j, otherPos);
              if(GetVectorDistance(supplyPos, otherPos, true) <= ZF_SUPPLIER_RADIUSSQ)
              {
                if(((getResAmmoPct(j, 0) < 1.0) && (maxResAmmo(j, 0) > 0)) ||
                   ((getResAmmoPct(j, 1) < 1.0) && (maxResAmmo(j, 1) > 0)))
                {
                  addResAmmoPct(j, 0, ZF_SUPPLIER_AMMOPCT_OTHER);
                  addResAmmoPct(j, 1, ZF_SUPPLIER_AMMOPCT_OTHER);
                  addMetalPct(j, ZF_SUPPLIER_AMMOPCT_OTHER);
                  addStatTempToLimit(client, ZFStatAtt, ZF_SUPPLIER_ATTACK_PCT, ZF_SUPPLIER_ATTACK_LIM, ZF_SUPPLIER_DURATION);
                  fxCreateSoundToClient(ZFSND_PACKPICKUP, j);
                  
                  resupplyCount--;
                  if(resupplyCount == 0) break;
                }
              }
            }
            
            // Set resupply count.
            setItemMetadata(zf_item[client][i], resupplyCount);
                        
            if(resupplyCount == 0)
              removeItem(client, i);
          }
        }
      }
      
      // Handle HUD string.
      if(getFreeItemIndex(client, ZF_SUPPLIER_MAX_ITEMS) >= 0)
        Format(zf_perkStr[client], 32, (zf_perkTimer[client] == 0 ? "(Supplies Ready)" : ""));
      else
        Format(zf_perkStr[client], 32, "(Max supplies placed)");
    }
    // Handle Perk (S): TANTRUM
    else if(usingSurPerk(client, ZF_PERK_TANTRUM))
    {
      // Handle timer logic.      
      if((zf_perkTimer[client] > 0) && updateTimers)
      {
        zf_perkTimer[client]--;  
        if(zf_perkTimer[client] == 0)
        {
          PrintHintText(client, "Tantrum is ready!");
        }
        else if(zf_perkTimer[client] == ZF_TANTRUM_COOLDOWN)
        {      
          fxKritzStop(client);
          PrintHintText(client, "Tantrum has exhausted you!");
        }
      }
      
      // Handle state logic.
      if(zf_perkTimer[client] > ZF_TANTRUM_COOLDOWN) // Tantrum active
      {
         addCondKritz(client, float(zf_perkTimer[client] - ZF_TANTRUM_COOLDOWN));
      }
      else if(zf_perkTimer[client] > 0) // Tantrum cooldown
      {
        addStat(client, ZFStatSpeed, ZFStatTypeCond, ZF_TANTRUM_SPEED);
      }
      
      // Handle HUD string.
      Format(zf_perkStr[client], 32, (zf_perkTimer[client] == 0 ? "(Ability Ready)" : ""));
    }
    // Handle Perk (S): TRAITOR
    else if(usingSurPerk(client, ZF_PERK_TRAITOR))
    {
      if((zf_surCount == 2) && updateTimers)
      { 
        if(zf_perkState[client] == 0)
        {
          for(i = 1; i < MAXPLAYERS; i++)
          {
            if(!validLivingSur(i) || (client == i)) continue;
            zf_perkState[client] = i;
            PrintHintText(client, "You have betrayed %N!", i);
            PrintHintText(i, "%N has betrayed you!", client);
            fxEvilLaughToClient(client, i);
            break;
          }
        }
        if((zf_perkState[client] > 0) && validLivingSur(zf_perkState[client]))
        {
          SDKHooks_TakeDamage(i, 0, 0, float(ZF_TRAITOR_POISON), ZF_DMGTYPE_POISON|DMG_PREVENT_PHYSICS_FORCE, -1);          
          zf_lastPoison[i] = 0;
        }
      }
    }
    // Handle Perk (S): TRAPPER
    else if(usingSurPerk(client, ZF_PERK_TRAPPER))
    {
      // Handle mine detection and detonation.
      if(updateTimers)
      {
        for(i = 0; i < ZF_TRAPPER_MAX_ITEMS; i++)
        {
          if(validItem(client, i))
          {        
            decl bool:mineDisabled;
            decl bool:mineTriggered;
            decl mineTarget;
            decl Float:minePos[3]; 
            
            // Determine whether mine has detonated or is disabled.
            mineDisabled = false;
            mineTriggered = false;
            getEntityPos(zf_item[client][i], minePos);
            for(j = 1; j < MAXPLAYERS; j++)
            {
              if(!validLivingZom(j)) continue;
              GetClientAbsOrigin(j, otherPos);
              if(GetVectorDistance(minePos, otherPos, true) <= ZF_TRAPPER_RADIUSSQ)
              {
                if(usingZomPerk(j, ZF_PERK_MAGNETIC))
                {
                  mineDisabled = true;
                }
                else
                {
                  mineTriggered = true;
                  mineTarget = j;
                }
                break;
              }   
            }
            
            // Detonate or disable mine.
            if(mineTriggered && !mineDisabled)
            {
              TF2_IgnitePlayer(mineTarget, client);
              minePos[2] += 8.0;
              applyDamageRadial(client, ZF_TRAPPER_DAMAGE, minePos, ZF_TRAPPER_RADIUS, true);  
              fxExplosionBig(zf_item[client][i]);
              removeItem(client, i);          
            }
            else if(mineDisabled)
            {
              fxSpark(zf_item[client][i]);
            }
            else
            {
              fxCreateSoundToAll(ZFSND_TICK, zf_item[client][i]);
            }
          }
        }
      }
      
      // Handle timer
      if((zf_perkTimer[client] > 0) && updateTimers)
      {
        zf_perkTimer[client]--;
        if(zf_perkTimer[client] == 0)
          PrintHintText(client, "You can place another mine!");
      }
      
      // Handle HUD string.
      if(getFreeItemIndex(client, ZF_TRAPPER_MAX_ITEMS) >= 0)
        Format(zf_perkStr[client], 32, (zf_perkTimer[client] == 0 ? "(Mine Ready)" : ""));
      else
        Format(zf_perkStr[client], 32, "(Max mines placed)");
    }
    // Handle Perk (S): ZENLIKE
    else if(usingSurPerk(client, ZF_PERK_ZENLIKE))
    { 
      if(isGrounded(client) && isCrouching(client) && velLessThan(client, ZF_STILL_VELMAX))
      {
        zf_perkState[client] += ZF_ZENLIKE_CRIT_INC;
        if(zf_perkState[client] > ZF_ZENLIKE_CRIT_MAX) zf_perkState[client] = ZF_ZENLIKE_CRIT_MAX;
          
        addStat(client, ZFStatRegen, ZFStatTypeCond, ZF_ZENLIKE_REGEN);
        if(updateTimers) subCond(client, ZFCondPoisoned, ZF_ZENLIKE_HEAL);        
      }
      addStat(client, ZFStatCrit, ZFStatTypeCond, zf_perkState[client]);
    }
    // Bonuses from other players.
    // (S) Friend, Holy, Leader, Selfless
    for(i = 0; i < MAXPLAYERS; i++)
    {
      if(!validLivingSur(i) || (client == i)) continue;
      GetClientAbsOrigin(i, otherPos);
      
      // (S) Friend
      // + Add Att/Regen bonuses if Friend is nearby.
      if(usingSurPerk(i, ZF_PERK_FRIEND))
      {
        if((zf_perkState[i] == client) && (GetVectorDistance(otherPos, clientPos, true) <= ZF_FRIEND_RADIUSSQ))
        {
          addStatToLimit(client, ZFStatRegen, ZFStatTypeCond, ZF_FRIEND_BONUS_PCT, ZF_FRIEND_REGEN_LIM);
          addStatToLimit(client, ZFStatAtt, ZFStatTypeCond, ZF_FRIEND_BONUS_PCT, ZF_FRIEND_ATTACK_LIM);
        }
      }
      // (S) Holy
      // + Add Regen bonus to nearby Survivors if praying.
      else if(usingSurPerk(i, ZF_PERK_HOLY))
      {
        if((GetVectorDistance(otherPos, clientPos, true) <= ZF_HOLY_RADIUSSQ) && isCrouching(i) && isGrounded(i) && velLessThan(i, ZF_STILL_VELMAX))
        {
          new regen = (zf_perkState[i] > ZF_HOLY_REGEN_INCTIME) ? min(zf_perkState[i], ZF_HOLY_REGEN_MAX) : ZF_HOLY_REGEN_MIN;
          addStatToLimit(client, ZFStatRegen, ZFStatTypeCond, 1.0, regen);
        }
      }
      // (S) Leader
      // + Apply passive Attack bonus to Survivors near player.
      // + Apply Att/Def bonus to Survivors near active rally.
      else if(usingSurPerk(i, ZF_PERK_LEADER))
      {
        // Passive bonuses
        if(GetVectorDistance(otherPos, clientPos, true) <= ZF_LEADER_OTHERS_RADIUSSQ)
        {
          addStatToLimit(client, ZFStatAtt, ZFStatTypeCond, ZF_LEADER_OTHERS_ATTACK_PCT, ZF_LEADER_OTHERS_ATTACK_LIM);
        }
        // Rally bonuses
        if(validItem(i, 0))
        {
          decl Float:rallyPos[3];
          getEntityPos(zf_item[i][0], rallyPos);
          if(GetVectorDistance(rallyPos, clientPos, true) <= ZF_LEADER_RALLY_RADIUSSQ)
          {
            addStatToLimit(client, ZFStatAtt, ZFStatTypeCond, ZF_LEADER_RALLY_OTHERS_BONUS_PCT, ZF_LEADER_RALLY_OTHERS_ATTACK_LIM);
            addStatToLimit(client, ZFStatAtt, ZFStatTypeCond, ZF_LEADER_RALLY_OTHERS_BONUS_PCT, ZF_LEADER_RALLY_OTHERS_DEFENSE_LIM);
          }
        }
      }
      // (S) Selfless
      // + Increase Defense of nearby Survivors.
      else if(usingSurPerk(i, ZF_PERK_SELFLESS))
      {
        if(GetVectorDistance(otherPos, clientPos, true) <= ZF_SELFLESS_OTHERS_RADIUSSQ)
        {
          addStatToLimit(client, ZFStatDef, ZFStatTypeCond, ZF_SELFLESS_OTHERS_DEFENSE_PCT, ZF_SELFLESS_OTHERS_DEFENSE_LIM);
        }
      }
    }
  }
  // Update conditions for Zombies.
  if(validLivingZom(client))
  {
    // Handle Items
    // + Warrior's Spirit RoF penalty
    if(isHeavy(client) && isWielding(client, ZFWEAP_WARRIORSSPIRIT) && !getTF2ItemsState()) addStat(client, ZFStatRof, ZFStatTypeCond, -40);
    
    // Handle Perk (Z): ALPHA
    if(usingZomPerk(client, ZF_PERK_ALPHA))
    {
      // Apply colour.
      fxSetClientColor(client, 200, 50, 50, 255);
      // Handle timer
      if((zf_perkTimer[client] > 0) && updateTimers)
      {
        zf_perkTimer[client]--;
        if(zf_perkTimer[client] == 0)
          PrintHintText(client, "Alpha is ready!");
      }
    
      // Handle bonuses
      for(i = 0; i < MAXPLAYERS; i++)
      {
        if(!validLivingZom(i) || (client == zf_validZoms[i])) continue;
        GetClientAbsOrigin(zf_validZoms[i], otherPos);
        if(GetVectorDistance(clientPos, otherPos, true) <= ZF_ALPHA_RADIUSSQ)
        {
          if(zf_alphaMaster[i] == client)
          {
            addStatToLimit(client, ZFStatAtt, ZFStatTypeCond, ZF_ALPHA_MINION_PCT, ZF_ALPHA_ATTACK_LIM);
            addStatToLimit(client, ZFStatAtt, ZFStatTypeCond, ZF_ALPHA_MINION_PCT, ZF_ALPHA_REGEN_LIM);
          }
          else 
          {
            addStatToLimit(client, ZFStatAtt, ZFStatTypeCond, ZF_ALPHA_ZOMBIE_PCT, ZF_ALPHA_ATTACK_LIM);
            addStatToLimit(client, ZFStatAtt, ZFStatTypeCond, ZF_ALPHA_ZOMBIE_PCT, ZF_ALPHA_REGEN_LIM);
          }
        }
      }
      
      // Handle HUD string.
      Format(zf_perkStr[client], 32, (zf_perkTimer[client] == 0 ? "(Summon Ready)" : ""));     
    }    
    // Handle Perk (Z): COMBUSTIBLE
    else if(usingZomPerk(client, ZF_PERK_COMBUSTIBLE))
    {
      if(updateTimers) fxExplosionTiny(client);
    }
    // Handle Perk (Z): HUNTER
    else if(usingZomPerk(client, ZF_PERK_HUNTER))
    {
      Format(zf_perkStr[client], 32, (validAura(client) ? "(Active)" : "(Inactive)"));         
    }
    // Handle Perk (Z): LEAP
    else if(usingZomPerk(client, ZF_PERK_LEAP))
    {
      // Handle timer.
      if((zf_perkTimer[client] > 0) && updateTimers)
      {
        zf_perkTimer[client]--;
        if(zf_perkTimer[client] == 0)
          PrintHintText(client, "Leap is ready!");
      }
      
      // Handle HUD string.
      Format(zf_perkStr[client], 32, (zf_perkTimer[client] == 0 ? "(Ability Ready)" : ""));           
    }
    // Handle Perk (Z): MARKED
    else if(usingZomPerk(client, ZF_PERK_MARKED))
    {
      //
      // No mark exists.
      // Do not attempt to select a mark.
      //
      if(zf_perkState[client] == -1)
      {
        // Do nothing.
      }
      //
      // No mark exists. 
      // Wait until timer reaches zero before selecting new mark.
      //
      else if(zf_perkState[client] == 0)
      {
        if(zf_perkTimer[client] > 0)
        {
          if(updateTimers) zf_perkTimer[client]--;
        }
        else
        {
          doMarkedSelect(client);
        }
      }
      //
      // Mark exists. 
      // Monitor mark until he dies, then initiate timer.
      //
      else
      {
        if(!validLivingSur(zf_perkState[client]))
        {            
          zf_perkTimer[client] = ZF_MARKED_TIMER;
          removeIcon(client, zf_perkState[client]);
          removeIcon(zf_perkState[client], client);
          zf_perkState[client] = 0;
          PrintHintText(client, "Searching for new mark...");
        }
      }
    }
    // Handle Perk (Z): RAGE
    else if(usingZomPerk(client, ZF_PERK_RAGE))
    {
      // Handle cooldown when rage is not active.
      if(zf_perkState[client] == 0)
      {
        if(zf_perkTimer[client] > 0)
        {
          if(updateTimers) zf_perkTimer[client]--;
          if(zf_perkTimer[client] == 0) PrintHintText(client, "Rage is ready!");
          else addStat(client, ZFStatAtt, ZFStatTypeCond, ZF_RAGE_ATTACK_PENALTY);
        }
      }
      // Handle logic when rage is active.
      else
      {
        if(getHealthPct(client) >= ZF_RAGE_HEALTHPCT_TOUSE)
        {
          addStat(client, ZFStatSpeed, ZFStatTypeCond, ZF_RAGE_SPEED);
        }
        else
        {
          // Should be redundant since Rage end is checked on damage.
          zf_perkState[client] = 0;
          removeAura(client);
          PrintHintText(client, "Rage has faded.");
          addStat(client, ZFStatAtt, ZFStatTypeCond, ZF_RAGE_ATTACK_PENALTY);
        }
      }
    }
    // Handle Perk (Z): ROAR
    else if(usingZomPerk(client, ZF_PERK_ROAR))
    {
      if(zf_perkTimer[client] > 0)
      {
        if(updateTimers)zf_perkTimer[client]--;
        if(zf_perkTimer[client] == 0) PrintHintText(client, "Roar is ready!");
      }
      // Handle HUD string.
      Format(zf_perkStr[client], 32, (zf_perkTimer[client] == 0 ? "(Ability Ready)" : ""));      
    }
    // Handle Perk (Z): SCORCHING
    else if(usingZomPerk(client, ZF_PERK_SCORCHING))
    {    
      if(!isInWater(client)) TF2_IgnitePlayer(client, client);
    }
    // Handle Perk (Z): SICK
    else if(usingZomPerk(client, ZF_PERK_SICK))
    {
      // Handle timer events
      if(zf_perkTimer[client] > 0)
      {
        if(updateTimers) zf_perkTimer[client]--;
        if(zf_perkTimer[client] == 0)
        {
          removeItems(client);
          PrintHintText(client, "Sick is ready!");
        }
      }
            
      // Handle bonus logic
      if(updateTimers) for(i = 0; i < ZF_SICK_MAX_ITEMS; i++)
      {
        if(validItem(client, i))
        {
          if(getItemMetadata(zf_item[client][i]) == 1)
          {
            applyDamageRadial(client, ZF_SICK_DAMAGE, zf_perkPos[client][i], ZF_SICK_DAMAGE_RADIUS);
          }
        }
      }
      
      // Handle HUD string.
      Format(zf_perkStr[client], 32, (zf_perkTimer[client] == 0 ? "(Spit Ready)" : ""));      
    }

    // Handle Perk (Z): TARRED
    else if(usingZomPerk(client, ZF_PERK_TARRED))
    {
      // Handle timer events
      if(zf_perkTimer[client] > 0)
      {
        if(updateTimers) zf_perkTimer[client]--;
        if(zf_perkTimer[client] == 0)
        {
          removeItems(client);
          PrintHintText(client, "Tarred is ready!");
        }
      }
            
      // Handle bonus logic
      if(updateTimers) for(i = 0; i < ZF_TARRED_MAX_ITEMS; i++)
      {
        if(validItem(client, i))
        {
          if(getItemMetadata(zf_item[client][i]) == 1)
          {
            applyDamageRadial(client, 1, zf_perkPos[client][i], ZF_TARRED_RADIUS);
          }
        }
      }
      
      // Handle HUD string.
      Format(zf_perkStr[client], 32, (zf_perkTimer[client] == 0 ? "(Spit Ready)" : ""));  
      
      // Render color.
      fxSetClientColor(client, 25, 25, 25, 255);
    }
    // Handle Perk (Z): TOXIC
    else if(usingZomPerk(client, ZF_PERK_TOXIC))
    {
      // Apply poison to nearby survivors.
      if(velLessThan(client, ZF_STILL_VELMAX) && !isCloaked(client) && updateTimers)
      {
        for(i = 0; i < MAXPLAYERS; i++)
        {
          if(!validLivingSur(i) || isUbered(i)) continue;
          GetClientAbsOrigin(i, otherPos);
          if(GetVectorDistance(clientPos, otherPos, true) <= ZF_TOXIC_RADIUSSQ)
          {
            SDKHooks_TakeDamage(i, client, client, float(ZF_TOXIC_DAMAGE_PASSIVE), ZF_DMGTYPE_POISON|DMG_PREVENT_PHYSICS_FORCE, -1); 
            zf_lastPoison[i] = client;
          }
        }        
      }
      
      // Render color.
      fxSetClientColor(client, 50, 200, 50, 255);
    }
    
    // Handle Perk (Z): VAMPIRIC
    else if(usingZomPerk(client, ZF_PERK_VAMPIRIC))
    {
      addStat(client, ZFStatRegen, ZFStatTypeCond, ZF_VAMPIRIC_REGEN);
    } 
    
    // Bonuses from other players.
    // (Z) [none]
    // (S) Traitor
    for(i = 0; i < MAXPLAYERS; i++)
    {
      if(!validLivingSur(i) || (client == i)) continue;
      GetClientAbsOrigin(i, otherPos);
      
      // (S) Traitor
      // + Increase crit chance for nearby zombies.
      if(usingSurPerk(i, ZF_PERK_TRAITOR))
      {
        if(GetVectorDistance(otherPos, clientPos, true) <= ZF_TRAITOR_RADIUSSQ) addStat(client, ZFStatCrit, ZFStatTypeCond, ZF_TRAITOR_CRIT_ZOM);
      }
    }
    
    //
    // Handle general zombie logic.
    //
    
    // Hide auras on cloaked zombies.
    isCloaked(client) ? hideAura(client) : showAura(client);
  }
}

stock updateEntityCondStats()
// This function is called every second and checks conditions of entities and auras (anything other than valid living clients).
{
  decl i, j;
  decl Float:playerPos[3];
  // Handle Perk (Z): HUNTER
  // * Destroy spawn marks near survivors
  for(i = 1; i <= MAXPLAYERS; i++)
  {
    if(validZom(i) && usingZomPerk(i, ZF_PERK_HUNTER) && validAura(i))
    {
      decl Float:spawnPos[3];
      getEntityPos(zf_aura[i], spawnPos);
      for(j = 0; j < MAXPLAYERS; j++)
      {
        if(!validLivingSur(j)) continue;
        getEntityPos(j, playerPos);
        if(GetVectorDistance(spawnPos, playerPos, true) <= ZF_HUNTER_RADIUSSQ)
        {
          PrintHintText(i, "Your spawn mark has been destroyed!");
          PrintHintText(j, "You destroyed a Hunter's spawn mark!");
          removeAura(i);
          break;
        }
      }
    }
  }
      
  // Handle Perk (Z): MAGNETIC
  // * Disable all sentries that are near a zombie using the MAGNETIC perk.
  new index = -1;
  while ((index = FindEntityByClassname(index, "obj_sentrygun")) != -1)
  {  
    decl Float:sentPos[3];
    getEntityPos(index, sentPos);
    
    // Determine if sentry is disabled.
    new bool:sentryDisabled = false;
    for(i = 0; i < MAXPLAYERS; i++)
    {
      if(validLivingZom(i) && usingZomPerk(i, ZF_PERK_MAGNETIC)) 
      {
        GetClientAbsOrigin(i, playerPos);
        if(GetVectorDistance(sentPos, playerPos, true) <= ZF_MAGNETIC_RADIUSSQ)
        {
          sentryDisabled = true;
          break;
        }
      }
    }

    // Handle sentry disable logic.
    if(sentryDisabled)
    {
      new owner = GetEntPropEnt(index, Prop_Send, "m_hBuilder");
      if(validSur(owner)) zf_sentDisabled[owner] = -1;
      fxSpark(index);
    }
  }  
}

stock updateTempStats()
{  
  for(new i = 0; i < MAXPLAYERS; i++)
  {
    if(!(validLivingSur(i) || validLivingZom(i))) continue;
    for(new j = 0; j < TOTAL_ZFSTATS; j++)
    {
      // Reduce temp stat strength each tick, and clear when expired.
      if(zf_stat[i][j][ZFStatTypeTempDuration] > 0)
      {
        new oldDur = zf_stat[i][j][ZFStatTypeTempDuration];
        zf_stat[i][j][ZFStatTypeTempDuration]--;
        new newDur = zf_stat[i][j][ZFStatTypeTempDuration];
        if(zf_stat[i][j][ZFStatTypeTempDuration] > 0)
        {
          scaleStatTempPct(i, ZFStat:j, Float:newDur / Float:oldDur, 1.0);
          // DEBUG
          //PrintToChatAll("\x05[ZF DEBUG]\x01 updateTempStats: oldDur %d, newDur %d, scalePct %f", oldDur, newDur, Float:newDur / Float:oldDur);
        }
        else zf_stat[i][j][ZFStatTypeTemp] = 0;
      }
    }
  }
}

stock updateConds()
{
  for(new i = 0; i < MAXPLAYERS; i++)
  {
    if(!(validLivingSur(i) || validLivingZom(i))) continue;
    for(new j = 0; j < TOTAL_ZFCONDS; j++)
    {
      if(zf_cond[i][j] > 0)
      {
        zf_cond[i][j]--;
        // If Crippled is about to wear off, notify victim.
        if((j == 0) && (zf_cond[i][j] == 0) && (zf_crippleMode == 1)) PrintHintText(i, "You are no longer crippled.");
      }
    }
  }
}

stock updateSentries()
// Engineer Sentry rules
// + Normal sentries have a max of 10 ammo and disable when empty.
// + Mini sentries start with 50 ammo that decays, and self destruct when empty.
{
  decl i;
  new index = -1;
  new bool:sentryExists = false;
  for(i = 1; i < MAXPLAYERS; i++)
  {
    if(!validSur(i)) continue;
    if(!isEngineer(i)) continue;
    index = -1;
    while ((index = FindEntityByClassname(index, "obj_sentrygun")) != -1)
    {
      if(GetEntPropEnt(index, Prop_Send, "m_hBuilder") != i) continue;
      sentryExists = true;
      new bool:sentBuilding = GetEntProp(index, Prop_Send, "m_bBuilding") == 1;
      new bool:sentPlacing = GetEntProp(index, Prop_Send, "m_bPlacing") == 1;
      new bool:sentCarried = GetEntProp(index, Prop_Send, "m_bCarried") == 1;
      new bool:sentIsMini = GetEntProp(index, Prop_Send, "m_bMiniBuilding") == 1;
      if(!sentBuilding && !sentPlacing && !sentCarried)
      {
        new sentAmmo = GetEntProp(index, Prop_Send, "m_iAmmoShells");
        if(zf_sentLastAmmo[i] > -1) // Check that Sentry has not just been built
        {
          if(!sentIsMini) // Rules for normal Sentries
          {
            if(sentAmmo > ZF_SENT_AMMO_MAX) // Check if Sentry has been refilled over limit
            {
              addMetal(i, (sentAmmo - ZF_SENT_AMMO_MAX) * ZF_SENT_AMMO_COST); // Refund extra shells
              sentAmmo = ZF_SENT_AMMO_MAX;
              SetEntProp(index, Prop_Send, "m_iAmmoShells", sentAmmo);
              if(zf_sentLastAmmo[i] < sentAmmo)
              {
                PrintHintText(i, "Sentry reloading...");
                zf_sentDisabled[i] = ZF_SENT_RELOAD_TIME;
              }
              else PrintHintText(i, "Sentry has full ammo.");
            }
            zf_sentLastAmmo[i] = sentAmmo;
            if(sentAmmo == 0) zf_sentDisabled[i] = -1;
          }
          else // Rules for Minisentries
          {
            if(sentAmmo > 0)
            {
              if(sentAmmo > zf_sentLastAmmo[i])
              {
                addMetal(i, (sentAmmo - zf_sentLastAmmo[i]) * ZF_SENT_AMMO_COST);
                sentAmmo = zf_sentLastAmmo[i];
                PrintHintText(i, "Minisentry ammo can't be refilled.");
              }
              sentAmmo = max(sentAmmo - 2, 0);
              SetEntProp(index, Prop_Send, "m_iAmmoShells", sentAmmo);
              zf_sentLastAmmo[i] = sentAmmo;
            }
            else
            {
              SetVariantInt(GetEntProp(index, Prop_Send, "m_iMaxHealth"));
              AcceptEntityInput(index, "RemoveHealth");
              zf_sentLastAmmo[i] = -1;
            }
          }
        }
        else // Set new Sentries' ammo to defaults.
        {
          if(!sentIsMini) sentAmmo = ZF_SENT_AMMO_MAX;
          else sentAmmo = ZF_SENT_AMMO_MINI;
          SetEntProp(index, Prop_Send, "m_iAmmoShells", sentAmmo);
          zf_sentLastAmmo[i] = sentAmmo;
        }
        new sentLevel = GetEntProp(index, Prop_Send, "m_iHighestUpgradeLevel");
        if(sentLevel > 1)
        {
          SetVariantInt(GetEntProp(index, Prop_Send, "m_iMaxHealth"));
          AcceptEntityInput(index, "RemoveHealth");    
        }
      }
    }
    if(!sentryExists) zf_sentLastAmmo[i] = -1;
  }
}
////////////////////////////////////////////////////////////
//
// Perk Event Logic, Timing / Round State Events
//
////////////////////////////////////////////////////////////
public perk_OnPeriodic() // 1Hz
{ 
  decl i;
  decl index;
  zf_frameCounter++;
  
  //
  // Update team size info.
  // + Survivors must be alive.
  // + Zombies may be alive or dead.
  //
  zf_clientCount = 0;
  zf_surCount = 0;
  zf_zomCount = 0;
  for(i = 1; i <= MaxClients; i++)
  {
    if(validClient(i))
    {
      if(isSur(i))
      {
        zf_clientCount++;
        if(IsPlayerAlive(i)) zf_surCount++;
      }
      else if(isZom(i))
      {
        zf_clientCount++;
        zf_zomCount++;
      }
    }
  }
  // Enable Sentries by default, or tick reload time on reloading normal Sentries.
  for(i = 1; i < MAXPLAYERS; i++)
  {
    if(zf_sentDisabled[i] > 0) zf_sentDisabled[i]--;
    if(zf_sentDisabled[i] == -1) zf_sentDisabled[i] = 0;
  }
  updateSentries();
  // 
  // Update cond/temp stats, conditions and timers.
  //
  updateConds();
  updateTempStats();
  updateEntityCondStats();
  for(i = 1; i <= MAXPLAYERS; i++)
  {
    updateClientCondStats(i, true);
  }
  //
  // Regenerate health according to the Regen stat.
  //
  for(i = 1; i < MAXPLAYERS; i++)
  {
    if(validLivingSur(i) || validLivingZom(i))
    {
      if(getStat(i, ZFStatRegen) > 0) addHealth(i, getStat(i, ZFStatRegen), false);
    }
  }
  //
  // Enable/disable sentries based on results of Sentry and Condition updates.
  //
  for(i = 1; i <= MAXPLAYERS; i++)
  {
    if(!validSur(i)) continue;
    if(!isEngineer(i)) continue;
    index = -1;
    while ((index = FindEntityByClassname(index, "obj_sentrygun")) != -1)
    {
      if(GetEntPropEnt(index, Prop_Send, "m_hBuilder") != i) continue;
      if(zf_sentDisabled[i] == 0) SetEntProp(index, Prop_Send, "m_bDisabled", 0);
      else SetEntProp(index, Prop_Send, "m_bDisabled", 1);
      break;
    }
  }
  //
  // Update conditions.
  //
  for(i = 1; i < MAXPLAYERS; i++)
  {
    if(!(validLivingSur(i) || validLivingZom(i))) continue;
    new thisClient = i;

    //
    // Apply Condition: Crippled
    // + Create blood/pain effects.
    //
    if(getCond(thisClient, ZFCondCrippled))
    {
      if(GetRandomInt(0,3) == 1)
        fxBloodBurst(thisClient);
      if(GetRandomInt(0,3) == 1)
        fxBloodSpray(thisClient);
      if(GetRandomInt(0,3) == 1)
        fxPain(thisClient);      
    }
    
    //
    // Apply Condition: Poisoned
    // + Apply poison damage.
    //
    if(getCond(thisClient, ZFCondPoisoned))
    {
      // Check that last poison source is still ingame and has not changed perk.
      if(usingZomPerk(zf_lastPoison[thisClient], ZF_PERK_TOXIC) && IsValidEntity(zf_lastPoison[thisClient]))
      {
        if(isBeingHealed(thisClient))
          subCond(thisClient, ZFCondPoisoned, ZF_POISON_HEAL_MEDIC);
        if(isUbered(thisClient))
          subCond(thisClient, ZFCondPoisoned, ZF_POISON_HEAL_UBER);
        SDKHooks_TakeDamage(thisClient, zf_lastPoison[thisClient], zf_lastPoison[thisClient], float(ZF_POISON_DAMAGE), ZF_DMGTYPE_POISON|DMG_PREVENT_PHYSICS_FORCE, -1); 
        fxHealthLost(thisClient);
      }
      else subCond(thisClient, ZFCondPoisoned, zf_cond[thisClient][ZFCondPoisoned]);
    }
    //
    // Handle Condition: Corroded
    // + Damage victim if he/she was standing in a Sick pile this tick.
    //
    if(validZom(zf_lastSick[thisClient]))
    {
      zf_cond[thisClient][ZFCondCorroded] = min(10, zf_cond[thisClient][ZFCondCorroded] + 3);
      new Float:sickDamage = fMax(8.0, fMin(2.5 * zf_cond[thisClient][ZFCondCorroded], 20.0));
      SDKHooks_TakeDamage(thisClient, zf_lastSick[thisClient], zf_lastSick[thisClient], sickDamage, DMG_GENERIC|DMG_PREVENT_PHYSICS_FORCE);
    }
    // Reset zf_lastSick.
    zf_lastSick[thisClient] = 0;
    //
    // Handle Condition: Tracked
    // + Reveal glow around client.
    //
    setGlow(thisClient, getCond(thisClient, ZFCondTracked));
    // Disable glow for any icon anchors attached to client.
    /*if(getCond(thisClient, ZFCondTracked))
    {
      for(new j = 1; j <= MaxClients; j++)
      {
        if(zf_icon[j][thisClient][ICON_ANC] > 0) setGlow(zf_icon[j][thisClient][ICON_ANC], false);
      }
    }*/
  }
  
  //
  // Handle HUD updates. 
  // Do not update at end of round.
  //
  if(roundState() != RoundPost)
  {
    for(i = 1; i <= MaxClients; i++)
    {
      updateHud(i);
    }
  }
}

public perk_OnGameFrame()
{
  decl Float:collidePos[3];
  decl Float:collideVec[3];
  
  for(new i = 1; i <= MaxClients; i++)
  {
    if(IsClientInGame(i) && IsPlayerAlive(i))
    {
      // Handle Condition: Crippled
      // + Set max health to penalised amount (Crippling backstab).
      // + Prevent healing (Stunning backstab).
      //
      if(getCond(i, ZFCondCrippled))
      {
        if(zf_crippleMode == 1)
        {
          SetEntityHealth(i, min(zf_lastHealth[i], GetClientHealth(i)));
        }
        if(zf_crippleMode == 2)
        {
          zf_lastHealth[i] = min(GetClientHealth(i), zf_lastHealth[i]);
          zf_lastHealth[i] = max(1, zf_lastHealth[i]);
          SetEntityHealth(i, zf_lastHealth[i]);
        }
      }
      
      //
      // Handle rate of fire calculations.
      // 
      if(zf_lastAttack[i] == 1)
      {
        zf_lastAttack[i] = 0;
        if((getStat(i, ZFStatRof) != 0) && !isWieldingAuto(i))
        {
          setWeaponRof(activeWeapon(i), getStat(i, ZFStatRof));
        }        
      }
    
      //
      // Handle zombie logic.
      //
      if(isZom(i))
      {
        // Handle Perk (Z): SICK
        if(usingZomPerk(i, ZF_PERK_SICK))
        {
          for(new j = 0; j < ZF_SICK_MAX_ITEMS; j++)
          {
            if(validItem(i, j))
            {
              // Check for collision for projectiles only.
              if(getItemMetadata(zf_item[i][j]) == 0)
              {
                if(doItemCollide(zf_item[i][j], zf_perkPos[i][j], collidePos, collideVec))
                {
                  removeItem(i, j);
                  zf_item[i][j] = doItemImpact(i, collidePos, collideVec, {100, 200, 100});
                  setItemMetadata(zf_item[i][j], 1);
                  fxBits(zf_item[i][j]);
                }

                getEntityPos(zf_item[i][j], zf_perkPos[i][j]);
              }
            }
          }
        }

        // Handle Perk (Z): TARRED
        else if(usingZomPerk(i, ZF_PERK_TARRED))
        {
          for(new j = 0; j < ZF_TARRED_MAX_ITEMS; j++)
          {
            if(validItem(i, j))
            {
              // Check for collision for projectiles only.
              if(getItemMetadata(zf_item[i][j]) == 0)
              {
                if(doItemCollide(zf_item[i][j], zf_perkPos[i][j], collidePos, collideVec))
                {
                  removeItem(i, j);
                  zf_item[i][j] = doItemImpact(i, collidePos, collideVec, {25, 25, 25});
                  setItemMetadata(zf_item[i][j], 1);
                  fxBits(zf_item[i][j]);
                }
                
                getEntityPos(zf_item[i][j], zf_perkPos[i][j]);
              }
            }
          }
        }
        
        // Handle Perk (Z): THIEVING
        else if(usingZomPerk(i, ZF_PERK_THIEVING))
        {
          if(zf_perkState[i] > 0)
          {
            doThievingLimit(i);
          }
        }
        
        // Disable Spy disguises.
        if(isSpy(i) && TF2_IsPlayerInCondition(i, TFCond_Disguised)) 
        {
          if(TF2_IsPlayerInCondition(i, TFCond_Disguised)) TF2_RemovePlayerDisguise(i);
        }
      } // isZom(i)
    } // Client in game and alive.
  } // for i
}

public perk_OnMapStart()
{ 
  utilFxPrecache(); 
  resetAllClients();
}

public perk_OnMapEnd()
{
  resetAllClients();
}

public perk_OnClientConnect(client)
{
  resetClient(client);
  if(prefGet(client, PerkSelectMode) > 1)
    prefSet(client, PerkSelectMode, 0);
}

public perk_OnClientDisconnect(client)
{
  resetClient(client);
}

public perk_OnRoundStart()
{
  resetAllClients();
 
  //
  // Handle ZF Mode Selection
  //
  zf_perkMode = zf_perkPendingMode;
  
  //
  // Set Crippling backstab mode.
  //
  zf_crippleMode = GetConVarInt(zf_cvCripple);
  if (zf_crippleMode == 0) PrintToChatAll("\x05[ZF]\x01 Crippling backstab is currently disabled. Type !tip 9 into chat for more info.");
  else if (zf_crippleMode == 1) PrintToChatAll("\x05[ZF]\x01 Crippling backstab is enabled. Type !tip 9 into chat for more info.");
  else if (zf_crippleMode == 2) PrintToChatAll("\x05[ZF]\x01 Stunning backstab is enabled. Type !tip 9 into chat for more info.");
  
  //
  // Set Pow! stun mode.
  //
  zf_powStunMode = GetConVarBool(zf_cvPowStun);
  
  //
  // Reset perk select mode.
  //
  for(new i = 1; i <= MaxClients; i++)
    prefSet(i, PerkSelectMode, 0);
        
  //
  // Select random team perks.
  //
  if(zf_perkMode == 2)
  {
    new validSurPerkCount = 0;
    new validZomPerkCount = 0;   
    decl validSurPerks[TOTAL_SUR_PERKS];
    decl validZomPerks[TOTAL_ZOM_PERKS];
       
    for(new i = 1; i < TOTAL_SUR_PERKS; i++)
      if(surPerkEnabled(i))
        validSurPerks[validSurPerkCount++] = i;
    zf_perkRandSurPerk = (validSurPerkCount == 0) ? ZF_PERK_NONE : validSurPerks[GetRandomInt(0, validSurPerkCount - 1)];

    for(new i = 1; i < TOTAL_ZOM_PERKS; i++)
      if(zomPerkEnabled(i))
        validZomPerks[validZomPerkCount++] = i;
    zf_perkRandZomPerk = (validZomPerkCount == 0) ? ZF_PERK_NONE : validZomPerks[GetRandomInt(0, validZomPerkCount - 1)];
  }
}

public perk_OnGraceEnd()
{
  for(new i = 1; i <= MaxClients; i++)
  {
    //
    // Handle survivor logic. 
    // Survivors must be alive, otherwise they will respawn as a zombie.
    //
    if(validLivingSur(i))
    {
      // Handle Perk (S): FRIEND
      // + Select random friend unless friend already selected.
      if(usingSurPerk(i, ZF_PERK_FRIEND))
      {
        if(zf_perkState[i] == 0)
          doFriendSelect(i);
      }
    }
    
    //
    // Handle zombie logic.
    //
    else if(validZom(i))
    {
      // Handle Perk (Z): MARKED
      if(usingZomPerk(i, ZF_PERK_MARKED))
        doMarkedSelect(i);
    }
  }
}

public perk_OnRoundEnd()
{    
  resetAllClients();
}

////////////////////////////////////////////////////////////
//
// Perk Event Logic, Entity Events
//
////////////////////////////////////////////////////////////
public perk_OnEntityCreated(entity, const String:classname[])
{
  if(StrEqual(classname, "env_sprite"))
    SDKHook(entity, SDKHook_Spawn, perk_OnEntitySpawn);
}

public perk_OnEntitySpawn(entity)
{
  // TODO consider use of m_hEffectEntity for sprites to further filter?
  SDKHook(entity, SDKHook_SetTransmit, perk_OnSetTransmit);
}

public Action:perk_OnSetTransmit(entity, client)
{
  for(new i = 1; i <= MaxClients; i++)
  {
    if(entity == zf_icon[client][i][ICON_SPR]) return Plugin_Continue;
  }
  return Plugin_Handled;
}

public perk_OnCharitableGiftTouched(entity, other)
{
  static String:zf_statStr[ZFStat][16] = { "Attack", "Crit", "Defense", "Rate of Fire", "Speed", "Regen" };
  
  //
  // Determine gift owner.
  //
  new giftOwner = -1;  
  new giftIndex = -1;
  for(new i = 1; i <= MaxClients; i++)
  {
    for(new j = 0; j < ZF_CHARITABLE_MAX_ITEMS; j++)
      if(zf_item[i][j] == entity)
      {
        giftOwner = i;
        giftIndex = j;
      }
  }
   
  // 
  // Handle gift bonus generation and pickup.
  // + Gift owner can't pick up gift.
  // + Other survivors receive stat bonus.
  //
  if(validLivingClient(other))
  {
    if(other == giftOwner) return;
      
    // Calculate gift bonus.
    new randStat = GetRandomInt(1, 3);
    decl statLimit;
    if(randStat == 1)
    {
      randStat = 0; // Attack
      statLimit = ZF_CHARITABLE_GIFT_ATTACK_LIM;
    }
    else if(randStat == 2)
    {
      randStat = 2; // Defense
      statLimit = ZF_CHARITABLE_GIFT_DEFENSE_LIM;
    }
    else
    {
      randStat = 5; // Regen
      statLimit = ZF_CHARITABLE_GIFT_REGEN_LIM;
    }
    new Float:randPct = GetRandomFloat(ZF_CHARITABLE_GIFT_MIN_PCT, 1.0);
    
    // Apply gift bonus.
    if(isSur(other))
    {
      // Apply bonus to recipient.
      new otherBonus = RoundToCeil(randPct * (statLimit - (zf_stat[other][ZFStat:randStat][ZFStatTypePerm] + zf_stat[other][ZFStat:randStat][ZFStatTypeTemp])));
      if(otherBonus > 0)
      {
        PrintHintText(other, "%s bonus of %d!", zf_statStr[ZFStat:randStat], otherBonus);
        addStatTempToLimit(other, ZFStat:randStat, randPct, statLimit, ZF_CHARITABLE_GIFT_DURATION);
      }
      // Apply bonus to and heal owner.
      addHealth(giftOwner, ZF_CHARITABLE_GIFT_HEALTH, true);
      new selfBonus = RoundToCeil(randPct * ZF_CHARITABLE_BONUS_SELF * (statLimit - (zf_stat[giftOwner][ZFStat:randStat][ZFStatTypePerm] + zf_stat[giftOwner][ZFStat:randStat][ZFStatTypeTemp])));
      if(selfBonus > 0)
      {
        PrintHintText(giftOwner, "%s bonus of %d!", zf_statStr[ZFStat:randStat], selfBonus);
        addStatTempToLimit(giftOwner, ZFStat:randStat, randPct * ZF_CHARITABLE_BONUS_SELF, statLimit, ZF_CHARITABLE_GIFT_DURATION);
      }
    }
    
    fxExplosionParty(entity);     
    removeItem(giftOwner, giftIndex);
  }
}

////////////////////////////////////////////////////////////
//
// Perk Event Logic, Player Gameplay Events
//
////////////////////////////////////////////////////////////
public Action:OnPlayerRunCmd(client, &buttons, &impulse, Float:vel[3], Float:angles[3], &weapon) 
{ 
  new prevButtons = buttons;
  
  if(isSur(client))
  {
    // Handle Perk (S): NINJA
    // + Increase jump height.
    if(usingSurPerk(client, ZF_PERK_NINJA))
    {
      if((buttons & IN_JUMP) && !(zf_lastButtons[client] & IN_JUMP))
      {
        if(isGrounded(client) && !isDazed(client) && !isCharging(client))
        {
          if(zf_perkState2[client] == 0)
          {
            fxJump(client, ZF_NINJA_FORCE, true); 
            fxPuffSmall(client);
            zf_perkState2[client] = ZF_NINJA_JUMP_COOLDOWN;
          }
          else PrintHintText(client,"High jump cools down in %d seconds.",zf_perkState2[client]);
        }
      }
    }
    // Handle Engineer rules
    // + Cannot move buildings.
    if(isEngineer(client) && (buttons & IN_ATTACK2) && (isWielding(client, slotWeaponId(client, 0)) || isWielding(client, slotWeaponId(client, 1)) || isWielding(client, slotWeaponId(client, 2))))
    {
      buttons &= ~IN_ATTACK2;
      if(!(zf_lastButtons[client] & IN_ATTACK2)) PrintHintText(client, "Buildings can't be picked up.");
    }
  }
  else if(isZom(client))
  {
    // Handle Perk (Z): COMBUSTIBLE
    if(usingZomPerk(client, ZF_PERK_COMBUSTIBLE))
    {
      if(isScout(client) && (buttons & IN_ATTACK) && isWielding(client, ZFWEAP_BONK))
      {
        buttons &= ~IN_ATTACK;
        if(!(zf_lastButtons[client] & IN_ATTACK)) PrintHintText(client, "Can't drink Bonk! when using Combustible.");      
      }
      
      if(isSpy(client) && (buttons & IN_ATTACK2))
      {
        buttons &= ~IN_ATTACK2;
        if(!(zf_lastButtons[client] & IN_ATTACK2)) PrintHintText(client, "Can't cloak when using Combustible.");
      }
    }
    
    // Handle Perk (Z): SCORCHING
    else if(usingZomPerk(client, ZF_PERK_SCORCHING))
    {
      if(isScout(client) && (buttons & IN_ATTACK) && isWielding(client, ZFWEAP_BONK))
      {
        buttons &= ~IN_ATTACK;
        if(!(zf_lastButtons[client] & IN_ATTACK)) PrintHintText(client, "Can't drink Bonk! when using Scorching.");      
      }
    }    
    // Handle Perk (Z): SICK
    else if(usingZomPerk(client, ZF_PERK_SICK))
    {
      if(isScout(client) && (buttons & IN_ATTACK) && isWielding(client, ZFWEAP_BONK))
      {
        buttons &= ~IN_ATTACK;
        if(!(zf_lastButtons[client] & IN_ATTACK)) PrintHintText(client, "Can't drink Bonk! when using Sick.");      
      }
    }
  }
  
  // Save buttons for next call.
  zf_lastButtons[client] = prevButtons;
  return Plugin_Continue;
}

public perk_OnCalcIsAttackCritical(client)
{
  // DEBUG
  //PrintToChatAll("[ZF] CalcCrit (%d, slot %d)", client, activeWeaponSlot(client));
  
  if(validLivingSur(client))
  {
    // Handle Perk (S): ZENLIKE
    if(usingSurPerk(client, ZF_PERK_ZENLIKE))
    {
      CreateTimer(0.1, perk_tZenlikeAttack, client, TIMER_FLAG_NO_MAPCHANGE);
    }
  }
  
  // Handle general RoF logic.
  zf_lastAttack[client] = 1;
}

public Action:perk_OnFenceTakeDamage(victim, &attacker, &inflictor, &Float:damage, &damagetype)
{
//    // DEBUG
//    decl String:inflictorClass[32];
//    GetEdictClassname(inflictor, inflictorClass, sizeof(inflictorClass));
//    PrintToChatAll("\x05[ZF DEBUG]\x01 Vic %d, Att %d, Inf %d (%s), Dmg %f, DTp %x", victim, attacker, inflictor, inflictorClass, damage, damagetype);

  new fenceOwner = -1;
  new fenceIndex = -1;
  new fenceHP;
  new fenceFx;
  new Float:off[3];
  
  //
  // Determine fence owner and index.
  //
  for(new i = 1; i <= MaxClients; i++)
  {
    for(new j = 0; j < CARPENTER_MAX_ITEMS; j++)
    {
      if(victim == zf_item[i][j])
      {
        fenceOwner = i;
        fenceIndex = j;
        fenceHP = getItemMetadata(zf_item[i][j]);
        fenceFx = (fenceHP * 255) / CARPENTER_BARRICADE_HEALTH;
      }
    }
  }
  
  //
  // Adjust fence health.
  //
  if(fenceOwner != -1)
  {
    fenceHP -= RoundToCeil(damage);
    if(fenceHP <= 0)
    {
      // Barricade destruction effects
      off[2] -= 120.0; // Adjust for ZFMDL_FENCE
      fxCreateParticle(ZFPART_PUFFBIG, victim, AttachNone, 4.0, off); 
      fxCreateSoundToAll(ZFSND_WOOD_HIT[GetRandomInt(2,3)], victim);
        
      removeItem(fenceOwner, fenceIndex);
    }
    else
    {     
      setItemMetadata(zf_item[fenceOwner][fenceIndex], fenceHP);
      SetEntityRenderMode(zf_item[fenceOwner][fenceIndex], RENDER_TRANSCOLOR);
      SetEntityRenderColor(zf_item[fenceOwner][fenceIndex], 255, fenceFx, fenceFx, 255); 
    }
  }
  else
  {
    // Remove fence.
    LogError("[ZF] - perk_OnFenceTakeDamage() - Invalid owner of fence (%d)", victim);
    AcceptEntityInput(victim, "Kill");
  }
}

public Action:perk_OnTakeDamage(victim, &attacker, &inflictor, &Float:damage, &damagetype)
{ 
  // DEBUG
  //decl String:inflictorClass[32];
  //GetEdictClassname(inflictor, inflictorClass, sizeof(inflictorClass));
  //PrintToChatAll("\x05[ZF DEBUG]\x01 Vic %d, Att %d, Inf %d (%s), Dmg %f, DTp %x", victim, attacker, inflictor, inflictorClass, damage, damagetype);

  new localAttAdjust = 0;
  new localDefAdjust = 0;
  
  //
  // Ignore perk damage events for ubered victims.
  // 
  if(validClient(victim) && isUbered(victim)) return Plugin_Continue;
  //
  // Heavy Pow taunts
  // + Do 100 damage and stun for 8 seconds.
  //
  if(validZom(attacker) && validSur(victim))
  {
    if(isHeavy(attacker) && (damagetype == 2))
    {
      if(zf_powStunMode == true)
      {
        damage = ZF_POW_DAMAGE;
        TF2_StunPlayer(victim, ZF_POW_STUNTIME, 1.0, TF_STUNFLAGS_BIGBONK, attacker);
        PrintHintText(attacker, "You POW'D %N! %d second stun.", victim, RoundToCeil(ZF_POW_STUNTIME));
        PrintHintText(victim, "%N POW'D you! %d second stun.", attacker, RoundToCeil(ZF_POW_STUNTIME));
      }
      return Plugin_Changed;
    }
  }
  //
  // Attribute poison damage.
  //
  if(damagetype & ZF_DMGTYPE_POISON)
  {
    if(validClient(victim) && (validSur(zf_lastPoison[victim]) || validZom(zf_lastPoison[victim])))
    {
      attacker = zf_lastPoison[victim];      
    }
    return Plugin_Changed;
  }
  
  //
  // Calculate attack (from attacker) and defense (from victim) damage adjustments.
  //
  if(validLivingClient(attacker) && (victim != attacker))
    localAttAdjust = getStat(attacker, ZFStatAtt);
  if(validLivingClient(victim) && (victim != attacker))
    localDefAdjust = getStat(victim, ZFStatDef);
  //
  // Reduce sentry attack bonuses by half.
  //
  if(entIsSentry(inflictor) && validSur(attacker))
  {
    zf_sentLastAmmo[attacker]--;
    if(localAttAdjust > 0) localAttAdjust /= 2;
  }
  //
  // Survivor is taking damage from zombie.
  //
  if(validSur(victim) && validZom(attacker))
  {
    //
    // Melee attacks.    
    //
    if(attackWasMelee(attacker, inflictor, damagetype))
    {
      // Handle Perk (S): COWARDLY
      // + Scare victim on melee hit.
      if(usingSurPerk(victim, ZF_PERK_COWARDLY))
      {
        if(zf_perkTimer[victim] == 0)
        {
          zf_perkTimer[victim] = ZF_COWARDLY_DURATION_SCARED + ZF_COWARDLY_DURATION_COOLDOWN;
  
          addStat(victim, ZFStatDef, ZFStatTypeCond, ZF_COWARDLY_DEFENSE);
          addStat(victim, ZFStatSpeed, ZFStatTypeCond, ZF_COWARDLY_SPEED);
  
          PrintHintText(victim, "You've been hit! Run!");
          fxYikes(victim);
          
          //damage = 0.0;
        }          
      }
      // Handle Perk (S): NINJA
      // + Activate decoy on melee hit.
      else if(usingSurPerk(victim, ZF_PERK_NINJA))
      {
        if(zf_perkState[victim] == 1)
        {
          zf_perkState[victim] = 0;
          CreateTimer(float(ZF_NINJA_DURATION_DECOY_DECAY), perk_tNinjaDecoyPoof, victim, TIMER_FLAG_NO_MAPCHANGE);
  
          doNinjaDecoyPlace(victim);        
          fxCreateSoundToClient(ZFSND_BOING, victim);
          fxCreateSoundToClient(ZFSND_BOING, attacker);          
          
          PrintHintText(victim, "Decoy activated.");
          PrintHintText(attacker, "You've been fooled by a decoy.");
          
          damage = 0.0;      
        }
      }
      // Handle Perk (S): TURTLE
      // + Block backstabs.
      else if(usingSurPerk(victim, ZF_PERK_TURTLE))
      {
        if(attackWasBackstab(attacker, inflictor, damagetype))
        {
          TF2_StunPlayer(attacker, ZF_TURTLE_STUN_DURATION, 0.0, TF_STUNFLAGS_NORMALBONK, victim);        
          PrintHintText(attacker, "Your backstab was blocked!");
          
          fxSpark(victim);   
          PrintHintText(victim, "You blocked a backstab!");
     
          damage = 0.0;
        } 
      }
      
      // Handle Perk (S): WISE
      // + Increase defense with each melee hit.
      else if(usingSurPerk(victim, ZF_PERK_WISE))
      {
        if(zf_stat[victim][ZFStatDef][ZFStatTypePerm] < ZF_WISE_DEFENSE_LIM)
          addStatToLimit(victim, ZFStatDef, ZFStatTypePerm, ZF_WISE_DEFENSE_PCT, ZF_WISE_DEFENSE_LIM);
      }

      // Handle Perk (Z): HORRIFYING
      // + Apply penalties with each melee hit.
      if(usingZomPerk(attacker, ZF_PERK_HORRIFYING))
      {
        addStatTempToLimit(victim, ZFStatAtt, HORRIFYING_PENALTY_PCT, HORRIFYING_ATTACK_LIM, HORRIFYING_DURATION);
        addStatTempToLimit(victim, ZFStatDef, HORRIFYING_PENALTY_PCT, HORRIFYING_DEFENSE_LIM, HORRIFYING_DURATION);       
      }
      // Handle Perk (Z): MARKED
      // + Adjust damage on/off mark with each melee hit.
      else if(usingZomPerk(attacker, ZF_PERK_MARKED))
      {
        if(zf_perkState[attacker] == victim)
          localAttAdjust += ZF_MARKED_ATTACK_ON_MARK;
        else
          localAttAdjust += ZF_MARKED_ATTACK_OFF_MARK;
      }
      // Handle Perk (Z): SCORCHING
      // + Ignite victim on melee hit.
      else if(usingZomPerk(attacker, ZF_PERK_SCORCHING))
      {
        if(!isPyro(victim) && !isUbered(victim)) TF2_IgnitePlayer(victim, attacker);
        // Nullify bonuses for using Sun-On-A-Stick while Scorching. (still crits but does non-crit damage)
        if(isWielding(attacker,ZFWEAP_SUNONASTICK)) damage /= 3;   
      }
      // Handle Perk (Z): TARRED
      // + Slow victim on melee hit.
      else if(usingZomPerk(attacker, ZF_PERK_TARRED))
      {
        addStatTempStack(victim, ZFStatSpeed, ZF_TARRED_SPEED_MELEE, ZF_TARRED_DURATION_MELEE);
      }
      // Handle Perk (Z): THIEVING
      // + Steal from victim with each melee hit.
      else if(usingZomPerk(attacker, ZF_PERK_THIEVING))
      {
        new slot = activeWeaponSlot(victim);
        new weapon = slotWeaponId(victim, slot);
        if(slot == 0) // Primary weapon
        {
          // Steal metal from Widowmaker users and steal weapon if empty.
          if(slotWeaponId(victim, slot) == ZFWEAP_WIDOWMAKER)
          {
            if((getMetal(victim) - 40) < 30) doThievingSteal(attacker, victim, slot);
            subMetal(victim, 40);
          }
          // Steal energy from Energy weapons (Mangler, Pomson) and steal weapon if empty.
          else if(getWeaponData(weapon) & F_ISENERGY > 0)
          {
            new Float:subEnergy = 100.0 / maxResAmmo(victim, slot);
            new weaponEnt = GetPlayerWeaponSlot(victim, slot);
            new Float:oldEnergy = GetEntPropFloat(weaponEnt, Prop_Send, "m_flEnergy");
            new Float:newEnergy = oldEnergy - subEnergy;
            if(newEnergy >= subEnergy) SetEntPropFloat(weaponEnt, Prop_Send, "m_flEnergy", newEnergy);
            else doThievingSteal(attacker, victim, slot);
          }
          // Steal ammo from conventional weapons, and steal weapon if empty.
          else
          {
            if(isSpy(attacker)) subResAmmoPct(victim, slot, ZF_THIEVING_AMMOPCT_SPY);
            else subResAmmoPct(victim, slot, ZF_THIEVING_AMMOPCT);
            if(getResAmmoPct(victim, slot) == 0.0) doThievingSteal(attacker, victim, slot);
          }
        }
        else if(slot == 1) // Secondary weapon
        {
          // Steal energy from Energy weapons (Bison).
          if(getWeaponData(weapon) & F_ISENERGY > 0)
          {
            new Float:subEnergy = 100.0 / maxResAmmo(victim, slot);
            new weaponEnt = GetPlayerWeaponSlot(victim, slot);
            new Float:oldEnergy = GetEntPropFloat(weaponEnt, Prop_Send, "m_flEnergy");
            new Float:newEnergy = oldEnergy - subEnergy;
            SetEntPropFloat(weaponEnt, Prop_Send, "m_flEnergy", fMax(newEnergy, 0.0));
          }
          // Steal ammo from conventional weapons and Ubercharge from Mediguns.
          else
          {
            if(isMedic(victim)) subUber(victim, ZF_THIEVING_UBERPCT);
            if(isSpy(attacker)) subResAmmoPct(victim, slot, ZF_THIEVING_AMMOPCT_SPY);
            else subResAmmoPct(victim, slot, ZF_THIEVING_AMMOPCT);
          }
        }
        else if(slot == 2) // Melee
        {
          subMetal(victim, ZF_THIEVING_METAL);
        }
  
        // Effects
        fxSpark(victim);       
      }
      // Handle Perk (Z): TOXIC
      // + Poison victim on melee hit.
      else if(usingZomPerk(attacker, ZF_PERK_TOXIC))
      {
        if(!getCond(victim, ZFCondPoisoned)) addCond(victim, ZFCondPoisoned, ZF_TOXIC_DURATION_POISON);
        else addCond(victim, ZFCondPoisoned, RoundToFloor(ZF_TOXIC_DURATION_POISON / 2.0));
        zf_lastPoison[victim] = attacker;
      }
    }
    //
    // Non-melee attacks.
    //      
    else
    {
      // Handle Perk (Z): ROAR
      // + Handle env_explosion damage (i.e. roar).
      if(usingZomPerk(attacker, ZF_PERK_ROAR))
      {
        if(attackWasEnvExplosion(damagetype))
        {     
          decl Float:attPos[3];
          decl Float:vicPos[3];
          GetClientAbsOrigin(attacker, attPos);
          GetClientAbsOrigin(victim, vicPos);
   
          new Float:factor = fMax(0.0, 1.0 - GetVectorDistance(attPos, vicPos, false) / float(ZF_ROAR_RADIUS));        
          new Float:force = factor * (isHeavy(attacker) ? ZF_ROAR_FORCE_HEAVY : ZF_ROAR_FORCE);
          new duration = RoundToCeil(factor * (isHeavy(attacker) ? ZF_ROAR_DURATION_HEAVY : ZF_ROAR_DURATION));
             
          fxKnockback(victim, attacker, force);
          addStatTempToLimit(victim, ZFStatDef, ZF_ROAR_DEFENSE_PCT, ZF_ROAR_DEFENSE_LIM, duration);
        }
      }
      // Handle Perk (Z): SCORCHING
      // + Negate innate attack penalty on scorching afterburn.
      else if(usingZomPerk(attacker, ZF_PERK_SCORCHING))
      {
        if(attackWasFire(damagetype) && IsPlayerAlive(attacker))
          localAttAdjust -= ZF_SCORCHING_ATTACK; 
      }
      // Handle Perk (Z): SICK
      // + Flag affected Survivors (damage and effects dealt later).
      else if(usingZomPerk(attacker, ZF_PERK_SICK))
      {
        if(attackWasEnvExplosion(damagetype))
        {
          damage = 0.1;
          zf_lastSick[victim] = attacker;
          // Damage code handled separately to prevent stacking.
        }
      }
      // Handle Perk (Z): TARRED
      // + Handle env_explosion damage (i.e. oil slick proximity).
      else if(usingZomPerk(attacker, ZF_PERK_TARRED))
      {
        if(attackWasEnvExplosion(damagetype))
        {        
          addStatTempStack(victim, ZFStatSpeed, ZF_TARRED_SPEED_SLICK, ZF_TARRED_DURATION_SLICK);
          damage = 0.0;
        }
      }
      // Handle Perk (Z): THIEVING
      // + Negate innate attack penalty on non-melee attacks.
      else if(usingZomPerk(attacker, ZF_PERK_THIEVING))
      {
        //Check damagetype for bullet instead of isWieldingBullet?
        if(isWieldingBullet(attacker) && validLivingZom(attacker)) localAttAdjust -= ZF_THIEVING_ATTACK;          
      }        
    }
  }

  //
  // Survivor is taking damage from non-zombie.
  //
  else if(validSur(victim) && !validZom(attacker))
  {
    // Handle Perk (S): JUGGERNAUT 
    // + No self damage, no fall damage, handle fall damage impact.
    if(usingSurPerk(victim, ZF_PERK_JUGGERNAUT))
    {
      if(victim == attacker)
        damage = 0.0;
      if(attackWasSelfFall(inflictor, damagetype))
      {
        applyDamageRadialAtClient(victim, 1, ZF_JUGGERNAUT_RADIUS); 
        fxPuffBig(victim);
        damage = 0.0;
      }
    }
    
    // Handle Perk (S): NINJA
    // + Reduced fall damage.
    else if(usingSurPerk(victim, ZF_PERK_NINJA))
    {
      if(attackWasSelfFall(inflictor, damagetype))
      {
        localDefAdjust += ZF_NINJA_FALLDMG_RESIST;
      }        
    }
  }
  
  //
  // Zombie is taking damage from survivor.
  //
  else if(validZom(victim) && validSur(attacker))
  {
    //
    // Melee attacks.
    //
    if(attackWasMelee(attacker, inflictor, damagetype))
    {
      // Handle Perk (S): JUGGERNAUT
      // + Knockback victim with melee hit.
      if(usingSurPerk(attacker, ZF_PERK_JUGGERNAUT))
      {
        fxKnockback(victim, attacker, ZF_JUGGERNAUT_FORCE);       
      }
      // Handle Perk (Z): TARRED
      // + Apply penalties with each melee hit.
      if(usingZomPerk(victim, ZF_PERK_TARRED))
      {
        if(!isUbered(attacker))
        {
          addStatTempStack(attacker, ZFStatRof, ZF_TARRED_ROF, ZF_TARRED_DURATION_MELEE);
          addStatTempStack(attacker, ZFStatSpeed, ZF_TARRED_SPEED_MELEE, ZF_TARRED_DURATION_MELEE);
        }
      }
      // Handle Perk (Z): TOXIC
      // + Poison attacker who is attacking with melee.
      else if(usingZomPerk(victim, ZF_PERK_TOXIC))
      {
        if(!isUbered(attacker))
        {
          if(!getCond(attacker, ZFCondPoisoned)) addCond(attacker, ZFCondPoisoned, ZF_TOXIC_DURATION_POISON);
          else addCond(attacker, ZFCondPoisoned, RoundToFloor(ZF_TOXIC_DURATION_POISON / 2.0));
          zf_lastPoison[attacker] = victim;
        }
      }
    }
    //
    // Non-melee attacks.
    //
    else
    {
      // Handle Perk (S): JUGGERNAUT
      // + Handle env_explosion damage (i.e. fall damage impact).
      if(usingSurPerk(attacker, ZF_PERK_JUGGERNAUT))
      {
        if(attackWasEnvExplosion(damagetype))
        {
          TF2_StunPlayer(victim, ZF_JUGGERNAUT_STUN_DURATION, ZF_JUGGERNAUT_STUN_SLOWDOWN, TF_STUNFLAGS_SMALLBONK, attacker);      
          fxKnockback(victim, attacker, ZF_JUGGERNAUT_FORCE);
        }
      }
      // Handle Perk (S): NONLETHAL
      // + Apply innate bullet damage attack penalty.
      else if(usingSurPerk(attacker, ZF_PERK_NONLETHAL))
      {
        if(attackWasBullet(attacker, inflictor))
        {
          localAttAdjust += ZF_NONLETHAL_ATTACK_BULLET;
        }
      }
      
      // Handle Perk (Z): SCORCHING
      // + No fire damage.
      if(usingZomPerk(victim, ZF_PERK_SCORCHING))
      {
        if(!(validSur(attacker) && isMedic(attacker)) && attackWasFire(damagetype))
          damage = 0.0;
      }        
    }
  }
    
  //
  // Zombie is taking damage from non-survivor.
  //
  else if(validZom(victim) && !validSur(attacker))
  {
    // Handle Perk (Z): LEAP
    // + No fall damage.
    if(usingZomPerk(victim, ZF_PERK_LEAP))
    {
      if(attackWasSelfFall(inflictor, damagetype))
        damage = 0.0;
    }
    // Handle Perk (Z): SCORCHING
    // + No fire damage.
    else if(usingZomPerk(victim, ZF_PERK_SCORCHING))
    {
      if(attackWasFire(damagetype))
        damage = 0.0;
    }
  }
  
  //
  // New crippling backstab
  //
  if((damage > 0.0) && validSur(victim) && validZom(attacker) && (localAttAdjust > -100) && attackWasMelee(attacker, inflictor, damagetype))
  {
    if(zf_crippleMode == 0)
    {
      // Prevent silent backstab kills by YER.
      if((isWielding(attacker, ZFWEAP_ETERNALREWARD) || isWielding(attacker, ZFWEAP_WANGAPRICK)) && !getTF2ItemsState() && attackWasBackstab(attacker, inflictor, damagetype)) fxDeathScream(victim);
    }
    if(zf_crippleMode == 1)
    {
      if(!getCond(victim, ZFCondCrippled))
      {
        if(attackWasBackstab(attacker, inflictor, damagetype) && !hasRazorback(victim))
        {
          if(GetClientHealth(victim) >= ZF_CRIPPLE_MIN_PCT * clientMaxHealth(victim))
          {
            new Float:dmgMult = (100 + max(localAttAdjust, -100)) * (100 - min(localDefAdjust, 100)) / 10000.0;
            new Float:baseDamage = float(GetClientHealth(victim) - ZF_CRIPPLE_BASEHEALTH) * dmgMult;
            damage = fMin(float(GetClientHealth(victim) - ZF_CRIPPLE_MINHEALTH), baseDamage);
            damage = fMax(float(GetClientHealth(victim) - ZF_CRIPPLE_MAXHEALTH), damage);
            localAttAdjust = 0;
            localDefAdjust = 0;
            new crippledHealth = GetClientHealth(victim) - RoundToFloor(damage);
            damage /= 3.0;
            // DEBUG
            //PrintToChatAll("\x05[ZF DEBUG]\x01 Cripple - victim %d, attacker %d, localAtt %d, crippledHealth %d, damage %f", victim, attacker, localAttAdjust, crippledHealth, damage);
            zf_lastHealth[victim] = crippledHealth;
            localAttAdjust = 0;
            // Crippled, Tracked conditions
            addCond(victim, ZFCondCrippled, ZF_CRIPPLE_DURATION);
            addCond(victim, ZFCondTracked, ZF_CRIPPLE_DURATION);
            // Notifications and Aesthetics
            // + Add a point for cripple. (bugged)
            //new score = GetEntProp(attacker, Prop_Send, "m_iBackstabs");
            //SetEntProp(attacker, Prop_Send, "m_iBackstabs", score + 1);
            PrintHintText(attacker, "You have crippled %N!", victim);
            PrintToChat(victim, "\x05[ZF]\x01 You have been CRIPPLED! For %d seconds you have reduced maximum health and glow to all players.", ZF_CRIPPLE_DURATION);
            fxDeathScream(victim);
            fxBloodBurst(victim);
            fxBloodSpray(victim);
            setGlow(victim, true);
          }
          else
          {
            // Kill victims with less health than Cripple damage threshold.
            damage = float(GetClientHealth(victim));
            if((isWielding(attacker, ZFWEAP_ETERNALREWARD) || isWielding(attacker, ZFWEAP_WANGAPRICK)) && !getTF2ItemsState) fxDeathScream(victim);
            localAttAdjust = 0;
            localDefAdjust = 0;
          }
        }
      }
      // Cripple victims can't be 1-hit if they have full (penalised) health, except by crits/minicrits.
      else if((damage * ((100 + localAttAdjust) * (100 - localDefAdjust) / 10000) >= GetClientHealth(victim)) && (GetClientHealth(victim) >= (zf_lastHealth[victim] - 5)))
      {
        damage = float(GetClientHealth(victim) - 10);
        localAttAdjust = 0;
        localDefAdjust = 0;
      }
    }
    else if(zf_crippleMode == 2)
    {
      if((attackWasBackstab(attacker, inflictor, damagetype) && !hasRazorback(victim)) || (isSpy(attacker) && getCond(victim, ZFCondCrippled)))
      {
        if(localAttAdjust < -33) localAttAdjust = -33;
        new Float:stabdamage = 45.0 * (100 + localAttAdjust) * (100 - localDefAdjust) / 10000;
        new oldhealth = RoundToCeil(getHealthPct(victim) * clientMaxHealth(victim));
        new newhealth = RoundToCeil(oldhealth - stabdamage);
        if(newhealth > 0)
        {
          damage = 0.0;
          zf_lastHealth[victim] = GetClientHealth(victim);
          SDKHooks_TakeDamage(victim, attacker, attacker, stabdamage, DMG_GENERIC|DMG_PREVENT_PHYSICS_FORCE);
          TF2_StunPlayer(victim, 3.0, 1.0, TF_STUNFLAGS_BIGBONK|TF_STUNFLAG_NOSOUNDOREFFECT, attacker);
          PrintHintText(attacker, "You are incapacitating %N!", victim);
          PrintHintText(victim, "You are being incapacitated by %N!", attacker);
          new j = GetRandomInt(1,3);
          switch(j)
          {
            case 1: fxDeathScream(victim);
            case 2: fxDeathScream(victim);
            case 3: ClientCommand(victim, "voicemenu 2 0");
          }
          fxBloodBurst(victim);
          fxBloodSpray(victim);
          setGlow(victim, true);
          /*
          if(!getCond(victim, ZFCondCrippled)) // Add a point for the first stun. (bugged)
          {
            new score = GetEntProp(attacker, Prop_Send, "m_iBackstabs");
            SetEntProp(attacker, Prop_Send, "m_iBackstabs", score + 1);
          } */
          zf_cond[victim][ZFCondCrippled] = 3;
          zf_cond[victim][ZFCondTracked] = 3;
        }
        else 
        {
          if(isWielding(attacker,ZFWEAP_ETERNALREWARD)) fxDeathScream(victim);
          damage = Float:GetClientHealth(victim);
        }
      }
    }
  }
        
  // 
  // Adjust damage based on attacker attack bonus and victim defense bonus.
  //
  if(damage > 0.0)
  {
    // Cap attack and defense to prevent negative values.
    new Float:dmgFactor = (100 + max(localAttAdjust, -100)) * (100 - min(localDefAdjust, 100)) / 10000.0;    
    damage *= fMax(dmgFactor, 0.0);
    // DEBUG
    //if(validClient(attacker)) PrintToChat(attacker, "FinalDmg = %f", damage);
    // Skip FX if victim and attacker are on the same team.
    if((validSur(attacker) && validZom(victim)) || (validSur(victim) && validZom(attacker)))
    {
      // Handle special effects (crit, minicrit) for sufficient dmgFactor.
      if(dmgFactor >= 3.0)
      {
        if(validClient(attacker)) fxCreateSoundToClient(ZFSND_CRITXMIT, attacker);
        if(validClient(victim)) fxCreateSoundToClient(ZFSND_CRITRECV, victim);
      }
      else if(dmgFactor >= 1.35)
      {
        if(validClient(attacker)) fxCreateSoundToClient(ZFSND_CRITMINI, attacker);
        if(validClient(victim)) fxCreateSoundToClient(ZFSND_CRITMINI, victim);
      }
    }
  }
  return Plugin_Changed;  
}

public perk_OnTakeDamagePost(victim, attacker, inflictor, Float:damage, damagetype)
{
//   // DEBUG
//   decl String:inflictorClass[32];
//   GetEdictClassname(inflictor, inflictorClass, sizeof(inflictorClass));
//   PrintToChatAll("\x05[ZF DEBUG]\x01 Vic %d, Att %d, Inf %d (%s), Dmg %f, DTp %x", victim, attacker, inflictor, inflictorClass, damage, damagetype);
     
  //
  // Survivor is taking damage from zombie.
  //
  if(validSur(victim) && validZom(attacker))
  {
    // Handle Perk (Z): VAMPIRIC
    // + Leech health with each melee hit.
    if(usingZomPerk(attacker, ZF_PERK_VAMPIRIC))
    {
      if(attackWasMelee(attacker, inflictor, damagetype))
      {
        addHealth(attacker, RoundToCeil(damage * ZF_VAMPIRIC_HEALTHPCT));
        fxBloodBurst(victim);
      }
    }
  }
  //
  // Zombie is taking damage from survivor.
  //
  else if(validZom(victim) && validSur(attacker))
  {
    // Handle Perk (S): NONLETHAL
    // + Knockback victim on bullet-based hit.
    if(usingSurPerk(attacker, ZF_PERK_NONLETHAL))
    {
      if(attackWasBullet(attacker, inflictor))
      {
        fxKnockback(victim, attacker, (ZF_NONLETHAL_FORCE * damage));
      }
    }
    // Handle Perk (Z): RAGE
    // + End Rage effects immediately if below health threshold.
    if(usingZomPerk(victim, ZF_PERK_RAGE))
    {
      if((getHealthPct(victim) <= ZF_RAGE_HEALTHPCT_TOUSE) && zf_perkState[victim] == 1)
      {
        zf_perkState[victim] = 0;
        removeAura(victim);
        addStat(victim, ZFStatAtt, ZFStatTypeCond, -1 * ZF_RAGE_SPEED);
        addStat(victim, ZFStatAtt, ZFStatTypeCond, ZF_RAGE_ATTACK_PENALTY);
        PrintHintText(victim, "Rage has faded.");
      }
    }
  }
}

public perk_OnTouch(toucher, touchee)
{ 
  if(validLivingZom(toucher) && validLivingSur(touchee))
  {
    // Handle Perk (Z): SCORCHING
    // + Ignite touchee on touch.
    if(usingZomPerk(toucher, ZF_PERK_SCORCHING))
    {
      if(isOnFire(toucher) && !isPyro(touchee) && !isUbered(touchee))
        TF2_IgnitePlayer(touchee, toucher);
    }
  }
}

public perk_OnPlayerSpawn(client)
{
  if(validClient(client))
  { 
    //
    // Handle spawn menu presentation.
    //
    if(zf_perkMode == 0)
    {
      new js = prefGet(client, JoinState);
      if(validSur(client))
      {
        if((js & ZF_JOINSTATE_SUR) == 0)
        {
          DisplayMenu(zf_menuSurPerkList, client, MENU_TIME_FOREVER);
          prefSet(client, JoinState, (js | ZF_JOINSTATE_SUR));
        }
      }
      else if(validZom(client))
      {
        if((js & ZF_JOINSTATE_ZOM) == 0)
        {   
          DisplayMenu(zf_menuZomPerkList, client, MENU_TIME_FOREVER);
          prefSet(client, JoinState, (js | ZF_JOINSTATE_ZOM));         
        }
      }
    }

    //
    // Change perks if they were not selected during current game mode.
    //      
    if(prefGet(client, PerkSelectMode) != zf_perkMode)
    {      
      //
      // Clear perks.
      //
      if(zf_perkMode == 0)
      {
        prefSet(client, SurPendPerk, ZF_PERK_NONE);
        prefSet(client, ZomPendPerk, ZF_PERK_NONE);
        PrintToChat(client, "\x05[ZF]\x01 Perks have been cleared. You must reselect your perks.");
      }
      //
      // Select random perks.
      //
      else if(zf_perkMode == 1)
      {
        new validSurPerkCount = 0;
        new validZomPerkCount = 0;   
        decl validSurPerks[TOTAL_SUR_PERKS];
        decl validZomPerks[TOTAL_ZOM_PERKS];
           
        for(new i = 1; i < TOTAL_SUR_PERKS; i++)
          if(surPerkEnabled(i))
            validSurPerks[validSurPerkCount++] = i;
        if(validSurPerkCount == 0)
          validSurPerks[validSurPerkCount++] = 0;
    
        for(new i = 1; i < TOTAL_ZOM_PERKS; i++)
          if(zomPerkEnabled(i))
            validZomPerks[validZomPerkCount++] = i;
        if(validZomPerkCount == 0)
          validZomPerks[validZomPerkCount++] = 0;

        prefSet(client, SurPendPerk, validSurPerks[GetRandomInt(0, validSurPerkCount - 1)]);
        prefSet(client, ZomPendPerk, validZomPerks[GetRandomInt(0, validZomPerkCount - 1)]);
        PrintToChat(client, "\x05[ZF]\x01 Random perks: %s (Survivor) / %s (Zombie)", ZF_SURPERK_NAME[prefGet(client, SurPendPerk)], ZF_ZOMPERK_NAME[prefGet(client, ZomPendPerk)]);      
      }
      //
      // Use random team perks.
      //   
      else if(zf_perkMode == 2)
      {
        prefSet(client, SurPendPerk, zf_perkRandSurPerk);
        prefSet(client, ZomPendPerk, zf_perkRandZomPerk);
        PrintToChat(client, "\x05[ZF]\x01 Random team perks: %s (Survivors) vs. %s (Zombies)", ZF_SURPERK_NAME[zf_perkRandSurPerk], ZF_ZOMPERK_NAME[zf_perkRandZomPerk]); 
      }
      //
      // Use CVAR team perks.
      //
      else if(zf_perkMode == 3)
      {
        prefSet(client, SurPendPerk, zf_perkTeamSurPerk);
        prefSet(client, ZomPendPerk, zf_perkTeamZomPerk);
        PrintToChat(client, "\x05[ZF]\x01 CVAR team perks: %s (Survivors) vs. %s (Zombies)", ZF_SURPERK_NAME[zf_perkTeamSurPerk], ZF_ZOMPERK_NAME[zf_perkTeamZomPerk]);
      }
      prefSet(client, SurPerk, ZF_PERK_NONE);
      prefSet(client, ZomPerk, ZF_PERK_NONE);
      prefSet(client, PerkSelectMode, zf_perkMode);
    }
    
    //
    // Apply new perk if client changed teams or if desired perk
    // (accounting for those disabled) differs from current perk.
    // Account for perk limits (only during normal game mode).
    //
    new nextPerk = ZF_PERK_NONE;
    new bool:perkChange = false;
    new bool:teamChange = (GetClientTeam(client) != zf_lastTeam[client]);     
    if(isSur(client))
    {
      if(surPerkEnabled(prefGet(client, SurPendPerk)))
        nextPerk = prefGet(client, SurPendPerk);      
      else if(surPerkEnabled(prefGet(client, SurPerk)))
        nextPerk = prefGet(client, SurPerk);
      
      if((zf_perkMode == 0) && surPerkAtLimit(client, nextPerk))
      {
        PrintToChat(client, "\x05[ZF]\x01 Desired perk (%s) already at limit (%d).", ZF_SURPERK_NAME[nextPerk], zf_surPerksLimit[nextPerk]);
        nextPerk = ZF_PERK_NONE;
      }
        
      if(teamChange || (nextPerk != prefGet(client, SurPerk)))
      {
        perkChange = true;  
        prefSet(client, SurPerk, nextPerk);
      }
      prefSet(client, SurPendPerk, nextPerk);
    }
    else if(isZom(client))
    {      
      if(zomPerkEnabled(prefGet(client, ZomPendPerk)))
        nextPerk = prefGet(client, ZomPendPerk);      
      else if(zomPerkEnabled(prefGet(client, ZomPerk)))
        nextPerk = prefGet(client, ZomPerk);

      if((zf_perkMode == 0) && zomPerkAtLimit(client, nextPerk))
      {
        PrintToChat(client, "\x05[ZF]\x01 Desired perk (%s) already at limit (%d).", ZF_ZOMPERK_NAME[nextPerk], zf_zomPerksLimit[nextPerk]);
        nextPerk = ZF_PERK_NONE;
      }
                        
      if(teamChange || (nextPerk != prefGet(client, ZomPerk)))
      {
        // Notify marked victim if marker changes perk.
        if(usingZomPerk(client, ZF_PERK_MARKED))
        {
          if(zf_perkState[client] > 0 && IsValidEntity(zf_perkState[client]))
          {
            PrintHintText(zf_perkState[client], "You are no longer marked.");
            removeIcon(zf_perkState[client], client);
          }
        }
        
        perkChange = true;
        prefSet(client, ZomPerk, nextPerk);
      }  
      prefSet(client, ZomPendPerk, nextPerk);
    }

    //
    // Cleanup client state based on whether perk changed.
    //
    if(perkChange)
    {
      // State
      zf_lastAttack[client] = 0;
      zf_lastButtons[client] = 0;
      zf_lastHealth[client] = 0;
      zf_lastKiller[client] = 0;
      zf_lastPoison[client] = 0;
      zf_lastTeam[client] = GetClientTeam(client);
            
      // Logic
      zf_perkTimer[client] = 0;
      zf_perkState[client] = 0;
      zf_perkState2[client] = 0;
      for(new i = 0; i < 5; i++)
        for(new j = 0; j < 3; j++)
          zf_perkPos[client][i][j] = 0.0;
      zf_perkStr[client] = "";

      // FX
      removeAura(client);
      for(new i = 0; i < MaxClients; i++) if(zf_icon[client][i][ICON_SPR] != -1) removeIcon(client, i);
      removeItems(client);
      fxSetClientColor(client, 255, 255, 255, 255);
      setGlow(client, false);
            
      // Implement new bonuses and effects.
      resetClientStats(client);
      resetClientConds(client);
      updateClientPermStats(client);
      updateClientPermEffects(client);
    }
    else
    {      
      // State
      zf_lastAttack[client] = 0;
      zf_lastButtons[client] = 0;
      zf_lastHealth[client] = 0;
      zf_lastKiller[client] = 0;
      zf_lastPoison[client] = 0;
      zf_lastTeam[client] = GetClientTeam(client);
      
      // Bonuses
      resetClientStatType(client, ZFStatTypeCond);
      resetClientStatType(client, ZFStatTypeTemp);
      resetClientStatType(client, ZFStatTypeTempDuration);
      resetClientConds(client);
      
      // FX
      showAura(client);
      for(new i = 0; i < MaxClients; i++) if(zf_icon[client][i][ICON_SPR] != -1) showIcon(client, i);
      fxSetClientColor(client, 255, 255, 255, 255);
      setGlow(client, false);
      
      // Reset permanent effects.
      updateClientPermEffects(client);
    }
    
    // HUD
    updateHud(client);
  }

  if(validSur(client))
  {
    if(usingSurPerk(client, ZF_PERK_FRIEND))
    {
      zf_perkState[client] = 0;
    }
    else if(usingSurPerk(client, ZF_PERK_LEADER))
    {
      zf_perkTimer[client] = 0;
    }
    else if(usingSurPerk(client, ZF_PERK_NINJA))
    {
      zf_perkState[client] = 0;
      zf_perkTimer[client] = 0;
    }     
    else if(usingSurPerk(client, ZF_PERK_STASH))
    {
      zf_perkTimer[client] = 0;
      removeItems(client);
    }
    else if(usingSurPerk(client, ZF_PERK_STIRCRAZY))
    {
      for(new i = 0; i < ZF_STIRCRAZY_MAX_POINTS; i++)
        GetClientAbsOrigin(client, zf_perkPos[client][i]);
    }
    else if(usingSurPerk(client, ZF_PERK_SUPPLIER))
    {
      zf_perkState[client] = 0;
      zf_perkTimer[client] = 0;      
    }
    else if(usingSurPerk(client, ZF_PERK_TRAPPER))
    {
      zf_perkTimer[client] = 0;
    }
    else if(usingSurPerk(client, ZF_PERK_TANTRUM))
    {
      zf_perkTimer[client] = 0;
    }
    else if(usingSurPerk(client, ZF_PERK_ZENLIKE))
    {
      zf_perkState[client] = 0;
    }
  }
  
  else if(validZom(client))
  {                   
    if(usingZomPerk(client, ZF_PERK_HUNTER))
    {    
      zf_perkState[client] = 0;  
      if(validAura(client))
      {
        decl Float:spawnPos[3];
        decl Float:surPos[3];
        getEntityPos(zf_aura[client], spawnPos);
        new bool:spawnActive = true;
        // + Destroy spawn if Survivors are in radius.
        for(new i = 0; i < MAXPLAYERS; i++)
        {
          if(!validSur(i)) continue;
          getEntityPos(i, surPos);
          if(GetVectorDistance(spawnPos, surPos, true) <= ZF_HUNTER_RADIUSSQ)
          {
            PrintHintText(client, "Your spawn mark has been destroyed!");
            PrintHintText(i, "You destroyed a Hunter's spawn mark!");
            removeAura(client);
            spawnActive = false;
            break;
          }
        }
        if(spawnActive)
        {
          TeleportEntity(client, spawnPos, zf_perkPos[client][0], NULL_VECTOR);
          addStatTempStack(client, ZFStatAtt, ZF_HUNTER_ATTACK, ZF_HUNTER_DURATION);          
          
          //
          // Remove spawn protection. This is a giant hack to 
          // fix compatibility issues with spawn protection mods.
          //
          remInvincibility(client);
          fxSetClientColor(client, 255, 255, 255, 255);   
          ClientCommand(client, "voicemenu 1 0");
          fxTeleportTrail(client, 10.0);
        }
      }
    }
    else if(usingZomPerk(client, ZF_PERK_LEAP))
    {
      zf_perkTimer[client] = 0;  
    }
    else if(usingZomPerk(client, ZF_PERK_MARKED))
    {
      if(roundState() <= RoundGrace)
        zf_perkState[client] = -1;
    }
    else if(usingZomPerk(client, ZF_PERK_MAGNETIC))
    {
      addFlagNoTarget(client);
    }
    else if(usingZomPerk(client, ZF_PERK_RAGE))
    {
      zf_perkState[client] = 0;
      zf_perkTimer[client] = 0;
    }  
    else if(usingZomPerk(client, ZF_PERK_ROAR))
    {
      zf_perkTimer[client] = 0;  
    }    
    else if(usingZomPerk(client, ZF_PERK_SCORCHING))
    {
      TF2_IgnitePlayer(client, client);
    }
    else if(usingZomPerk(client, ZF_PERK_SICK))
    {
      zf_perkTimer[client] = 0;
      removeItems(client);
    }      
    else if(usingZomPerk(client, ZF_PERK_TARRED))
    {
      zf_perkTimer[client] = 0;
      removeItems(client);
    }
    else if(usingZomPerk(client, ZF_PERK_THIEVING))
    {
      zf_perkState[client] = 0;
    }
  }          
}

public perk_OnPlayerDeath(victim, killer, assist, inflictor, damagetype)
{
  // DEBUG
  //LogMessage("[ZF DEBUG] Vic %d, Klr %d, Ast %d, Inf %d, DTp %x", victim, killer, assist, inflictor, damagetype);
  
  if(validClient(victim))
  {  
    //
    // Set last killer.
    //
    zf_lastKiller[victim] = killer;
             
    //
    // Clear conditions.
    //
    resetClientConds(victim);
    
    //
    // Handle effects.
    //
    hideAura(victim);
    for(new i = 0; i < MaxClients; i++) if(zf_icon[victim][i][ICON_SPR] != -1) hideIcon(victim, i);
    removeItems(victim);      
    setGlow(victim, false);
  }

  //
  // Survivor killed.
  //
  if(validSur(victim))
  {
    // Handle Perk (S): FRIEND
    // + Remove icons from perk target and victim.
    if(usingSurPerk(victim, ZF_PERK_FRIEND))
    {
      if(validIcon(victim, zf_perkState[victim])) removeIcon(victim, zf_perkState[victim]);
      if(validIcon(zf_perkState[victim], victim)) removeIcon(zf_perkState[victim], victim);
    }
    
    //
    // Survivor killed by zombie.
    //        
    if(validZom(killer))
    {
      // Handle Perk (S): SELFLESS
      // + Explode on death.
      if(usingSurPerk(victim, ZF_PERK_SELFLESS) && (killer == inflictor))
      {
        applyDamageRadialAtClient(victim, ZF_SELFLESS_DAMAGE, ZF_SELFLESS_RADIUS, true);
        fxExplosionBig(victim);  
      }
          
      // Handle Perk (Z): ALPHA
      // + Add minion.
      if(usingZomPerk(killer, ZF_PERK_ALPHA))
      {      
        zf_alphaMaster[victim] = killer;      
        PrintHintText(killer, "%N is now your minion!", victim);
        PrintHintText(victim, "You are now %N's minion.", killer);
      }
      // Handle Perk (Z): VINDICTIVE
      else if(usingZomPerk(killer, ZF_PERK_VINDICTIVE))
      {
        addStatToLimit(killer, ZFStatAtt, ZFStatTypePerm, ZF_VINDICTIVE_KILL_PCT, ZF_VINDICTIVE_ATTACK_LIM);
        addStatToLimit(killer, ZFStatDef, ZFStatTypePerm, ZF_VINDICTIVE_KILL_PCT, ZF_VINDICTIVE_DEFENSE_LIM);
        updateClientPermEffects(killer);
      }
    }
    
    //
    // Survivor killed, assisted by zombie.
    //
    if(validZom(assist))
    {
      // Handle Perk (Z): ALPHA
      // + Add minion.
      if(usingZomPerk(assist, ZF_PERK_ALPHA))
      {
        if(!(validZom(killer) && usingZomPerk(killer, ZF_PERK_ALPHA)))
        {
          zf_alphaMaster[victim] = assist;
          PrintHintText(assist, "%N is now your minion!", victim);
          PrintHintText(victim, "You are now %N's minion.", assist);
        }
      }
      // Handle Perk (Z): VINDICTIVE
      else if(usingZomPerk(assist, ZF_PERK_VINDICTIVE))
      {
        addStatToLimit(assist, ZFStatAtt, ZFStatTypePerm, ZF_VINDICTIVE_ASSIST_PCT, ZF_VINDICTIVE_ATTACK_LIM);
        addStatToLimit(assist, ZFStatDef, ZFStatTypePerm, ZF_VINDICTIVE_ASSIST_PCT, ZF_VINDICTIVE_DEFENSE_LIM);
      }
    }
  }
  //
  // Zombie killed.
  // 
  else if(validZom(victim))
  {  
    // Handle Perk (Z): HUNTER
    if(usingZomPerk(victim, ZF_PERK_HUNTER))
    {
      showAura(victim);
    }
    // Handle Perk (Z): RAGE
    else if(usingZomPerk(victim, ZF_PERK_RAGE))
    {
      removeAura(victim);
    }
    //
    // Zombie killed by survivor.
    //     
    if(validSur(killer))
    {    
      // Handle Perk (S): CHARITABLE
      if(usingSurPerk(killer, ZF_PERK_CHARITABLE))
      {
        zf_perkState[killer] += ZF_CHARITABLE_POINTS_KILL;
      }
      // Handle Perk (S): FRIEND
      else if(usingSurPerk(killer, ZF_PERK_FRIEND))
      {
        if(validSur(assist) && (zf_perkState[killer] == assist))
          zf_perkTimer[killer] += ZF_FRIEND_CRITTIME_KILL;
      }
      // Handle Perk (S): HEROIC
      else if(usingSurPerk(killer, ZF_PERK_HEROIC))
      {
        if(zf_perkTimer[killer] > 0)
        {
          if(zf_perkState[killer] == 0)
            zf_perkTimer[killer] += HEROIC_CRITTIME_KILL;
          else
            zf_perkTimer[killer] += HEROIC_CRITTIME_KILL_ACTIVE;
        }
      }
      // Handle Perk (S): RESOURCEFUL
      else if(usingSurPerk(killer, ZF_PERK_RESOURCEFUL))
      {
        addHealth(killer, ZF_RESOURCEFUL_HEALTH);
        addHealth(killer, ZF_RESOURCEFUL_HEALTH_OVERHEAL, true);
              
        addResAmmoPct(killer, 0, ZF_RESOURCEFUL_AMMOPCT);
        addResAmmoPct(killer, 1, ZF_RESOURCEFUL_AMMOPCT);
        addMetal(killer, ZF_RESOURCEFUL_METAL);
        fxCreateSoundToClient(ZFSND_PICKUPAMMO, killer);        
      }      
      // Handle Perk (S): WISE
      else if(usingSurPerk(killer, ZF_PERK_WISE))
      {
        addStatToLimit(killer, ZFStatAtt, ZFStatTypePerm, ZF_WISE_ATTACK_KILL_PCT, ZF_WISE_ATTACK_LIM);
      }

      // Handle Perk (Z): COMBUSTIBLE 
      if(usingZomPerk(victim, ZF_PERK_COMBUSTIBLE))
      {
        if(!attackWasMelee(killer, inflictor, damagetype) && (victim != inflictor))
        {
          new damage = isHeavy(victim) ? ZF_COMBUSTIBLE_DAMAGE_HEAVY : ZF_COMBUSTIBLE_DAMAGE;
          applyDamageRadialAtClient(victim, damage, ZF_COMBUSTIBLE_RADIUS, true);             
          fxExplosionBig(victim);
          CreateTimer(ZF_COMBUSTIBLE_RESPAWNTIME, perk_tSpawnClient, victim, TIMER_FLAG_NO_MAPCHANGE);
        }
      }
      // Handle Perk (Z): HORRIFYING
      // + Reduce temporary stat penalties.
      else if(usingZomPerk(victim, ZF_PERK_HORRIFYING))
      {
        if(getStatType(killer, ZFStatAtt, ZFStatTypeTemp) < 0)
          scaleStatTempPct(killer, ZFStatAtt, (1.0 - HORRIFYING_REDUCTION_KILL));
        if(getStatType(killer, ZFStatDef, ZFStatTypeTemp) < 0)
          scaleStatTempPct(killer, ZFStatDef, (1.0 - HORRIFYING_REDUCTION_KILL));
      }      
      // Handle Perk (Z): HUNTER
      else if(usingZomPerk(victim, ZF_PERK_HUNTER))
      {
        CreateTimer(ZF_HUNTER_RESPAWNTIME, perk_tSpawnClient, victim, TIMER_FLAG_NO_MAPCHANGE);
      }   
      // Handle Perk (Z): SWARMING
      else if(usingZomPerk(victim, ZF_PERK_SWARMING))
      {
        CreateTimer(ZF_SWARMING_RESPAWNTIME, perk_tSpawnClient, victim, TIMER_FLAG_NO_MAPCHANGE);
      }
      // Handle Perk (Z): SWARMING
      // + Instant respawn for those killed near a SWARMING zombie.      
      else
      {
        decl Float:iPos[3];
        decl Float:victimPos[3];        
        GetClientAbsOrigin(victim, victimPos);
        for(new i = 1; i <= MaxClients; i++)
        {
          if(validLivingZom(i) && usingZomPerk(i, ZF_PERK_SWARMING))
          {         
            GetClientAbsOrigin(i, iPos);
            if(GetVectorDistance(iPos, victimPos, true) <= ZF_SWARMING_RADIUSSQ)
            {
              CreateTimer(ZF_SWARMING_RESPAWNTIME, perk_tSpawnClient, victim, TIMER_FLAG_NO_MAPCHANGE);
              break;
            }
          }
        }
      }
    }
    
    //
    // Zombie killed, assisted by survivor.
    //
    if(validSur(assist))
    {
      // Handle Perk (S): CHARITABLE
      if(usingSurPerk(assist, ZF_PERK_CHARITABLE))
      {
        zf_perkState[assist] += ZF_CHARITABLE_POINTS_ASSIST;
      }
      // Handle Perk (S): FRIEND
      else if(usingSurPerk(assist, ZF_PERK_FRIEND))
      {
        if(validSur(killer) && (zf_perkState[assist] == killer))
          zf_perkTimer[assist] += ZF_FRIEND_CRITTIME_ASSIST;
      }
      // Handle Perk (S): HEROIC
      else if(usingSurPerk(assist, ZF_PERK_HEROIC))
      {
        if(zf_perkTimer[assist] > 0)
        {
          if(zf_perkState[assist] == 0)
            zf_perkTimer[assist] += HEROIC_CRITTIME_ASSIST;
          else
            zf_perkTimer[assist] += HEROIC_CRITTIME_ASSIST_ACTIVE;        
        }
      }
      // Handle Perk (S): WISE
      else if(usingSurPerk(assist, ZF_PERK_WISE))
      {
        addStatToLimit(assist, ZFStatAtt, ZFStatTypePerm, ZF_WISE_ATTACK_ASSIST_PCT, ZF_WISE_ATTACK_LIM);
      }
      
      // Handle Perk (Z): HORRIFYING
      // + Reduce temporary stat penalties.
      if(usingZomPerk(victim, ZF_PERK_HORRIFYING))
      {
        if(getStatType(assist, ZFStatAtt, ZFStatTypeTemp) < 0)
          scaleStatTempPct(assist, ZFStatAtt, (1.0 - HORRIFYING_REDUCTION_ASSIST));
        if(getStatType(assist, ZFStatDef, ZFStatTypeTemp) < 0)
          scaleStatTempPct(assist, ZFStatDef, (1.0 - HORRIFYING_REDUCTION_ASSIST));
      }      
    }
  }
}

public Action:perk_OnCallForMedic(client)
{  
  if(validLivingSur(client))
  {
    // Handle Perk (S): CARPENTER
    // + Place barricade.
    if(usingSurPerk(client, ZF_PERK_CARPENTER))
    {
      if(zf_perkTimer[client] == 0)
      {
        if(!isGrounded(client))
        {
          PrintHintText(client, "You must be on the ground to build a barricade.");
        }
        else if(!isCrouching(client))
        {
          PrintHintText(client, "You must be crouching to build a barricade.");
        }
        else
        {          
          new bool:clientsNearby = false;
          new bool:barricadesNearby = false;
          decl Float:clientPos[3];
          decl Float:otherPos[3];
                              
          GetClientAbsOrigin(client, clientPos);
          for(new i = 1; i <= MaxClients; i++)
          {
            if(IsClientInGame(i) && IsPlayerAlive(i))
            {
              // Check for nearby barricades.
              if(isSur(i) && usingSurPerk(i, ZF_PERK_CARPENTER))
              {
                for(new j = 0; j < CARPENTER_MAX_ITEMS; j++)
                {
                  if(validItem(i, j))
                  {
                    if(GetVectorDistance(clientPos, zf_perkPos[i][j], true) <= CARPENTER_DROP_RADSQ_BARRICADE)
                    {
                      barricadesNearby = true;
                      break;
                    }
                  }
                }
                if(barricadesNearby)
                  break;
              }
              
              // Check for other nearby clients.
              if(i == client) continue;
              GetClientAbsOrigin(i, otherPos);
              if(GetVectorDistance(clientPos, otherPos, true) <= CARPENTER_DROP_RADSQ_CLIENT)
              {
                clientsNearby = true;
                break;
              }
            }
          }
          
          // Place barricade.
          if(clientsNearby)
          {
            PrintHintText(client, "Can't place barricade - another player is nearby.");
          }
          else if(barricadesNearby)
          {
            PrintHintText(client, "Can't place barricade - another barricade is nearby.");
          }
          else          
          {
            new itemIndex = getFreeItemIndex(client, CARPENTER_MAX_ITEMS);
            if(itemIndex >= 0)
            {
              zf_perkTimer[client] = CARPENTER_COOLDOWN;
              
              removeItem(client, itemIndex);
              zf_item[client][itemIndex] = doCarpenterBuild(client, zf_perkPos[client][itemIndex]);
              setItemMetadata(zf_item[client][itemIndex], CARPENTER_BARRICADE_HEALTH);   
              SDKHook(zf_item[client][itemIndex], SDKHook_OnTakeDamage, perk_OnFenceTakeDamage);
            }
          }
          return Plugin_Handled; 
        }
      }      
    }
    
    // Handle Perk (S): CHARITABLE
    else if(usingSurPerk(client, ZF_PERK_CHARITABLE))
    {
      if((zf_perkState[client] / ZF_CHARITABLE_POINTS_GIFT) > 0)
      {
        // Toss present.
        new itemIndex = getFreeItemIndex(client, ZF_CHARITABLE_MAX_ITEMS);
        if(itemIndex >= 0)
        {
          zf_perkState[client] -= ZF_CHARITABLE_POINTS_GIFT;
          zf_item[client][itemIndex] = doItemThrow(client, ZFMDL_PRESENT[GetRandomInt(0,2)], 600.0);
          SDKHook(zf_item[client][itemIndex], SDKHook_Touch, perk_OnCharitableGiftTouched);
        }
        else
        {
          PrintHintText(client, "You can't toss another present!");
        }
        return Plugin_Handled;        
      }
    }
      
    // Handle Perk (S): FRIEND
    // + Select friend (grace period or earlier only).
    else if(usingSurPerk(client, ZF_PERK_FRIEND))
    {
      if(roundState() <= RoundGrace)
      {
        new desiredFriend = GetClientAimTarget(client);
        if(validLivingSur(desiredFriend))
        {
          doFriendSelect(client, desiredFriend);
          return Plugin_Handled;
        }
      }
    }
    
    // Handle Perk (S): LEADER
    else if(usingSurPerk(client, ZF_PERK_LEADER))
    {
      if(zf_perkTimer[client] == 0)
      {
        if(!isGrounded(client))
        {
          PrintHintText(client, "You must be on the ground to place a rally point.");
        }
        else if(!isCrouching(client))
        {
          PrintHintText(client, "You must be crouching to place a rally point.");
        }
        else
        {
          zf_perkTimer[client] = ZF_LEADER_RALLY_COOLDOWN;
          removeItem(client, 0);            
          zf_item[client][0] = doItemPlace(client, ZFMDL_FLAG);

          fxCreateSoundToAll(ZFSND_PACKDROP, client);
          return Plugin_Handled;
        }        
      }
    }
    
    // Handle Perk (S): NINJA
    else if(usingSurPerk(client, ZF_PERK_NINJA))
    {
      if(zf_perkTimer[client] == 0)
      {
        if(!isGrounded(client))
        {
          PrintHintText(client, "You must be on the ground to place a decoy point.");
        }
        else if(isCrouching(client))
        {
          PrintHintText(client, "You must not be crouched to place a decoy point.");
        }
        else
        {
          // Place retreat point.
          // Retreat point is valid for ZF_NINJA_DURATION_DECOY_ACTIVE seconds.
          // Retreat point poofs after ZF_NINJA_DURATION_DECOY_ACTIVE seconds.
          // New retreat point can be placed after (ZF_NINJA_DURATION_DECOY_ACTIVE + ZF_NINJA_DURATION_COOLDOWN) seconds.
          zf_perkState[client] = 1;
          zf_perkTimer[client] = (ZF_NINJA_DURATION_DECOY_ACTIVE + ZF_NINJA_DURATION_COOLDOWN);
          
          createAura(client, ZFPART_AURAHALO, AttachNone);
          return Plugin_Handled;
        }        
      }
    }
     
    // Handle Perk (S): STASH
    else if(usingSurPerk(client, ZF_PERK_STASH))
    {
      if(zf_perkTimer[client] == 0)
      {
        if(!isGrounded(client))
        {
          PrintHintText(client, "You must be on the ground to place a stash.");
        }
        else if(!isCrouching(client))
        {
          PrintHintText(client, "You must be crouched to place a stash.");
        }
        else
        {
          new bool:stashNearby = false;
          new bool:survivorsNearby = false;
          decl Float:clientPos[3];
          decl Float:otherPos[3];
          
          GetClientAbsOrigin(client, clientPos);
          for(new i = 1; i <= MaxClients; i++)
          {
            if(i == client) continue;
            if(IsClientInGame(i) && IsPlayerAlive(i) && isSur(i))
            {
              // Check for other nearby survivors.
              GetClientAbsOrigin(i, otherPos);
              if(GetVectorDistance(clientPos, otherPos, true) <= ZF_STASH_DROP_RADSQ_CLIENT)
              {
                survivorsNearby = true;
                break;
              }
              
              // Check for nearby stashes from other survivors.
              if(usingSurPerk(i, ZF_PERK_STASH) && validItem(i, 0))
              {      
                getEntityPos(zf_item[i][0], otherPos);
                if(GetVectorDistance(clientPos, otherPos, true) <= ZF_STASH_DROP_RADSQ_STASH)
                {
                  stashNearby = true;
                  break;
                }
              }
            }            
          }        
     
          // Place stash.
          if(survivorsNearby)
          {
            PrintHintText(client, "Can't place stash - another survivor is nearby.");
          }
          else if(stashNearby)
          {
            PrintHintText(client, "Can't place stash - another stash is nearby.");
          }
          else
          {
            zf_perkTimer[client] = ZF_STASH_WARMUP + ZF_STASH_COOLDOWN;
            removeItem(client, 0);            
            zf_item[client][0] = doItemPlace(client, ZFMDL_SUPPLYCRATE);
          
            fxCreateSoundToAll(ZFSND_PACKDROP, client);
          }
          return Plugin_Handled; 
        }      
      }
    }
    
    // Handle Perk (S): SUPPLIER
    else if(usingSurPerk(client, ZF_PERK_SUPPLIER))
    {
      if(zf_perkTimer[client] == 0)
      {
        if(!isGrounded(client))
        {
          PrintHintText(client, "You must be on the ground to place supplies.");
        }
        else if(!isCrouching(client))
        {
          PrintHintText(client, "You must be crouching to place supplies.");
        }
        else
        {
          // Handle supplies placement.
          new itemIndex = getFreeItemIndex(client, ZF_SUPPLIER_MAX_ITEMS);
          if(itemIndex >= 0)
          {
            zf_perkTimer[client] = ZF_SUPPLIER_TIMER;
            
            removeItem(client, itemIndex);
            zf_item[client][itemIndex] = doItemPlace(client, ZFMDL_SUPPLYCRATE);
            setItemMetadata(zf_item[client][itemIndex], ZF_SUPPLIER_RESUPPLY_COUNT);
            
            fxCreateSoundToAll(ZFSND_PACKDROP, client);               
          }
          else
          {
            PrintHintText(client, "You can't place any more supplies.");
          }
          return Plugin_Handled;          
        }        
      }
    }
    
    // Handle Perk (S): TRAPPER
    else if(usingSurPerk(client, ZF_PERK_TRAPPER))
    {
      if(zf_perkTimer[client] == 0)
      {
        if(!isGrounded(client))
        {
          PrintHintText(client, "You must be on the ground to place a mine.");
        }
        else if(!isCrouching(client))
        {
          PrintHintText(client, "You must be crouching to place a mine.");
        }
        else
        {
          // Handle mine placement.
          new itemIndex = getFreeItemIndex(client, ZF_TRAPPER_MAX_ITEMS);
          if(itemIndex >= 0)
          {
            zf_perkTimer[client] = ZF_TRAPPER_TIMER;
            removeItem(client, itemIndex);
            zf_item[client][itemIndex] = doItemPlace(client, ZFMDL_MINE);

            fxCreateSoundToAll(ZFSND_PACKDROP, client);            
          }
          else
          {
            PrintHintText(client, "You can't place any more mines.");
          }
          return Plugin_Handled;
        }        
      }
    }
    
    // Handle Perk (S): TANTRUM
    else if(usingSurPerk(client, ZF_PERK_TANTRUM))
    {
      if(zf_perkTimer[client] == 0)
      {
        zf_perkTimer[client] = ZF_TANTRUM_ACTIVE + ZF_TANTRUM_COOLDOWN;
        addCondKritz(client, float(ZF_TANTRUM_ACTIVE));
        fxKritzStart(client);
        
        return Plugin_Handled;
      }      
    }
    
  }
  else if(validLivingZom(client))
  {        
    // Handle Perk (Z): ALPHA
    if(usingZomPerk(client, ZF_PERK_ALPHA))
    {
      if(zf_perkTimer[client] == 0)
      {
        if(!isGrounded(client))
        {
          PrintHintText(client, "You must be on the ground to summon minions.");
          ClientCommand(client, "voicemenu 2 5");
        }
        else if(isCrouching(client))
        {
          PrintHintText(client, "You must not be crouched to summon minions.");
          ClientCommand(client, "voicemenu 2 5");
        }
        else if(isCloaked(client))
        {
          PrintHintText(client, "You must be uncloaked to summon minions.");
          ClientCommand(client, "voicemenu 2 5");
        }
        else
        {
          new summonCount = doAlphaSummon(client);
          if(summonCount > 0)
          {
            zf_perkTimer[client] = ZF_ALPHA_TIMER_MINION * summonCount;
            ClientCommand(client, "voicemenu 2 1");
          }
          else
          {
            PrintHintText(client, "You have no minions to summon!");
            ClientCommand(client, "voicemenu 2 5");            
          }          
        }
      }
      else
      {
        PrintHintText(client, "Alpha is not ready.");
        ClientCommand(client, "voicemenu 2 5");
      }      
    }
    
    // Handle Perk (Z): HUNTER
    else if(usingZomPerk(client, ZF_PERK_HUNTER))
    {
      if(zf_perkState[client] == 1)
      {
        PrintHintText(client, "You have already placed your spawn mark.");
        ClientCommand(client, "voicemenu 2 5");
      }
      else if(!isGrounded(client))
      {
        PrintHintText(client, "You must be on the ground to place spawn mark.");
        ClientCommand(client, "voicemenu 2 5");        
      }
      else if(isCrouching(client))
      {
        PrintHintText(client, "You must not be crouched to place spawn mark.");
        ClientCommand(client, "voicemenu 2 5");
      }  
      else
      {
        zf_perkState[client] = 1;
        createAura(client, ZFPART_AURAVORTEXBLU, AttachNone);
        GetClientEyeAngles(client, zf_perkPos[client][0]);
        ClientCommand(client, "voicemenu 0 6");
      }
    }

    // Handle Perk (Z): LEAP 
    else if(usingZomPerk(client, ZF_PERK_LEAP))
    {
      if(zf_perkTimer[client] == 0)
      {
        if(!isGrounded(client))
        {
          PrintHintText(client, "You must be on the ground to leap.");
          ClientCommand(client, "voicemenu 2 5");
        }
        else if(isCloaked(client))
        {
          PrintHintText(client, "You must be uncloaked to leap.");
          ClientCommand(client, "voicemenu 2 5");
        }
        else
        {
          zf_perkTimer[client] = ZF_LEAP_COOLDOWN;
          fxJump(client, (isScout(client) ? ZF_LEAP_FORCE_SCOUT : ZF_LEAP_FORCE));
          fxPuffBig(client); 
        }
      }
      else
      {
        PrintHintText(client, "Leap is not ready.");
        ClientCommand(client, "voicemenu 2 5");      
      }        
    }    
    
    // Handle Perk (Z): RAGE  
    else if(usingZomPerk(client, ZF_PERK_RAGE))
    {
      if(zf_perkTimer[client] == 0)
      {
        if(getHealthPct(client) >= ZF_RAGE_HEALTHPCT_TOUSE)
        {
          zf_perkState[client] = 1;
          zf_perkTimer[client] = ZF_RAGE_COOLDOWN;
                                 
          addStat(client, ZFStatSpeed, ZFStatTypeCond, ZF_RAGE_SPEED);    
          setHealthPct(client, (1.0 + ZF_RAGE_HEALTHPCT_ONUSE)); 

          fxPowerup(client);
          createAura(client, ZFPART_AURABURNINGORANGE, AttachHead);
        }
        else
        {
          PrintHintText(client, "You must be above 80 percent health to rage.");
          ClientCommand(client, "voicemenu 2 5"); 
        }
      }
      else
      {
        PrintHintText(client, "Rage is not ready.");
        ClientCommand(client, "voicemenu 2 5");      
      }  
    }
       
    // Handle Perk (Z): ROAR
    else if(usingZomPerk(client, ZF_PERK_ROAR))
    {
      if(zf_perkTimer[client] == 0)
      {
        if(!isGrounded(client))
        {
          PrintHintText(client, "You must be on the ground to roar.");
          ClientCommand(client, "voicemenu 2 5");           
        }
        else if(isCloaked(client))
        {
          PrintHintText(client, "You must be uncloaked to roar.");
          ClientCommand(client, "voicemenu 2 5");           
        }
        else
        {
          zf_perkTimer[client] = ZF_ROAR_COOLDOWN;

          // Apply radial damage. Use damage hook to detect roar "explosion."
          applyDamageRadialAtClient(client, 1, ZF_ROAR_RADIUS);
          fxPuffBig(client);
          ClientCommand(client, "voicemenu 2 1");           
        }
      }
      else
      {
        PrintHintText(client, "Roar is not ready.");
        ClientCommand(client, "voicemenu 2 5");          
      }
    }
       
    // Handle Perk (Z): SICK  
    else if(usingZomPerk(client, ZF_PERK_SICK))
    {
      if(zf_perkTimer[client] == 0)
      {
        if(isCloaked(client))
        {
          PrintHintText(client, "You must be uncloaked to use sick.");
          ClientCommand(client, "voicemenu 2 5"); 
        }  
        else
        {
          zf_perkTimer[client] = ZF_SICK_TIMER;

          new Float:time = 0.0;
          for(new entIdx = 0; entIdx < ZF_SICK_MAX_ITEMS; entIdx++)
          {
            removeItem(client, entIdx);
            new Handle:dataPack = CreateDataPack();
            WritePackCell(dataPack, client);
            WritePackCell(dataPack, entIdx);
            CreateTimer(time, perk_tSickSpit, dataPack, TIMER_FLAG_NO_MAPCHANGE);
            time += 0.15;
          }
        }
      }
      else
      {
        PrintHintText(client, "Sick is not ready.");
        ClientCommand(client, "voicemenu 2 5");      
      }  
    }    
    
    // Handle Perk (Z): TARRED
    else if(usingZomPerk(client, ZF_PERK_TARRED))
    {
      if(zf_perkTimer[client] == 0)
      {
        if(isCloaked(client))
        {
          PrintHintText(client, "You must be uncloaked to use tarred.");
          ClientCommand(client, "voicemenu 2 5"); 
        }  
        else
        {
          zf_perkTimer[client] = ZF_TARRED_TIMER;

          new Float:time = 0.0;
          for(new entIdx = 0; entIdx < ZF_TARRED_MAX_ITEMS; entIdx++)
          {
            removeItem(client, entIdx);
            new Handle:dataPack = CreateDataPack();
            WritePackCell(dataPack, client);
            WritePackCell(dataPack, entIdx);
            CreateTimer(time, perk_tTarredSpit, dataPack, TIMER_FLAG_NO_MAPCHANGE);
            time += 0.15;
          }
        }
      }
      else
      {
        PrintHintText(client, "Tarred is not ready.");
        ClientCommand(client, "voicemenu 2 5");
      }
    }

    return Plugin_Handled;
  }
    
  return Plugin_Continue;
}

public perk_OnAmmoPickup(client, pickup)
{
  if(validLivingSur(client))
  {
    // Handle Perk (S): RESOURCEFUL    
    if(usingSurPerk(client, ZF_PERK_RESOURCEFUL))
    {
      addResAmmoPct(client, 0, ZF_RESOURCEFUL_AMMOPCT);
      addResAmmoPct(client, 1, ZF_RESOURCEFUL_AMMOPCT);
      addMetal(client, ZF_RESOURCEFUL_METAL);
      addStatTempToLimit(client, ZFStatAtt, ZF_RESOURCEFUL_BONUS_PCT, ZF_RESOURCEFUL_ATTACK_LIM, ZF_RESOURCEFUL_PICKUP_DURATION);
    }
  }
}

public perk_OnMedPickup(client, pickup)
{
  if(validLivingSur(client))
  {
    // Handle general survivor logic
    subCond(client, ZFCondPoisoned, ZF_POISON_HEAL_MEDPACK);    
    
    // Handle Perk (S): RESOURCEFUL    
    if(usingSurPerk(client, ZF_PERK_RESOURCEFUL))
    {
      addHealth(client, ZF_RESOURCEFUL_HEALTH, false);
      addStatTempToLimit(client, ZFStatDef, ZF_RESOURCEFUL_BONUS_PCT, ZF_RESOURCEFUL_DEFENSE_LIM, ZF_RESOURCEFUL_PICKUP_DURATION);
    }
  }
}

////////////////////////////////////////////////////////////
//
// Perk Event Logic, Timer Callbacks
//
////////////////////////////////////////////////////////////
public Action:perk_tSpawnClient(Handle:timer, any:client)
{
  if(validClient(client) && !IsPlayerAlive(client))
  {
    spawnClient(client, zomTeam());
  }
}

public Action:perk_tNinjaDecoyPoof(Handle:Timer, any:client)
{
  if(validClient(client))
  {
    doNinjaDecoyPoof(client);
  }
}
   
public Action:perk_tSickSpit(Handle:timer, Handle:dataPack)
{        
  ResetPack(dataPack);
  new client = ReadPackCell(dataPack);
  new entIdx = ReadPackCell(dataPack); 
  CloseHandle(dataPack);
    
  if(validLivingZom(client))
  {
    zf_item[client][entIdx] = doItemThrow(client, ZFMDL_PRESENT[2], 1200.0, {75,255,75});
    getEntityPos(zf_item[client][entIdx], zf_perkPos[client][entIdx]);
    fxCreateSoundToAll(ZFSND_SPIT[GetRandomInt(0,2)], client);   
  }  
}

public Action:perk_tTarredSpit(Handle:timer, Handle:dataPack)
{
  ResetPack(dataPack);
  new client = ReadPackCell(dataPack);
  new entIdx = ReadPackCell(dataPack); 
  CloseHandle(dataPack);
    
  if(validLivingZom(client))
  {
    zf_item[client][entIdx] = doItemThrow(client, ZFMDL_PRESENT[2], 900.0, {25,25,25});
    getEntityPos(zf_item[client][entIdx], zf_perkPos[client][entIdx]);
    fxCreateSoundToAll(ZFSND_SPIT[GetRandomInt(0,2)], client);
  }  
}

public Action:perk_tZenlikeAttack(Handle:timer, any:client)
{
  if(validLivingSur(client))
  {
    zf_perkState[client] -= ZF_ZENLIKE_CRIT_DEC;
    if(zf_perkState[client] < 0) 
      zf_perkState[client] = 0;
  }
}

////////////////////////////////////////////////////////////
//
// Perk Menu Functionality
//
////////////////////////////////////////////////////////////

//
// Survivor Perk List Menu
// (Menu item N is perk N+1)
//
Handle:perk_buildSurPerkListMenu()
{
  new Handle:menu = CreateMenu(perk_menuSurPerkList);  
  if(menu != INVALID_HANDLE)
  {
    // Title
    SetMenuTitle(menu, "Select Survivor Perk");
    
    // Perks
    for(new i = 1; i < TOTAL_SUR_PERKS; i++)
      AddMenuItem(menu, ZF_SURPERK_NAME[i], ZF_SURPERK_SHORTDESC[i]);  
  }
  return menu; 
}

public perk_menuSurPerkList(Handle:menu, MenuAction:action, param1, param2)
{
  if(action == MenuAction_Select)
  { 
    panel_PrintSurPerkSelect(param1, param2 + 1);
  }
}

//
// Zombie Perk List Menu
// (Menu item N is perk N+1)
//
Handle:perk_buildZomPerkListMenu()
{
  new Handle:menu = CreateMenu(perk_menuZomPerkList);  
  if(menu != INVALID_HANDLE)
  {
    // Title
    SetMenuTitle(menu, "Select Zombie Perk");
    
    // Perks
    for(new i = 1; i < TOTAL_ZOM_PERKS; i++)
      AddMenuItem(menu, ZF_ZOMPERK_NAME[i], ZF_ZOMPERK_SHORTDESC[i]);  

  }
  return menu; 
}

public perk_menuZomPerkList(Handle:menu, MenuAction:action, param1, param2)
{
  if(action == MenuAction_Select)
  {
    panel_PrintZomPerkSelect(param1, param2 + 1);
  }
}

// 
// Survivor Perk Select Menu
//
public panel_PrintSurPerkSelect(client, perk)
{
  new Handle:panel = CreatePanel();
  
  SetPanelTitle(panel, "ZF Perk Menu");
  DrawPanelText(panel, ZF_SURPERK_NAME[perk]);
  DrawPanelText(panel, ZF_SURPERK_LONGDESC[perk]);
  if(surPerkEnabled(perk))
    DrawPanelItem(panel, "[Select]", ITEMDRAW_DEFAULT);
  else
    DrawPanelItem(panel, "(DISABLED BY SERVER)", ITEMDRAW_DISABLED);
  DrawPanelItem(panel, "[Back to List]");
  DrawPanelItem(panel, "[Close]");
  
  zf_menuPerk[client] = perk;
  SendPanelToClient(panel, client, panel_HandleSurPerkSelect, MENU_TIME_FOREVER);
  CloseHandle(panel);
}

public panel_HandleSurPerkSelect(Handle:menu, MenuAction:action, param1, param2)
{ 
  if(action == MenuAction_Select)
  {
    switch(param2)
    {
      case 1: 
        selectSurPerk(param1, zf_menuPerk[param1]);
      case 2: 
      {
        new firstItem = (((zf_menuPerk[param1] - 1) / 7) * 7);
        DisplayMenuAtItem(zf_menuSurPerkList, param1, firstItem, MENU_TIME_FOREVER); 
      }
      default: 
        return;   
    } 
  }
}

// 
// Zombie Perk Select Menu
//
public panel_PrintZomPerkSelect(client, perk)
{
  new Handle:panel = CreatePanel();
  
  SetPanelTitle(panel, "ZF Perk Menu");
  DrawPanelText(panel, ZF_ZOMPERK_NAME[perk]);
  DrawPanelText(panel, ZF_ZOMPERK_LONGDESC[perk]);
  if(zomPerkEnabled(perk))
    DrawPanelItem(panel, "[Select]", ITEMDRAW_DEFAULT);
  else
    DrawPanelItem(panel, "(DISABLED BY SERVER)", ITEMDRAW_DISABLED);
  DrawPanelItem(panel, "[Back to List]");
  DrawPanelItem(panel, "[Close]");
  
  zf_menuPerk[client] = perk;
  SendPanelToClient(panel, client, panel_HandleZomPerkSelect, MENU_TIME_FOREVER);
  CloseHandle(panel);
}

public panel_HandleZomPerkSelect(Handle:menu, MenuAction:action, param1, param2)
{ 
  if(action == MenuAction_Select)
  {
    switch(param2)
    {
      case 1: 
        selectZomPerk(param1, zf_menuPerk[param1]);
      case 2: 
      {
        new firstItem = (((zf_menuPerk[param1] - 1) / 7) * 7);
        DisplayMenuAtItem(zf_menuZomPerkList, param1, firstItem, MENU_TIME_FOREVER); 
      }
      default: 
        return;   
    } 
  }
}
