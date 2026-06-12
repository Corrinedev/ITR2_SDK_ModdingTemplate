using UnrealBuildTool;

public class IntoTheRadius2GameTarget : TargetRules {
	public IntoTheRadius2GameTarget(TargetInfo Target) : base(Target) {
		Type = TargetType.Game;
		DefaultBuildSettings = BuildSettingsVersion.V5;
		IncludeOrderVersion = EngineIncludeOrderVersion.Unreal5_5;
		CppStandard = CppStandardVersion.Cpp20;
		bOverrideBuildEnvironment = true;
		ExtraModuleNames.AddRange(new string[] {
			"IntoTheRadius2",
		});
	}
}
