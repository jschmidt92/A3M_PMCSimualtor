params [["_key", "", [""]]];

private _value = createHashMap;

if (isServer && !isDedicated) then {
    _value = profileNamespace getVariable _key;
} else {
    _value = [profileNamespace, [_key, createHashMap]] remoteExecCall ["getVariable", 2];
};
if (isNil "_value") exitWith { diag_log "[A3M Data] Key not Found!" };

diag_log format ["[A3M Data] Key Found! Data: %1", _value];
_value
