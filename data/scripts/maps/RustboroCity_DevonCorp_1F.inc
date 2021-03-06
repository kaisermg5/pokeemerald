RustboroCity_DevonCorp_1F_MapScripts:: @ 8211245
	map_script 3, RustboroCity_DevonCorp_1F_MapScript1_21124B
	.byte 0

RustboroCity_DevonCorp_1F_MapScript1_21124B: @ 821124B
	checkflag FLAG_0x090
	call_if 0, RustboroCity_DevonCorp_1F_EventScript_211255
	end

RustboroCity_DevonCorp_1F_EventScript_211255:: @ 8211255
	setobjectxyperm 2, 14, 2
	setobjectmovementtype 2, 8
	return

RustboroCity_DevonCorp_1F_EventScript_211261:: @ 8211261
	lock
	faceplayer
	checkflag FLAG_0x090
	goto_eq RustboroCity_DevonCorp_1F_EventScript_211289
	checkflag FLAG_0x08E
	goto_eq RustboroCity_DevonCorp_1F_EventScript_21127F
	msgbox RustboroCity_DevonCorp_1F_Text_2113D1, 4
	release
	end

RustboroCity_DevonCorp_1F_EventScript_21127F:: @ 821127F
	msgbox RustboroCity_DevonCorp_1F_Text_211446, 4
	release
	end

RustboroCity_DevonCorp_1F_EventScript_211289:: @ 8211289
	msgbox RustboroCity_DevonCorp_1F_Text_2114DE, 4
	release
	end

RustboroCity_DevonCorp_1F_EventScript_211293:: @ 8211293
	lock
	faceplayer
	checkflag FLAG_0x090
	goto_eq RustboroCity_DevonCorp_1F_EventScript_2112BA
	checkflag FLAG_0x08F
	goto_eq RustboroCity_DevonCorp_1F_EventScript_2112C4
	checkflag FLAG_0x08E
	goto_eq RustboroCity_DevonCorp_1F_EventScript_2112C4
	msgbox RustboroCity_DevonCorp_1F_Text_21151B, 4
	release
	end

RustboroCity_DevonCorp_1F_EventScript_2112BA:: @ 82112BA
	msgbox RustboroCity_DevonCorp_1F_Text_211585, 4
	release
	end

RustboroCity_DevonCorp_1F_EventScript_2112C4:: @ 82112C4
	msgbox RustboroCity_DevonCorp_1F_Text_211558, 4
	release
	end

RustboroCity_DevonCorp_1F_EventScript_2112CE:: @ 82112CE
	lock
	faceplayer
	checkflag FLAG_0x090
	goto_eq RustboroCity_DevonCorp_1F_EventScript_2112F5
	checkflag FLAG_0x08F
	goto_eq RustboroCity_DevonCorp_1F_EventScript_2112FF
	checkflag FLAG_0x08E
	goto_eq RustboroCity_DevonCorp_1F_EventScript_2112FF
	msgbox RustboroCity_DevonCorp_1F_Text_21131B, 4
	release
	end

RustboroCity_DevonCorp_1F_EventScript_2112F5:: @ 82112F5
	msgbox RustboroCity_DevonCorp_1F_Text_21131B, 4
	release
	end

RustboroCity_DevonCorp_1F_EventScript_2112FF:: @ 82112FF
	msgbox RustboroCity_DevonCorp_1F_Text_21138B, 4
	release
	end

RustboroCity_DevonCorp_1F_EventScript_211309:: @ 8211309
	msgbox RustboroCity_DevonCorp_1F_Text_2115AC, 3
	end

RustboroCity_DevonCorp_1F_EventScript_211312:: @ 8211312
	msgbox RustboroCity_DevonCorp_1F_Text_211722, 3
	end

RustboroCity_DevonCorp_1F_Text_21131B: @ 821131B
	.string "Hello and welcome to the DEVON\n"
	.string "CORPORATION.\p"
	.string "We’re proud producers of items and\n"
	.string "medicine that enhance your life.$"

RustboroCity_DevonCorp_1F_Text_21138B: @ 821138B
	.string "One of our research staff stupidly\n"
	.string "got robbed of an important parcel.$"

RustboroCity_DevonCorp_1F_Text_2113D1: @ 82113D1
	.string "Hey, those RUNNING SHOES!\n"
	.string "They’re one of our products!\p"
	.string "It makes me happy when I see someone\n"
	.string "using something we made.$"

RustboroCity_DevonCorp_1F_Text_211446: @ 8211446
	.string "That stolen parcel…\p"
	.string "Well, sure it’s important, but it’s not\n"
	.string "anything that anyone can use.\p"
	.string "In my estimation, that robber must not\n"
	.string "have been very bright.$"

RustboroCity_DevonCorp_1F_Text_2114DE: @ 82114DE
	.string "It sounds like they’ve recovered\n"
	.string "the ripped-off DEVON GOODS.$"

RustboroCity_DevonCorp_1F_Text_21151B: @ 821151B
	.string "I’m sorry, only authorized people\n"
	.string "are allowed to enter here.$"

RustboroCity_DevonCorp_1F_Text_211558: @ 8211558
	.string "It’s beyond stupid.\n"
	.string "How could we get robbed?$"

RustboroCity_DevonCorp_1F_Text_211585: @ 8211585
	.string "Hi, there!\n"
	.string "You’re always welcome here!$"

RustboroCity_DevonCorp_1F_Text_2115AC: @ 82115AC
	.string "Samples of rocks and metal are\n"
	.string "displayed in the glass case.\p"
	.string "There’s a panel with some writing\n"
	.string "on it…\p"
	.string "“DEVON CORPORATION got its start as\n"
	.string "a producer of stones from quarries.\p"
	.string "“The company also produced iron from\n"
	.string "filings in the sand.\p"
	.string "“From that humble start as a producer\n"
	.string "of raw materials, DEVON developed.\p"
	.string "“DEVON is now a manufacturer of a wide\n"
	.string "range of industrial products.”$"

RustboroCity_DevonCorp_1F_Text_211722: @ 8211722
	.string "Prototypes and test products fill\n"
	.string "the glass display case.\p"
	.string "There’s a panel with a description…\p"
	.string "“In addition to industrial products,\n"
	.string "DEVON now markets sundries and\l"
	.string "pharmaceuticals for better lifestyles.\p"
	.string "“Recently, DEVON has begun marketing\n"
	.string "tools for POKéMON TRAINERS, including\l"
	.string "POKé BALLS and POKéNAV systems.”$"

