params [["_key", "", [""]], ["_value", "", ["", 0, false, [], createHashMap, objNull, grpNull]]];

if (_key isEqualTo "") exitWith { diag_log "[A3M Data] Empty key!" };
if (isServer && !isDedicated) then {
    profileNamespace setVariable [_key, _value];
    saveProfileNamespace;
} else {
    [profileNamespace, [_key, _value]] remoteExecCall ["setVariable", 2];
    remoteExecCall ["saveProfileNamespace", 2];
};

// Return true
true
