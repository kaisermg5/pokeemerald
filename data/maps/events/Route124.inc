Route124_MapObjects: @ 852C3C4
	object_event 1, MAP_OBJ_GFX_SWIMMER_M, 0, 0, 34, 25, 1, 1, 5, 0, 1, 3, Route124_EventScript_1F6585, 0, 0, 0
	object_event 2, MAP_OBJ_GFX_SWIMMER_M, 0, 0, 61, 74, 1, 67, 53, 0, 1, 7, Route124_EventScript_1F659C, 0, 0, 0
	object_event 3, MAP_OBJ_GFX_SWIMMER_F, 0, 0, 49, 45, 1, 24, 0, 0, 1, 3, Route124_EventScript_1F65B3, 0, 0, 0
	object_event 4, MAP_OBJ_GFX_SWIMMER_F, 0, 0, 7, 23, 1, 18, 134, 0, 1, 5, Route124_EventScript_1F6615, 0, 0, 0
	object_event 5, MAP_OBJ_GFX_SWIMMER_M, 0, 0, 58, 58, 1, 28, 7, 0, 1, 2, Route124_EventScript_1F662C, 0, 0, 0
	object_event 6, MAP_OBJ_GFX_ITEM_BALL, 0, 0, 28, 12, 3, 1, 17, 0, 0, 0, Route124_EventScript_290FF1, 1092, 0, 0
	object_event 7, MAP_OBJ_GFX_ITEM_BALL, 0, 0, 31, 53, 3, 1, 17, 0, 0, 0, Route124_EventScript_290FFE, 1093, 0, 0
	object_event 8, MAP_OBJ_GFX_ITEM_BALL, 0, 0, 58, 11, 3, 1, 17, 0, 0, 0, Route124_EventScript_29100B, 1066, 0, 0
	object_event 9, MAP_OBJ_GFX_SWIMMER_F, 0, 0, 18, 44, 1, 8, 17, 0, 1, 1, Route124_EventScript_1F6643, 0, 0, 0
	object_event 10, MAP_OBJ_GFX_TUBER_M_SWIMMING, 0, 0, 17, 44, 1, 8, 17, 0, 1, 1, Route124_EventScript_1F66A7, 0, 0, 0
	object_event 11, MAP_OBJ_GFX_SWIMMER_M, 0, 0, 7, 29, 1, 7, 17, 0, 1, 5, Route124_EventScript_1F670B, 0, 0, 0
	object_event 12, MAP_OBJ_GFX_SWIMMER_F, 0, 0, 69, 74, 1, 66, 17, 0, 1, 7, Route124_EventScript_1F6722, 0, 0, 0

Route124_MapWarps: @ 852C4E4
	warp_def 70, 48, 3, 0, ROUTE_124_DIVING_TREASURE_HUNTERS_HOUSE

Route124_MapBGEvents: @ 852C4EC
	bg_event 73, 48, 3, 0, 0, Route124_EventScript_1F657C

Route124_MapEvents:: @ 852C4F8
	map_events Route124_MapObjects, Route124_MapWarps, 0x0, Route124_MapBGEvents

