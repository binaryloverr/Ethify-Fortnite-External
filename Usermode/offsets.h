enum EBoneIndex : int {
	Head = 109,
	Neck = 67,
	Chest = 66,
	Pelvis = 2,
	LShoulder = 9,
	LElbow = 10,
	LHand = 11,
	RShoulder = 38,
	RElbow = 39,
	RHand = 40,
	LHip = 71,
	LKnee = 72,
	LFoot = 73,
	RHip = 78,
	RKnee = 79,
	RFoot = 82,
	Root = 0
};

enum bones : int
{
	HumanBase = 0,
	HumanPelvis = 2,
	HumanLThigh1 = 71,
	HumanLThigh2 = 77,
	HumanLThigh3 = 72,
	HumanLCalf = 74,
	HumanLFoot = 86,
	HumanLToe = 76,
	HumanRThigh1 = 78,
	HumanRThigh2 = 84,
	HumanRThigh3 = 79,
	HumanRCalf = 81,
	HumanRFoot = 87,
	HumanRToe = 83,
	HumanSpine1 = 7,
	HumanSpine2 = 5,
	HumanSpine3 = 2,
	HumanLCollarbone = 9,
	HumanLUpperarm = 35,
	HumanLForearm1 = 36,
	HumanLForearm23 = 10,
	HumanLForearm2 = 34,
	HumanLForearm3 = 33,
	HumanLPalm = 32,
	HumanRCollarbone = 98,
	HumanRUpperarm = 64,
	HumanRForearm1 = 65,
	HumanRForearm23 = 39,
	HumanRForearm2 = 63,
	HumanRForearm3 = 62,
	HumanRPalm = 58,
	HumanNeck = 67,
	HumanHead = 109,
	HumanChest = 66
};

enum offset {
	uworld = 0x112F14C8, //Uworld // Gworld
	game_instance = 0x1D0, //owning game instance
	game_state = 0x158, //game state
	local_player = 0x38, //
	player_controller = 0x30,
	acknowledged_pawn = 0x338,
	skeletal_mesh = 0x318,
	player_state = 0x2B0,
	root_component = 0x198,
	velocity = 0x170,
	relative_location = 0x120,
	relative_rotation = 0x138,
	team_index = 0x10f1,
	player_array = 0x2A8,
	pawn_private = 0x308,
	component_to_world = 0x230,
	b_Allow_Targeting = 0xd30
};
