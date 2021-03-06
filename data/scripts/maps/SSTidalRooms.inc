SSTidalRooms_MapScripts:: @ 823C9F1
	.byte 0

SSTidalRooms_EventScript_23C9F2:: @ 823C9F2
	lock
	faceplayer
	checkflag FLAG_0x104
	goto_eq SSTidalRooms_EventScript_23CA29
	msgbox SSTidalRooms_Text_23D098, 4
	giveitem_std ITEM_TM49
	compare_var_to_value VAR_RESULT, 0
	goto_eq SSTidalRooms_EventScript_272054
	setflag FLAG_0x104
	msgbox SSTidalRooms_Text_23D145, 4
	release
	end

SSTidalRooms_EventScript_23CA29:: @ 823CA29
	msgbox SSTidalRooms_Text_23D145, 4
	release
	end

SSTidalRooms_EventScript_23CA33:: @ 823CA33
	lockall
	msgbox SSTidalRooms_Text_23CAF2, 4
	closemessage
	call SSTidalRooms_EventScript_272083
	call SSTidalRooms_EventScript_23C0A7
	releaseall
	end

SSTidalRooms_EventScript_23CA49:: @ 823CA49
	trainerbattle 0, TRAINER_COLTON, 0, SSTidalRooms_Text_23CB14, SSTidalRooms_Text_23CB58
	msgbox SSTidalRooms_Text_23CB75, 6
	end

SSTidalRooms_EventScript_23CA60:: @ 823CA60
	trainerbattle 0, TRAINER_MICAH, 0, SSTidalRooms_Text_23CBEB, SSTidalRooms_Text_23CC04
	msgbox SSTidalRooms_Text_23CC26, 6
	end

SSTidalRooms_EventScript_23CA77:: @ 823CA77
	trainerbattle 0, TRAINER_THOMAS, 0, SSTidalRooms_Text_23CC68, SSTidalRooms_Text_23CC8A
	msgbox SSTidalRooms_Text_23CCBB, 6
	end

SSTidalRooms_EventScript_23CA8E:: @ 823CA8E
	trainerbattle 4, TRAINER_LEA_AND_JED, 0, SSTidalRooms_Text_23CD04, SSTidalRooms_Text_23CD54, SSTidalRooms_Text_23CDC6
	msgbox SSTidalRooms_Text_23CD5F, 6
	end

SSTidalRooms_EventScript_23CAA9:: @ 823CAA9
	trainerbattle 4, TRAINER_LEA_AND_JED, 0, SSTidalRooms_Text_23CE04, SSTidalRooms_Text_23CE4B, SSTidalRooms_Text_23CEB0
	msgbox SSTidalRooms_Text_23CE59, 6
	end

SSTidalRooms_EventScript_23CAC4:: @ 823CAC4
	trainerbattle 0, TRAINER_GARRET, 0, SSTidalRooms_Text_23CEEE, SSTidalRooms_Text_23CF36
	msgbox SSTidalRooms_Text_23CF45, 6
	end

SSTidalRooms_EventScript_23CADB:: @ 823CADB
	trainerbattle 0, TRAINER_NAOMI, 0, SSTidalRooms_Text_23CF97, SSTidalRooms_Text_23CFF4
	msgbox SSTidalRooms_Text_23D013, 6
	end

SSTidalRooms_Text_23CAF2: @ 823CAF2
	.string "There’s a bed…\n"
	.string "Let’s take a rest.$"

SSTidalRooms_Text_23CB14: @ 823CB14
	.string "I often sail to LILYCOVE CITY.\p"
	.string "I enjoy attending CONTESTS,\n"
	.string "you see.$"

SSTidalRooms_Text_23CB58: @ 823CB58
	.string "That was an enjoyable match!$"

SSTidalRooms_Text_23CB75: @ 823CB75
	.string "I get so excited imagining what kinds\n"
	.string "of POKéMON I’ll get to see in the next\l"
	.string "CONTEST. The anticipation of it thrills!$"

SSTidalRooms_Text_23CBEB: @ 823CBEB
	.string "Are your friends strong?$"

SSTidalRooms_Text_23CC04: @ 823CC04
	.string "Your friends are, indeed, strong.$"

SSTidalRooms_Text_23CC26: @ 823CC26
	.string "Friends need not be human.\n"
	.string "For me, POKéMON are treasured friends!$"

SSTidalRooms_Text_23CC68: @ 823CC68
	.string "Child…\n"
	.string "Did you knock on the door?$"

SSTidalRooms_Text_23CC8A: @ 823CC8A
	.string "A loss is to be accepted without haste\n"
	.string "or panic.$"

SSTidalRooms_Text_23CCBB: @ 823CCBB
	.string "To be never ruffled in any situation is\n"
	.string "the GENTLEMAN’s code of conduct.$"

SSTidalRooms_Text_23CD04: @ 823CD04
	.string "JED: I feel a little shy about this, but…\n"
	.string "We’ll show you our lovey-dovey power!$"

SSTidalRooms_Text_23CD54: @ 823CD54
	.string "JED: Sigh…$"

SSTidalRooms_Text_23CD5F: @ 823CD5F
	.string "JED: It’s the first time that our lovey-\n"
	.string "dovey power couldn’t prevail!\l"
	.string "You must be an awesome TRAINER!$"

SSTidalRooms_Text_23CDC6: @ 823CDC6
	.string "JED: You only have one POKéMON?\n"
	.string "Isn’t that just too lonesome?$"

SSTidalRooms_Text_23CE04: @ 823CE04
	.string "LEA: I feel a little silly, but…\n"
	.string "We’ll show you our lovey-dovey power!$"

SSTidalRooms_Text_23CE4B: @ 823CE4B
	.string "LEA: Oh, boo!$"

SSTidalRooms_Text_23CE59: @ 823CE59
	.string "LEA: I can’t believe it!\n"
	.string "Our lovey-dovey power failed…\l"
	.string "You must be an awesome TRAINER!$"

SSTidalRooms_Text_23CEB0: @ 823CEB0
	.string "LEA: I wanted to battle…\n"
	.string "But you don’t even have two POKéMON…$"

SSTidalRooms_Text_23CEEE: @ 823CEEE
	.string "Ah, you’ve come just in time.\p"
	.string "I’m bored, you see.\n"
	.string "You may entertain me.$"

SSTidalRooms_Text_23CF36: @ 823CF36
	.string "…That will do.$"

SSTidalRooms_Text_23CF45: @ 823CF45
	.string "Perhaps I shall get Father to acquire\n"
	.string "a yacht for me.\l"
	.string "A yacht for me and POKéMON!$"

SSTidalRooms_Text_23CF97: @ 823CF97
	.string "Oh, you’re such an adorable TRAINER.\n"
	.string "Would you like to have tea?\l"
	.string "Or would you rather battle?$"

SSTidalRooms_Text_23CFF4: @ 823CFF4
	.string "I see.\n"
	.string "You’re the active sort.$"

SSTidalRooms_Text_23D013: @ 823D013
	.string "A world cruise on a luxury liner has its\n"
	.string "charms, I must say…\p"
	.string "But, I will admit there is an appealing\n"
	.string "side to touring HOENN by ferry.$"

SSTidalRooms_Text_23D098: @ 823D098
	.string "Uh… Hi! I… I’m not acting suspicious!\n"
	.string "Uh… You can have this! For free!\p"
	.string "It… Honestly, I didn’t SNATCH it from\n"
	.string "someone! I’d never do such a thing!\l"
	.string "It’s clean! You can use it!$"

SSTidalRooms_Text_23D145: @ 823D145
	.string "SNATCH steals the beneficial effects\n"
	.string "of certain moves before they can be\l"
	.string "used by a foe or ally.$"

