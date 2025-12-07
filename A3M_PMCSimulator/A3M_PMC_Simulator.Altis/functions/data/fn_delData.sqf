params [["_key", "", [""]]];

private _value = createHashMap;

if (isServer && !isDedicated) then {
    _value = profileNamespace getVariable _key;
} else {
    _value = [profileNamespace, _key] remoteExecCall ["getVariable", 2];
};
if (isNil "_value") exitWith { diag_log "[A3M Data] Key not Found!" };
if (isServer && !isDedicated) then {
    profileNamespace setVariable [_key, nil];
    saveProfileNamespace;
} else {
    [profileNamespace, [_key, nil]] remoteExecCall ["setVariable", 2];
    remoteExecCall ["saveProfileNamespace", 2];
};

true
