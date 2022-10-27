/*
FORM_ITEM_HOLD:
    Form change activates when the specified item is given to or taken from the selected Pokémon.
    Alternatively, form change activates when the specified item is is given to or taken from
    the selected Pokémon that has a particular ability.
    param1 = item to hold
    param2 = ability to check for, optional

FORM_ITEM_USE:
    Form change activates when the item is used on the selected Pokémon.
    param1 = item to use
    param2 = DAY if form change activates in the daytime, optional
             NIGHT if form change activates at nighttime, optional

FORM_MOVE:
    Form change activates when the Pokémon learns or forgets the move.
    param1 = move to check for
    param2 = WHEN_LEARNED if form change activates when move is forgotten
             WHEN_FORGOTTEN if form change activates when move is learned

FORM_WITHDRAW:
    Form change activates when the Pokémon is withdrawn from the PC or Daycare.
    no parameters

FORM_BATTLE_BEGIN:
    Form change activates when the Pokémon is sent out at the beginning of a battle
    param1 = item to hold, optional
    param2 = a move that will be replaced, optional
    param3 = a new move to replace it with, optional

FORM_BATTLE_END:
    Form change activates at the end of a battle
    param1 = item to hold, optional
    param2 = a move that will be replaced, optional
    param3 = a new move to replace it with, optional
*/

// FORM_MOVE param2 Arguments
#define WHEN_LEARNED    0
#define WHEN_FORGOTTEN  1

// FORM_ITEM_USE param2 Arguments
#define DAY    1
#define NIGHT  2

#if P_GEN_4_POKEMON == TRUE
static const struct FormChange sGiratinaFormChangeTable[] = {
    {FORM_ITEM_HOLD, SPECIES_GIRATINA, ITEM_NONE},
    {FORM_ITEM_HOLD, SPECIES_GIRATINA_ORIGIN, ITEM_GRISEOUS_ORB},
    {FORM_CHANGE_END},
};

static const struct FormChange sShayminFormChangeTable[] = {
    {FORM_ITEM_USE, SPECIES_SHAYMIN_SKY, ITEM_GRACIDEA, DAY},
    // {FORM_WITHDRAW, SPECIES_SHAYMIN},
    {FORM_CHANGE_END},
};

static const struct FormChange sArceusFormChangeTable[] = {
    {FORM_ITEM_HOLD, SPECIES_ARCEUS,          ITEM_NONE,         ABILITY_MULTITYPE},
    {FORM_ITEM_HOLD, SPECIES_ARCEUS_FIGHTING, ITEM_FIST_PLATE,   ABILITY_MULTITYPE},
    {FORM_ITEM_HOLD, SPECIES_ARCEUS_FIGHTING, ITEM_FIGHTINIUM_Z, ABILITY_MULTITYPE},
    {FORM_ITEM_HOLD, SPECIES_ARCEUS_FLYING,   ITEM_SKY_PLATE,    ABILITY_MULTITYPE},
    {FORM_ITEM_HOLD, SPECIES_ARCEUS_FLYING,   ITEM_FLYINIUM_Z,   ABILITY_MULTITYPE},
    {FORM_ITEM_HOLD, SPECIES_ARCEUS_POISON,   ITEM_TOXIC_PLATE,  ABILITY_MULTITYPE},
    {FORM_ITEM_HOLD, SPECIES_ARCEUS_POISON,   ITEM_POISONIUM_Z,  ABILITY_MULTITYPE},
    {FORM_ITEM_HOLD, SPECIES_ARCEUS_ROCK,     ITEM_STONE_PLATE,  ABILITY_MULTITYPE},
    {FORM_ITEM_HOLD, SPECIES_ARCEUS_ROCK,     ITEM_ROCKIUM_Z,    ABILITY_MULTITYPE},
    {FORM_ITEM_HOLD, SPECIES_ARCEUS_GROUND,   ITEM_EARTH_PLATE,  ABILITY_MULTITYPE},
    {FORM_ITEM_HOLD, SPECIES_ARCEUS_GROUND,   ITEM_GROUNDIUM_Z,  ABILITY_MULTITYPE},
    {FORM_ITEM_HOLD, SPECIES_ARCEUS_BUG,      ITEM_INSECT_PLATE, ABILITY_MULTITYPE},
    {FORM_ITEM_HOLD, SPECIES_ARCEUS_BUG,      ITEM_BUGINIUM_Z,   ABILITY_MULTITYPE},
    {FORM_ITEM_HOLD, SPECIES_ARCEUS_GHOST,    ITEM_SPOOKY_PLATE, ABILITY_MULTITYPE},
    {FORM_ITEM_HOLD, SPECIES_ARCEUS_GHOST,    ITEM_GHOSTIUM_Z,   ABILITY_MULTITYPE},
    {FORM_ITEM_HOLD, SPECIES_ARCEUS_STEEL,    ITEM_IRON_PLATE,   ABILITY_MULTITYPE},
    {FORM_ITEM_HOLD, SPECIES_ARCEUS_STEEL,    ITEM_STEELIUM_Z,   ABILITY_MULTITYPE},
    {FORM_ITEM_HOLD, SPECIES_ARCEUS_FIRE,     ITEM_FLAME_PLATE,  ABILITY_MULTITYPE},
    {FORM_ITEM_HOLD, SPECIES_ARCEUS_FIRE,     ITEM_FIRIUM_Z,     ABILITY_MULTITYPE},
    {FORM_ITEM_HOLD, SPECIES_ARCEUS_WATER,    ITEM_SPLASH_PLATE, ABILITY_MULTITYPE},
    {FORM_ITEM_HOLD, SPECIES_ARCEUS_WATER,    ITEM_WATERIUM_Z,   ABILITY_MULTITYPE},
    {FORM_ITEM_HOLD, SPECIES_ARCEUS_GRASS,    ITEM_MEADOW_PLATE, ABILITY_MULTITYPE},
    {FORM_ITEM_HOLD, SPECIES_ARCEUS_GRASS,    ITEM_GRASSIUM_Z,   ABILITY_MULTITYPE},
    {FORM_ITEM_HOLD, SPECIES_ARCEUS_ELECTRIC, ITEM_ZAP_PLATE,    ABILITY_MULTITYPE},
    {FORM_ITEM_HOLD, SPECIES_ARCEUS_ELECTRIC, ITEM_ELECTRIUM_Z,  ABILITY_MULTITYPE},
    {FORM_ITEM_HOLD, SPECIES_ARCEUS_PSYCHIC,  ITEM_MIND_PLATE,   ABILITY_MULTITYPE},
    {FORM_ITEM_HOLD, SPECIES_ARCEUS_PSYCHIC,  ITEM_PSYCHIUM_Z,   ABILITY_MULTITYPE},
    {FORM_ITEM_HOLD, SPECIES_ARCEUS_ICE,      ITEM_ICICLE_PLATE, ABILITY_MULTITYPE},
    {FORM_ITEM_HOLD, SPECIES_ARCEUS_ICE,      ITEM_ICIUM_Z,      ABILITY_MULTITYPE},
    {FORM_ITEM_HOLD, SPECIES_ARCEUS_DRAGON,   ITEM_DRACO_PLATE,  ABILITY_MULTITYPE},
    {FORM_ITEM_HOLD, SPECIES_ARCEUS_DRAGON,   ITEM_DRAGONIUM_Z,  ABILITY_MULTITYPE},
    {FORM_ITEM_HOLD, SPECIES_ARCEUS_DARK,     ITEM_DREAD_PLATE,  ABILITY_MULTITYPE},
    {FORM_ITEM_HOLD, SPECIES_ARCEUS_DARK,     ITEM_DARKINIUM_Z,  ABILITY_MULTITYPE},
    {FORM_ITEM_HOLD, SPECIES_ARCEUS_FAIRY,    ITEM_PIXIE_PLATE,  ABILITY_MULTITYPE},
    {FORM_ITEM_HOLD, SPECIES_ARCEUS_FAIRY,    ITEM_FAIRIUM_Z,    ABILITY_MULTITYPE},
    {FORM_CHANGE_END},
};
#endif

#if P_GEN_5_POKEMON == TRUE
static const struct FormChange sTornadusFormChangeTable[] = {
    {FORM_ITEM_USE, SPECIES_TORNADUS_THERIAN, ITEM_REVEAL_GLASS},
    {FORM_ITEM_USE, SPECIES_TORNADUS, ITEM_REVEAL_GLASS},
    {FORM_CHANGE_END},
};

static const struct FormChange sThundurusFormChangeTable[] = {
    {FORM_ITEM_USE, SPECIES_THUNDURUS_THERIAN, ITEM_REVEAL_GLASS},
    {FORM_ITEM_USE, SPECIES_THUNDURUS, ITEM_REVEAL_GLASS},
    {FORM_CHANGE_END},
};

static const struct FormChange sLandorusFormChangeTable[] = {
    {FORM_ITEM_USE, SPECIES_LANDORUS_THERIAN, ITEM_REVEAL_GLASS},
    {FORM_ITEM_USE, SPECIES_LANDORUS, ITEM_REVEAL_GLASS},
    {FORM_CHANGE_END},
};

static const struct FormChange sKeldeoFormChangeTable[] = {
    // {FORM_MOVE, SPECIES_KELDEO_RESOLUTE, MOVE_SECRET_SWORD, WHEN_LEARNED},
    // {FORM_MOVE, SPECIES_KELDEO, MOVE_SECRET_SWORD, WHEN_FORGOTTEN},
    {FORM_CHANGE_END},
};

static const struct FormChange sGenesectFormChangeTable[] = {
    {FORM_ITEM_HOLD, SPECIES_GENESECT,             ITEM_NONE},
    {FORM_ITEM_HOLD, SPECIES_GENESECT_DOUSE_DRIVE, ITEM_DOUSE_DRIVE},
    {FORM_ITEM_HOLD, SPECIES_GENESECT_SHOCK_DRIVE, ITEM_SHOCK_DRIVE},
    {FORM_ITEM_HOLD, SPECIES_GENESECT_BURN_DRIVE,  ITEM_BURN_DRIVE},
    {FORM_ITEM_HOLD, SPECIES_GENESECT_CHILL_DRIVE, ITEM_CHILL_DRIVE},
    {FORM_CHANGE_END},
};
#endif

#if P_GEN_6_POKEMON == TRUE
static const struct FormChange sXerneasFormChangeTable[] = {
    {FORM_BATTLE_BEGIN, SPECIES_XERNEAS_ACTIVE},
    {FORM_BATTLE_END,   SPECIES_XERNEAS,      },
    {FORM_CHANGE_END},
};

static const struct FormChange sHoopaFormChangeTable[] = {
    {FORM_ITEM_USE, SPECIES_HOOPA_UNBOUND, ITEM_PRISON_BOTTLE, SPECIES_HOOPA},
    // {FORM_WITHDRAW, SPECIES_HOOPA},
    {FORM_CHANGE_END},
};
#endif

#if P_GEN_7_POKEMON == TRUE
static const struct FormChange sOricorioFormChangeTable[] = {
    {FORM_ITEM_USE, SPECIES_ORICORIO,         ITEM_RED_NECTAR},
    {FORM_ITEM_USE, SPECIES_ORICORIO_POM_POM, ITEM_YELLOW_NECTAR},
    {FORM_ITEM_USE, SPECIES_ORICORIO_PAU,     ITEM_PINK_NECTAR},
    {FORM_ITEM_USE, SPECIES_ORICORIO_SENSU,   ITEM_PURPLE_NECTAR},
    {FORM_CHANGE_END},
};

static const struct FormChange sSilvallyFormChangeTable[] = {
    {FORM_ITEM_HOLD, SPECIES_SILVALLY,          ITEM_NONE,            ABILITY_RKS_SYSTEM},
    {FORM_ITEM_HOLD, SPECIES_SILVALLY_FIGHTING, ITEM_FIGHTING_MEMORY, ABILITY_RKS_SYSTEM},
    {FORM_ITEM_HOLD, SPECIES_SILVALLY_FLYING,   ITEM_FLYING_MEMORY,   ABILITY_RKS_SYSTEM},
    {FORM_ITEM_HOLD, SPECIES_SILVALLY_POISON,   ITEM_POISON_MEMORY,   ABILITY_RKS_SYSTEM},
    {FORM_ITEM_HOLD, SPECIES_SILVALLY_GROUND,   ITEM_GROUND_MEMORY,   ABILITY_RKS_SYSTEM},
    {FORM_ITEM_HOLD, SPECIES_SILVALLY_ROCK,     ITEM_ROCK_MEMORY,     ABILITY_RKS_SYSTEM},
    {FORM_ITEM_HOLD, SPECIES_SILVALLY_BUG,      ITEM_BUG_MEMORY,      ABILITY_RKS_SYSTEM},
    {FORM_ITEM_HOLD, SPECIES_SILVALLY_GHOST,    ITEM_GHOST_MEMORY,    ABILITY_RKS_SYSTEM},
    {FORM_ITEM_HOLD, SPECIES_SILVALLY_STEEL,    ITEM_STEEL_MEMORY,    ABILITY_RKS_SYSTEM},
    {FORM_ITEM_HOLD, SPECIES_SILVALLY_FIRE,     ITEM_FIRE_MEMORY,     ABILITY_RKS_SYSTEM},
    {FORM_ITEM_HOLD, SPECIES_SILVALLY_WATER,    ITEM_WATER_MEMORY,    ABILITY_RKS_SYSTEM},
    {FORM_ITEM_HOLD, SPECIES_SILVALLY_GRASS,    ITEM_GRASS_MEMORY,    ABILITY_RKS_SYSTEM},
    {FORM_ITEM_HOLD, SPECIES_SILVALLY_ELECTRIC, ITEM_ELECTRIC_MEMORY, ABILITY_RKS_SYSTEM},
    {FORM_ITEM_HOLD, SPECIES_SILVALLY_PSYCHIC,  ITEM_PSYCHIC_MEMORY,  ABILITY_RKS_SYSTEM},
    {FORM_ITEM_HOLD, SPECIES_SILVALLY_ICE,      ITEM_ICE_MEMORY,      ABILITY_RKS_SYSTEM},
    {FORM_ITEM_HOLD, SPECIES_SILVALLY_DRAGON,   ITEM_DRAGON_MEMORY,   ABILITY_RKS_SYSTEM},
    {FORM_ITEM_HOLD, SPECIES_SILVALLY_DARK,     ITEM_DARK_MEMORY,     ABILITY_RKS_SYSTEM},
    {FORM_ITEM_HOLD, SPECIES_SILVALLY_FAIRY,    ITEM_FAIRY_MEMORY,    ABILITY_RKS_SYSTEM},
    {FORM_CHANGE_END},
};
#endif

#if P_GEN_8_POKEMON == TRUE
static const struct FormChange sZacianFormChangeTable[] = {
    {FORM_BATTLE_BEGIN, SPECIES_ZACIAN_CROWNED_SWORD, ITEM_RUSTED_SWORD, MOVE_IRON_HEAD,      MOVE_BEHEMOTH_BLADE},
    {FORM_BATTLE_END,   SPECIES_ZACIAN,               ITEM_RUSTED_SWORD, MOVE_BEHEMOTH_BLADE, MOVE_IRON_HEAD},
    {FORM_CHANGE_END},
};

static const struct FormChange sZamazentaFormChangeTable[] = {
    {FORM_BATTLE_BEGIN, SPECIES_ZAMAZENTA_CROWNED_SHIELD, ITEM_RUSTED_SHIELD, MOVE_IRON_HEAD,      MOVE_BEHEMOTH_BASH},
    {FORM_BATTLE_END,   SPECIES_ZAMAZENTA,                ITEM_RUSTED_SHIELD, MOVE_BEHEMOTH_BASH,  MOVE_IRON_HEAD},
    {FORM_CHANGE_END},
};

static const struct FormChange sEnamorusFormChangeTable[] = {
    {FORM_ITEM_USE, SPECIES_ENAMORUS, ITEM_REVEAL_GLASS},
    {FORM_ITEM_USE, SPECIES_ENAMORUS_THERIAN, ITEM_REVEAL_GLASS},
    {FORM_CHANGE_END},
};

// Gigantamax Forms
#define GIGANTAMAX_FORM(species)\
    {                                                               \
        {FORM_GIGANTAMAX, SPECIES_##species},                       \
        {FORM_GIGANTAMAX, SPECIES_##species##_GMAX},                \
        {FORM_CHANGE_END}                                           \
    };

static const struct FormChange sVenusaurFormChangeTable[] = GIGANTAMAX_FORM(VENUSAUR)
static const struct FormChange sCharizardFormChangeTable[] = GIGANTAMAX_FORM(CHARIZARD)
static const struct FormChange sBlastoiseFormChangeTable[] = GIGANTAMAX_FORM(BLASTOISE)
static const struct FormChange sButterfreeFormChangeTable[] = GIGANTAMAX_FORM(BUTTERFREE)
static const struct FormChange sPikachuFormChangeTable[] = GIGANTAMAX_FORM(PIKACHU)
static const struct FormChange sMeowthFormChangeTable[] = GIGANTAMAX_FORM(MEOWTH)
static const struct FormChange sMachampFormChangeTable[] = GIGANTAMAX_FORM(MACHAMP)
static const struct FormChange sGengarFormChangeTable[] = GIGANTAMAX_FORM(GENGAR)
static const struct FormChange sKinglerFormChangeTable[] = GIGANTAMAX_FORM(KINGLER)
static const struct FormChange sLaprasFormChangeTable[] = GIGANTAMAX_FORM(LAPRAS)
static const struct FormChange sEeveeFormChangeTable[] = GIGANTAMAX_FORM(EEVEE)
static const struct FormChange sSnorlaxFormChangeTable[] = GIGANTAMAX_FORM(SNORLAX)
static const struct FormChange sGarbodorFormChangeTable[] = GIGANTAMAX_FORM(GARBODOR)
static const struct FormChange sMelmetalFormChangeTable[] = GIGANTAMAX_FORM(MELMETAL)
static const struct FormChange sRillaboomFormChangeTable[] = GIGANTAMAX_FORM(RILLABOOM)
static const struct FormChange sCinderaceFormChangeTable[] = GIGANTAMAX_FORM(CINDERACE)
static const struct FormChange sInteleonFormChangeTable[] = GIGANTAMAX_FORM(INTELEON)
static const struct FormChange sCorviknightFormChangeTable[] = GIGANTAMAX_FORM(CORVIKNIGHT)
static const struct FormChange sOrbeetleFormChangeTable[] = GIGANTAMAX_FORM(ORBEETLE)
static const struct FormChange sDrednawFormChangeTable[] = GIGANTAMAX_FORM(DREDNAW)
static const struct FormChange sCoalossalFormChangeTable[] = GIGANTAMAX_FORM(COALOSSAL)
static const struct FormChange sFlappleFormChangeTable[] = GIGANTAMAX_FORM(FLAPPLE)
static const struct FormChange sAppletunFormChangeTable[] = GIGANTAMAX_FORM(APPLETUN)
static const struct FormChange sSandacondaFormChangeTable[] = GIGANTAMAX_FORM(SANDACONDA)
static const struct FormChange sToxtricityFormChangeTable[] = GIGANTAMAX_FORM(TOXTRICITY)
static const struct FormChange sCentiskorchFormChangeTable[] = GIGANTAMAX_FORM(CENTISKORCH)
static const struct FormChange sHattereneFormChangeTable[] = GIGANTAMAX_FORM(HATTERENE)
static const struct FormChange sGrimmsnarlFormChangeTable[] = GIGANTAMAX_FORM(GRIMMSNARL)
static const struct FormChange sAlcremieFormChangeTable[] = GIGANTAMAX_FORM(ALCREMIE)
static const struct FormChange sCopperajahFormChangeTable[] = GIGANTAMAX_FORM(COPPERAJAH)
static const struct FormChange sDuraludonFormChangeTable[] = GIGANTAMAX_FORM(DURALUDON)
static const struct FormChange sUrshifuFormChangeTable[] = GIGANTAMAX_FORM(URSHIFU)
static const struct FormChange sUrshifuRapidStrikeFormChangeTable[] = GIGANTAMAX_FORM(URSHIFU_RAPID_STRIKE_STYLE)
#endif

#undef WHEN_LEARNED
#undef WHEN_FORGOTTEN
