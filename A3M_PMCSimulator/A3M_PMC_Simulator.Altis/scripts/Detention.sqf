// Military Police HQ Predefines (Door locks, mostly)

Add_MPPowers = {
    MPAction1 = player addAction ["Lock Observation Room", { remoteExec ["DRI_MPHQ_LockObsRoom"]; }];
    MPAction2 = player addAction ["Unlock Observation Room", { remoteExec ["DRI_MPQH_UnlockObsRoom"]; }];
    MPAction3 = player addAction ["Lock MP Armory", { remoteExec ["DRI_MPHQ_LockMPArmory"]; }];
    MPAction4 = player addAction ["Unlock MP Armory", { remoteExec ["DRI_MPHQ_UnlockMPArmory"]; }];
    MPAction5 = player addAction ["Lock Holding Cell A", { remoteExec ["DRI_MPHQ_LockCellA"]; }];
    MPAction6 = player addAction ["Unlock Holding Cell A", { remoteExec ["DRI_MPHQ_UnlockCellA"]; }];
    MPAction7 = player addAction ["Lock Holding Cell B", { remoteExec ["DRI_MPHQ_LockCellB"]; }];
    MPAction8 = player addAction ["Unlock Holding Cell B", { remoteExec ["DRI_MPHQ_UnlockCellB"]; }];
    MPAction9 = player addAction ["Lock Holding Cell C", { remoteExec ["DRI_MPHQ_LockCellC"]; }];
    MPAction10 = player addAction ["Unlock Holding Cell C", { remoteExec ["DRI_MPHQ_UnlockCellC"]; }];
};

Remove_MPPowers = {
    player RemoveAction MPAction1;
    player RemoveAction MPAction2;
    player RemoveAction MPAction3;
    player RemoveAction MPAction4;
    player RemoveAction MPAction5;
    player RemoveAction MPAction6;
    player RemoveAction MPAction7;
    player RemoveAction MPAction8;
    player RemoveAction MPAction9;
    player RemoveAction MPAction10;
};

DRI_MPHQ_LockCellA = {
    MP_HQ =  [0,0,0] nearestObject 1779021;
    MP_HQ setVariable ["bis_disabled_Door_5", 1];
};

DRI_MPHQ_UnlockCellA = {
    MP_HQ =  [0,0,0] nearestObject 1779021;
    MP_HQ setVariable ["bis_disabled_door_5", 0];
};

DRI_MPHQ_LockObsRoom = {
    MP_HQ =  [0,0,0] nearestObject 1779021;
    MP_HQ setVariable ["bis_disabled_Door_4", 1];
};

DRI_MPQH_UnlockObsRoom = {
    MP_HQ =  [0,0,0] nearestObject 1779021;
    MP_HQ setVariable ["bis_disabled_Door_4", 0];
};

DRI_MPHQ_LockMPArmory = {
    MP_HQ =  [0,0,0] nearestObject 1779021;
    MP_HQ setVariable ["bis_disabled_Door_6", 1];
};

DRI_MPHQ_UnlockMPArmory = {
    MP_HQ =  [0,0,0] nearestObject 1779021;
    MP_HQ setVariable ["bis_disabled_Door_6", 1];
};

DRI_MPHQ_LockCellB = {
    MP_HQ =  [0,0,0] nearestObject 1779021;
    MP_HQ setVariable ["bis_disabled_Door_7", 1];
};

DRI_MPHQ_UnlockCellB = {
    MP_HQ =  [0,0,0] nearestObject 1779021;
    MP_HQ setVariable ["bis_disabled_Door_7", 1];
};

DRI_MPHQ_LockCellC = {
    MP_HQ =  [0,0,0] nearestObject 1779021;
    MP_HQ setVariable ["bis_disabled_Door_8", 1];
};

DRI_MPHQ_UnlockCellC = {
    MP_HQ =  [0,0,0] nearestObject 1779021;
    MP_HQ setVariable ["bis_disabled_Door_8", 1];
};
