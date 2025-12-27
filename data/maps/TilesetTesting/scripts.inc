TilesetTesting_MapScripts::
	.byte 0


PokeStopTest_Nurse::
# 6 "data/maps/TilesetTesting/scripts.pory"
	lock
# 7 "data/maps/TilesetTesting/scripts.pory"
	faceplayer
# 8 "data/maps/TilesetTesting/scripts.pory"
	msgbox PokeStopTest_Nurse_Text_0, MSGBOX_YESNO
# 9 "data/maps/TilesetTesting/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq PokeStopTest_Nurse_1
# 24 "data/maps/TilesetTesting/scripts.pory"
	msgbox PokeStopTest_Nurse_Text_2, MSGBOX_NPC
	return

PokeStopTest_Nurse_1:
# 10 "data/maps/TilesetTesting/scripts.pory"
	setrespawn HEAL_LOCATION_TILESET_TESTING
# 11 "data/maps/TilesetTesting/scripts.pory"
	incrementgamestat GAME_STAT_USED_POKECENTER
# 12 "data/maps/TilesetTesting/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 13 "data/maps/TilesetTesting/scripts.pory"
	playfanfare MUS_HEAL
# 14 "data/maps/TilesetTesting/scripts.pory"
	waitfanfare
# 15 "data/maps/TilesetTesting/scripts.pory"
	special HealPlayerParty
# 16 "data/maps/TilesetTesting/scripts.pory"
	callnative UpdateFollowingPokemon
# 17 "data/maps/TilesetTesting/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 18 "data/maps/TilesetTesting/scripts.pory"
	msgbox PokeStopTest_Nurse_Text_1
# 19 "data/maps/TilesetTesting/scripts.pory"
	waitmessage
# 20 "data/maps/TilesetTesting/scripts.pory"
	release
	end


PokeStopTest_Mart_Employee::
# 28 "data/maps/TilesetTesting/scripts.pory"
	lock
# 29 "data/maps/TilesetTesting/scripts.pory"
	faceplayer
# 30 "data/maps/TilesetTesting/scripts.pory"
	message PokeStopTest_Mart_Employee_Text_0
# 31 "data/maps/TilesetTesting/scripts.pory"
	waitmessage
# 32 "data/maps/TilesetTesting/scripts.pory"
	pokemart PokeStopTest_Mart
# 33 "data/maps/TilesetTesting/scripts.pory"
	msgbox PokeStopTest_Mart_Employee_Text_1
# 34 "data/maps/TilesetTesting/scripts.pory"
	release
	end


TilesetTesting_EventScript_PokeStopSign::
# 40 "data/maps/TilesetTesting/scripts.pory"
	lockall
# 41 "data/maps/TilesetTesting/scripts.pory"
	msgbox TilesetTesting_EventScript_PokeStopSign_Text_0
# 42 "data/maps/TilesetTesting/scripts.pory"
	msgbox TilesetTesting_EventScript_PokeStopSign_Text_1
# 43 "data/maps/TilesetTesting/scripts.pory"
	releaseall
	return


TilesetTesting_EventScript_WelcomeSign::
# 46 "data/maps/TilesetTesting/scripts.pory"
	lockall
# 47 "data/maps/TilesetTesting/scripts.pory"
	msgbox TilesetTesting_EventScript_WelcomeSign_Text_0
# 48 "data/maps/TilesetTesting/scripts.pory"
	releaseall
	return


# 51 "data/maps/TilesetTesting/scripts.pory"

# 52 "data/maps/TilesetTesting/scripts.pory"

# 53 "data/maps/TilesetTesting/scripts.pory"
.align 2
# 54 "data/maps/TilesetTesting/scripts.pory"
PokeStopTest_Mart::
# 55 "data/maps/TilesetTesting/scripts.pory"
    .2byte ITEM_POKE_BALL
# 56 "data/maps/TilesetTesting/scripts.pory"
    .2byte ITEM_POTION
# 57 "data/maps/TilesetTesting/scripts.pory"
    .2byte ITEM_RARE_CANDY
# 58 "data/maps/TilesetTesting/scripts.pory"
    .2byte ITEM_REPEL
# 59 "data/maps/TilesetTesting/scripts.pory"
    .2byte ITEM_FULL_HEAL
# 60 "data/maps/TilesetTesting/scripts.pory"
    .2byte ITEM_OLD_ROD
# 61 "data/maps/TilesetTesting/scripts.pory"
    .2byte ITEM_NONE
# 62 "data/maps/TilesetTesting/scripts.pory"
    release
# 63 "data/maps/TilesetTesting/scripts.pory"
    end

PokeStopTest_Nurse_Text_0:
# 8 "data/maps/TilesetTesting/scripts.pory"
	.string "Would you like to heal your party?$"

PokeStopTest_Nurse_Text_1:
# 18 "data/maps/TilesetTesting/scripts.pory"
	.string "All set. Stop by anytime!$"

PokeStopTest_Nurse_Text_2:
# 24 "data/maps/TilesetTesting/scripts.pory"
	.string "Have a good one!$"

PokeStopTest_Mart_Employee_Text_0:
# 30 "data/maps/TilesetTesting/scripts.pory"
	.string "What can I get for you?$"

PokeStopTest_Mart_Employee_Text_1:
# 33 "data/maps/TilesetTesting/scripts.pory"
	.string "Thanks for stopping by!$"

TilesetTesting_EventScript_PokeStopSign_Text_0:
# 41 "data/maps/TilesetTesting/scripts.pory"
	.string "The PokeStop:$"

TilesetTesting_EventScript_PokeStopSign_Text_1:
# 42 "data/maps/TilesetTesting/scripts.pory"
	.string "Your one-stop shop!$"

TilesetTesting_EventScript_WelcomeSign_Text_0:
# 47 "data/maps/TilesetTesting/scripts.pory"
	.string "First Tileset Prototype$"
