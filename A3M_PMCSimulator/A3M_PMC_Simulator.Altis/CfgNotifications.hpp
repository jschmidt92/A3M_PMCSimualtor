class CfgNotifications {
	class Default {
		title = ""; // Tile displayed as text on black background. Filled by arguments.
		iconPicture = ""; // Small icon displayed in left part. Colored by "color", filled by arguments.
		iconText = ""; // Short text displayed over the icon. Colored by "color", filled by arguments.
		description = ""; // Brief description displayed as structured text. Colored by "color", filled by arguments.
		color[] = {1,1,1,1}; // Icon and text color
		duration = 5; // How many seconds will the notification be displayed
		priority = 0; // Priority; higher number = more important; tasks in queue are selected by priority
		difficulty[] = {}; // Required difficulty settings. All listed difficulties has to be enabled
	};
	class TaskAssigned {
		title = "Contract Accepted"; // Tile displayed as text on black background. Filled by arguments.
		iconPicture = "\A3\ui_f\data\map\mapcontrol\taskIcon_ca.paa"; // Small icon displayed in left part. Colored by "color", filled by arguments.
		description = "%1"; // Brief description displayed as structured text. Colored by "color", filled by arguments.
		color[] = {1,1,1,1}; // Icon and text color
		priority = 0;
	};
	class TaskFailed {
		title = "Breach of Contract";
		iconPicture = "\A3\ui_f\data\map\mapcontrol\taskIconFailed_ca.paa";
		description = "%1";
		color[] = {1,0,0,1}; // Icon and text color
		priority = 0;
	};
	class TaskDone {
		title = "Contract Fulfilled";
		iconPicture = "\A3\ui_f\data\map\mapcontrol\taskIconDone_ca.paa";
		description = "%1";
		color[] = {0,1,0,1}; // Icon and text color
		priority = 0;
	};
	class InformationRed {
		title = "Information";
		iconPicture = "\A3\ui_f\data\map\markers\handdrawn\warning_ca.paa";
		description = "%1";
		color[] = {0.69,0.13,0.13,1}; // Icon and text color
		priority = 1;
	};
	class InformationGreen {
		title = "Information";
		iconPicture = "\A3\ui_f\data\map\markers\handdrawn\warning_ca.paa";
		description = "%1";
		color[] = {0.13,0.54,0.13,1}; // Icon and text color
		priority = 1;
	};
	class ScoreAdded {
		title = "RP Earned";
		iconText = "+%2";
		description = "%1";
		color[] = {1,0,1,1};
		priority = 2;
	};
};
