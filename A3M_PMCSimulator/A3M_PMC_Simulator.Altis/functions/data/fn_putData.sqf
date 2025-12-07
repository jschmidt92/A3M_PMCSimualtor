params [["_key", "", [""]], ["_value", "", ["", 0, false, [], createHashMap, objNull, grpNull]]];

private _data = createHashMap;

if (isServer && !isDedicated) then {
    _data = profileNamespace getVariable _key;
} else {
    _data = [profileNamespace, _key] remoteExecCall ["getVariable", 2];
};
if (isNil "_data") exitWith { diag_log "[A3M Data] Key not Found!" };
if (isServer && !isDedicated) then {
    profileNamespace setVariable [_key, _value];
    saveProfileNamespace;
} else {
    [profileNamespace, [_key, _value]] remoteExecCall ["setVariable", 2];
    remoteExecCall ["saveProfileNamespace", 2];
};
if (isServer && !isDedicated) then {
    _data = profileNamespace getVariable _key;
} else {
    _data = [profileNamespace, _key] remoteExecCall ["getVariable", 2];
};
if (isNil "_data") exitWith { diag_log "[A3M Data] Key not Found!" };

diag_log format ["[A3M Data] Key Found! Data: %1", _data];

_data
