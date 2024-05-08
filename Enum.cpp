// Enum  CoreUObject.EAutomationEventType
enum class EAutomationEventType : uint8_t
{
    Info                                           = 0,
    Warning                                        = 1,
    Error                                          = 2,
    EAutomationEventType_MAX                       = 3
};


// Enum  CoreUObject.Default__Enum
enum class Default__Enum : uint8_t
{
};


// Enum  CoreUObject.ERangeBoundTypes
enum class ERangeBoundTypes : uint8_t
{
    Exclusive                                      = 0,
    Inclusive                                      = 1,
    Open                                           = 2,
    ERangeBoundTypes_MAX                           = 3
};


// Enum  CoreUObject.EInterpCurveMode
enum class EInterpCurveMode : uint8_t
{
    CIM_Linear                                     = 0,
    CIM_CurveAuto                                  = 1,
    CIM_Constant                                   = 2,
    CIM_CurveUser                                  = 3,
    CIM_CurveBreak                                 = 4,
    CIM_CurveAutoClamped                           = 5,
    CIM_MAX                                        = 6
};


// Enum  CoreUObject.ELocalizedTextSourceCategory
enum class ELocalizedTextSourceCategory : uint8_t
{
    Game                                           = 0,
    Engine                                         = 1,
    Editor                                         = 2,
    ELocalizedTextSourceCategory_MAX               = 3
};


// Enum  GameplayAbilities.EGameplayEffectGrantedAbilityRemovePolicy
enum class EGameplayEffectGrantedAbilityRemovePolicy : uint8_t
{
    CancelAbilityImmediately                       = 0,
    RemoveAbilityOnEnd                             = 1,
    DoNothing                                      = 2,
    EGameplayEffectGrantedAbilityRemovePolicy_MAX  = 3
};


// Enum  DataRegistry.EDataRegistryAcquireStatus
enum class EDataRegistryAcquireStatus : uint8_t
{
    NotStarted                                     = 0,
    WaitingForInitialAcquire                       = 1,
    InitialAcquireFinished                         = 2,
    WaitingForResources                            = 3,
    AcquireFinished                                = 4,
    AcquireError                                   = 5,
    DoesNotExist                                   = 6,
    EDataRegistryAcquireStatus_MAX                 = 7
};


// Enum  Engine.ETextGender
enum class ETextGender : uint8_t
{
    Masculine                                      = 0,
    Feminine                                       = 1,
    Neuter                                         = 2,
    ETextGender_MAX                                = 3
};


// Enum  Engine.EFormatArgumentType
enum class EFormatArgumentType : uint8_t
{
    Int                                            = 0,
    UInt                                           = 1,
    Float                                          = 2,
    Double                                         = 3,
    Text                                           = 4,
    Gender                                         = 5,
    EFormatArgumentType_MAX                        = 6
};


// Enum  Engine.EAnimDataModelNotifyType
enum class EAnimDataModelNotifyType : uint8_t
{
    BracketOpened                                  = 0,
    BracketClosed                                  = 1,
    TrackAdded                                     = 2,
    TrackChanged                                   = 3,
    TrackRemoved                                   = 4,
    SequenceLengthChanged                          = 5,
    FrameRateChanged                               = 6,
    CurveAdded                                     = 7,
    CurveChanged                                   = 8,
    CurveRemoved                                   = 9,
    CurveFlagsChanged                              = 10,
    CurveRenamed                                   = 11,
    CurveScaled                                    = 12,
    CurveColorChanged                              = 13,
    AttributeAdded                                 = 14,
    AttributeRemoved                               = 15,
    AttributeChanged                               = 16,
    Populated                                      = 17,
    Reset                                          = 18,
    Invalid                                        = 19,
    EAnimDataModelNotifyType_MAX                   = 20
};


// Enum  InputCore.ETouchIndex
enum class ETouchIndex : uint8_t
{
    Touch1                                         = 0,
    Touch2                                         = 1,
    Touch3                                         = 2,
    Touch4                                         = 3,
    Touch5                                         = 4,
    Touch6                                         = 5,
    Touch7                                         = 6,
    Touch8                                         = 7,
    Touch9                                         = 8,
    Touch10                                        = 9,
    CursorPointerIndex                             = 10,
    MAX_TOUCHES                                    = 11,
    ETouchIndex_MAX                                = 12
};


// Enum  Engine.EMovementMode
enum class EMovementMode : uint8_t
{
    MOVE_None                                      = 0,
    MOVE_Walking                                   = 1,
    MOVE_NavWalking                                = 2,
    MOVE_Falling                                   = 3,
    MOVE_Swimming                                  = 4,
    MOVE_Flying                                    = 5,
    MOVE_Custom                                    = 6,
    MOVE_MAX                                       = 7
};


// Enum  Engine.EAudioComponentPlayState
enum class EAudioComponentPlayState : uint8_t
{
    Playing                                        = 0,
    Stopped                                        = 1,
    Paused                                         = 2,
    FadingIn                                       = 3,
    FadingOut                                      = 4,
    Count                                          = 5,
    EAudioComponentPlayState_MAX                   = 6
};


// Enum  Engine.EDataLayerRuntimeState
enum class EDataLayerRuntimeState : uint8_t
{
    Unloaded                                       = 0,
    Loaded                                         = 1,
    Activated                                      = 2,
    EDataLayerRuntimeState_MAX                     = 3
};


// Enum  Engine.EQuartzCommandDelegateSubType
enum class EQuartzCommandDelegateSubType : uint8_t
{
    CommandOnFailedToQueue                         = 0,
    CommandOnQueued                                = 1,
    CommandOnCanceled                              = 2,
    CommandOnAboutToStart                          = 3,
    CommandOnStarted                               = 4,
    Count                                          = 5,
    EQuartzCommandDelegateSubType_MAX              = 6
};


// Enum  Engine.EQuartzCommandQuantization
enum class EQuartzCommandQuantization : uint8_t
{
    Bar                                            = 0,
    Beat                                           = 1,
    ThirtySecondNote                               = 2,
    SixteenthNote                                  = 3,
    EighthNote                                     = 4,
    QuarterNote                                    = 5,
    HalfNote                                       = 6,
    WholeNote                                      = 7,
    DottedSixteenthNote                            = 8,
    DottedEighthNote                               = 9,
    DottedQuarterNote                              = 10,
    DottedHalfNote                                 = 11,
    DottedWholeNote                                = 12,
    SixteenthNoteTriplet                           = 13,
    EighthNoteTriplet                              = 14,
    QuarterNoteTriplet                             = 15,
    HalfNoteTriplet                                = 16,
    Tick                                           = 17,
    Count                                          = 18,
    None                                           = 19,
    EQuartzCommandQuantization_MAX                 = 20
};


// Enum  Engine.EPlatformInterfaceDataType
enum class EPlatformInterfaceDataType : uint8_t
{
    PIDT_None                                      = 0,
    PIDT_Int                                       = 1,
    PIDT_Float                                     = 2,
    PIDT_String                                    = 3,
    PIDT_Object                                    = 4,
    PIDT_Custom                                    = 5,
    PIDT_MAX                                       = 6
};


// Enum  Engine.EEndPlayReason
enum class EEndPlayReason : uint8_t
{
    Destroyed                                      = 0,
    LevelTransition                                = 1,
    EndPlayInEditor                                = 2,
    RemovedFromWorld                               = 3,
    Quit                                           = 4,
    EEndPlayReason_MAX                             = 5
};


// Enum  Engine.ETickingGroup
enum class ETickingGroup : uint8_t
{
    TG_PrePhysics                                  = 0,
    TG_StartPhysics                                = 1,
    TG_DuringPhysics                               = 2,
    TG_EndPhysics                                  = 3,
    TG_PostPhysics                                 = 4,
    TG_PostUpdateWork                              = 5,
    TG_LastDemotable                               = 6,
    TG_NewlySpawned                                = 7,
    TG_MAX                                         = 8
};


// Enum  Engine.EComponentCreationMethod
enum class EComponentCreationMethod : uint8_t
{
    Native                                         = 0,
    SimpleConstructionScript                       = 1,
    UserConstructionScript                         = 2,
    Instance                                       = 3,
    EComponentCreationMethod_MAX                   = 4
};


// Enum  Engine.ETemperatureSeverityType
enum class ETemperatureSeverityType : uint8_t
{
    Unknown                                        = 0,
    Good                                           = 1,
    Bad                                            = 2,
    Serious                                        = 3,
    Critical                                       = 4,
    NumSeverities                                  = 5,
    ETemperatureSeverityType_MAX                   = 6
};


// Enum  Engine.EPlaneConstraintAxisSetting
enum class EPlaneConstraintAxisSetting : uint8_t
{
    Custom                                         = 0,
    X                                              = 1,
    Y                                              = 2,
    Z                                              = 3,
    UseGlobalPhysicsSetting                        = 4,
    EPlaneConstraintAxisSetting_MAX                = 5
};


// Enum  Engine.EInterpToBehaviourType
enum class EInterpToBehaviourType : uint8_t
{
    OneShot                                        = 0,
    OneShot_Reverse                                = 1,
    Loop_Reset                                     = 2,
    PingPong                                       = 3,
    EInterpToBehaviourType_MAX                     = 4
};


// Enum  Engine.ETeleportType
enum class ETeleportType : uint8_t
{
    None                                           = 0,
    TeleportPhysics                                = 1,
    ResetPhysics                                   = 2,
    ETeleportType_MAX                              = 3
};


// Enum  Engine.EObjectTypeQuery
enum class EObjectTypeQuery : uint8_t
{
    ObjectTypeQuery1                               = 0,
    ObjectTypeQuery2                               = 1,
    ObjectTypeQuery3                               = 2,
    ObjectTypeQuery4                               = 3,
    ObjectTypeQuery5                               = 4,
    ObjectTypeQuery6                               = 5,
    ObjectTypeQuery7                               = 6,
    ObjectTypeQuery8                               = 7,
    ObjectTypeQuery9                               = 8,
    ObjectTypeQuery10                              = 9,
    ObjectTypeQuery11                              = 10,
    ObjectTypeQuery12                              = 11,
    ObjectTypeQuery13                              = 12,
    ObjectTypeQuery14                              = 13,
    ObjectTypeQuery15                              = 14,
    ObjectTypeQuery16                              = 15,
    ObjectTypeQuery17                              = 16,
    ObjectTypeQuery18                              = 17,
    ObjectTypeQuery19                              = 18,
    ObjectTypeQuery20                              = 19,
    ObjectTypeQuery21                              = 20,
    ObjectTypeQuery22                              = 21,
    ObjectTypeQuery23                              = 22,
    ObjectTypeQuery24                              = 23,
    ObjectTypeQuery25                              = 24,
    ObjectTypeQuery26                              = 25,
    ObjectTypeQuery27                              = 26,
    ObjectTypeQuery28                              = 27,
    ObjectTypeQuery29                              = 28,
    ObjectTypeQuery30                              = 29,
    ObjectTypeQuery31                              = 30,
    ObjectTypeQuery32                              = 31,
    ObjectTypeQuery_MAX                            = 32,
    EObjectTypeQuery_MAX                           = 33
};


// Enum  Engine.EDrawDebugTrace
enum class EDrawDebugTrace : uint8_t
{
    None                                           = 0,
    ForOneFrame                                    = 1,
    ForDuration                                    = 2,
    Persistent                                     = 3,
    EDrawDebugTrace_MAX                            = 4
};


// Enum  Engine.ETraceTypeQuery
enum class ETraceTypeQuery : uint8_t
{
    TraceTypeQuery1                                = 0,
    TraceTypeQuery2                                = 1,
    TraceTypeQuery3                                = 2,
    TraceTypeQuery4                                = 3,
    TraceTypeQuery5                                = 4,
    TraceTypeQuery6                                = 5,
    TraceTypeQuery7                                = 6,
    TraceTypeQuery8                                = 7,
    TraceTypeQuery9                                = 8,
    TraceTypeQuery10                               = 9,
    TraceTypeQuery11                               = 10,
    TraceTypeQuery12                               = 11,
    TraceTypeQuery13                               = 12,
    TraceTypeQuery14                               = 13,
    TraceTypeQuery15                               = 14,
    TraceTypeQuery16                               = 15,
    TraceTypeQuery17                               = 16,
    TraceTypeQuery18                               = 17,
    TraceTypeQuery19                               = 18,
    TraceTypeQuery20                               = 19,
    TraceTypeQuery21                               = 20,
    TraceTypeQuery22                               = 21,
    TraceTypeQuery23                               = 22,
    TraceTypeQuery24                               = 23,
    TraceTypeQuery25                               = 24,
    TraceTypeQuery26                               = 25,
    TraceTypeQuery27                               = 26,
    TraceTypeQuery28                               = 27,
    TraceTypeQuery29                               = 28,
    TraceTypeQuery30                               = 29,
    TraceTypeQuery31                               = 30,
    TraceTypeQuery32                               = 31,
    TraceTypeQuery_MAX                             = 32,
    ETraceTypeQuery_MAX                            = 33
};


// Enum  Engine.EMoveComponentAction
enum class EMoveComponentAction : uint8_t
{
    Move                                           = 0,
    Stop                                           = 1,
    Return                                         = 2,
    EMoveComponentAction_MAX                       = 3
};


// Enum  Engine.EQuitPreference
enum class EQuitPreference : uint8_t
{
    Quit                                           = 0,
    Background                                     = 1,
    EQuitPreference_MAX                            = 2
};


// Enum  NetCore.ENetworkFailure
enum class ENetworkFailure : uint8_t
{
    NetDriverAlreadyExists                         = 0,
    NetDriverCreateFailure                         = 1,
    NetDriverListenFailure                         = 2,
    ConnectionLost                                 = 3,
    ConnectionTimeout                              = 4,
    FailureReceived                                = 5,
    OutdatedClient                                 = 6,
    OutdatedServer                                 = 7,
    PendingConnectionFailure                       = 8,
    NetGuidMismatch                                = 9,
    NetChecksumMismatch                            = 10,
    ENetworkFailure_MAX                            = 11
};


// Enum  Engine.ETravelFailure
enum class ETravelFailure : uint8_t
{
    NoLevel                                        = 0,
    LoadMapFailure                                 = 1,
    InvalidURL                                     = 2,
    PackageMissing                                 = 3,
    PackageVersion                                 = 4,
    NoDownload                                     = 5,
    TravelFailure                                  = 6,
    CheatCommands                                  = 7,
    PendingNetGameCreateFailure                    = 8,
    CloudSaveFailure                               = 9,
    ServerTravelFailure                            = 10,
    ClientTravelFailure                            = 11,
    ETravelFailure_MAX                             = 12
};


// Enum  Engine.EScreenOrientation
enum class EScreenOrientation : uint8_t
{
    Unknown                                        = 0,
    Portrait                                       = 1,
    PortraitUpsideDown                             = 2,
    LandscapeLeft                                  = 3,
    LandscapeRight                                 = 4,
    FaceUp                                         = 5,
    FaceDown                                       = 6,
    EScreenOrientation_MAX                         = 7
};


// Enum  Engine.EApplicationState
enum class EApplicationState : uint8_t
{
    Unknown                                        = 0,
    Inactive                                       = 1,
    Background                                     = 2,
    Active                                         = 3,
    EApplicationState_MAX                          = 4
};


// Enum  GameplayAbilities.EGameplayEffectAttributeCaptureSource
enum class EGameplayEffectAttributeCaptureSource : uint8_t
{
    Source                                         = 0,
    Target                                         = 1,
    EGameplayEffectAttributeCaptureSource_MAX      = 2
};


// Enum  GameplayAbilities.EGameplayCueEvent
enum class EGameplayCueEvent : uint8_t
{
    OnActive                                       = 0,
    WhileActive                                    = 1,
    Executed                                       = 2,
    Removed                                        = 3,
    EGameplayCueEvent_MAX                          = 4
};


// Enum  GameplayTasks.ETaskResourceOverlapPolicy
enum class ETaskResourceOverlapPolicy : uint8_t
{
    StartOnTop                                     = 0,
    StartAtEnd                                     = 1,
    ETaskResourceOverlapPolicy_MAX                 = 2
};


// Enum  GameplayTasks.EGameplayTaskRunResult
enum class EGameplayTaskRunResult : uint8_t
{
    Error                                          = 0,
    Failed                                         = 1,
    Success_Paused                                 = 2,
    Success_Active                                 = 3,
    Success_Finished                               = 4,
    EGameplayTaskRunResult_MAX                     = 5
};


// Enum  GameplayAbilities.EGameplayAbilityActivationMode
enum class EGameplayAbilityActivationMode : uint8_t
{
    Authority                                      = 0,
    NonAuthority                                   = 1,
    Predicting                                     = 2,
    Confirmed                                      = 3,
    Rejected                                       = 4,
    EGameplayAbilityActivationMode_MAX             = 5
};


// Enum  GameplayAbilities.EAbilityGenericReplicatedEvent
enum class EAbilityGenericReplicatedEvent : uint8_t
{
    GenericConfirm                                 = 0,
    GenericCancel                                  = 1,
    InputPressed                                   = 2,
    InputReleased                                  = 3,
    GenericSignalFromClient                        = 4,
    GenericSignalFromServer                        = 5,
    GameCustom1                                    = 6,
    GameCustom2                                    = 7,
    GameCustom3                                    = 8,
    GameCustom4                                    = 9,
    GameCustom5                                    = 10,
    GameCustom6                                    = 11,
    MAX                                            = 12
};


// Enum  NetCore.EFastArraySerializerDeltaFlags
enum class EFastArraySerializerDeltaFlags : uint8_t
{
    None                                           = 0,
    HasBeenSerialized                              = 1,
    HasDeltaBeenRequested                          = 2,
    IsUsingDeltaSerialization                      = 4,
    EFastArraySerializerDeltaFlags_MAX             = 5
};


// Enum  EmbarkFracturedDestructible.EDSMDamageType
enum class EDSMDamageType : uint8_t
{
    PointDamage                                    = 0,
    RadialDamage                                   = 1,
    FireDamage                                     = 2,
    IntegrityFailure                               = 3,
    Delayed                                        = 4,
    MAX_NUM                                        = 5,
    EDSMDamageType_MAX                             = 6
};


// Enum  EmbarkFracturedDestructible.EDestructionEventType
enum class EDestructionEventType : uint8_t
{
    None                                           = 0,
    FracturedBoneDestroyed                         = 1,
    BreakEvent                                     = 2,
    PropDestroyed                                  = 4,
    Fire                                           = 8,
    EDestructionEventType_MAX                      = 9
};


// Enum  Engine.EVectorQuantization
enum class EVectorQuantization : uint8_t
{
    RoundWholeNumber                               = 0,
    RoundOneDecimal                                = 1,
    RoundTwoDecimals                               = 2,
    EVectorQuantization_MAX                        = 3
};


// Enum  Engine.ERotatorQuantization
enum class ERotatorQuantization : uint8_t
{
    ByteComponents                                 = 0,
    ShortComponents                                = 1,
    ERotatorQuantization_MAX                       = 2
};


// Enum  DiscoveryGameplay.EGooOverlapType
enum class EGooOverlapType : uint8_t
{
    None                                           = 0,
    Critical                                       = 1,
    Static                                         = 2,
    Dynamic                                        = 4,
    GooStatic                                      = 8,
    GooDynamic                                     = 16,
    EGooOverlapType_MAX                            = 17
};


// Enum  DiscoveryOnline.EDiscoveryPrivateLobbyCreateLobbyResult
enum class EDiscoveryPrivateLobbyCreateLobbyResult : uint8_t
{
    Unknown                                        = 0,
    Success                                        = 1,
    UserRestriction                                = 2,
    PartyTooBig                                    = 3,
    EDiscoveryPrivateLobbyCreateLobbyResult_MAX    = 4
};


// Enum  OnlineSubsystemAngelscript.EStoreClaimGiftsResult
enum class EStoreClaimGiftsResult : uint8_t
{
    Success                                        = 0,
    Failed                                         = 1,
    EStoreClaimGiftsResult_MAX                     = 2
};


// Enum  OnlineSubsystemAngelscript.EServiceFriendRequestResult
enum class EServiceFriendRequestResult : uint8_t
{
    Success                                        = 0,
    Fail                                           = 1,
    NotFound                                       = 2,
    AlreadyFriends                                 = 3,
    AlreadySent                                    = 4,
    SelfRequest                                    = 5,
    PlayerBlocked                                  = 6,
    EServiceFriendRequestResult_MAX                = 7
};


// Enum  OnlineSubsystemAngelscript.EServiceKickPartyMemberResult
enum class EServiceKickPartyMemberResult : uint8_t
{
    Success                                        = 0,
    Fail                                           = 1,
    NotInParty                                     = 2,
    NotPartyLeader                                 = 3,
    EServiceKickPartyMemberResult_MAX              = 4
};


// Enum  OnlineSubsystemAngelscript.EClientModelState
enum class EClientModelState : uint8_t
{
    Down                                           = 0,
    LoggingIn                                      = 1,
    Up                                             = 2,
    EClientModelState_MAX                          = 3
};


// Enum  OnlineSubsystemAngelscript.EAuthErrorCode
enum class EAuthErrorCode : uint8_t
{
    UnknownError                                   = 0,
    NetworkError                                   = 1,
    AuthenticationError                            = 2,
    UserNotSignedIn                                = 3,
    UserSuspended                                  = 4,
    NoAccountLinked                                = 5,
    InLoginQueue                                   = 6,
    CountryBlocked                                 = 7,
    EmbarkAuthLinkingCodeFailedToParse             = 8,
    UserAlreadyAuthenticated                       = 9,
    ClientInternalError                            = 10,
    PlatformLoginError                             = 11,
    PlatformUIError                                = 12,
    PlatformPrivilegesMissing                      = 13,
    PlatformCredentialsMissing                     = 14,
    PlatformUserIdNotFound                         = 15,
    PlatformLinkedAccountAuthTokenNotFound         = 16,
    PlatformUserOffline                            = 17,
    PlatformInvalidToken                           = 18,
    PlatformCannotVerifyToken                      = 19,
    ClientRequestForbidden                         = 20,
    EmbarkAuthNetworkError                         = 21,
    EmbarkAuthInternalServerError                  = 22,
    EmbarkAuthTokenErrorFailedToParse              = 23,
    EmbarkAuthTokenFailedToParse                   = 24,
    EmbarkAuthTokenExpired                         = 25,
    UserProfileNetworkError                        = 26,
    ManifestNotFound                               = 27,
    ManifestNetworkError                           = 28,
    EOSLoginFailed                                 = 29,
    EOSCreateUserFailed                            = 30,
    EAuthErrorCode_MAX                             = 31
};


// Enum  OnlineSubsystemAngelscript.EMatchmakingResult
enum class EMatchmakingResult : uint8_t
{
    Success                                        = 0,
    Redirected                                     = 1,
    Fail                                           = 2,
    InvalidParameters                              = 3,
    BackendSystemError                             = 4,
    PermissionDenied                               = 5,
    Restricted                                     = 6,
    Unavailable                                    = 7,
    Overloaded                                     = 8,
    PartyIsTooLarge                                = 9,
    EMatchmakingResult_MAX                         = 10
};


// Enum  OnlineSubsystemAngelscript.EMatchmakingEstimationStatus
enum class EMatchmakingEstimationStatus : uint8_t
{
    NotAvailable                                   = 0,
    Valid                                          = 1,
    Faulty                                         = 2,
    NoData                                         = 3,
    EMatchmakingEstimationStatus_MAX               = 4
};


// Enum  OnlineSubsystemAngelscript.EMatchmakingStatus
enum class EMatchmakingStatus : uint8_t
{
    Idle                                           = 0,
    Waiting                                        = 1,
    Matching                                       = 2,
    Completed                                      = 3,
    RequestingServer                               = 4,
    Skipping                                       = 5,
    Cancelling                                     = 6,
    EMatchmakingStatus_MAX                         = 7
};


// Enum  OnlineSubsystemAngelscript.EMatchmakingPrerequisitesStatus
enum class EMatchmakingPrerequisitesStatus : uint8_t
{
    Success                                        = 0,
    Suspended                                      = 1,
    NoValidPlatforms                               = 2,
    EMatchmakingPrerequisitesStatus_MAX            = 3
};


// Enum  OnlineSubsystemAngelscript.EServicePartyInviteResult
enum class EServicePartyInviteResult : uint8_t
{
    Success                                        = 0,
    Fail                                           = 1,
    PartyFull                                      = 2,
    EServicePartyInviteResult_MAX                  = 3
};


// Enum  OnlineSubsystemAngelscript.EServicePartyJoinResult
enum class EServicePartyJoinResult : uint8_t
{
    Success                                        = 0,
    Fail                                           = 1,
    PartyFull                                      = 2,
    CrossplayIncompatibility                       = 3,
    EServicePartyJoinResult_MAX                    = 4
};


// Enum  OnlineSubsystemAngelscript.EPartyMatchmakingCompletedResult
enum class EPartyMatchmakingCompletedResult : uint8_t
{
    Success                                        = 0,
    Cancelled                                      = 1,
    PartyNotReady                                  = 2,
    PartyTooLarge                                  = 3,
    ManifestIsInvalid                              = 4,
    PartyMemberHasPlayedRoundsRestriction          = 5,
    EPartyMatchmakingCompletedResult_MAX           = 6
};


// Enum  OnlineSubsystemAngelscript.EServicePartyMemberRemovedReason
enum class EServicePartyMemberRemovedReason : uint8_t
{
    Left                                           = 0,
    Kicked                                         = 1,
    Unknown                                        = 2,
    EServicePartyMemberRemovedReason_MAX           = 3
};


// Enum  EmbarkApiGateway.EApiGatewaySharedServerInitializationState
enum class EApiGatewaySharedServerInitializationState : uint8_t
{
    UNSPECIFIED                                    = 0,
    INITIALIZING                                   = 1,
    READY                                          = 2,
    FAILURE                                        = 3,
    SHUTDOWN                                       = 4,
    EApiGatewaySharedServerInitializationState_MAX = 5
};


// Enum  OnlineSubsystemAngelscript.EStorePurchaseResult
enum class EStorePurchaseResult : uint8_t
{
    Success                                        = 0,
    Cancelled                                      = 1,
    PreventedByMatchmaking                         = 2,
    Failed                                         = 3,
    ReconciliationFailed                           = 4,
    NotAllowed                                     = 5,
    OverlayDisabled                                = 6,
    EStorePurchaseResult_MAX                       = 7
};


// Enum  OnlineSubsystemAngelscript.ESyncInventoryResult
enum class ESyncInventoryResult : uint8_t
{
    Success                                        = 0,
    InvalidRealm                                   = 1,
    InvalidFunctionCall                            = 2,
    InvalidParameters                              = 3,
    SerializationError                             = 4,
    BackendSystemError                             = 5,
    BackendRequestError                            = 6,
    Failed                                         = 7,
    ESyncInventoryResult_MAX                       = 8
};


// Enum  OnlineSubsystemAngelscript.ESyncManifestResult
enum class ESyncManifestResult : uint8_t
{
    Success                                        = 0,
    NoManifest                                     = 1,
    BackendSystemError                             = 2,
    PlaytestNotActive                              = 3,
    ESyncManifestResult_MAX                        = 4
};


// Enum  EmbarkApiGateway.EApiErrorCode
enum class EApiErrorCode : uint32_t
{
    Unknown                                        = 0,
    Continue                                       = 100,
    SwitchProtocol                                 = 101,
    Ok                                             = 200,
    Created                                        = 201,
    Accepted                                       = 202,
    Partial                                        = 203,
    NoContent                                      = 204,
    ResetContent                                   = 205,
    PartialContent                                 = 206,
    Ambiguous                                      = 300,
    Moved                                          = 301,
    Redirect                                       = 302,
    RedirectMethod                                 = 303,
    NotModified                                    = 304,
    UseProxy                                       = 305,
    RedirectKeepVerb                               = 307,
    BadRequest                                     = 400,
    Denied                                         = 401,
    PaymentReq                                     = 402,
    Forbidden                                      = 403,
    NotFound                                       = 404,
    BadMethod                                      = 405,
    NoneAcceptable                                 = 406,
    ProxyAuthReq                                   = 407,
    RequestTimeout                                 = 408,
    Conflict                                       = 409,
    Gone                                           = 410,
    LengthRequired                                 = 411,
    PrecondFailed                                  = 412,
    RequestTooLarge                                = 413,
    UriTooLong                                     = 414,
    UnsupportedMedia                               = 415,
    TooManyRequests                                = 429,
    RetryWith                                      = 449,
    ClientClosedRequest                            = 499,
    ServerError                                    = 500,
    NotSupported                                   = 501,
    BadGateway                                     = 502,
    ServiceUnavail                                 = 503,
    GatewayTimeout                                 = 504,
    VersionNotSup                                  = 505,
    EApiErrorCode_MAX                              = 506
};


// Enum  OnlineSubsystemAngelscript.EEmbarkUpdateGameMatchStatus
enum class EEmbarkUpdateGameMatchStatus : uint8_t
{
    Invalid                                        = 0,
    InProgress                                     = 1,
    Paused                                         = 2,
    Aborted                                        = 3,
    EEmbarkUpdateGameMatchStatus_MAX               = 4
};


// Enum  OnlineSubsystemAngelscript.EVoiceChannel
enum class EVoiceChannel : uint8_t
{
    None                                           = 0,
    Party                                          = 1,
    Squad                                          = 2,
    EVoiceChannel_MAX                              = 3
};


// Enum  OnlineSubsystemAngelscript.EVoiceRoomParticipantStatus
enum class EVoiceRoomParticipantStatus : uint8_t
{
    None                                           = 0,
    Idle                                           = 1,
    Active                                         = 2,
    EVoiceRoomParticipantStatus_MAX                = 3
};


// Enum  OnlineSubsystemAngelscript.EUpdateProfileErrorCode
enum class EUpdateProfileErrorCode : uint8_t
{
    UnknownError                                   = 0,
    EmailValidationError                           = 1,
    EmailConflictError                             = 2,
    InvalidDateOfBirthError                        = 3,
    InvalidCountryError                            = 4,
    EUpdateProfileErrorCode_MAX                    = 5
};


// Enum  DiscoveryOnline.EDiscoveryPrivateLobbyStartLobbyResult
enum class EDiscoveryPrivateLobbyStartLobbyResult : uint8_t
{
    Unknown                                        = 0,
    Success                                        = 1,
    LobbyNotFound                                  = 2,
    NotEnoughPlayers                               = 3,
    MatchInProgress                                = 4,
    EDiscoveryPrivateLobbyStartLobbyResult_MAX     = 5
};


// Enum  DiscoveryOnline.EDiscoveryPrivateLobbyJoinLobbyResult
enum class EDiscoveryPrivateLobbyJoinLobbyResult : uint8_t
{
    Unknown                                        = 0,
    Success                                        = 1,
    UserRestriction                                = 2,
    UserBlocked                                    = 3,
    LobbyNotFound                                  = 4,
    PartyTooBig                                    = 5,
    LobbyFull                                      = 6,
    EDiscoveryPrivateLobbyJoinLobbyResult_MAX      = 7
};


// Enum  DiscoveryOnline.EDiscoveryPrivateLobbyLeaveLobbyResult
enum class EDiscoveryPrivateLobbyLeaveLobbyResult : uint8_t
{
    Unknown                                        = 0,
    Success                                        = 1,
    Kicked                                         = 2,
    EDiscoveryPrivateLobbyLeaveLobbyResult_MAX     = 3
};


// Enum  DiscoveryOnline.EDiscoveryPrivateLobbyUpdateLobbyResult
enum class EDiscoveryPrivateLobbyUpdateLobbyResult : uint8_t
{
    Unknown                                        = 0,
    Success                                        = 1,
    Failed                                         = 2,
    EDiscoveryPrivateLobbyUpdateLobbyResult_MAX    = 3
};


// Enum  DiscoveryOnline.EDiscoveryOnlineJoinTournamentMatchError
enum class EDiscoveryOnlineJoinTournamentMatchError : uint8_t
{
    Unavailable                                    = 0,
    Unknown                                        = 1,
    CancelledMapLoad                               = 2,
    EDiscoveryOnlineJoinTournamentMatchError_MAX   = 3
};


// Enum  EmbarkApiGateway.EApiGatewayDiscoveryJoinTournamentStatus
enum class EApiGatewayDiscoveryJoinTournamentStatus : uint8_t
{
    JOIN_TOURNAMENT_STATUS_UNSPECIFIED             = 0,
    JOIN_TOURNAMENT_STATUS_PLAYING                 = 1,
    JOIN_TOURNAMENT_STATUS_FINISHED                = 2,
    JOIN_TOURNAMENT_STATUS_QUEUEING                = 3,
    JOIN_TOURNAMENT_STATUS_MAX                     = 4
};


// Enum  EmbarkApiGateway.EApiGatewayDiscoveryTournamentMatchStatus
enum class EApiGatewayDiscoveryTournamentMatchStatus : uint8_t
{
    MATCH_STATUS_UNSPECIFIED                       = 0,
    MATCH_STATUS_PENDING                           = 1,
    MATCH_STATUS_CONNECTING                        = 2,
    MATCH_STATUS_PLAYING                           = 3,
    MATCH_STATUS_FINISHED                          = 4,
    MATCH_STATUS_ABANDONED                         = 5,
    MATCH_STATUS_FAILED                            = 6,
    MATCH_STATUS_EXPIRED                           = 7,
    MATCH_STATUS_SKIPPED                           = 8,
    MATCH_STATUS_MAX                               = 9
};


// Enum  EmbarkApiGateway.EApiGatewayDiscoveryTournamentTeamResultValue
enum class EApiGatewayDiscoveryTournamentTeamResultValue : uint8_t
{
    TOURNAMENT_TEAM_RESULT_UNSPECIFIED             = 0,
    TOURNAMENT_TEAM_RESULT_WIN                     = 1,
    TOURNAMENT_TEAM_RESULT_LOSS                    = 2,
    TOURNAMENT_TEAM_RESULT_MAX                     = 3
};


// Enum  OnlineSubsystemAngelscript.EMutateInventoryResult
enum class EMutateInventoryResult : uint8_t
{
    Success                                        = 0,
    InvalidRealm                                   = 1,
    InvalidFunctionCall                            = 2,
    InvalidParameters                              = 3,
    ValidationError                                = 4,
    SerializationError                             = 5,
    BackendSystemError                             = 6,
    BackendRequestError                            = 7,
    EMutateInventoryResult_MAX                     = 8
};


// Enum  EmbarkApiGateway.EApiGatewaySharedSurveySettingsType
enum class EApiGatewaySharedSurveySettingsType : uint8_t
{
    EARLYFEEDBACK                                  = 0,
    HEALTHPOLL                                     = 1,
    BETAIMPRESSIONS                                = 2,
    EApiGatewaySharedSurveySettingsType_MAX        = 3
};


// Enum  DiscoveryOnline.ESanctionType
enum class ESanctionType : uint8_t
{
    UNSPECIFIED                                    = 0,
    TOURNAMENT_ABANDON                             = 1,
    ESanctionType_MAX                              = 2
};


// Enum  DiscoveryOnline.ECircuitType
enum class ECircuitType : uint8_t
{
    None                                           = 0,
    FTUE                                           = 1,
    Event                                          = 2,
    Seasonal                                       = 3,
    ECircuitType_MAX                               = 4
};


// Enum  DiscoveryOnline.EDiscoveryPrivateLobbyState
enum class EDiscoveryPrivateLobbyState : uint8_t
{
    Unknown                                        = 0,
    Creating                                       = 1,
    Joining                                        = 2,
    Active                                         = 3,
    Leaving                                        = 4,
    EDiscoveryPrivateLobbyState_MAX                = 5
};


// Enum  DiscoveryOnline.EServiceRoundStatSummaryType
enum class EServiceRoundStatSummaryType : uint8_t
{
    Unknown                                        = 0,
    Ranked                                         = 1,
    Casual                                         = 2,
    Total                                          = 3,
    EServiceRoundStatSummaryType_MAX               = 4
};


// Enum  AngelscriptCode.EAngelscriptPropertyEditSpecifier
enum class EAngelscriptPropertyEditSpecifier : uint8_t
{
    EditAnywhere                                   = 0,
    EditInstanceOnly                               = 1,
    EditDefaultsOnly                               = 2,
    NotEditable                                    = 3,
    EAngelscriptPropertyEditSpecifier_MAX          = 4
};


// Enum  AngelscriptCode.EAngelscriptPropertyBlueprintSpecifier
enum class EAngelscriptPropertyBlueprintSpecifier : uint8_t
{
    BlueprintReadWrite                             = 0,
    BlueprintReadOnly                              = 1,
    BlueprintHidden                                = 2,
    EAngelscriptPropertyBlueprintSpecifier_MAX     = 3
};


// Enum  AngelscriptCode.EAngelscriptMathNamespace
enum class EAngelscriptMathNamespace : uint8_t
{
    Math                                           = 0,
    FMath                                          = 1,
    EAngelscriptMathNamespace_MAX                  = 2
};


// Enum  GameplayAbilities.EGameplayEffectReplicationMode
enum class EGameplayEffectReplicationMode : uint8_t
{
    Minimal                                        = 0,
    Mixed                                          = 1,
    Full                                           = 2,
    EGameplayEffectReplicationMode_MAX             = 3
};


// Enum  GameplayAbilities.EAbilityTaskWaitState
enum class EAbilityTaskWaitState : uint8_t
{
    WaitingOnGame                                  = 1,
    WaitingOnUser                                  = 2,
    WaitingOnAvatar                                = 4,
    EAbilityTaskWaitState_MAX                      = 5
};


// Enum  GameplayAbilities.ERootMotionMoveToActorTargetOffsetType
enum class ERootMotionMoveToActorTargetOffsetType : uint8_t
{
    AlignFromTargetToSource                        = 0,
    AlignToTargetForward                           = 1,
    AlignToWorldSpace                              = 2,
    ERootMotionMoveToActorTargetOffsetType_MAX     = 3
};


// Enum  GameplayAbilities.EAbilityTaskNetSyncType
enum class EAbilityTaskNetSyncType : uint8_t
{
    BothWait                                       = 0,
    OnlyServerWait                                 = 1,
    OnlyClientWait                                 = 2,
    EAbilityTaskNetSyncType_MAX                    = 3
};


// Enum  GameplayAbilities.EWaitAttributeChangeComparison
enum class EWaitAttributeChangeComparison : uint8_t
{
    None                                           = 0,
    GreaterThan                                    = 1,
    LessThan                                       = 2,
    GreaterThanOrEqualTo                           = 3,
    LessThanOrEqualTo                              = 4,
    NotEqualTo                                     = 5,
    ExactlyEqualTo                                 = 6,
    MAX                                            = 7
};


// Enum  GameplayAbilities.EGameplayAbilityInputBinds
enum class EGameplayAbilityInputBinds : uint8_t
{
    Ability1                                       = 0,
    Ability2                                       = 1,
    Ability3                                       = 2,
    Ability4                                       = 3,
    Ability5                                       = 4,
    Ability6                                       = 5,
    Ability7                                       = 6,
    Ability8                                       = 7,
    Ability9                                       = 8,
    EGameplayAbilityInputBinds_MAX                 = 9
};


// Enum  GameplayAbilities.ETargetDataFilterSelf
enum class ETargetDataFilterSelf : uint8_t
{
    TDFS_Any                                       = 0,
    TDFS_NoSelf                                    = 1,
    TDFS_NoOthers                                  = 2,
    TDFS_MAX                                       = 3
};


// Enum  GameplayAbilities.EGameplayTargetingConfirmation
enum class EGameplayTargetingConfirmation : uint8_t
{
    Instant                                        = 0,
    UserConfirmed                                  = 1,
    Custom                                         = 2,
    CustomMulti                                    = 3,
    EGameplayTargetingConfirmation_MAX             = 4
};


// Enum  GameplayAbilities.EGameplayAbilityTargetingLocationType
enum class EGameplayAbilityTargetingLocationType : uint8_t
{
    LiteralTransform                               = 0,
    ActorTransform                                 = 1,
    SocketTransform                                = 2,
    EGameplayAbilityTargetingLocationType_MAX      = 3
};


// Enum  GameplayAbilities.EGameplayAbilityInstancingPolicy
enum class EGameplayAbilityInstancingPolicy : uint8_t
{
    NonInstanced                                   = 0,
    InstancedPerActor                              = 1,
    InstancedPerExecution                          = 2,
    EGameplayAbilityInstancingPolicy_MAX           = 3
};


// Enum  GameplayAbilities.EGameplayAbilityNetExecutionPolicy
enum class EGameplayAbilityNetExecutionPolicy : uint8_t
{
    LocalPredicted                                 = 0,
    LocalOnly                                      = 1,
    ServerInitiated                                = 2,
    ServerOnly                                     = 3,
    EGameplayAbilityNetExecutionPolicy_MAX         = 4
};


// Enum  GameplayAbilities.EGameplayAbilityNetSecurityPolicy
enum class EGameplayAbilityNetSecurityPolicy : uint8_t
{
    ClientOrServer                                 = 0,
    ServerOnlyExecution                            = 1,
    ServerOnlyTermination                          = 2,
    ServerOnly                                     = 3,
    EGameplayAbilityNetSecurityPolicy_MAX          = 4
};


// Enum  GameplayAbilities.EGameplayAbilityReplicationPolicy
enum class EGameplayAbilityReplicationPolicy : uint8_t
{
    ReplicateNo                                    = 0,
    ReplicateYes                                   = 1,
    EGameplayAbilityReplicationPolicy_MAX          = 2
};


// Enum  GameplayAbilities.EGameplayAbilityTriggerSource
enum class EGameplayAbilityTriggerSource : uint8_t
{
    GameplayEvent                                  = 0,
    OwnedTagAdded                                  = 1,
    OwnedTagPresent                                = 2,
    EGameplayAbilityTriggerSource_MAX              = 3
};


// Enum  GameplayAbilities.ERepAnimPositionMethod
enum class ERepAnimPositionMethod : uint8_t
{
    Position                                       = 0,
    CurrentSectionId                               = 1,
    ERepAnimPositionMethod_MAX                     = 2
};


// Enum  GameplayAbilities.EGameplayCueNotify_EffectPlaySpace
enum class EGameplayCueNotify_EffectPlaySpace : uint8_t
{
    WorldSpace                                     = 0,
    CameraSpace                                    = 1,
    EGameplayCueNotify_MAX                         = 2
};


// Enum  GameplayAbilities.EGameplayCueNotify_LocallyControlledSource
enum class EGameplayCueNotify_LocallyControlledSource : uint8_t
{
    InstigatorActor                                = 0,
    TargetActor                                    = 1,
    EGameplayCueNotify_MAX                         = 2
};


// Enum  GameplayAbilities.EGameplayCueNotify_LocallyControlledPolicy
enum class EGameplayCueNotify_LocallyControlledPolicy : uint8_t
{
    Always                                         = 0,
    LocalOnly                                      = 1,
    NotLocal                                       = 2,
    EGameplayCueNotify_MAX                         = 3
};


// Enum  GameplayAbilities.EGameplayCueNotify_AttachPolicy
enum class EGameplayCueNotify_AttachPolicy : uint8_t
{
    DoNotAttach                                    = 0,
    AttachToTarget                                 = 1,
    EGameplayCueNotify_MAX                         = 2
};


// Enum  GameplayAbilities.EGameplayCuePayloadType
enum class EGameplayCuePayloadType : uint8_t
{
    CueParameters                                  = 0,
    FromSpec                                       = 1,
    EGameplayCuePayloadType_MAX                    = 2
};


// Enum  GameplayAbilities.EGameplayEffectMagnitudeCalculation
enum class EGameplayEffectMagnitudeCalculation : uint8_t
{
    ScalableFloat                                  = 0,
    AttributeBased                                 = 1,
    CustomCalculationClass                         = 2,
    SetByCaller                                    = 3,
    EGameplayEffectMagnitudeCalculation_MAX        = 4
};


// Enum  GameplayAbilities.EAttributeBasedFloatCalculationType
enum class EAttributeBasedFloatCalculationType : uint8_t
{
    AttributeMagnitude                             = 0,
    AttributeBaseValue                             = 1,
    AttributeBonusMagnitude                        = 2,
    AttributeMagnitudeEvaluatedUpToChannel         = 3,
    EAttributeBasedFloatCalculationType_MAX        = 4
};


// Enum  GameplayAbilities.EGameplayEffectScopedModifierAggregatorType
enum class EGameplayEffectScopedModifierAggregatorType : uint8_t
{
    CapturedAttributeBacked                        = 0,
    Transient                                      = 1,
    EGameplayEffectScopedModifierAggregatorType_MAX = 2
};


// Enum  GameplayAbilities.EGameplayEffectDurationType
enum class EGameplayEffectDurationType : uint8_t
{
    Instant                                        = 0,
    Infinite                                       = 1,
    HasDuration                                    = 2,
    EGameplayEffectDurationType_MAX                = 3
};


// Enum  GameplayAbilities.EGameplayEffectStackingDurationPolicy
enum class EGameplayEffectStackingDurationPolicy : uint8_t
{
    RefreshOnSuccessfulApplication                 = 0,
    NeverRefresh                                   = 1,
    EGameplayEffectStackingDurationPolicy_MAX      = 2
};


// Enum  GameplayAbilities.EGameplayEffectStackingPeriodPolicy
enum class EGameplayEffectStackingPeriodPolicy : uint8_t
{
    ResetOnSuccessfulApplication                   = 0,
    NeverReset                                     = 1,
    EGameplayEffectStackingPeriodPolicy_MAX        = 2
};


// Enum  GameplayAbilities.EGameplayEffectStackingExpirationPolicy
enum class EGameplayEffectStackingExpirationPolicy : uint8_t
{
    ClearEntireStack                               = 0,
    RemoveSingleStackAndRefreshDuration            = 1,
    RefreshDuration                                = 2,
    EGameplayEffectStackingExpirationPolicy_MAX    = 3
};


// Enum  GameplayAbilities.EGameplayEffectPeriodInhibitionRemovedPolicy
enum class EGameplayEffectPeriodInhibitionRemovedPolicy : uint8_t
{
    NeverReset                                     = 0,
    ResetPeriod                                    = 1,
    ExecuteAndResetPeriod                          = 2,
    EGameplayEffectPeriodInhibitionRemovedPolicy_MAX = 3
};


// Enum  GameplayAbilities.EGameplayModEvaluationChannel
enum class EGameplayModEvaluationChannel : uint8_t
{
    Channel0                                       = 0,
    Channel1                                       = 1,
    Channel2                                       = 2,
    Channel3                                       = 3,
    Channel4                                       = 4,
    Channel5                                       = 5,
    Channel6                                       = 6,
    Channel7                                       = 7,
    Channel8                                       = 8,
    Channel9                                       = 9,
    Channel_MAX                                    = 10,
    EGameplayModEvaluationChannel_MAX              = 11
};


// Enum  GameplayAbilities.EGameplayModOp
enum class EGameplayModOp : uint8_t
{
    Additive                                       = 0,
    Multiplicitive                                 = 1,
    Division                                       = 2,
    Override                                       = 3,
    Max                                            = 4
};


// Enum  GameplayAbilities.EGameplayEffectStackingType
enum class EGameplayEffectStackingType : uint8_t
{
    None                                           = 0,
    AggregateBySource                              = 1,
    AggregateByTarget                              = 2,
    EGameplayEffectStackingType_MAX                = 3
};


// Enum  GameplayAbilities.EGameplayTagEventType
enum class EGameplayTagEventType : uint8_t
{
    NewOrRemoved                                   = 0,
    AnyCountChange                                 = 1,
    EGameplayTagEventType_MAX                      = 2
};


// Enum  Niagara.ENiagaraSystemSpawnSectionStartBehavior
enum class ENiagaraSystemSpawnSectionStartBehavior : uint8_t
{
    Activate                                       = 0,
    ENiagaraSystemSpawnSectionStartBehavior_MAX    = 1
};


// Enum  Niagara.ENiagaraSystemSpawnSectionEvaluateBehavior
enum class ENiagaraSystemSpawnSectionEvaluateBehavior : uint8_t
{
    ActivateIfInactive                             = 0,
    None                                           = 1,
    ENiagaraSystemSpawnSectionEvaluateBehavior_MAX = 2
};


// Enum  Niagara.ENiagaraSystemSpawnSectionEndBehavior
enum class ENiagaraSystemSpawnSectionEndBehavior : uint8_t
{
    SetSystemInactive                              = 0,
    Deactivate                                     = 1,
    None                                           = 2,
    ENiagaraSystemSpawnSectionEndBehavior_MAX      = 3
};


// Enum  Niagara.ENiagaraBakerViewMode
enum class ENiagaraBakerViewMode : uint8_t
{
    Perspective                                    = 0,
    OrthoFront                                     = 1,
    OrthoBack                                      = 2,
    OrthoLeft                                      = 3,
    OrthoRight                                     = 4,
    OrthoTop                                       = 5,
    OrthoBottom                                    = 6,
    Num                                            = 7,
    ENiagaraBakerViewMode_MAX                      = 8
};


// Enum  Niagara.ENiagaraCollisionMode
enum class ENiagaraCollisionMode : uint8_t
{
    None                                           = 0,
    SceneGeometry                                  = 1,
    DepthBuffer                                    = 2,
    DistanceField                                  = 3,
    ENiagaraCollisionMode_MAX                      = 4
};


// Enum  Niagara.ENiagaraTickBehavior
enum class ENiagaraTickBehavior : uint8_t
{
    UsePrereqs                                     = 0,
    UseComponentTickGroup                          = 1,
    ForceTickFirst                                 = 2,
    ForceTickLast                                  = 3,
    ENiagaraTickBehavior_MAX                       = 4
};


// Enum  Niagara.ENiagaraGpuBufferFormat
enum class ENiagaraGpuBufferFormat : uint8_t
{
    Float                                          = 0,
    HalfFloat                                      = 1,
    UnsignedNormalizedByte                         = 2,
    Max                                            = 3
};


// Enum  Niagara.ENiagaraGpuSyncMode
enum class ENiagaraGpuSyncMode : uint8_t
{
    None                                           = 0,
    SyncCpuToGpu                                   = 1,
    SyncGpuToCpu                                   = 2,
    SyncBoth                                       = 3,
    ENiagaraGpuSyncMode_MAX                        = 4
};


// Enum  Niagara.ENiagaraMipMapGeneration
enum class ENiagaraMipMapGeneration : uint8_t
{
    Disabled                                       = 0,
    PostStage                                      = 1,
    PostSimulate                                   = 2,
    ENiagaraMipMapGeneration_MAX                   = 3
};


// Enum  Niagara.ENiagaraDefaultMode
enum class ENiagaraDefaultMode : uint8_t
{
    Value                                          = 0,
    Binding                                        = 1,
    Custom                                         = 2,
    FailIfPreviouslyNotSet                         = 3,
    ENiagaraDefaultMode_MAX                        = 4
};


// Enum  Niagara.ENiagaraDefaultRendererMotionVectorSetting
enum class ENiagaraDefaultRendererMotionVectorSetting : uint8_t
{
    Precise                                        = 0,
    Approximate                                    = 1,
    ENiagaraDefaultRendererMotionVectorSetting_MAX = 2
};


// Enum  Niagara.ENiagaraRendererMotionVectorSetting
enum class ENiagaraRendererMotionVectorSetting : uint8_t
{
    AutoDetect                                     = 0,
    Precise                                        = 1,
    Approximate                                    = 2,
    Disable                                        = 3,
    ENiagaraRendererMotionVectorSetting_MAX        = 4
};


// Enum  Niagara.ENiagaraSimTarget
enum class ENiagaraSimTarget : uint8_t
{
    CPUSim                                         = 0,
    GPUComputeSim                                  = 1,
    ENiagaraSimTarget_MAX                          = 2
};


// Enum  Niagara.ENiagaraAgeUpdateMode
enum class ENiagaraAgeUpdateMode : uint8_t
{
    TickDeltaTime                                  = 0,
    DesiredAge                                     = 1,
    DesiredAgeNoSeek                               = 2,
    ENiagaraAgeUpdateMode_MAX                      = 3
};


// Enum  Niagara.ENiagaraStatEvaluationType
enum class ENiagaraStatEvaluationType : uint8_t
{
    Average                                        = 0,
    Maximum                                        = 1,
    ENiagaraStatEvaluationType_MAX                 = 2
};


// Enum  Niagara.ENiagaraStatDisplayMode
enum class ENiagaraStatDisplayMode : uint8_t
{
    Percent                                        = 0,
    Absolute                                       = 1,
    ENiagaraStatDisplayMode_MAX                    = 2
};


// Enum  Niagara.ENiagaraDataSetType
enum class ENiagaraDataSetType : uint8_t
{
    ParticleData                                   = 0,
    Shared                                         = 1,
    Event                                          = 2,
    ENiagaraDataSetType_MAX                        = 3
};


// Enum  Niagara.ENiagaraInputNodeUsage
enum class ENiagaraInputNodeUsage : uint8_t
{
    Undefined                                      = 0,
    Parameter                                      = 1,
    Attribute                                      = 2,
    SystemConstant                                 = 3,
    TranslatorConstant                             = 4,
    RapidIterationParameter                        = 5,
    ENiagaraInputNodeUsage_MAX                     = 6
};


// Enum  Niagara.ENiagaraScriptCompileStatus
enum class ENiagaraScriptCompileStatus : uint8_t
{
    NCS_Unknown                                    = 0,
    NCS_Dirty                                      = 1,
    NCS_Error                                      = 2,
    NCS_UpToDate                                   = 3,
    NCS_BeingCreated                               = 4,
    NCS_UpToDateWithWarnings                       = 5,
    NCS_ComputeUpToDateWithWarnings                = 6,
    NCS_MAX                                        = 7
};


// Enum  Niagara.ENiagaraScriptUsage
enum class ENiagaraScriptUsage : uint8_t
{
    Function                                       = 0,
    Module                                         = 1,
    DynamicInput                                   = 2,
    ParticleSpawnScript                            = 3,
    ParticleSpawnScriptInterpolated                = 4,
    ParticleUpdateScript                           = 5,
    ParticleEventScript                            = 6,
    ParticleSimulationStageScript                  = 7,
    ParticleGPUComputeScript                       = 8,
    EmitterSpawnScript                             = 9,
    EmitterUpdateScript                            = 10,
    SystemSpawnScript                              = 11,
    SystemUpdateScript                             = 12,
    ENiagaraScriptUsage_MAX                        = 13
};


// Enum  Niagara.ENiagaraCompileUsageStaticSwitch
enum class ENiagaraCompileUsageStaticSwitch : uint8_t
{
    Spawn                                          = 0,
    Update                                         = 1,
    Event                                          = 2,
    SimulationStage                                = 3,
    Default                                        = 4,
    ENiagaraCompileUsageStaticSwitch_MAX           = 5
};


// Enum  Niagara.ENiagaraScriptContextStaticSwitch
enum class ENiagaraScriptContextStaticSwitch : uint8_t
{
    System                                         = 0,
    Emitter                                        = 1,
    Particle                                       = 2,
    ENiagaraScriptContextStaticSwitch_MAX          = 3
};


// Enum  Niagara.ENiagaraScriptGroup
enum class ENiagaraScriptGroup : uint8_t
{
    Particle                                       = 0,
    Emitter                                        = 1,
    System                                         = 2,
    Max                                            = 3
};


// Enum  Niagara.ENiagaraIterationSource
enum class ENiagaraIterationSource : uint8_t
{
    Particles                                      = 0,
    DataInterface                                  = 1,
    ENiagaraIterationSource_MAX                    = 2
};


// Enum  Niagara.ENiagaraBindingSource
enum class ENiagaraBindingSource : uint8_t
{
    ImplicitFromSource                             = 0,
    ExplicitParticles                              = 1,
    ExplicitEmitter                                = 2,
    ExplicitSystem                                 = 3,
    ExplicitUser                                   = 4,
    MaxBindingSource                               = 5,
    ENiagaraBindingSource_MAX                      = 6
};


// Enum  Niagara.ENiagaraRendererSourceDataMode
enum class ENiagaraRendererSourceDataMode : uint8_t
{
    Particles                                      = 0,
    Emitter                                        = 1,
    ENiagaraRendererSourceDataMode_MAX             = 2
};


// Enum  Niagara.ENiagaraLegacyTrailWidthMode
enum class ENiagaraLegacyTrailWidthMode : uint8_t
{
    FromCentre                                     = 0,
    FromFirst                                      = 1,
    FromSecond                                     = 2,
    ENiagaraLegacyTrailWidthMode_MAX               = 3
};


// Enum  Niagara.ENCPoolMethod
enum class ENCPoolMethod : uint8_t
{
    None                                           = 0,
    AutoRelease                                    = 1,
    ManualRelease                                  = 2,
    ManualRelease_OnComplete                       = 3,
    FreeInPool                                     = 4,
    ENCPoolMethod_MAX                              = 5
};


// Enum  Niagara.ENiagaraSystemInstanceState
enum class ENiagaraSystemInstanceState : uint8_t
{
    None                                           = 0,
    PendingSpawn                                   = 1,
    PendingSpawnPaused                             = 2,
    Spawning                                       = 3,
    Running                                        = 4,
    Paused                                         = 5,
    Num                                            = 6,
    ENiagaraSystemInstanceState_MAX                = 7
};


// Enum  Niagara.ENiagaraFunctionDebugState
enum class ENiagaraFunctionDebugState : uint8_t
{
    NoDebug                                        = 0,
    Basic                                          = 1,
    ENiagaraFunctionDebugState_MAX                 = 2
};


// Enum  Niagara.ENiagaraDataInterfaceEmitterBindingMode
enum class ENiagaraDataInterfaceEmitterBindingMode : uint8_t
{
    Self                                           = 0,
    Other                                          = 1,
    ENiagaraDataInterfaceEmitterBindingMode_MAX    = 2
};


// Enum  Niagara.ENDIExport_GPUAllocationMode
enum class ENDIExport_GPUAllocationMode : uint8_t
{
    FixedSize                                      = 0,
    PerParticle                                    = 1,
    ENDIExport_MAX                                 = 2
};


// Enum  Niagara.ENDILandscape_SourceMode
enum class ENDILandscape_SourceMode : uint8_t
{
    Default                                        = 0,
    Source                                         = 1,
    AttachParent                                   = 2,
    ENDILandscape_MAX                              = 3
};


// Enum  Niagara.ESetResolutionMethod
enum class ESetResolutionMethod : uint8_t
{
    Independent                                    = 0,
    MaxAxis                                        = 1,
    CellSize                                       = 2,
    ESetResolutionMethod_MAX                       = 3
};


// Enum  Niagara.ENDISkeletalMesh_SourceMode
enum class ENDISkeletalMesh_SourceMode : uint8_t
{
    Default                                        = 0,
    Source                                         = 1,
    AttachParent                                   = 2,
    ENDISkeletalMesh_MAX                           = 3
};


// Enum  Niagara.ENDISkeletalMesh_SkinningMode
enum class ENDISkeletalMesh_SkinningMode : uint8_t
{
    Invalid                                        = 255,
    None                                           = 0,
    SkinOnTheFly                                   = 1,
    PreSkin                                        = 2,
    ENDISkeletalMesh_MAX                           = 256
};


// Enum  Niagara.ENDIStaticMesh_SourceMode
enum class ENDIStaticMesh_SourceMode : uint8_t
{
    Default                                        = 0,
    Source                                         = 1,
    AttachParent                                   = 2,
    DefaultMeshOnly                                = 3,
    ENDIStaticMesh_MAX                             = 4
};


// Enum  Niagara.ENiagaraDebugPlaybackMode
enum class ENiagaraDebugPlaybackMode : uint8_t
{
    Play                                           = 0,
    Loop                                           = 1,
    Paused                                         = 2,
    Step                                           = 3,
    ENiagaraDebugPlaybackMode_MAX                  = 4
};


// Enum  Niagara.ENiagaraDebugHudHAlign
enum class ENiagaraDebugHudHAlign : uint8_t
{
    Left                                           = 0,
    Center                                         = 1,
    Right                                          = 2,
    ENiagaraDebugHudHAlign_MAX                     = 3
};


// Enum  Niagara.ENiagaraDebugHudVAlign
enum class ENiagaraDebugHudVAlign : uint8_t
{
    Top                                            = 0,
    Center                                         = 1,
    Bottom                                         = 2,
    ENiagaraDebugHudVAlign_MAX                     = 3
};


// Enum  Niagara.ENiagaraDebugHudFont
enum class ENiagaraDebugHudFont : uint8_t
{
    Small                                          = 0,
    Normal                                         = 1,
    ENiagaraDebugHudFont_MAX                       = 2
};


// Enum  Niagara.ENiagaraDebugHudVerbosity
enum class ENiagaraDebugHudVerbosity : uint8_t
{
    None                                           = 0,
    Basic                                          = 1,
    Verbose                                        = 2,
    ENiagaraDebugHudVerbosity_MAX                  = 3
};


// Enum  Niagara.ENiagaraDebugHUDOverviewMode
enum class ENiagaraDebugHUDOverviewMode : uint8_t
{
    Overview                                       = 0,
    Scalability                                    = 1,
    Performance                                    = 2,
    GpuComputePerformance                          = 3,
    ENiagaraDebugHUDOverviewMode_MAX               = 4
};


// Enum  Niagara.ENiagaraDebugHUDPerfGraphMode
enum class ENiagaraDebugHUDPerfGraphMode : uint8_t
{
    None                                           = 0,
    GameThread                                     = 1,
    RenderThread                                   = 2,
    GPU                                            = 3,
    ENiagaraDebugHUDPerfGraphMode_MAX              = 4
};


// Enum  Niagara.ENiagaraDebugHUDPerfSampleMode
enum class ENiagaraDebugHUDPerfSampleMode : uint8_t
{
    FrameTotal                                     = 0,
    PerInstanceAverage                             = 1,
    ENiagaraDebugHUDPerfSampleMode_MAX             = 2
};


// Enum  Niagara.ENiagaraCullReaction
enum class ENiagaraCullReaction : uint8_t
{
    Deactivate                                     = 0,
    DeactivateImmediate                            = 1,
    DeactivateResume                               = 2,
    DeactivateImmediateResume                      = 3,
    ENiagaraCullReaction_MAX                       = 4
};


// Enum  Niagara.ENiagaraScalabilityUpdateFrequency
enum class ENiagaraScalabilityUpdateFrequency : uint8_t
{
    SpawnOnly                                      = 0,
    Low                                            = 1,
    Medium                                         = 2,
    High                                           = 3,
    Continuous                                     = 4,
    ENiagaraScalabilityUpdateFrequency_MAX         = 5
};


// Enum  Niagara.ENiagaraCullProxyMode
enum class ENiagaraCullProxyMode : uint8_t
{
    None                                           = 0,
    Instanced_Rendered                             = 1,
    ENiagaraCullProxyMode_MAX                      = 2
};


// Enum  Niagara.EScriptExecutionMode
enum class EScriptExecutionMode : uint8_t
{
    EveryParticle                                  = 0,
    SpawnedParticles                               = 1,
    SingleParticle                                 = 2,
    EScriptExecutionMode_MAX                       = 3
};


// Enum  Niagara.EParticleAllocationMode
enum class EParticleAllocationMode : uint8_t
{
    AutomaticEstimate                              = 0,
    ManualEstimate                                 = 1,
    FixedCount                                     = 2,
    EParticleAllocationMode_MAX                    = 3
};


// Enum  Niagara.ENiagaraSortMode
enum class ENiagaraSortMode : uint8_t
{
    None                                           = 0,
    ViewDepth                                      = 1,
    ViewDistance                                   = 2,
    CustomAscending                                = 3,
    CustomDecending                                = 4,
    ENiagaraSortMode_MAX                           = 5
};


// Enum  Niagara.ENiagaraMeshFacingMode
enum class ENiagaraMeshFacingMode : uint8_t
{
    Default                                        = 0,
    Velocity                                       = 1,
    CameraPosition                                 = 2,
    CameraPlane                                    = 3,
    ENiagaraMeshFacingMode_MAX                     = 4
};


// Enum  Niagara.ENiagaraMeshPivotOffsetSpace
enum class ENiagaraMeshPivotOffsetSpace : uint8_t
{
    Mesh                                           = 0,
    Simulation                                     = 1,
    World                                          = 2,
    Local                                          = 3,
    ENiagaraMeshPivotOffsetSpace_MAX               = 4
};


// Enum  Niagara.ENiagaraMeshLockedAxisSpace
enum class ENiagaraMeshLockedAxisSpace : uint8_t
{
    Simulation                                     = 0,
    World                                          = 1,
    Local                                          = 2,
    ENiagaraMeshLockedAxisSpace_MAX                = 3
};


// Enum  Niagara.ENiagaraPlatformSelectionState
enum class ENiagaraPlatformSelectionState : uint8_t
{
    Default                                        = 0,
    Enabled                                        = 1,
    Disabled                                       = 2,
    ENiagaraPlatformSelectionState_MAX             = 3
};


// Enum  Niagara.ENiagaraPlatformSetState
enum class ENiagaraPlatformSetState : uint8_t
{
    Disabled                                       = 0,
    Enabled                                        = 1,
    Active                                         = 2,
    Unknown                                        = 3,
    ENiagaraPlatformSetState_MAX                   = 4
};


// Enum  Niagara.ENiagaraPreviewGridResetMode
enum class ENiagaraPreviewGridResetMode : uint8_t
{
    Never                                          = 0,
    Individual                                     = 1,
    All                                            = 2,
    ENiagaraPreviewGridResetMode_MAX               = 3
};


// Enum  Niagara.ENiagaraRibbonFacingMode
enum class ENiagaraRibbonFacingMode : uint8_t
{
    Screen                                         = 0,
    Custom                                         = 1,
    CustomSideVector                               = 2,
    ENiagaraRibbonFacingMode_MAX                   = 3
};


// Enum  Niagara.ENiagaraRibbonAgeOffsetMode
enum class ENiagaraRibbonAgeOffsetMode : uint8_t
{
    Scale                                          = 0,
    Clip                                           = 1,
    ENiagaraRibbonAgeOffsetMode_MAX                = 2
};


// Enum  Niagara.ENiagaraRibbonDrawDirection
enum class ENiagaraRibbonDrawDirection : uint8_t
{
    FrontToBack                                    = 0,
    BackToFront                                    = 1,
    ENiagaraRibbonDrawDirection_MAX                = 2
};


// Enum  Niagara.ENiagaraRibbonShapeMode
enum class ENiagaraRibbonShapeMode : uint8_t
{
    Plane                                          = 0,
    MultiPlane                                     = 1,
    Tube                                           = 2,
    Custom                                         = 3,
    ENiagaraRibbonShapeMode_MAX                    = 4
};


// Enum  Niagara.ENiagaraRibbonTessellationMode
enum class ENiagaraRibbonTessellationMode : uint8_t
{
    Automatic                                      = 0,
    Custom                                         = 1,
    Disabled                                       = 2,
    ENiagaraRibbonTessellationMode_MAX             = 3
};


// Enum  Niagara.ENiagaraRibbonUVEdgeMode
enum class ENiagaraRibbonUVEdgeMode : uint8_t
{
    SmoothTransition                               = 0,
    Locked                                         = 1,
    ENiagaraRibbonUVEdgeMode_MAX                   = 2
};


// Enum  Niagara.ENiagaraRibbonUVDistributionMode
enum class ENiagaraRibbonUVDistributionMode : uint8_t
{
    ScaledUniformly                                = 0,
    ScaledUsingRibbonSegmentLength                 = 1,
    TiledOverRibbonLength                          = 2,
    TiledFromStartOverRibbonLength                 = 3,
    ENiagaraRibbonUVDistributionMode_MAX           = 4
};


// Enum  Niagara.EUnusedAttributeBehaviour
enum class EUnusedAttributeBehaviour : uint8_t
{
    Copy                                           = 0,
    Zero                                           = 1,
    None                                           = 2,
    MarkInvalid                                    = 3,
    PassThrough                                    = 4,
    EUnusedAttributeBehaviour_MAX                  = 5
};


// Enum  Niagara.ENiagaraModuleDependencyType
enum class ENiagaraModuleDependencyType : uint8_t
{
    PreDependency                                  = 0,
    PostDependency                                 = 1,
    ENiagaraModuleDependencyType_MAX               = 2
};


// Enum  Niagara.ENiagaraModuleDependencyScriptConstraint
enum class ENiagaraModuleDependencyScriptConstraint : uint8_t
{
    SameScript                                     = 0,
    AllScripts                                     = 1,
    ENiagaraModuleDependencyScriptConstraint_MAX   = 2
};


// Enum  Niagara.ENiagaraScriptLibraryVisibility
enum class ENiagaraScriptLibraryVisibility : uint8_t
{
    Invalid                                        = 0,
    Unexposed                                      = 1,
    Library                                        = 2,
    Hidden                                         = 3,
    ENiagaraScriptLibraryVisibility_MAX            = 4
};


// Enum  Niagara.ENiagaraScriptTemplateSpecification
enum class ENiagaraScriptTemplateSpecification : uint8_t
{
    None                                           = 0,
    Template                                       = 1,
    Behavior                                       = 2,
    ENiagaraScriptTemplateSpecification_MAX        = 3
};


// Enum  Niagara.ENDISkelMesh_GpuMaxInfluences
enum class ENDISkelMesh_GpuMaxInfluences : uint8_t
{
    AllowMax4                                      = 0,
    AllowMax8                                      = 1,
    Unlimited                                      = 2,
    ENDISkelMesh_MAX                               = 3
};


// Enum  Niagara.ENDISkelMesh_GpuUniformSamplingFormat
enum class ENDISkelMesh_GpuUniformSamplingFormat : uint8_t
{
    Full                                           = 0,
    Limited_24                                     = 1,
    Limited_23                                     = 2,
    ENDISkelMesh_MAX                               = 3
};


// Enum  Niagara.ENDISkelMesh_AdjacencyTriangleIndexFormat
enum class ENDISkelMesh_AdjacencyTriangleIndexFormat : uint8_t
{
    Full                                           = 0,
    Half                                           = 1,
    ENDISkelMesh_MAX                               = 2
};


// Enum  Niagara.ENiagaraDefaultRendererPixelCoverageMode
enum class ENiagaraDefaultRendererPixelCoverageMode : uint8_t
{
    Enabled                                        = 0,
    Disabled                                       = 1,
    ENiagaraDefaultRendererPixelCoverageMode_MAX   = 2
};


// Enum  Niagara.ENDICollisionQuery_AsyncGpuTraceProvider
enum class ENDICollisionQuery_AsyncGpuTraceProvider : uint8_t
{
    Default                                        = 0,
    HWRT                                           = 1,
    GSDF                                           = 2,
    None                                           = 3,
    ENDICollisionQuery_MAX                         = 4
};


// Enum  Niagara.ENiagaraSpriteAlignment
enum class ENiagaraSpriteAlignment : uint8_t
{
    Unaligned                                      = 0,
    VelocityAligned                                = 1,
    CustomAlignment                                = 2,
    ENiagaraSpriteAlignment_MAX                    = 3
};


// Enum  Niagara.ENiagaraSpriteFacingMode
enum class ENiagaraSpriteFacingMode : uint8_t
{
    FaceCamera                                     = 0,
    FaceCameraPlane                                = 1,
    CustomFacingVector                             = 2,
    FaceCameraPosition                             = 3,
    FaceCameraDistanceBlend                        = 4,
    ENiagaraSpriteFacingMode_MAX                   = 5
};


// Enum  Niagara.ENiagaraRendererPixelCoverageMode
enum class ENiagaraRendererPixelCoverageMode : uint8_t
{
    Automatic                                      = 0,
    Disabled                                       = 1,
    Enabled                                        = 2,
    Enabled_RGBA                                   = 3,
    Enabled_RGB                                    = 4,
    Enabled_A                                      = 5,
    ENiagaraRendererPixelCoverageMode_MAX          = 6
};


// Enum  Niagara.ENiagaraCompilationState
enum class ENiagaraCompilationState : uint8_t
{
    CheckDDC                                       = 0,
    Precompile                                     = 1,
    StartCompileJob                                = 2,
    AwaitResult                                    = 3,
    ProcessResult                                  = 4,
    PutToDDC                                       = 5,
    Finished                                       = 6,
    Aborted                                        = 7,
    ENiagaraCompilationState_MAX                   = 8
};


// Enum  Niagara.ENiagaraStructConversionType
enum class ENiagaraStructConversionType : uint8_t
{
    CopyOnly                                       = 0,
    DoubleToFloat                                  = 1,
    Vector2                                        = 2,
    Vector3                                        = 3,
    Vector4                                        = 4,
    Quat                                           = 5,
    ENiagaraStructConversionType_MAX               = 6
};


// Enum  Niagara.ENiagaraNumericOutputTypeSelectionMode
enum class ENiagaraNumericOutputTypeSelectionMode : uint8_t
{
    None                                           = 0,
    Largest                                        = 1,
    Smallest                                       = 2,
    Scalar                                         = 3,
    Custom                                         = 4,
    ENiagaraNumericOutputTypeSelectionMode_MAX     = 5
};


// Enum  Niagara.ENiagaraExecutionStateSource
enum class ENiagaraExecutionStateSource : uint8_t
{
    Scalability                                    = 0,
    Internal                                       = 1,
    Owner                                          = 2,
    InternalCompletion                             = 3,
    ENiagaraExecutionStateSource_MAX               = 4
};


// Enum  Niagara.ENiagaraExecutionState
enum class ENiagaraExecutionState : uint8_t
{
    Active                                         = 0,
    Inactive                                       = 1,
    InactiveClear                                  = 2,
    Complete                                       = 3,
    Disabled                                       = 4,
    Num                                            = 5,
    ENiagaraExecutionState_MAX                     = 6
};


// Enum  Niagara.ENiagaraCoordinateSpace
enum class ENiagaraCoordinateSpace : uint8_t
{
    Simulation                                     = 0,
    World                                          = 1,
    Local                                          = 2,
    ENiagaraCoordinateSpace_MAX                    = 3
};


// Enum  Niagara.ENiagaraPythonUpdateScriptReference
enum class ENiagaraPythonUpdateScriptReference : uint8_t
{
    None                                           = 0,
    ScriptAsset                                    = 1,
    DirectTextEntry                                = 2,
    ENiagaraPythonUpdateScriptReference_MAX        = 3
};


// Enum  Niagara.ENiagaraOrientationAxis
enum class ENiagaraOrientationAxis : uint8_t
{
    XAxis                                          = 0,
    YAxis                                          = 1,
    ZAxis                                          = 2,
    ENiagaraOrientationAxis_MAX                    = 3
};


// Enum  Niagara.ENiagaraBoolDisplayMode
enum class ENiagaraBoolDisplayMode : uint8_t
{
    DisplayAlways                                  = 0,
    DisplayIfTrue                                  = 1,
    DisplayIfFalse                                 = 2,
    ENiagaraBoolDisplayMode_MAX                    = 3
};


// Enum  Niagara.ENiagaraVariantMode
enum class ENiagaraVariantMode : uint8_t
{
    None                                           = 0,
    Object                                         = 1,
    DataInterface                                  = 2,
    Bytes                                          = 3,
    ENiagaraVariantMode_MAX                        = 4
};


// Enum  NiagaraShader.ENiagaraMipMapGenerationType
enum class ENiagaraMipMapGenerationType : uint8_t
{
    Unfiltered                                     = 0,
    Linear                                         = 1,
    Blur1                                          = 2,
    Blur2                                          = 3,
    Blur3                                          = 4,
    Blur4                                          = 5,
    ENiagaraMipMapGenerationType_MAX               = 6
};


// Enum  NiagaraShader.ENiagaraGpuDispatchType
enum class ENiagaraGpuDispatchType : uint8_t
{
    OneD                                           = 0,
    TwoD                                           = 1,
    ThreeD                                         = 2,
    Custom                                         = 3,
    ENiagaraGpuDispatchType_MAX                    = 4
};


// Enum  NiagaraShader.ENiagaraSimStageExecuteBehavior
enum class ENiagaraSimStageExecuteBehavior : uint8_t
{
    Always                                         = 0,
    OnSimulationReset                              = 1,
    NotOnSimulationReset                           = 2,
    ENiagaraSimStageExecuteBehavior_MAX            = 3
};


// Enum  NiagaraShader.FNiagaraCompileEventSeverity
enum class FNiagaraCompileEventSeverity : uint8_t
{
    Log                                            = 0,
    Display                                        = 1,
    Warning                                        = 2,
    Error                                          = 3,
    FNiagaraCompileEventSeverity_MAX               = 4
};


// Enum  NiagaraShader.FNiagaraCompileEventSource
enum class FNiagaraCompileEventSource : uint8_t
{
    Unset                                          = 0,
    ScriptDependency                               = 1,
    FNiagaraCompileEventSource_MAX                 = 2
};


// Enum  DataRegistry.EMetaDataRegistrySourceAssetUsage
enum class EMetaDataRegistrySourceAssetUsage : uint8_t
{
    NoAssets                                       = 0,
    SearchAssets                                   = 1,
    RegisterAssets                                 = 2,
    SearchAndRegisterAssets                        = 3,
    EMetaDataRegistrySourceAssetUsage_MAX          = 4
};


// Enum  DataRegistry.EDataRegistrySubsystemGetItemResult
enum class EDataRegistrySubsystemGetItemResult : uint8_t
{
    Found                                          = 0,
    NotFound                                       = 1,
    EDataRegistrySubsystemGetItemResult_MAX        = 2
};


// Enum  DataRegistry.EDataRegistryAvailability
enum class EDataRegistryAvailability : uint8_t
{
    DoesNotExist                                   = 0,
    Unknown                                        = 1,
    Remote                                         = 2,
    OnDisk                                         = 3,
    LocalAsset                                     = 4,
    PreCached                                      = 5,
    EDataRegistryAvailability_MAX                  = 6
};


// Enum  BinkMediaPlayer.EBinkMediaPlayerBinkBufferModes
enum class EBinkMediaPlayerBinkBufferModes : uint8_t
{
    BMASM_Bink_Stream                              = 0,
    BMASM_Bink_PreloadAll                          = 1,
    BMASM_Bink_StreamUntilResident                 = 2,
    BMASM_Bink_MAX                                 = 3
};


// Enum  BinkMediaPlayer.EBinkMediaPlayerBinkSoundTrack
enum class EBinkMediaPlayerBinkSoundTrack : uint8_t
{
    BMASM_Bink_Sound_None                          = 0,
    BMASM_Bink_Sound_Simple                        = 1,
    BMASM_Bink_Sound_LanguageOverride              = 2,
    BMASM_Bink_Sound                               = 3,
    BMASM_Bink_Sound_51LanguageOverride            = 4,
    BMASM_Bink_Sound                               = 5,
    BMASM_Bink_Sound_71LanguageOverride            = 6,
    BMASM_Bink_Sound_MAX                           = 7
};


// Enum  BinkMediaPlayer.EBinkMediaPlayerBinkDrawStyle
enum class EBinkMediaPlayerBinkDrawStyle : uint8_t
{
    BMASM_Bink_DS_RenderToTexture                  = 0,
    BMASM_Bink_DS_OverlayFillScreenWithAspectRatio = 1,
    BMASM_Bink_DS_OverlayOriginalMovieSize         = 2,
    BMASM_Bink_DS_OverlayFillScreen                = 3,
    BMASM_Bink_DS_OverlaySpecificDestinationRectangle = 4,
    BMASM_Bink_DS_MAX                              = 5
};


// Enum  BinkMediaPlayer.EBinkMoviePlayerBinkBufferModes
enum class EBinkMoviePlayerBinkBufferModes : uint8_t
{
    MP_Bink_Stream                                 = 0,
    MP_Bink_PreloadAll                             = 1,
    MP_Bink_StreamUntilResident                    = 2,
    MP_Bink_MAX                                    = 3
};


// Enum  BinkMediaPlayer.EBinkMoviePlayerBinkSoundTrack
enum class EBinkMoviePlayerBinkSoundTrack : uint8_t
{
    MP_Bink_Sound_None                             = 0,
    MP_Bink_Sound_Simple                           = 1,
    MP_Bink_Sound_LanguageOverride                 = 2,
    MP_Bink_Sound                                  = 3,
    MP_Bink_Sound_51LanguageOverride               = 4,
    MP_Bink_Sound                                  = 5,
    MP_Bink_Sound_71LanguageOverride               = 6,
    MP_Bink_Sound_MAX                              = 7
};


// Enum  SlateCore.ECheckBoxState
enum class ECheckBoxState : uint8_t
{
    Unchecked                                      = 0,
    Checked                                        = 1,
    Undetermined                                   = 2,
    ECheckBoxState_MAX                             = 3
};


// Enum  SlateCore.EWidgetClipping
enum class EWidgetClipping : uint8_t
{
    Inherit                                        = 0,
    ClipToBounds                                   = 1,
    ClipToBoundsWithoutIntersecting                = 2,
    ClipToBoundsAlways                             = 3,
    OnDemand                                       = 4,
    EWidgetClipping_MAX                            = 5
};


// Enum  CoreUObject.EMouseCursor
enum class EMouseCursor : uint8_t
{
    None                                           = 0,
    Default                                        = 1,
    TextEditBeam                                   = 2,
    ResizeLeftRight                                = 3,
    ResizeUpDown                                   = 4,
    ResizeSouthEast                                = 5,
    ResizeSouthWest                                = 6,
    CardinalCross                                  = 7,
    Crosshairs                                     = 8,
    Hand                                           = 9,
    GrabHand                                       = 10,
    GrabHandClosed                                 = 11,
    SlashedCircle                                  = 12,
    EyeDropper                                     = 13,
    EMouseCursor_MAX                               = 14
};


// Enum  SlateCore.ESlateBrushImageType
enum class ESlateBrushImageType : uint8_t
{
    NoImage                                        = 0,
    FullColor                                      = 1,
    Linear                                         = 2,
    Vector                                         = 3,
    ESlateBrushImageType_MAX                       = 4
};


// Enum  SlateCore.ESlateBrushMirrorType
enum class ESlateBrushMirrorType : uint8_t
{
    NoMirror                                       = 0,
    Horizontal                                     = 1,
    Vertical                                       = 2,
    Both                                           = 3,
    ESlateBrushMirrorType_MAX                      = 4
};


// Enum  SlateCore.ESlateBrushTileType
enum class ESlateBrushTileType : uint8_t
{
    NoTile                                         = 0,
    Horizontal                                     = 1,
    Vertical                                       = 2,
    Both                                           = 3,
    ESlateBrushTileType_MAX                        = 4
};


// Enum  SlateCore.ESlateBrushDrawType
enum class ESlateBrushDrawType : uint8_t
{
    NoDrawType                                     = 0,
    Box                                            = 1,
    Border                                         = 2,
    Image                                          = 3,
    RoundedBox                                     = 4,
    ESlateBrushDrawType_MAX                        = 5
};


// Enum  SlateCore.ESlateBrushRoundingType
enum class ESlateBrushRoundingType : uint8_t
{
    FixedRadius                                    = 0,
    HalfHeightRadius                               = 1,
    ESlateBrushRoundingType_MAX                    = 2
};


// Enum  SlateCore.ESlateColorStylingMode
enum class ESlateColorStylingMode : uint8_t
{
    UseColor_Specified                             = 0,
    UseColor_ColorTable                            = 1,
    UseColor_Foreground                            = 2,
    UseColor_Foreground_Subdued                    = 3,
    UseColor_UseStyle                              = 4,
    UseColor_MAX                                   = 5
};


// Enum  UMG.ESlateVisibility
enum class ESlateVisibility : uint8_t
{
    Visible                                        = 0,
    Collapsed                                      = 1,
    Hidden                                         = 2,
    HitTestInvisible                               = 3,
    SelfHitTestInvisible                           = 4,
    ESlateVisibility_MAX                           = 5
};


// Enum  SlateCore.EUINavigationRule
enum class EUINavigationRule : uint8_t
{
    Escape                                         = 0,
    Explicit                                       = 1,
    Wrap                                           = 2,
    Stop                                           = 3,
    Custom                                         = 4,
    CustomBoundary                                 = 5,
    Invalid                                        = 6,
    EUINavigationRule_MAX                          = 7
};


// Enum  SlateCore.EUINavigation
enum class EUINavigation : uint8_t
{
    Left                                           = 0,
    Right                                          = 1,
    Up                                             = 2,
    Down                                           = 3,
    Next                                           = 4,
    Previous                                       = 5,
    Num                                            = 6,
    Invalid                                        = 7,
    EUINavigation_MAX                              = 8
};


// Enum  SlateCore.EFlowDirectionPreference
enum class EFlowDirectionPreference : uint8_t
{
    Inherit                                        = 0,
    Culture                                        = 1,
    LeftToRight                                    = 2,
    RightToLeft                                    = 3,
    EFlowDirectionPreference_MAX                   = 4
};


// Enum  SlateCore.ESelectInfo
enum class ESelectInfo : uint8_t
{
    OnKeyPress                                     = 0,
    OnNavigation                                   = 1,
    OnMouseClick                                   = 2,
    Direct                                         = 3,
    ESelectInfo_MAX                                = 4
};


// Enum  SlateCore.EVerticalAlignment
enum class EVerticalAlignment : uint8_t
{
    VAlign_Fill                                    = 0,
    VAlign_Top                                     = 1,
    VAlign_Center                                  = 2,
    VAlign_Bottom                                  = 3,
    VAlign_MAX                                     = 4
};


// Enum  SlateCore.ETextCommit
enum class ETextCommit : uint8_t
{
    Default                                        = 0,
    OnEnter                                        = 1,
    OnUserMovedFocus                               = 2,
    OnCleared                                      = 3,
    ETextCommit_MAX                                = 4
};


// Enum  Slate.ETextJustify
enum class ETextJustify : uint8_t
{
    Left                                           = 0,
    Center                                         = 1,
    Right                                          = 2,
    ETextJustify_MAX                               = 3
};


// Enum  SlateCore.ETextOverflowPolicy
enum class ETextOverflowPolicy : uint8_t
{
    Clip                                           = 0,
    Ellipsis                                       = 1,
    ETextOverflowPolicy_MAX                        = 2
};


// Enum  Slate.ETextFlowDirection
enum class ETextFlowDirection : uint8_t
{
    Auto                                           = 0,
    LeftToRight                                    = 1,
    RightToLeft                                    = 2,
    ETextFlowDirection_MAX                         = 3
};


// Enum  SlateCore.ETextShapingMethod
enum class ETextShapingMethod : uint8_t
{
    Auto                                           = 0,
    KerningOnly                                    = 1,
    FullShaping                                    = 2,
    ETextShapingMethod_MAX                         = 3
};


// Enum  Slate.EVirtualKeyboardDismissAction
enum class EVirtualKeyboardDismissAction : uint8_t
{
    TextChangeOnDismiss                            = 0,
    TextCommitOnAccept                             = 1,
    TextCommitOnDismiss                            = 2,
    EVirtualKeyboardDismissAction_MAX              = 3
};


// Enum  Slate.EVirtualKeyboardTrigger
enum class EVirtualKeyboardTrigger : uint8_t
{
    OnFocusByPointer                               = 0,
    OnAllFocusEvents                               = 1,
    EVirtualKeyboardTrigger_MAX                    = 2
};


// Enum  UMG.EVirtualKeyboardType
enum class EVirtualKeyboardType : uint8_t
{
    Default                                        = 0,
    Number                                         = 1,
    Web                                            = 2,
    Email                                          = 3,
    Password                                       = 4,
    AlphaNumeric                                   = 5,
    EVirtualKeyboardType_MAX                       = 6
};


// Enum  SlateCore.ETextTransformPolicy
enum class ETextTransformPolicy : uint8_t
{
    None                                           = 0,
    ToLower                                        = 1,
    ToUpper                                        = 2,
    ETextTransformPolicy_MAX                       = 3
};


// Enum  SlateCore.EMenuPlacement
enum class EMenuPlacement : uint8_t
{
    MenuPlacement_BelowAnchor                      = 0,
    MenuPlacement_CenteredBelowAnchor              = 1,
    MenuPlacement_BelowRightAnchor                 = 2,
    MenuPlacement_ComboBox                         = 3,
    MenuPlacement_ComboBoxRight                    = 4,
    MenuPlacement_MenuRight                        = 5,
    MenuPlacement_AboveAnchor                      = 6,
    MenuPlacement_CenteredAboveAnchor              = 7,
    MenuPlacement_AboveRightAnchor                 = 8,
    MenuPlacement_MenuLeft                         = 9,
    MenuPlacement_Center                           = 10,
    MenuPlacement_RightLeftCenter                  = 11,
    MenuPlacement_MatchBottomLeft                  = 12,
    MenuPlacement_MAX                              = 13
};


// Enum  Slate.ETextWrappingPolicy
enum class ETextWrappingPolicy : uint8_t
{
    DefaultWrapping                                = 0,
    AllowPerCharacterWrapping                      = 1,
    ETextWrappingPolicy_MAX                        = 2
};


// Enum  UMG.ESlateAccessibleBehavior
enum class ESlateAccessibleBehavior : uint8_t
{
    NotAccessible                                  = 0,
    Auto                                           = 1,
    Summary                                        = 2,
    Custom                                         = 3,
    ToolTip                                        = 4,
    ESlateAccessibleBehavior_MAX                   = 5
};


// Enum  SlateCore.EColorVisionDeficiency
enum class EColorVisionDeficiency : uint8_t
{
    NormalVision                                   = 0,
    Deuteranope                                    = 1,
    Protanope                                      = 2,
    Tritanope                                      = 3,
    EColorVisionDeficiency_MAX                     = 4
};


// Enum  Engine.EMouseLockMode
enum class EMouseLockMode : uint8_t
{
    DoNotLock                                      = 0,
    LockOnCapture                                  = 1,
    LockAlways                                     = 2,
    LockInFullscreen                               = 3,
    EMouseLockMode_MAX                             = 4
};


// Enum  Engine.EWindowTitleBarMode
enum class EWindowTitleBarMode : uint8_t
{
    Overlay                                        = 0,
    VerticalBox                                    = 1,
    EWindowTitleBarMode_MAX                        = 2
};


// Enum  SlateCore.EHorizontalAlignment
enum class EHorizontalAlignment : uint8_t
{
    HAlign_Fill                                    = 0,
    HAlign_Left                                    = 1,
    HAlign_Center                                  = 2,
    HAlign_Right                                   = 3,
    HAlign_MAX                                     = 4
};


// Enum  CommonUI.ECommonNumericType
enum class ECommonNumericType : uint8_t
{
    Number                                         = 0,
    Percentage                                     = 1,
    Seconds                                        = 2,
    Distance                                       = 3,
    ECommonNumericType_MAX                         = 4
};


// Enum  Engine.ERoundingMode
enum class ERoundingMode : uint8_t
{
    HalfToEven                                     = 0,
    HalfFromZero                                   = 1,
    HalfToZero                                     = 2,
    FromZero                                       = 3,
    ToZero                                         = 4,
    ToNegativeInfinity                             = 5,
    ToPositiveInfinity                             = 6,
    ERoundingMode_MAX                              = 7
};


// Enum  UMG.EWidgetAnimationEvent
enum class EWidgetAnimationEvent : uint8_t
{
    Started                                        = 0,
    Finished                                       = 1,
    EWidgetAnimationEvent_MAX                      = 2
};


// Enum  Engine.EInputEvent
enum class EInputEvent : uint8_t
{
    IE_Pressed                                     = 0,
    IE_Released                                    = 1,
    IE_Repeat                                      = 2,
    IE_DoubleClick                                 = 3,
    IE_Axis                                        = 4,
    IE_MAX                                         = 5
};


// Enum  UMG.EUMGSequencePlayMode
enum class EUMGSequencePlayMode : uint8_t
{
    Forward                                        = 0,
    Reverse                                        = 1,
    PingPong                                       = 2,
    EUMGSequencePlayMode_MAX                       = 3
};


// Enum  UMG.EWidgetTickFrequency
enum class EWidgetTickFrequency : uint8_t
{
    Never                                          = 0,
    Auto                                           = 1,
    EWidgetTickFrequency_MAX                       = 2
};


// Enum  CommonUI.ECommonInputMode
enum class ECommonInputMode : uint8_t
{
    Menu                                           = 0,
    Game                                           = 1,
    All                                            = 2,
    MAX                                            = 3
};


// Enum  CommonUI.ERichTextInlineIconDisplayMode
enum class ERichTextInlineIconDisplayMode : uint8_t
{
    IconOnly                                       = 0,
    TextOnly                                       = 1,
    IconAndText                                    = 2,
    MAX                                            = 3
};


// Enum  CommonUI.EInputActionState
enum class EInputActionState : uint8_t
{
    Enabled                                        = 0,
    Disabled                                       = 1,
    Hidden                                         = 2,
    HiddenAndDisabled                              = 3,
    EInputActionState_MAX                          = 4
};


// Enum  CommonUI.ECommonSwitcherTransition
enum class ECommonSwitcherTransition : uint8_t
{
    FadeOnly                                       = 0,
    Horizontal                                     = 1,
    Vertical                                       = 2,
    Zoom                                           = 3,
    ECommonSwitcherTransition_MAX                  = 4
};


// Enum  CommonUI.ETransitionCurve
enum class ETransitionCurve : uint8_t
{
    Linear                                         = 0,
    QuadIn                                         = 1,
    QuadOut                                        = 2,
    QuadInOut                                      = 3,
    CubicIn                                        = 4,
    CubicOut                                       = 5,
    CubicInOut                                     = 6,
    ETransitionCurve_MAX                           = 7
};


// Enum  CommonInput.ECommonInputType
enum class ECommonInputType : uint8_t
{
    MouseAndKeyboard                               = 0,
    Gamepad                                        = 1,
    Touch                                          = 2,
    Count                                          = 3,
    ECommonInputType_MAX                           = 4
};


// Enum  ComponentAssembler.EAssemblyNetworkMode
enum class EAssemblyNetworkMode : uint8_t
{
    OnlyCreateOnClient                             = 0,
    OnlyCreateOnServer                             = 1,
    CreateOnBothClientAndServer                    = 2,
    CreateOnServerAndReplicateToClient             = 3,
    EAssemblyNetworkMode_MAX                       = 4
};


// Enum  Engine.ENetRole
enum class ENetRole : uint8_t
{
    ROLE_None                                      = 0,
    ROLE_SimulatedProxy                            = 1,
    ROLE_AutonomousProxy                           = 2,
    ROLE_Authority                                 = 3,
    ROLE_MAX                                       = 4
};


// Enum  Engine.EAttachLocation
enum class EAttachLocation : uint8_t
{
    KeepRelativeOffset                             = 0,
    KeepWorldPosition                              = 1,
    SnapToTarget                                   = 2,
    SnapToTargetIncludingScale                     = 3,
    EAttachLocation_MAX                            = 4
};


// Enum  Engine.EAttachmentRule
enum class EAttachmentRule : uint8_t
{
    KeepRelative                                   = 0,
    KeepWorld                                      = 1,
    SnapToTarget                                   = 2,
    EAttachmentRule_MAX                            = 3
};


// Enum  Engine.EDetachmentRule
enum class EDetachmentRule : uint8_t
{
    KeepRelative                                   = 0,
    KeepWorld                                      = 1,
    EDetachmentRule_MAX                            = 2
};


// Enum  Engine.ENetDormancy
enum class ENetDormancy : uint8_t
{
    DORM_Never                                     = 0,
    DORM_Awake                                     = 1,
    DORM_DormantAll                                = 2,
    DORM_DormantPartial                            = 3,
    DORM_Initial                                   = 4,
    DORM_MAX                                       = 5
};


// Enum  Engine.EAutoReceiveInput
enum class EAutoReceiveInput : uint8_t
{
    Disabled                                       = 0,
    Player0                                        = 1,
    Player1                                        = 2,
    Player2                                        = 3,
    Player3                                        = 4,
    Player4                                        = 5,
    Player5                                        = 6,
    Player6                                        = 7,
    Player7                                        = 8,
    EAutoReceiveInput_MAX                          = 9
};


// Enum  Engine.ESpawnActorCollisionHandlingMethod
enum class ESpawnActorCollisionHandlingMethod : uint8_t
{
    Undefined                                      = 0,
    AlwaysSpawn                                    = 1,
    AdjustIfPossibleButAlwaysSpawn                 = 2,
    AdjustIfPossibleButDontSpawnIfColliding        = 3,
    DontSpawnIfColliding                           = 4,
    ESpawnActorCollisionHandlingMethod_MAX         = 5
};


// Enum  Engine.EActorUpdateOverlapsMethod
enum class EActorUpdateOverlapsMethod : uint8_t
{
    UseConfigDefault                               = 0,
    AlwaysUpdate                                   = 1,
    OnlyUpdateMovable                              = 2,
    NeverUpdate                                    = 3,
    EActorUpdateOverlapsMethod_MAX                 = 4
};


// Enum  AIModule.EPathFollowingResult
enum class EPathFollowingResult : uint8_t
{
    Success                                        = 0,
    Blocked                                        = 1,
    OffPath                                        = 2,
    Aborted                                        = 3,
    Skipped_DEPRECATED                             = 4,
    Invalid                                        = 5,
    EPathFollowingResult_MAX                       = 6
};


// Enum  AIModule.EEnvQueryStatus
enum class EEnvQueryStatus : uint8_t
{
    Processing                                     = 0,
    Success                                        = 1,
    Failed                                         = 2,
    Aborted                                        = 3,
    OwnerLost                                      = 4,
    MissingParam                                   = 5,
    EEnvQueryStatus_MAX                            = 6
};


// Enum  AIModule.EPathFollowingStatus
enum class EPathFollowingStatus : uint8_t
{
    Idle                                           = 0,
    Waiting                                        = 1,
    Paused                                         = 2,
    Moving                                         = 3,
    EPathFollowingStatus_MAX                       = 4
};


// Enum  AIModule.EPathFollowingRequestResult
enum class EPathFollowingRequestResult : uint8_t
{
    Failed                                         = 0,
    AlreadyAtGoal                                  = 1,
    RequestSuccessful                              = 2,
    EPathFollowingRequestResult_MAX                = 3
};


// Enum  EmbarkUtils.EEmbarkTeamId
enum class EEmbarkTeamId : uint8_t
{
    Team1                                          = 0,
    Team2                                          = 1,
    Team3                                          = 2,
    NoTeam                                         = 255,
    EEmbarkTeamId_MAX                              = 256
};


// Enum  EmbarkAI.EAIAlertnessSource
enum class EAIAlertnessSource : uint8_t
{
    Unknown                                        = 0,
    Resources                                      = 1,
    Enemy                                          = 2,
    EAIAlertnessSource_MAX                         = 3
};


// Enum  EmbarkAI.EAIAlertness
enum class EAIAlertness : uint8_t
{
    Idle                                           = 0,
    Alert                                          = 1,
    InCombat                                       = 2,
    Dormant                                        = 3,
    Fleeing                                        = 4,
    EAIAlertness_MAX                               = 5
};


// Enum  EmbarkAI.EAICombatPhase
enum class EAICombatPhase : uint8_t
{
    Normal                                         = 0,
    Aggressive                                     = 1,
    Passive                                        = 2,
    Impaired                                       = 3,
    EAICombatPhase_MAX                             = 4
};


// Enum  EmbarkAI.EAIEmotionalState
enum class EAIEmotionalState : uint8_t
{
    Normal                                         = 0,
    Enraged                                        = 1,
    Weakened                                       = 2,
    EAIEmotionalState_MAX                          = 3
};


// Enum  AIModule.EBTNodeResult
enum class EBTNodeResult : uint8_t
{
    Succeeded                                      = 0,
    Failed                                         = 1,
    Aborted                                        = 2,
    InProgress                                     = 3,
    EBTNodeResult_MAX                              = 4
};


// Enum  EmbarkAI.EUtilitySelectionMethod
enum class EUtilitySelectionMethod : uint8_t
{
    Priority                                       = 0,
    Proportional                                   = 1,
    EUtilitySelectionMethod_MAX                    = 2
};


// Enum  EmbarkAI.EAIFocusMode
enum class EAIFocusMode : uint8_t
{
    Movement                                       = 0,
    Event                                          = 1,
    Target                                         = 2,
    Script                                         = 3,
    Freeze                                         = 4,
    NoFocus                                        = 5,
    NUM                                            = 6,
    EAIFocusMode_MAX                               = 7
};


// Enum  EmbarkAI.EAIFocusFlags
enum class EAIFocusFlags : uint8_t
{
    None                                           = 0,
    RequireLOS                                     = 1,
    RequireDistance                                = 2,
    EAIFocusFlags_MAX                              = 3
};


// Enum  EmbarkAI.EStimulusSense
enum class EStimulusSense : uint8_t
{
    None                                           = 0,
    Bypass                                         = 1,
    Damage                                         = 2,
    Hearing                                        = 3,
    Network                                        = 4,
    Sight                                          = 5,
    Touch                                          = 6,
    EStimulusSense_MAX                             = 7
};


// Enum  EmbarkAI.EAgentGroupRole
enum class EAgentGroupRole : uint8_t
{
    None                                           = 0,
    Hunt                                           = 1,
    Guard                                          = 2,
    Harvest                                        = 3,
    EAgentGroupRole_MAX                            = 4
};


// Enum  EmbarkAI.EAgentEncounterModifier
enum class EAgentEncounterModifier : uint8_t
{
    Default                                        = 0,
    Dormant                                        = 1,
    Ambush                                         = 2,
    EAgentEncounterModifier_MAX                    = 3
};


// Enum  EmbarkAI.EAIKnowledgebaseNativeEventType
enum class EAIKnowledgebaseNativeEventType : uint8_t
{
    NewTargetDiscovered                            = 0,
    TargetRemoved                                  = 1,
    EAIKnowledgebaseNativeEventType_MAX            = 2
};


// Enum  EmbarkAI.EAIAgentOrder
enum class EAIAgentOrder : uint8_t
{
    None                                           = 0,
    NonBehavior                                    = 1,
    BehaviorCustom                                 = 2,
    BehaviorCharge                                 = 3,
    BehaviorFlee                                   = 4,
    EAIAgentOrder_MAX                              = 5
};


// Enum  EmbarkAI.EAICombatStateDataSelection
enum class EAICombatStateDataSelection : uint8_t
{
    Custom                                         = 0,
    CapabilityGroup                                = 1,
    SelectedUtility                                = 2,
    ActiveOrder                                    = 3,
    TransitionInstigator                           = 4,
    EAICombatStateDataSelection_MAX                = 5
};


// Enum  EmbarkAI.EAICombatStateCapabilityGroupSelection
enum class EAICombatStateCapabilityGroupSelection : uint8_t
{
    None                                           = 0,
    AssociatedCapabilityGroup                      = 1,
    HighestUtility                                 = 2,
    EAICombatStateCapabilityGroupSelection_MAX     = 3
};


// Enum  EmbarkAI.EAICombatStateTargetSelection
enum class EAICombatStateTargetSelection : uint8_t
{
    DefaultHostileTarget                           = 0,
    DefaultFriendlyTarget                          = 1,
    EAICombatStateTargetSelection_MAX              = 2
};


// Enum  EmbarkAI.EAINavigationCapability
enum class EAINavigationCapability : uint8_t
{
    Ground                                         = 0,
    Flying                                         = 1,
    GroundAndFlying                                = 2,
    Default                                        = 3,
    EAINavigationCapability_MAX                    = 4
};


// Enum  EmbarkAI.EAIMovementSpeed
enum class EAIMovementSpeed : uint8_t
{
    NotSpecified                                   = 0,
    VerySlow                                       = 1,
    Slow                                           = 2,
    Normal                                         = 3,
    Fast                                           = 4,
    VeryFast                                       = 5,
    EAIMovementSpeed_MAX                           = 6
};


// Enum  EmbarkAI.EAICombatPositionQueryState
enum class EAICombatPositionQueryState : uint8_t
{
    Idle                                           = 0,
    Searching                                      = 1,
    SearchFailed                                   = 2,
    SearchSuccess                                  = 3,
    EAICombatPositionQueryState_MAX                = 4
};


// Enum  EmbarkAI.EAISoundMaskingEngine
enum class EAISoundMaskingEngine : uint8_t
{
    None                                           = 0,
    VeryQuiet                                      = 1,
    Quiet                                          = 2,
    Medium                                         = 3,
    Loud                                           = 4,
    EAISoundMaskingEngine_MAX                      = 5
};


// Enum  EmbarkAI.EAISoundInterestRange
enum class EAISoundInterestRange : uint8_t
{
    Short                                          = 0,
    Medium                                         = 1,
    Long                                           = 2,
    Massive                                        = 3,
    EAISoundInterestRange_MAX                      = 4
};


// Enum  EmbarkAI.EEmbarkEnvQueryFlyingProjection
enum class EEmbarkEnvQueryFlyingProjection : uint8_t
{
    Geometry                                       = 0,
    Voxel                                          = 1,
    EEmbarkEnvQueryFlyingProjection_MAX            = 2
};


// Enum  EmbarkAI.EEmbarkEnvTestPathfinding
enum class EEmbarkEnvTestPathfinding : uint8_t
{
    PathExist                                      = 0,
    PathLength                                     = 1,
    EEmbarkEnvTestPathfinding_MAX                  = 2
};


// Enum  EmbarkAudio.EMapRangeCurve
enum class EMapRangeCurve : uint8_t
{
    Linear                                         = 0,
    Sine                                           = 1,
    Squared                                        = 2,
    SCurve                                         = 3,
    EMapRangeCurve_MAX                             = 4
};


// Enum  EmbarkAudio.EWeaponSynthFiringMode
enum class EWeaponSynthFiringMode : uint8_t
{
    Automatic                                      = 0,
    SingleShot                                     = 1,
    EWeaponSynthFiringMode_MAX                     = 2
};


// Enum  EmbarkAudio.EWeaponSynthSoundLayerType
enum class EWeaponSynthSoundLayerType : uint8_t
{
    Bullet                                         = 0,
    PreFiring                                      = 1,
    PostFiring                                     = 2,
    Disabled                                       = 3,
    EWeaponSynthSoundLayerType_MAX                 = 4
};


// Enum  EmbarkSoundCueNodes.EEmbarkModulatorParameterOperation
enum class EEmbarkModulatorParameterOperation : uint8_t
{
    Multiply                                       = 0,
    Add                                            = 1,
    Min                                            = 2,
    Max                                            = 3
};


// Enum  EmbarkSoundCueNodes.EEmbarkModulatorParameterMode
enum class EEmbarkModulatorParameterMode : uint8_t
{
    Name                                           = 0,
    GameplayTag                                    = 1,
    Distance                                       = 2,
    Velocity                                       = 3,
    Azimuth                                        = 4,
    IsOccluded                                     = 5,
    RotationTowardsListener                        = 6,
    EEmbarkModulatorParameterMode_MAX              = 7
};


// Enum  EmbarkSynthesis.EEmbarkAudioNoiseType
enum class EEmbarkAudioNoiseType : uint8_t
{
    White                                          = 0,
    Pink                                           = 1,
    Pulse                                          = 2,
    EEmbarkAudioNoiseType_MAX                      = 3
};


// Enum  EmbarkDistanceQueryManager.EEmbarkDistanceQueryCallbackFlags
enum class EEmbarkDistanceQueryCallbackFlags : uint8_t
{
    None                                           = 0,
    Source                                         = 1,
    Target                                         = 2,
    SourceAndTarget                                = 3,
    EEmbarkDistanceQueryCallbackFlags_MAX          = 4
};


// Enum  EmbarkFXDirector.EEmbarkFXSignificance
enum class EEmbarkFXSignificance : uint8_t
{
    None                                           = 0,
    Low                                            = 1,
    Medium                                         = 2,
    High                                           = 3,
    Critical                                       = 4,
    EEmbarkFXSignificance_MAX                      = 5
};


// Enum  EmbarkFXDirector.EEmbarkFXAutoPosition
enum class EEmbarkFXAutoPosition : uint8_t
{
    None                                           = 0,
    Snap                                           = 1,
    Interpolate                                    = 2,
    EEmbarkFXAutoPosition_MAX                      = 3
};


// Enum  EmbarkFXDirector.EEmbarkFXAutoPositionFunc
enum class EEmbarkFXAutoPositionFunc : uint8_t
{
    Point                                          = 0,
    Average                                        = 1,
    Nearest                                        = 2,
    NearestOnLine                                  = 3,
    NearestOnLineTowardsListenerOrDiscard          = 4,
    EEmbarkFXAutoPositionFunc_MAX                  = 5
};


// Enum  EmbarkFXDirector.EEmbarkFXForegroundFlags
enum class EEmbarkFXForegroundFlags : uint8_t
{
    None                                           = 0,
    FieldOfView                                    = 1,
    Stencil                                        = 2,
    EEmbarkFXForegroundFlags_MAX                   = 3
};


// Enum  EmbarkFXDirector.EEmbarkFXBinding
enum class EEmbarkFXBinding : uint8_t
{
    None                                           = 0,
    Particle                                       = 1,
    Audio                                          = 2,
    All                                            = 3,
    EEmbarkFXBinding_MAX                           = 4
};


// Enum  EmbarkFXDirector.EEmbarkFXFlags
enum class EEmbarkFXFlags : uint8_t
{
    None                                           = 0,
    Update                                         = 1,
    Retry                                          = 2,
    Discarded                                      = 4,
    Debug                                          = 8,
    Watch                                          = 16,
    AutoPosition                                   = 32,
    AutoSpatialHash                                = 64,
    EEmbarkFXFlags_MAX                             = 65
};


// Enum  Engine.ECameraShakePlaySpace
enum class ECameraShakePlaySpace : uint8_t
{
    CameraLocal                                    = 0,
    World                                          = 1,
    UserDefined                                    = 2,
    ECameraShakePlaySpace_MAX                      = 3
};


// Enum  Engine.EViewTargetBlendFunction
enum class EViewTargetBlendFunction : uint8_t
{
    VTBlend_Linear                                 = 0,
    VTBlend_Cubic                                  = 1,
    VTBlend_EaseIn                                 = 2,
    VTBlend_EaseOut                                = 3,
    VTBlend_EaseInOut                              = 4,
    VTBlend_PreBlended                             = 5,
    VTBlend_MAX                                    = 6
};


// Enum  Engine.ETravelType
enum class ETravelType : uint8_t
{
    TRAVEL_Absolute                                = 0,
    TRAVEL_Partial                                 = 1,
    TRAVEL_Relative                                = 2,
    TRAVEL_MAX                                     = 3
};


// Enum  Engine.ECollisionChannel
enum class ECollisionChannel : uint8_t
{
    ECC_WorldStatic                                = 0,
    ECC_WorldDynamic                               = 1,
    ECC_Pawn                                       = 2,
    ECC_Visibility                                 = 3,
    ECC_Camera                                     = 4,
    ECC_PhysicsBody                                = 5,
    ECC_Vehicle                                    = 6,
    ECC_Destructible                               = 7,
    ECC_EngineTraceChannel1                        = 8,
    ECC_EngineTraceChannel2                        = 9,
    ECC_EngineTraceChannel3                        = 10,
    ECC_EngineTraceChannel4                        = 11,
    ECC_EngineTraceChannel5                        = 12,
    ECC_EngineTraceChannel6                        = 13,
    ECC_GameTraceChannel1                          = 14,
    ECC_GameTraceChannel2                          = 15,
    ECC_GameTraceChannel3                          = 16,
    ECC_GameTraceChannel4                          = 17,
    ECC_GameTraceChannel5                          = 18,
    ECC_GameTraceChannel6                          = 19,
    ECC_GameTraceChannel7                          = 20,
    ECC_GameTraceChannel8                          = 21,
    ECC_GameTraceChannel9                          = 22,
    ECC_GameTraceChannel10                         = 23,
    ECC_GameTraceChannel11                         = 24,
    ECC_GameTraceChannel12                         = 25,
    ECC_GameTraceChannel13                         = 26,
    ECC_GameTraceChannel14                         = 27,
    ECC_GameTraceChannel15                         = 28,
    ECC_GameTraceChannel16                         = 29,
    ECC_GameTraceChannel17                         = 30,
    ECC_GameTraceChannel18                         = 31,
    ECC_OverlapAll_Deprecated                      = 32,
    ECC_MAX                                        = 33
};


// Enum  Engine.EControllerAnalogStick
enum class EControllerAnalogStick : uint8_t
{
    CAS_LeftStick                                  = 0,
    CAS_RightStick                                 = 1,
    CAS_MAX                                        = 2
};


// Enum  Engine.EDynamicForceFeedbackAction
enum class EDynamicForceFeedbackAction : uint8_t
{
    Start                                          = 0,
    Update                                         = 1,
    Stop                                           = 2,
    EDynamicForceFeedbackAction_MAX                = 3
};


// Enum  InputCore.EControllerHand
enum class EControllerHand : uint8_t
{
    Left                                           = 0,
    Right                                          = 1,
    AnyHand                                        = 2,
    Pad                                            = 3,
    ExternalCamera                                 = 4,
    Gun                                            = 5,
    HMD                                            = 6,
    Special                                        = 7,
    Special                                        = 8,
    Special                                        = 9,
    Special                                        = 10,
    Special                                        = 11,
    Special                                        = 12,
    Special                                        = 13,
    Special                                        = 14,
    Special                                        = 15,
    Special                                        = 16,
    Special                                        = 17,
    ControllerHand_Count                           = 18,
    EControllerHand_MAX                            = 19
};


// Enum  EmbarkInput.EEmbarkInputDevice
enum class EEmbarkInputDevice : uint8_t
{
    Unknown                                        = 0,
    MouseAndKeyboard                               = 1,
    Gamepad                                        = 2,
    EEmbarkInputDevice_MAX                         = 3
};


// Enum  EmbarkGameplay.ECookStatus
enum class ECookStatus : uint8_t
{
    Unknown                                        = 0,
    NeverCook                                      = 1,
    Cook                                           = 2,
    ECookStatus_MAX                                = 3
};


// Enum  EmbarkGameplay.ESquadParticipationType
enum class ESquadParticipationType : uint8_t
{
    Playing                                        = 0,
    Spectating                                     = 1,
    ESquadParticipationType_MAX                    = 2
};


// Enum  EmbarkScatter.ESnapAlignmentMethod
enum class ESnapAlignmentMethod : uint8_t
{
    None                                           = 0,
    Origin                                         = 1,
    Bounds                                         = 2,
    ESnapAlignmentMethod_MAX                       = 3
};


// Enum  EmbarkScatter.EScatterMethod
enum class EScatterMethod : uint8_t
{
    Circle                                         = 0,
    Square                                         = 1,
    Volume                                         = 2,
    OnActor                                        = 3,
    NearActor                                      = 4,
    OnAndNearActor                                 = 5,
    EScatterMethod_MAX                             = 6
};


// Enum  EmbarkScatter.EScatterOnSurfaceTypeMethod
enum class EScatterOnSurfaceTypeMethod : uint8_t
{
    LimitedTo                                      = 0,
    AllExcept                                      = 1,
    EScatterOnSurfaceTypeMethod_MAX                = 2
};


// Enum  EmbarkScatter.EOcclusionMethod
enum class EOcclusionMethod : uint8_t
{
    Simple                                         = 0,
    Hemispherical                                  = 1,
    EOcclusionMethod_MAX                           = 2
};


// Enum  EmbarkScatter.ECurveSampleMethod
enum class ECurveSampleMethod : uint8_t
{
    RelativeHeightDifference                       = 0,
    FixedHeightFromLowest                          = 1,
    SlopeAngle                                     = 2,
    DistanceFromCenter                             = 3,
    ECurveSampleMethod_MAX                         = 4
};


// Enum  EmbarkStreaming.EEmbarkStreamingFilter
enum class EEmbarkStreamingFilter : uint8_t
{
    None                                           = 0,
    Server                                         = 1,
    Editor                                         = 2,
    Commandlet                                     = 4,
    EEmbarkStreamingFilter_MAX                     = 5
};


// Enum  EmbarkStreaming.EEmbarkStreamingFlushMode
enum class EEmbarkStreamingFlushMode : uint8_t
{
    KickRequests                                   = 0,
    RunCallbacks                                   = 1,
    EEmbarkStreamingFlushMode_MAX                  = 2
};


// Enum  EmbarkTrace.EQueryResult
enum class EQueryResult : uint8_t
{
    GQB_Failed                                     = 0,
    GQB_Miss                                       = 1,
    GQB_Success                                    = 2,
    GQB_MAX                                        = 3
};


// Enum  EmbarkConstructable.EConstructableHealthChangeReason
enum class EConstructableHealthChangeReason : uint8_t
{
    WasHealed                                      = 0,
    WasDamaged                                     = 1,
    BrokeFromAttack                                = 2,
    BrokeDueToParentGettingDestroyed               = 3,
    BrokeDueToInstantDestruction                   = 4,
    TookNoDamage                                   = 5,
    SelfRemoval                                    = 6,
    NUMBER_OF_ENTRIES                              = 7,
    EConstructableHealthChangeReason_MAX           = 8
};


// Enum  EmbarkConstructable.EConstructableFeatureQualityLevel
enum class EConstructableFeatureQualityLevel : uint8_t
{
    Low                                            = 0,
    Medium                                         = 1,
    High                                           = 2,
    Full                                           = 3,
    NUMBER_OF_ENTRIES                              = 4,
    EConstructableFeatureQualityLevel_MAX          = 5
};


// Enum  EmbarkConstructable.EConstructablePartTargetType
enum class EConstructablePartTargetType : uint8_t
{
    NoTarget                                       = 0,
    TargetOrientation_World                        = 1,
    TargetLocation_World                           = 2,
    TargetActor                                    = 3,
    TargetComponent                                = 4,
    TargetConstructablePart                        = 5,
    TargetChase                                    = 6,
    TargetRelativeRotation                         = 7,
    TerminalValue                                  = 8,
    NUMBER_OF_ENTRIES                              = 9,
    EConstructablePartTargetType_MAX               = 10
};


// Enum  EmbarkConstructable.EConstructableCapabilityEventType
enum class EConstructableCapabilityEventType : uint8_t
{
    Start                                          = 0,
    Stop                                           = 1,
    NUMBER_OF_ENTRIES                              = 2,
    EConstructableCapabilityEventType_MAX          = 3
};


// Enum  EmbarkConstructable.EConstructablePartTransformSelectionType
enum class EConstructablePartTransformSelectionType : uint8_t
{
    PartPivot                                      = 0,
    Socket                                         = 1,
    Proxy                                          = 2,
    EConstructablePartTransformSelectionType_MAX   = 3
};


// Enum  EmbarkConstructable.EConstructableReplicationType
enum class EConstructableReplicationType : uint8_t
{
    Disabled                                       = 0,
    Constraint                                     = 1,
    Child                                          = 2,
    Full                                           = 3,
    EConstructableReplicationType_MAX              = 4
};


// Enum  EmbarkConstructable.EConstructablePartRelativeTransformSpace
enum class EConstructablePartRelativeTransformSpace : uint8_t
{
    PartPivot                                      = 0,
    Actor                                          = 1,
    ParentSocket                                   = 2,
    EConstructablePartRelativeTransformSpace_MAX   = 3
};


// Enum  EmbarkConstructable.EOrientationFilterType
enum class EOrientationFilterType : uint8_t
{
    None                                           = 0,
    Lerp                                           = 1,
    MinJerk                                        = 2,
    EOrientationFilterType_MAX                     = 3
};


// Enum  EmbarkConstructable.EConstructablePartPivotType
enum class EConstructablePartPivotType : uint8_t
{
    Socket                                         = 0,
    FirstOfSocketGroup                             = 1,
    NormalizedSocketGroup                          = 2,
    EConstructablePartPivotType_MAX                = 3
};


// Enum  EmbarkConstructable.EConstructableTrainingShape
enum class EConstructableTrainingShape : uint8_t
{
    Sphere                                         = 0,
    Box                                            = 1,
    Capsule                                        = 2,
    EConstructableTrainingShape_MAX                = 3
};


// Enum  EmbarkEngine.ECurveTRTrack
enum class ECurveTRTrack : uint8_t
{
    TX                                             = 0,
    TY                                             = 1,
    TZ                                             = 2,
    RX                                             = 3,
    RY                                             = 4,
    RZ                                             = 5,
    ECurveTRTrack_MAX                              = 6
};


// Enum  EmbarkEngine.EPSOPrecompilationBatchMode
enum class EPSOPrecompilationBatchMode : uint8_t
{
    Background                                     = 0,
    Fast                                           = 1,
    Precompile                                     = 2,
    EPSOPrecompilationBatchMode_MAX                = 3
};


// Enum  EmbarkEngine.EEmbarkVertexSpace
enum class EEmbarkVertexSpace : uint8_t
{
    Local                                          = 0,
    World                                          = 1,
    EEmbarkVertexSpace_MAX                         = 2
};


// Enum  EmbarkUI.EEmbarkButtonState
enum class EEmbarkButtonState : uint8_t
{
    Normal                                         = 0,
    Highlight                                      = 1,
    Pressed                                        = 2,
    EEmbarkButtonState_MAX                         = 3
};


// Enum  EmbarkUI.EEmbarkWidgetInputMode
enum class EEmbarkWidgetInputMode : uint8_t
{
    Default                                        = 0,
    GameAndMenu                                    = 1,
    Game                                           = 2,
    Menu                                           = 3,
    EEmbarkWidgetInputMode_MAX                     = 4
};


// Enum  EmbarkUI.EUIConceptArtLoadingScreenSelectionStrategy
enum class EUIConceptArtLoadingScreenSelectionStrategy : uint8_t
{
    Random                                         = 0,
    Single                                         = 1,
    EUIConceptArtLoadingScreenSelectionStrategy_MAX = 2
};


// Enum  EmbarkUI.EMaterialBoxScaling
enum class EMaterialBoxScaling : uint8_t
{
    ReLayout                                       = 0,
    UniformResize                                  = 1,
    Oversize                                       = 2,
    EMaterialBoxScaling_MAX                        = 3
};


// Enum  EmbarkUI.EUIColorState
enum class EUIColorState : uint8_t
{
    Neutral                                        = 0,
    Positive                                       = 1,
    Negative                                       = 2,
    Highlight                                      = 3,
    SquadMember1                                   = 4,
    SquadMember2                                   = 5,
    SquadMember3                                   = 6,
    RarityNone                                     = 7,
    RarityCommon                                   = 8,
    RarityRare                                     = 9,
    RarityEpic                                     = 10,
    RarityLegendary                                = 11,
    Friend                                         = 12,
    Enemy                                          = 13,
    Self                                           = 14,
    SecondaryLight                                 = 15,
    SecondaryMid                                   = 16,
    SecondaryDark                                  = 17,
    SecondaryPale                                  = 18,
    Debug                                          = 19,
    PlayerSquad                                    = 20,
    OtherSquad                                     = 21,
    ConstructableCore                              = 22,
    Primary                                        = 23,
    Secondary                                      = 24,
    ObjectiveMarker                                = 25,
    Complementary                                  = 26,
    Headshot                                       = 27,
    Seasonal                                       = 28,
    SeasonalDark                                   = 29,
    EUIColorState_MAX                              = 30
};


// Enum  EmbarkUI.EUIOpacityState
enum class EUIOpacityState : uint8_t
{
    Default                                        = 0,
    Locked                                         = 1,
    Backplate                                      = 2,
    BackplateEmphasis                              = 3,
    Opacity1                                       = 4,
    Opacity2                                       = 5,
    Opacity3                                       = 6,
    Opacity4                                       = 7,
    Transparent                                    = 8,
    EUIOpacityState_MAX                            = 9
};


// Enum  EmbarkUI.EEmbarkUITextType
enum class EEmbarkUITextType : uint8_t
{
    H1                                             = 0,
    H2                                             = 1,
    H3                                             = 2,
    H4                                             = 3,
    H5                                             = 4,
    H6                                             = 5,
    Paragraph                                      = 6,
    Subheader1                                     = 7,
    Subheader2                                     = 8,
    Body                                           = 9,
    BodyEmphasis                                   = 10,
    Caption                                        = 11,
    Overline                                       = 12,
    Button                                         = 13,
    ButtonEmphasis                                 = 14,
    InputKey                                       = 15,
    Details                                        = 16,
    SubtitleSmall                                  = 17,
    SubtitleMedium                                 = 18,
    SubtitleLarge                                  = 19,
    HUD1                                           = 20,
    HUD2                                           = 21,
    HUD3                                           = 22,
    HUD4                                           = 23,
    HUD5                                           = 24,
    HUD6                                           = 25,
    BodyTooltip                                    = 26,
    TagTooltip                                     = 27,
    ExtraLarge                                     = 28,
    MonoH1                                         = 29,
    PlayerName                                     = 30,
    EEmbarkUITextType_MAX                          = 31
};


// Enum  EmbarkUI.EUIDataContext
enum class EUIDataContext : uint8_t
{
    Static                                         = 0,
    Frontend                                       = 1,
    Lobby                                          = 2,
    Ingame                                         = 3,
    EUIDataContext_MAX                             = 4
};


// Enum  EmbarkUI.EUIAnimationParticipantState
enum class EUIAnimationParticipantState : uint8_t
{
    Idle                                           = 0,
    Before                                         = 1,
    During                                         = 2,
    After                                          = 3,
    GlobalDone                                     = 4,
    EUIAnimationParticipantState_MAX               = 5
};


// Enum  EmbarkAnimationRuntime.EPSMExpressionType
enum class EPSMExpressionType : uint8_t
{
    ET_INVALID                                     = 0,
    ET_IntMatch                                    = 1,
    ET_IntRange                                    = 2,
    ET_FloatRange                                  = 3,
    ET_GameplayTagMatch                            = 4,
    ET_BoolMatch                                   = 5,
    ET_EnumMatch                                   = 6,
    ET_MAX                                         = 7
};


// Enum  EmbarkAnimationRuntime.EPlantedStatus
enum class EPlantedStatus : uint8_t
{
    Planted                                        = 0,
    Unplanted                                      = 1,
    Replanting                                     = 2,
    PlantedThisFrame                               = 3,
    UnplantedThisFrame                             = 4,
    StartedReplantingThisFrame                     = 5,
    WentFromReplantingToUnplanted                  = 6,
    EPlantedStatus_MAX                             = 7
};


// Enum  EmbarkAnimationRuntime.EUnplantStatus
enum class EUnplantStatus : uint8_t
{
    PlantingAllowed                                = 0,
    AnimWantsToUnplant                             = 1,
    SystemWantsToUnplant                           = 2,
    EUnplantStatus_MAX                             = 3
};


// Enum  EmbarkStateInterpolator.EStateInterpolatorDebugMode
enum class EStateInterpolatorDebugMode : uint8_t
{
    None                                           = 0,
    Simple                                         = 1,
    Detailed                                       = 2,
    Verbose                                        = 3,
    NUM                                            = 4,
    LAST                                           = 3,
    EStateInterpolatorDebugMode_MAX                = 5
};


// Enum  EmbarkUtils.EEmbarkHardwareBreakpointTypes
enum class EEmbarkHardwareBreakpointTypes : uint8_t
{
    InstructionExecutionOnly                       = 0,
    WritesOnly                                     = 1,
    ReadAndWrites                                  = 2,
    EEmbarkHardwareBreakpointTypes_MAX             = 3
};


// Enum  EmbarkUtils.EEmbarkHardwareBreakpointConditions
enum class EEmbarkHardwareBreakpointConditions : uint8_t
{
    None                                           = 0,
    Equal                                          = 1,
    NotEqual                                       = 2,
    GreaterThan                                    = 3,
    GreaterThanEqual                               = 4,
    LessThan                                       = 5,
    LessThanEqual                                  = 6,
    EEmbarkHardwareBreakpointConditions_MAX        = 7
};


// Enum  EmbarkUtils.EEmbarkBallisticPredictionResult
enum class EEmbarkBallisticPredictionResult : uint8_t
{
    TooFar                                         = 0,
    PathBlocked                                    = 1,
    DirectHit                                      = 2,
    EEmbarkBallisticPredictionResult_MAX           = 3
};


// Enum  EmbarkUtils.EEmbarkPropertyTypes
enum class EEmbarkPropertyTypes : uint8_t
{
    INVALID                                        = 0,
    Int8Property                                   = 1,
    Int16Property                                  = 2,
    Int32Property                                  = 3,
    Int64Property                                  = 4,
    UnsignedInt16Property                          = 5,
    UnsignedInt32Property                          = 6,
    UnsignedInt64Property                          = 7,
    ByteProperty                                   = 8,
    EnumProperty                                   = 9,
    Float32Property                                = 10,
    Float64Property                                = 11,
    BoolProperty                                   = 12,
    ObjectProperty                                 = 13,
    ClassProperty                                  = 14,
    InterfaceProperty                              = 15,
    StringProperty                                 = 16,
    NameProperty                                   = 17,
    SoftObjectProperty                             = 18,
    FieldPathProperty                              = 19,
    SoftClassProperty                              = 20,
    TextProperty                                   = 21,
    VectorProperty                                 = 22,
    RotatorProperty                                = 23,
    LinearColorProperty                            = 24,
    ColorProperty                                  = 25,
    TransformProperty                              = 26,
    GameplayTagProperty                            = 27,
    ArrayProperty                                  = 28,
    MapProperty                                    = 29,
    UnhandledStructProperty                        = 30,
    EEmbarkPropertyTypes_MAX                       = 31
};


// Enum  EmbarkReplicationGraph.EClassReplicationPolicy
enum class EClassReplicationPolicy : uint8_t
{
    None                                           = 0,
    AlwaysRelevant                                 = 1,
    AlwaysRelevantPerConnection                    = 2,
    SpatializeStatic                               = 3,
    SpatializeDynamic                              = 4,
    EClassReplicationPolicy_MAX                    = 5
};


// Enum  EmbarkUserSettings.EResolutionScalingMethod
enum class EResolutionScalingMethod : uint8_t
{
    TAAU                                           = 0,
    TSR                                            = 1,
    DLSS                                           = 2,
    FSR2                                           = 3,
    XeSS                                           = 4,
    Invalid                                        = 255,
    EResolutionScalingMethod_MAX                   = 256
};


// Enum  EmbarkUserSettings.EFSR2Mode
enum class EFSR2Mode : uint8_t
{
    Off                                            = 0,
    Quality                                        = 1,
    Balanced                                       = 2,
    Performance                                    = 3,
    UltraPerformance                               = 4,
    Count                                          = 5,
    EFSR2Mode_MAX                                  = 6
};


// Enum  EmbarkUserSettings.ERTXGIQuality
enum class ERTXGIQuality : uint8_t
{
    Static                                         = 0,
    DynamicLow                                     = 1,
    DynamicMedium                                  = 2,
    DynamicHigh                                    = 3,
    DynamicEpic                                    = 4,
    COUNT                                          = 5,
    Invalid                                        = 255,
    ERTXGIQuality_MAX                              = 256
};


// Enum  EmbarkAINavigation.EDonNavigationQueryStatus
enum class EDonNavigationQueryStatus : uint8_t
{
    Unscheduled                                    = 0,
    InProgress                                     = 1,
    Success                                        = 2,
    Failure                                        = 3,
    QueryHasNoSolution                             = 4,
    TimedOut                                       = 5,
    EDonNavigationQueryStatus_MAX                  = 6
};


// Enum  EmbarkAINavigation.EHpaGraphSize
enum class EHpaGraphSize : uint8_t
{
    Voxel                                          = 0,
    Voxel                                          = 1,
    Voxel_MAX                                      = 2
};


// Enum  EmbarkFracturedDestructible.EEdgeMeshSize
enum class EEdgeMeshSize : uint8_t
{
    INVALID                                        = 0,
    E50                                            = 1,
    E100                                           = 2,
    E200                                           = 3,
    E300                                           = 4,
    E400                                           = 5,
    SCATTER                                        = 6,
    EEdgeMeshSize_MAX                              = 7
};


// Enum  EmbarkFracturedDestructible.EFracturedDestructibleStrainMode
enum class EFracturedDestructibleStrainMode : uint8_t
{
    TryUseStrainBoneGroups                         = 0,
    OneStrainBonePerComponent                      = 1,
    OneStrainBonePerActor                          = 2,
    OneStrainBonePerBone                           = 3,
    MergeWithNeighbour                             = 4,
    DisableStrain                                  = 5,
    EFracturedDestructibleStrainMode_MAX           = 6
};


// Enum  EmbarkFracturedDestructible.EMergeWithNeighbourMode
enum class EMergeWithNeighbourMode : uint8_t
{
    PerBoneBestFit                                 = 0,
    PerComponentBestFit                            = 1,
    PerActorBestFit                                = 2,
    EMergeWithNeighbourMode_MAX                    = 3
};


// Enum  EmbarkFracturedDestructible.EFracturedStrainSolverType
enum class EFracturedStrainSolverType : uint8_t
{
    NoStrainSolver                                 = 0,
    DebugGlobalStrainSolver                        = 1,
    BlockGlobalStrainSolver                        = 2,
    SequentialStrainSolver                         = 3,
    ReducedDofBlockGlobalStrainSolver              = 4,
    EFracturedStrainSolverType_MAX                 = 5
};


// Enum  EmbarkFire.EEmbarkFireObjectType
enum class EEmbarkFireObjectType : uint8_t
{
    Disabled                                       = 0,
    Burnable                                       = 1,
    HeatModifier                                   = 2,
    EEmbarkFireObjectType_MAX                      = 3
};


// Enum  EmbarkFire.EEmbarkFireBurnableGroupType
enum class EEmbarkFireBurnableGroupType : uint8_t
{
    Player                                         = 0,
    GameplayObjects                                = 1,
    Environment                                    = 2,
    EEmbarkFireBurnableGroupType_MAX               = 3
};


// Enum  EmbarkFire.EEmbarkFireHeatModifierBehavior
enum class EEmbarkFireHeatModifierBehavior : uint8_t
{
    ConstantHeat                                   = 0,
    Extinguish                                     = 1,
    Ignite                                         = 2,
    MaxHeat                                        = 3,
    EEmbarkFireHeatModifierBehavior_MAX            = 4
};


// Enum  EmbarkFire.EEmbarkFireObjectStateModified
enum class EEmbarkFireObjectStateModified : uint8_t
{
    None                                           = 0,
    Changed                                        = 1,
    EEmbarkFireObjectStateModified_MAX             = 2
};


// Enum  EmbarkFire.EEmbarkFireObjectRepresentation
enum class EEmbarkFireObjectRepresentation : uint8_t
{
    None                                           = 0,
    SceneComponent                                 = 1,
    Sphere                                         = 2,
    EEmbarkFireObjectRepresentation_MAX            = 3
};


// Enum  Engine.ERootMotionAccumulateMode
enum class ERootMotionAccumulateMode : uint8_t
{
    Override                                       = 0,
    Additive                                       = 1,
    ERootMotionAccumulateMode_MAX                  = 2
};


// Enum  EmbarkMovement.EEmbarkLocalBaseType
enum class EEmbarkLocalBaseType : uint8_t
{
    None                                           = 0,
    StandingOnBase                                 = 1,
    AboveBase                                      = 2,
    MovingTowardsBase                              = 4,
    All                                            = 7,
    EEmbarkLocalBaseType_MAX                       = 8
};


// Enum  EmbarkMovement.EEmbarkCustomMovementMode
enum class EEmbarkCustomMovementMode : uint8_t
{
    CUSTOM_Default                                 = 0,
    CUSTOM_AnimSequenceRootWarp                    = 1,
    CUSTOM_Max                                     = 2
};


// Enum  EmbarkMovement.EGroundSuspensionMode
enum class EGroundSuspensionMode : uint8_t
{
    Deactivated                                    = 0,
    PushFromGround                                 = 1,
    PullToGround                                   = 2,
    PushAndPull                                    = 3,
    EGroundSuspensionMode_MAX                      = 4
};


// Enum  EmbarkMovement.ERootMotionDefaultCurveType
enum class ERootMotionDefaultCurveType : uint8_t
{
    UprightLinearIn                                = 0,
    UprightLinearOut                               = 1,
    UprightConstantOn                              = 2,
    LinearIn                                       = 3,
    LinearOut                                      = 4,
    ConstantOn                                     = 5,
    ERootMotionDefaultCurveType_MAX                = 6
};


// Enum  EmbarkMovement.ERootMotionParseRetVal
enum class ERootMotionParseRetVal : uint8_t
{
    INVALID                                        = 0,
    VALID                                          = 1,
    TIMEOUT                                        = 2,
    ERootMotionParseRetVal_MAX                     = 3
};


// Enum  EmbarkPropertyBag.EPropertyBagItemType
enum class EPropertyBagItemType : uint8_t
{
    Bool                                           = 0,
    Int                                            = 1,
    Float                                          = 2,
    Name                                           = 3,
    EPropertyBagItemType_MAX                       = 4
};


// Enum  EmbarkPreLoadScreen.EEmbarkPreLoadScreenType
enum class EEmbarkPreLoadScreenType : uint8_t
{
    Spinner                                        = 0,
    Flipbook                                       = 1,
    EEmbarkPreLoadScreenType_MAX                   = 2
};


// Enum  EmbarkPreLoadScreen.EEmbarkPreLoadScreenHorizontalAlignment
enum class EEmbarkPreLoadScreenHorizontalAlignment : uint8_t
{
    Left                                           = 0,
    Center                                         = 1,
    Right                                          = 2,
    EEmbarkPreLoadScreenHorizontalAlignment_MAX    = 3
};


// Enum  EmbarkPreLoadScreen.EEmbarkPreLoadScreenVerticalAlignment
enum class EEmbarkPreLoadScreenVerticalAlignment : uint8_t
{
    Top                                            = 0,
    Center                                         = 1,
    Bottom                                         = 2,
    EEmbarkPreLoadScreenVerticalAlignment_MAX      = 3
};


// Enum  OnlineSubsystem.EInAppPurchaseState
enum class EInAppPurchaseState : uint8_t
{
    Unknown                                        = 0,
    Success                                        = 1,
    Failed                                         = 2,
    Cancelled                                      = 3,
    Invalid                                        = 4,
    NotAllowed                                     = 5,
    Restored                                       = 6,
    AlreadyOwned                                   = 7,
    EInAppPurchaseState_MAX                        = 8
};


// Enum  OnlineSubsystem.EMPMatchOutcome
enum class EMPMatchOutcome : uint8_t
{
    None                                           = 0,
    Quit                                           = 1,
    Won                                            = 2,
    Lost                                           = 3,
    Tied                                           = 4,
    TimeExpired                                    = 5,
    First                                          = 6,
    Second                                         = 7,
    Third                                          = 8,
    Fourth                                         = 9,
    EMPMatchOutcome_MAX                            = 10
};


// Enum  OnlineSubsystemAngelscript.EEmbarkGameMatchLeaveReason
enum class EEmbarkGameMatchLeaveReason : uint8_t
{
    Invalid                                        = 0,
    Disconnect                                     = 1,
    Finished                                       = 2,
    Quit                                           = 3,
    EEmbarkGameMatchLeaveReason_MAX                = 4
};


// Enum  OnlineSubsystemAngelscript.EServiceFriendshipType
enum class EServiceFriendshipType : uint8_t
{
    Unknown                                        = 0,
    Mutual                                         = 1,
    NonMutualOutgoing                              = 2,
    NonMutualIncoming                              = 3,
    Blocked                                        = 4,
    Suggested                                      = 5,
    EServiceFriendshipType_MAX                     = 6
};


// Enum  OnlineSubsystemAngelscript.EServiceFriendUpdateType
enum class EServiceFriendUpdateType : uint8_t
{
    Unknown                                        = 0,
    Added                                          = 1,
    Removed                                        = 2,
    OnlineState                                    = 3,
    EServiceFriendUpdateType_MAX                   = 4
};


// Enum  OnlineSubsystemAngelscript.EServicePlayerOnlineState
enum class EServicePlayerOnlineState : uint8_t
{
    Unknown                                        = 0,
    Online                                         = 1,
    Offline                                        = 2,
    EServicePlayerOnlineState_MAX                  = 3
};


// Enum  OnlineSubsystemAngelscript.EInventorySyncInventoryReason
enum class EInventorySyncInventoryReason : uint8_t
{
    InitialSync                                    = 0,
    ExplicitSync                                   = 1,
    MutationSync                                   = 2,
    EInventorySyncInventoryReason_MAX              = 3
};


// Enum  OnlineSubsystemAngelscript.EMatchmakingPlatform
enum class EMatchmakingPlatform : uint8_t
{
    All                                            = 0,
    XBox                                           = 1,
    PlayStation                                    = 2,
    Pc                                             = 3,
    EMatchmakingPlatform_MAX                       = 4
};


// Enum  OnlineSubsystemAngelscript.EMatchmakingStoppedReason
enum class EMatchmakingStoppedReason : uint8_t
{
    Unknown                                        = 0,
    BadRequest                                     = 1,
    Forbidden                                      = 2,
    NotFound                                       = 3,
    ServerError                                    = 4,
    InvalidTenancyUser                             = 5,
    InvalidManifestId                              = 6,
    InvalidScenarioId                              = 7,
    TicketNotFound                                 = 8,
    InvalidTicketOwner                             = 9,
    PartyNotFound                                  = 10,
    PartyIsTooLarge                                = 11,
    PartyTenancyUsersNotFound                      = 12,
    MatchmakingUnhandledError                      = 13,
    MatchmakingUnsupportedPlatform                 = 14,
    MatchmakingUnavailable                         = 15,
    MatchmakingRestricted                          = 16,
    MatchmakingOverloaded                          = 17,
    EMatchmakingStoppedReason_MAX                  = 18
};


// Enum  OnlineSubsystemAngelscript.ESquadMemberConnectionState
enum class ESquadMemberConnectionState : uint8_t
{
    UNKNOWN                                        = 0,
    CONNECTED                                      = 1,
    DISCONNECTED                                   = 2,
    ABANDONED                                      = 3,
    DEPARTED                                       = 4,
    ESquadMemberConnectionState_MAX                = 5
};


// Enum  OnlineSubsystemAngelscript.EStoreRedeemOutstandingThirdPartyPurchasesResult
enum class EStoreRedeemOutstandingThirdPartyPurchasesResult : uint8_t
{
    Success                                        = 0,
    Failed                                         = 1,
    EStoreRedeemOutstandingThirdPartyPurchasesResult_MAX = 2
};


// Enum  OnlineSubsystemAngelscript.EStoreThirdPartyStoreId
enum class EStoreThirdPartyStoreId : uint8_t
{
    Epic                                           = 0,
    Microsoft                                      = 1,
    PlayStation                                    = 2,
    Steam                                          = 3,
    Unspecified                                    = 4,
    EStoreThirdPartyStoreId_MAX                    = 5
};


// Enum  OnlineSubsystemAngelscript.EStoreReconciledProductOrigin
enum class EStoreReconciledProductOrigin : uint8_t
{
    Purchase                                       = 0,
    Twitch                                         = 1,
    Giveaway                                       = 2,
    EStoreReconciledProductOrigin_MAX              = 3
};


// Enum  OnlineSubsystemAngelscript.EVoiceChatMode
enum class EVoiceChatMode : uint8_t
{
    OpenMic                                        = 0,
    PushToTalk                                     = 1,
    EVoiceChatMode_MAX                             = 2
};


// Enum  OnlineSubsystemAngelscript.EVoiceChannelType
enum class EVoiceChannelType : uint8_t
{
    NonPositional                                  = 0,
    Positional                                     = 1,
    Echo                                           = 2,
    EVoiceChannelType_MAX                          = 3
};


// Enum  OnlineSubsystemAngelscript.EVoiceChatGameState
enum class EVoiceChatGameState : uint8_t
{
    FrontEnd                                       = 0,
    Game                                           = 1,
    EVoiceChatGameState_MAX                        = 2
};


// Enum  OnlineSubsystemAngelscript.EVoiceRoomState
enum class EVoiceRoomState : uint8_t
{
    None                                           = 0,
    Joining                                        = 1,
    Idle                                           = 2,
    Active                                         = 3,
    Leaving                                        = 4,
    EVoiceRoomState_MAX                            = 5
};


// Enum  OnlineSubsystemAngelscript.EReportPlayerReason
enum class EReportPlayerReason : uint8_t
{
    Cheating                                       = 0,
    Exploiting                                     = 1,
    OffensiveProfile                               = 2,
    VerbalAbuse                                    = 3,
    Scamming                                       = 4,
    Spamming                                       = 5,
    Other                                          = 6,
    EReportPlayerReason_MAX                        = 7
};


// Enum  OnlineFrameworkEmbark.EBootToGameCompleteResult
enum class EBootToGameCompleteResult : uint8_t
{
    Success                                        = 0,
    FindSessionFailure                             = 1,
    SessionJoinFailure                             = 2,
    PartyJoinFailure                               = 3,
    EBootToGameCompleteResult_MAX                  = 4
};


// Enum  EmbarkApiGateway.EApiGatewayDiscoveryAdminCurrencyType
enum class EApiGatewayDiscoveryAdminCurrencyType : uint8_t
{
    CURRENCY_TYPE_MULTIBUCKS                       = 0,
    CURRENCY_TYPE_ITEM_ACQUISITION                 = 1,
    CURRENCY_TYPE_BATTLE_PASS                      = 2,
    CURRENCY_TYPE_MAX                              = 3
};


// Enum  EmbarkApiGateway.EApiGatewayDiscoveryServerSanctionType
enum class EApiGatewayDiscoveryServerSanctionType : uint8_t
{
    UNSPECIFIED                                    = 0,
    TOURNAMENT_ABANDON                             = 1,
    EApiGatewayDiscoveryServerSanctionType_MAX     = 2
};


// Enum  EmbarkApiGateway.EApiGatewayDiscoveryServerGameStoreProvider
enum class EApiGatewayDiscoveryServerGameStoreProvider : uint8_t
{
    UNSPECIFIED                                    = 0,
    EMBARK                                         = 1,
    EPIC                                           = 2,
    STEAM                                          = 3,
    MICROSOFT                                      = 4,
    PLAYSTATION                                    = 5,
    EApiGatewayDiscoveryServerGameStoreProvider_MAX = 6
};


// Enum  EmbarkApiGateway.EApiGatewayDiscoveryServerGameStoreSteamAttributesPackageType
enum class EApiGatewayDiscoveryServerGameStoreSteamAttributesPackageType : uint8_t
{
    STEAM_PACKAGE_TYPE_UNSPECIFIED                 = 0,
    STEAM_PACKAGE_TYPE_INVENTORY                   = 1,
    STEAM_PACKAGE_TYPE_DLC                         = 2,
    STEAM_PACKAGE_TYPE_MAX                         = 3
};


// Enum  EmbarkApiGateway.EApiGatewayDiscoverySanctionType
enum class EApiGatewayDiscoverySanctionType : uint8_t
{
    UNSPECIFIED                                    = 0,
    TOURNAMENT_ABANDON                             = 1,
    EApiGatewayDiscoverySanctionType_MAX           = 2
};


// Enum  EmbarkApiGateway.EApiGatewayDiscoveryGameStoreProvider
enum class EApiGatewayDiscoveryGameStoreProvider : uint8_t
{
    UNSPECIFIED                                    = 0,
    EMBARK                                         = 1,
    EPIC                                           = 2,
    STEAM                                          = 3,
    MICROSOFT                                      = 4,
    PLAYSTATION                                    = 5,
    EApiGatewayDiscoveryGameStoreProvider_MAX      = 6
};


// Enum  EmbarkApiGateway.EApiGatewayDiscoveryGameStoreSteamAttributesPackageType
enum class EApiGatewayDiscoveryGameStoreSteamAttributesPackageType : uint8_t
{
    STEAM_PACKAGE_TYPE_UNSPECIFIED                 = 0,
    STEAM_PACKAGE_TYPE_INVENTORY                   = 1,
    STEAM_PACKAGE_TYPE_DLC                         = 2,
    STEAM_PACKAGE_TYPE_MAX                         = 3
};


// Enum  EmbarkApiGateway.EApiGatewayDiscoveryGameStoreGiftProvider
enum class EApiGatewayDiscoveryGameStoreGiftProvider : uint8_t
{
    TWITCH                                         = 0,
    GIVEAWAY                                       = 1,
    EApiGatewayDiscoveryGameStoreGiftProvider_MAX  = 2
};


// Enum  EmbarkApiGateway.EApiGatewayDiscoveryDistributionPlatform
enum class EApiGatewayDiscoveryDistributionPlatform : uint8_t
{
    UNSPECIFIED                                    = 0,
    EPIC                                           = 1,
    STEAM                                          = 2,
    XBOX                                           = 3,
    PLAYSTATION                                    = 4,
    EApiGatewayDiscoveryDistributionPlatform_MAX   = 5
};


// Enum  EmbarkApiGateway.EApiGatewayDiscoveryGetGameStoreAccessTokenRequestType
enum class EApiGatewayDiscoveryGetGameStoreAccessTokenRequestType : uint8_t
{
    COLLECTION                                     = 0,
    EApiGatewayDiscoveryGetGameStoreAccessTokenRequestType_MAX = 1
};


// Enum  EmbarkApiGateway.EApiGatewayDiscoveryRewardItemType
enum class EApiGatewayDiscoveryRewardItemType : uint8_t
{
    UNKNOWN                                        = 0,
    SCHEMATIC                                      = 1,
    EApiGatewayDiscoveryRewardItemType_MAX         = 2
};


// Enum  EmbarkApiGateway.EApiGatewayPioneerAdminQuestState
enum class EApiGatewayPioneerAdminQuestState : uint8_t
{
    QUEST_STATE_UNSPECIFIED                        = 0,
    QUEST_STATE_AWAITING                           = 1,
    QUEST_STATE_ACCEPTED                           = 2,
    QUEST_STATE_COMPLETED                          = 3,
    QUEST_STATE_MAX                                = 4
};


// Enum  EmbarkApiGateway.EApiGatewayPioneerAdminResetResource
enum class EApiGatewayPioneerAdminResetResource : uint8_t
{
    RESET_ALL                                      = 0,
    RESET_INVENTORY_ITEMS                          = 1,
    RESET_QUESTS                                   = 2,
    RESET_OFFERS                                   = 3,
    RESET_BUCKETS                                  = 4,
    RESET_MAX                                      = 5
};


// Enum  EmbarkApiGateway.EApiGatewayPioneerAdminCrateState
enum class EApiGatewayPioneerAdminCrateState : uint8_t
{
    CRATE_STATE_UNKNOWN                            = 0,
    CRATE_STATE_AVAILABLE                          = 1,
    CRATE_STATE_OPENED                             = 2,
    CRATE_STATE_CLAIMED                            = 3,
    CRATE_STATE_MAX                                = 4
};


// Enum  EmbarkApiGateway.EApiGatewayPioneerServerQuestDescriptionCadence
enum class EApiGatewayPioneerServerQuestDescriptionCadence : uint8_t
{
    UNKNOWN                                        = 0,
    DAILY                                          = 1,
    WEEKLY                                         = 2,
    NARRATIVE                                      = 3,
    RAID                                           = 4,
    EApiGatewayPioneerServerQuestDescriptionCadence_MAX = 5
};


// Enum  EmbarkApiGateway.EApiGatewayPioneerServerQuestDescriptionState
enum class EApiGatewayPioneerServerQuestDescriptionState : uint8_t
{
    UNKNOWN                                        = 0,
    ACCEPTED                                       = 1,
    COMPLETED                                      = 2,
    EApiGatewayPioneerServerQuestDescriptionState_MAX = 3
};


// Enum  EmbarkApiGateway.EApiGatewayPioneerGameStoreProvider
enum class EApiGatewayPioneerGameStoreProvider : uint8_t
{
    EMBARK                                         = 0,
    EPIC                                           = 1,
    STEAM                                          = 2,
    MICROSOFT                                      = 3,
    PLAYSTATION                                    = 4,
    EApiGatewayPioneerGameStoreProvider_MAX        = 5
};


// Enum  EmbarkApiGateway.EApiGatewayPioneerQuestCadence
enum class EApiGatewayPioneerQuestCadence : uint8_t
{
    UNKNOWN                                        = 0,
    DAILY                                          = 1,
    WEEKLY                                         = 2,
    NARRATIVE                                      = 3,
    RAID                                           = 4,
    EApiGatewayPioneerQuestCadence_MAX             = 5
};


// Enum  EmbarkApiGateway.EApiGatewayPioneerQuestState
enum class EApiGatewayPioneerQuestState : uint8_t
{
    UNKNOWN                                        = 0,
    AWAITING                                       = 1,
    ACCEPTED                                       = 2,
    COMPLETED                                      = 3,
    EApiGatewayPioneerQuestState_MAX               = 4
};


// Enum  EmbarkApiGateway.EApiGatewayPioneerQuestDescriptionState
enum class EApiGatewayPioneerQuestDescriptionState : uint8_t
{
    UNKNOWN                                        = 0,
    ACCEPTED                                       = 1,
    COMPLETED                                      = 2,
    EApiGatewayPioneerQuestDescriptionState_MAX    = 3
};


// Enum  EmbarkApiGateway.EApiGatewayPioneerRewardItemType
enum class EApiGatewayPioneerRewardItemType : uint8_t
{
    UNKNOWN                                        = 0,
    SCHEMATIC                                      = 1,
    CURRENCY                                       = 2,
    CHARACTER                                      = 3,
    CHARACTER_SKIN                                 = 4,
    CHARACTER_MILESTONE                            = 5,
    CHARACTER_TALENT                               = 6,
    EApiGatewayPioneerRewardItemType_MAX           = 7
};


// Enum  EmbarkApiGateway.EApiGatewayPioneerCrateState
enum class EApiGatewayPioneerCrateState : uint8_t
{
    UNKNOWN                                        = 0,
    AVAILABLE                                      = 1,
    OPENED                                         = 2,
    CLAIMED                                        = 3,
    EApiGatewayPioneerCrateState_MAX               = 4
};


// Enum  EmbarkApiGateway.EApiGatewaySharedGameStoreType
enum class EApiGatewaySharedGameStoreType : uint8_t
{
    UNSPECIFIED                                    = 0,
    EPIC                                           = 1,
    STEAM                                          = 2,
    EApiGatewaySharedGameStoreType_MAX             = 3
};


// Enum  EmbarkApiGateway.EApiGatewaySharedRewardItemType
enum class EApiGatewaySharedRewardItemType : uint8_t
{
    UNKNOWN                                        = 0,
    SCHEMATIC                                      = 1,
    CURRENCY                                       = 2,
    CHARACTER                                      = 3,
    CHARACTER_SKIN                                 = 4,
    CHARACTER_MILESTONE                            = 5,
    CHARACTER_TALENT                               = 6,
    EApiGatewaySharedRewardItemType_MAX            = 7
};


// Enum  EmbarkApiGateway.EApiGatewaySharedFriendshipInfoFriendshipType
enum class EApiGatewaySharedFriendshipInfoFriendshipType : uint8_t
{
    UNKNOWN                                        = 0,
    MUTUAL                                         = 1,
    NON_MUTUAL_OUTGOING                            = 2,
    NON_MUTUAL_INCOMING                            = 3,
    EApiGatewaySharedFriendshipInfoFriendshipType_MAX = 4
};


// Enum  EmbarkApiGateway.EApiGatewaySharedMatchmakingPlatform
enum class EApiGatewaySharedMatchmakingPlatform : uint8_t
{
    ALL                                            = 0,
    XBOX                                           = 1,
    PLAYSTATION                                    = 2,
    PC                                             = 3,
    CONSOLES                                       = 4,
    EApiGatewaySharedMatchmakingPlatform_MAX       = 5
};


// Enum  EmbarkApiGateway.EApiGatewaySharedMatchmakingMatchState
enum class EApiGatewaySharedMatchmakingMatchState : uint8_t
{
    UNSPECIFIED                                    = 0,
    MATCHING                                       = 1,
    COMPLETED                                      = 2,
    FAILED                                         = 3,
    EApiGatewaySharedMatchmakingMatchState_MAX     = 4
};


// Enum  EmbarkApiGateway.EApiGatewaySharedMatchRedirectTarget
enum class EApiGatewaySharedMatchRedirectTarget : uint8_t
{
    TOURNAMENTS                                    = 0,
    GAMESERVER                                     = 1,
    EApiGatewaySharedMatchRedirectTarget_MAX       = 2
};


// Enum  EmbarkApiGateway.EApiGatewaySharedMatchTimeEstimateState
enum class EApiGatewaySharedMatchTimeEstimateState : uint8_t
{
    NOT_AVAILABLE                                  = 0,
    VALID                                          = 1,
    FAULTY                                         = 2,
    NO_DATA                                        = 3,
    EApiGatewaySharedMatchTimeEstimateState_MAX    = 4
};


// Enum  EmbarkApiGateway.EApiGatewaySharedGameserverState
enum class EApiGatewaySharedGameserverState : uint8_t
{
    UNSPECIFIED                                    = 0,
    WAITING                                        = 1,
    AVAILABLE                                      = 2,
    EXPIRED                                        = 3,
    EApiGatewaySharedGameserverState_MAX           = 4
};


// Enum  EmbarkPubNub.EEmbarkPubNubMessageType
enum class EEmbarkPubNubMessageType : uint8_t
{
    Message                                        = 0,
    Signal                                         = 1,
    Objects                                        = 2,
    MessageActions                                 = 3,
    File                                           = 4,
    EEmbarkPubNubMessageType_MAX                   = 5
};


// Enum  AESGCMHandlerComponent.EAESGCMNetResult
enum class EAESGCMNetResult : uint8_t
{
    Unknown                                        = 0,
    Success                                        = 1,
    AESMissingIV                                   = 2,
    AESMissingAuthTag                              = 3,
    AESMissingPayload                              = 4,
    AESDecryptionFailed                            = 5,
    AESZeroLastByte                                = 6,
    EAESGCMNetResult_MAX                           = 7
};


// Enum  AntiCheatCore.EAntiCheatClientActionReason
enum class EAntiCheatClientActionReason : uint8_t
{
    Invalid                                        = 0,
    InternalError                                  = 1,
    InvalidMessage                                 = 2,
    AuthenticationFailed                           = 3,
    NullClient                                     = 4,
    HeartbeatTimeout                               = 5,
    ClientViolation                                = 6,
    BackendViolation                               = 7,
    TemporaryCooldown                              = 8,
    TemporaryBanned                                = 9,
    PermanentBanned                                = 10,
    Count                                          = 11,
    EAntiCheatClientActionReason_MAX               = 12
};


// Enum  AntiCheatCore.EAntiCheatClientAction
enum class EAntiCheatClientAction : uint8_t
{
    Invalid                                        = 0,
    RemovePlayer                                   = 1,
    EAntiCheatClientAction_MAX                     = 2
};


// Enum  AntiCheatCore.EAntiCheatVendor
enum class EAntiCheatVendor : uint8_t
{
    Invalid                                        = 0,
    Sidecar                                        = 1,
    Theia                                          = 2,
    EasyAntiCheat                                  = 3,
    Anybrain                                       = 4,
    BattlEye                                       = 5,
    Nexon                                          = 6,
    Debug                                          = 7,
    AntiCheatCore                                  = 8,
    Engine                                         = 9,
    EAntiCheatVendor_MAX                           = 10
};


// Enum  AntiCheatCore.EAntiCheatClientViolationType
enum class EAntiCheatClientViolationType : uint8_t
{
    Invalid                                        = 0,
    IntegrityCatalogNotFound                       = 1,
    IntegrityCatalogError                          = 2,
    IntegrityCatalogCertificateRevoked             = 3,
    IntegrityCatalogMissingMainExecutable          = 4,
    GameFileMismatch                               = 5,
    RequiredGameFileNotFound                       = 6,
    UnknownGameFileForbidden                       = 7,
    SystemFileUntrusted                            = 8,
    ForbiddenModuleLoaded                          = 9,
    CorruptedMemory                                = 10,
    ForbiddenToolDetected                          = 11,
    InternalAntiCheatViolation                     = 12,
    CorruptedNetworkMessageFlow                    = 13,
    VirtualMachineNotAllowed                       = 14,
    ForbiddenSystemConfiguration                   = 15,
    NoSecureBoot                                   = 16,
    Count                                          = 17,
    EAntiCheatClientViolationType_MAX              = 18
};


// Enum  AntiCheatCore.EAntiCheatClientAuthStatus
enum class EAntiCheatClientAuthStatus : uint8_t
{
    Invalid                                        = 0,
    LocalAuthComplete                              = 1,
    RemoteAuthComplete                             = 2,
    EAntiCheatClientAuthStatus_MAX                 = 3
};


// Enum  AntiCheatCore.EAntiCheatClientType
enum class EAntiCheatClientType : uint8_t
{
    ProtectedClient                                = 0,
    UnprotectedClient                              = 1,
    AIBot                                          = 2,
    EAntiCheatClientType_MAX                       = 3
};


// Enum  AntiCheatCore.EAntiCheatSeverity
enum class EAntiCheatSeverity : uint8_t
{
    Allow                                          = 0,
    Warning                                        = 1,
    Error                                          = 2,
    EAntiCheatSeverity_MAX                         = 3
};


// Enum  EmbarkOptionSystem.EEmbarkOptionExternalEvent
enum class EEmbarkOptionExternalEvent : uint8_t
{
    Unknown                                        = 0,
    ConsoleVariableChanged                         = 1,
    EEmbarkOptionExternalEvent_MAX                 = 2
};


// Enum  EmbarkTelemetry.EBackendGameTransformationNativeErrorCode
enum class EBackendGameTransformationNativeErrorCode : uint8_t
{
    Default                                        = 0,
    BackendInvalidData                             = 1,
    ThirdPartyInvalidData                          = 2,
    EBackendGameTransformationNativeErrorCode_MAX  = 3
};


// Enum  EmbarkTelemetry.EBackendGameTransformationNativeDetailedInfo
enum class EBackendGameTransformationNativeDetailedInfo : uint8_t
{
    StoreOfferInvalidThirdPartyProductId           = 0,
    CharacterItemMissingSkinSelection              = 1,
    CharacterItemSelectedSkinDoesNotExist          = 2,
    CharacterItemSelectedSchematicDoesNotExist     = 3,
    StoreOfferNoCachedThirdPartyProduct            = 4,
    EBackendGameTransformationNativeDetailedInfo_MAX = 5
};


// Enum  EmbarkTelemetry.ETelemetryClientActivity
enum class ETelemetryClientActivity : uint8_t
{
    MainMenu                                       = 0,
    Matchmaking                                    = 1,
    InRound                                        = 2,
    ETelemetryClientActivity_MAX                   = 3
};


// Enum  OnlineSubsystemUtils.EOnlineProxyStoreOfferDiscountType
enum class EOnlineProxyStoreOfferDiscountType : uint8_t
{
    NotOnSale                                      = 0,
    Percentage                                     = 1,
    DiscountAmount                                 = 2,
    PayAmount                                      = 3,
    EOnlineProxyStoreOfferDiscountType_MAX         = 4
};


// Enum  OnlineSubsystemUtils.EInAppPurchaseStatus
enum class EInAppPurchaseStatus : uint8_t
{
    Invalid                                        = 0,
    Failed                                         = 1,
    Deferred                                       = 2,
    Canceled                                       = 3,
    Purchased                                      = 4,
    Restored                                       = 5,
    EInAppPurchaseStatus_MAX                       = 6
};


// Enum  OnlineSubsystemUtils.EBeaconConnectionState
enum class EBeaconConnectionState : uint8_t
{
    Invalid                                        = 0,
    Closed                                         = 1,
    Pending                                        = 2,
    Open                                           = 3,
    EBeaconConnectionState_MAX                     = 4
};


// Enum  OnlineSubsystemUtils.EClientRequestType
enum class EClientRequestType : uint8_t
{
    NonePending                                    = 0,
    ExistingSessionReservation                     = 1,
    ReservationUpdate                              = 2,
    EmptyServerReservation                         = 3,
    Reconnect                                      = 4,
    Abandon                                        = 5,
    ReservationRemoveMembers                       = 6,
    AddOrUpdateReservation                         = 7,
    EClientRequestType_MAX                         = 8
};


// Enum  OnlineSubsystemUtils.EPartyReservationResult
enum class EPartyReservationResult : uint8_t
{
    NoResult                                       = 0,
    RequestPending                                 = 1,
    GeneralError                                   = 2,
    PartyLimitReached                              = 3,
    IncorrectPlayerCount                           = 4,
    RequestTimedOut                                = 5,
    ReservationDuplicate                           = 6,
    ReservationNotFound                            = 7,
    ReservationAccepted                            = 8,
    ReservationDenied                              = 9,
    ReservationDenied_CrossPlayRestriction         = 10,
    ReservationDenied_Banned                       = 11,
    ReservationRequestCanceled                     = 12,
    ReservationInvalid                             = 13,
    BadSessionId                                   = 14,
    ReservationDenied_ContainsExistingPlayers      = 15,
    EPartyReservationResult_MAX                    = 16
};


// Enum  OnlineSubsystemUtils.ESpectatorClientRequestType
enum class ESpectatorClientRequestType : uint8_t
{
    NonePending                                    = 0,
    ExistingSessionReservation                     = 1,
    ReservationUpdate                              = 2,
    EmptyServerReservation                         = 3,
    Reconnect                                      = 4,
    Abandon                                        = 5,
    ESpectatorClientRequestType_MAX                = 6
};


// Enum  OnlineSubsystemUtils.ESpectatorReservationResult
enum class ESpectatorReservationResult : uint8_t
{
    NoResult                                       = 0,
    RequestPending                                 = 1,
    GeneralError                                   = 2,
    SpectatorLimitReached                          = 3,
    IncorrectPlayerCount                           = 4,
    RequestTimedOut                                = 5,
    ReservationDuplicate                           = 6,
    ReservationNotFound                            = 7,
    ReservationAccepted                            = 8,
    ReservationDenied                              = 9,
    ReservationDenied_CrossPlayRestriction         = 10,
    ReservationDenied_Banned                       = 11,
    ReservationRequestCanceled                     = 12,
    ReservationInvalid                             = 13,
    BadSessionId                                   = 14,
    ReservationDenied_ContainsExistingPlayers      = 15,
    ESpectatorReservationResult_MAX                = 16
};


// Enum  Qos.EQosResponseType
enum class EQosResponseType : uint8_t
{
    NoResponse                                     = 0,
    Success                                        = 1,
    Failure                                        = 2,
    EQosResponseType_MAX                           = 3
};


// Enum  Qos.EQosDatacenterResult
enum class EQosDatacenterResult : uint8_t
{
    Invalid                                        = 0,
    Success                                        = 1,
    Incomplete                                     = 2,
    EQosDatacenterResult_MAX                       = 3
};


// Enum  Qos.EQosCompletionResult
enum class EQosCompletionResult : uint8_t
{
    Invalid                                        = 0,
    Success                                        = 1,
    Failure                                        = 2,
    Canceled                                       = 3,
    EQosCompletionResult_MAX                       = 4
};


// Enum  Party.EPartyType
enum class EPartyType : uint8_t
{
    Public                                         = 0,
    FriendsOnly                                    = 1,
    Private                                        = 2,
    EPartyType_MAX                                 = 3
};


// Enum  Party.EPartyInviteRestriction
enum class EPartyInviteRestriction : uint8_t
{
    AnyMember                                      = 0,
    LeaderOnly                                     = 1,
    NoInvites                                      = 2,
    EPartyInviteRestriction_MAX                    = 3
};


// Enum  Party.EPartyJoinDenialReason
enum class EPartyJoinDenialReason : uint8_t
{
    NoReason                                       = 0,
    JoinAttemptAborted                             = 1,
    Busy                                           = 2,
    OssUnavailable                                 = 3,
    PartyFull                                      = 4,
    GameFull                                       = 5,
    NotPartyLeader                                 = 6,
    PartyPrivate                                   = 7,
    JoinerCrossplayRestricted                      = 8,
    MemberCrossplayRestricted                      = 9,
    GameModeRestricted                             = 10,
    Banned                                         = 11,
    NotLoggedIn                                    = 12,
    CheckingForRejoin                              = 13,
    TargetUserMissingPresence                      = 14,
    TargetUserUnjoinable                           = 15,
    TargetUserAway                                 = 16,
    AlreadyLeaderInPlatformSession                 = 17,
    TargetUserPlayingDifferentGame                 = 18,
    TargetUserMissingPlatformSession               = 19,
    PlatformSessionMissingJoinInfo                 = 20,
    FailedToStartFindConsoleSession                = 21,
    MissingPartyClassForTypeId                     = 22,
    TargetUserBlocked                              = 23,
    CustomReason0                                  = 24,
    CustomReason1                                  = 25,
    CustomReason2                                  = 26,
    CustomReason3                                  = 27,
    CustomReason4                                  = 28,
    CustomReason5                                  = 29,
    CustomReason6                                  = 30,
    CustomReason7                                  = 31,
    CustomReason8                                  = 32,
    CustomReason9                                  = 33,
    CustomReason10                                 = 34,
    CustomReason11                                 = 35,
    CustomReason12                                 = 36,
    CustomReason13                                 = 37,
    CustomReason14                                 = 38,
    CustomReason15                                 = 39,
    CustomReason16                                 = 40,
    CustomReason17                                 = 41,
    CustomReason18                                 = 42,
    CustomReason19                                 = 43,
    CustomReason20                                 = 44,
    CustomReason21                                 = 45,
    CustomReason22                                 = 46,
    CustomReason23                                 = 47,
    CustomReason24                                 = 48,
    CustomReason25                                 = 49,
    CustomReason26                                 = 50,
    CustomReason27                                 = 51,
    CustomReason28                                 = 52,
    CustomReason29                                 = 53,
    CustomReason30                                 = 54,
    CustomReason31                                 = 55,
    CustomReason32                                 = 56,
    CustomReason33                                 = 57,
    CustomReason34                                 = 58,
    CustomReason35                                 = 59,
    CustomReason36                                 = 60,
    CustomReason37                                 = 61,
    CustomReason38                                 = 62,
    CustomReason39                                 = 63,
    MAX                                            = 64
};


// Enum  Party.EApprovalAction
enum class EApprovalAction : uint8_t
{
    Approve                                        = 0,
    Enqueue                                        = 1,
    EnqueueAndStartBeacon                          = 2,
    Deny                                           = 3,
    EApprovalAction_MAX                            = 4
};


// Enum  Party.ESocialPartyInviteMethod
enum class ESocialPartyInviteMethod : uint8_t
{
    Other                                          = 0,
    Notification                                   = 1,
    ESocialPartyInviteMethod_MAX                   = 2
};


// Enum  Party.ESocialPartyInviteFailureReason
enum class ESocialPartyInviteFailureReason : uint8_t
{
    Success                                        = 0,
    NotOnline                                      = 1,
    NotAcceptingMembers                            = 2,
    NotFriends                                     = 3,
    AlreadyInParty                                 = 4,
    OssValidationFailed                            = 5,
    PlatformInviteFailed                           = 6,
    PartyInviteFailed                              = 7,
    InviteRateLimitExceeded                        = 8,
    ESocialPartyInviteFailureReason_MAX            = 9
};


// Enum  Party.ESocialChannelType
enum class ESocialChannelType : uint8_t
{
    General                                        = 0,
    Founder                                        = 1,
    Party                                          = 2,
    Team                                           = 3,
    System                                         = 4,
    Private                                        = 5,
    ESocialChannelType_MAX                         = 6
};


// Enum  Party.ESocialSubsystem
enum class ESocialSubsystem : uint8_t
{
    Primary                                        = 0,
    Platform                                       = 1,
    MAX                                            = 2
};


// Enum  Party.ESocialRelationship
enum class ESocialRelationship : uint8_t
{
    Any                                            = 0,
    FriendInviteReceived                           = 1,
    FriendInviteSent                               = 2,
    PartyInvite                                    = 3,
    Friend                                         = 4,
    BlockedPlayer                                  = 5,
    SuggestedFriend                                = 6,
    RecentPlayer                                   = 7,
    JoinRequest                                    = 8,
    ESocialRelationship_MAX                        = 9
};


// Enum  Party.ECrossplayPreference
enum class ECrossplayPreference : uint8_t
{
    NoSelection                                    = 0,
    OptedIn                                        = 1,
    OptedOut                                       = 2,
    OptedOutRestricted                             = 3,
    ECrossplayPreference_MAX                       = 4
};


// Enum  Party.EPlatformIconDisplayRule
enum class EPlatformIconDisplayRule : uint8_t
{
    Always                                         = 0,
    AlwaysIfDifferent                              = 1,
    AlwaysWhenInCrossplayParty                     = 2,
    AlwaysIfDifferentWhenInCrossplayParty          = 3,
    Never                                          = 4,
    EPlatformIconDisplayRule_MAX                   = 5
};


// Enum  Lobby.ELobbyBeaconJoinState
enum class ELobbyBeaconJoinState : uint8_t
{
    None                                           = 0,
    SentJoinRequest                                = 1,
    JoinRequestAcknowledged                        = 2,
    ELobbyBeaconJoinState_MAX                      = 3
};


// Enum  Hotfix.EHotfixResult
enum class EHotfixResult : uint8_t
{
    Failed                                         = 0,
    Success                                        = 1,
    SuccessNoChange                                = 2,
    SuccessNeedsReload                             = 3,
    SuccessNeedsRelaunch                           = 4,
    EHotfixResult_MAX                              = 5
};


// Enum  Hotfix.EUpdateState
enum class EUpdateState : uint8_t
{
    UpdateIdle                                     = 0,
    UpdatePending                                  = 1,
    CheckingForPatch                               = 2,
    DetectingPlatformEnvironment                   = 3,
    CheckingForHotfix                              = 4,
    WaitingOnInitialLoad                           = 5,
    InitialLoadComplete                            = 6,
    UpdateComplete                                 = 7,
    EUpdateState_MAX                               = 8
};


// Enum  Hotfix.EUpdateCompletionStatus
enum class EUpdateCompletionStatus : uint8_t
{
    UpdateUnknown                                  = 0,
    UpdateSuccess                                  = 1,
    UpdateSuccess_NoChange                         = 2,
    UpdateSuccess_NeedsReload                      = 3,
    UpdateSuccess_NeedsRelaunch                    = 4,
    UpdateSuccess_NeedsPatch                       = 5,
    UpdateFailure_PatchCheck                       = 6,
    UpdateFailure_HotfixCheck                      = 7,
    UpdateFailure_NotLoggedIn                      = 8,
    EUpdateCompletionStatus_MAX                    = 9
};


// Enum  Rejoin.ERejoinStatus
enum class ERejoinStatus : uint8_t
{
    NoMatchToRejoin                                = 0,
    RejoinAvailable                                = 1,
    UpdatingStatus                                 = 2,
    NeedsRecheck                                   = 3,
    NoMatchToRejoin_MatchEnded                     = 4,
    ERejoinStatus_MAX                              = 5
};


// Enum  Synthesis.ESynth1OscType
enum class ESynth1OscType : uint8_t
{
    Sine                                           = 0,
    Saw                                            = 1,
    Triangle                                       = 2,
    Square                                         = 3,
    Noise                                          = 4,
    Count                                          = 5,
    ESynth1OscType_MAX                             = 6
};


// Enum  Synthesis.ESynthLFOType
enum class ESynthLFOType : uint8_t
{
    Sine                                           = 0,
    UpSaw                                          = 1,
    DownSaw                                        = 2,
    Square                                         = 3,
    Triangle                                       = 4,
    Exponential                                    = 5,
    RandomSampleHold                               = 6,
    Count                                          = 7,
    ESynthLFOType_MAX                              = 8
};


// Enum  Synthesis.ESynthLFOMode
enum class ESynthLFOMode : uint8_t
{
    Sync                                           = 0,
    OneShot                                        = 1,
    Free                                           = 2,
    Count                                          = 3,
    ESynthLFOMode_MAX                              = 4
};


// Enum  Synthesis.ESynthLFOPatchType
enum class ESynthLFOPatchType : uint8_t
{
    PatchToNone                                    = 0,
    PatchToGain                                    = 1,
    PatchToOscFreq                                 = 2,
    PatchToFilterFreq                              = 3,
    PatchToFilterQ                                 = 4,
    PatchToOscPulseWidth                           = 5,
    PatchToOscPan                                  = 6,
    PatchLFO1ToLFO2Frequency                       = 7,
    PatchLFO1ToLFO2Gain                            = 8,
    Count                                          = 9,
    ESynthLFOPatchType_MAX                         = 10
};


// Enum  Synthesis.ESynthModEnvPatch
enum class ESynthModEnvPatch : uint8_t
{
    PatchToNone                                    = 0,
    PatchToOscFreq                                 = 1,
    PatchToFilterFreq                              = 2,
    PatchToFilterQ                                 = 3,
    PatchToLFO1Gain                                = 4,
    PatchToLFO2Gain                                = 5,
    PatchToLFO1Freq                                = 6,
    PatchToLFO2Freq                                = 7,
    Count                                          = 8,
    ESynthModEnvPatch_MAX                          = 9
};


// Enum  Synthesis.ESynthModEnvBiasPatch
enum class ESynthModEnvBiasPatch : uint8_t
{
    PatchToNone                                    = 0,
    PatchToOscFreq                                 = 1,
    PatchToFilterFreq                              = 2,
    PatchToFilterQ                                 = 3,
    PatchToLFO1Gain                                = 4,
    PatchToLFO2Gain                                = 5,
    PatchToLFO1Freq                                = 6,
    PatchToLFO2Freq                                = 7,
    Count                                          = 8,
    ESynthModEnvBiasPatch_MAX                      = 9
};


// Enum  Synthesis.ESynthFilterType
enum class ESynthFilterType : uint8_t
{
    LowPass                                        = 0,
    HighPass                                       = 1,
    BandPass                                       = 2,
    BandStop                                       = 3,
    Count                                          = 4,
    ESynthFilterType_MAX                           = 5
};


// Enum  Synthesis.ESynthFilterAlgorithm
enum class ESynthFilterAlgorithm : uint8_t
{
    OnePole                                        = 0,
    StateVariable                                  = 1,
    Ladder                                         = 2,
    Count                                          = 3,
    ESynthFilterAlgorithm_MAX                      = 4
};


// Enum  Synthesis.ESynthStereoDelayMode
enum class ESynthStereoDelayMode : uint8_t
{
    Normal                                         = 0,
    Cross                                          = 1,
    PingPong                                       = 2,
    Count                                          = 3,
    ESynthStereoDelayMode_MAX                      = 4
};


// Enum  Synthesis.ESynth1PatchSource
enum class ESynth1PatchSource : uint8_t
{
    LFO1                                           = 0,
    LFO2                                           = 1,
    Envelope                                       = 2,
    BiasEnvelope                                   = 3,
    Count                                          = 4,
    ESynth1PatchSource_MAX                         = 5
};


// Enum  Synthesis.ESynth1PatchDestination
enum class ESynth1PatchDestination : uint8_t
{
    Osc1Gain                                       = 0,
    Osc1Frequency                                  = 1,
    Osc1Pulsewidth                                 = 2,
    Osc2Gain                                       = 3,
    Osc2Frequency                                  = 4,
    Osc2Pulsewidth                                 = 5,
    FilterFrequency                                = 6,
    FilterQ                                        = 7,
    Gain                                           = 8,
    Pan                                            = 9,
    LFO1Frequency                                  = 10,
    LFO1Gain                                       = 11,
    LFO2Frequency                                  = 12,
    LFO2Gain                                       = 13,
    Count                                          = 14,
    ESynth1PatchDestination_MAX                    = 15
};


// Enum  Synthesis.ESourceEffectDynamicsProcessorType
enum class ESourceEffectDynamicsProcessorType : uint8_t
{
    Compressor                                     = 0,
    Limiter                                        = 1,
    Expander                                       = 2,
    Gate                                           = 3,
    UpwardsCompressor                              = 4,
    Count                                          = 5,
    ESourceEffectDynamicsProcessorType_MAX         = 6
};


// Enum  Synthesis.ESourceEffectDynamicsPeakMode
enum class ESourceEffectDynamicsPeakMode : uint8_t
{
    MeanSquared                                    = 0,
    RootMeanSquared                                = 1,
    Peak                                           = 2,
    Count                                          = 3,
    ESourceEffectDynamicsPeakMode_MAX              = 4
};


// Enum  Synthesis.EEnvelopeFollowerPeakMode
enum class EEnvelopeFollowerPeakMode : uint8_t
{
    MeanSquared                                    = 0,
    RootMeanSquared                                = 1,
    Peak                                           = 2,
    Count                                          = 3,
    EEnvelopeFollowerPeakMode_MAX                  = 4
};


// Enum  Synthesis.ESourceEffectFilterCircuit
enum class ESourceEffectFilterCircuit : uint8_t
{
    OnePole                                        = 0,
    StateVariable                                  = 1,
    Ladder                                         = 2,
    Count                                          = 3,
    ESourceEffectFilterCircuit_MAX                 = 4
};


// Enum  Synthesis.ESourceEffectFilterType
enum class ESourceEffectFilterType : uint8_t
{
    LowPass                                        = 0,
    HighPass                                       = 1,
    BandPass                                       = 2,
    BandStop                                       = 3,
    Count                                          = 4,
    ESourceEffectFilterType_MAX                    = 5
};


// Enum  Synthesis.ESourceEffectFilterParam
enum class ESourceEffectFilterParam : uint8_t
{
    FilterFrequency                                = 0,
    FilterResonance                                = 1,
    Count                                          = 2,
    ESourceEffectFilterParam_MAX                   = 3
};


// Enum  Synthesis.EStereoChannelMode
enum class EStereoChannelMode : uint8_t
{
    MidSide                                        = 0,
    LeftRight                                      = 1,
    count                                          = 2,
    EStereoChannelMode_MAX                         = 3
};


// Enum  Synthesis.ESourceEffectMotionFilterModSource
enum class ESourceEffectMotionFilterModSource : uint8_t
{
    DistanceFromListener                           = 0,
    SpeedRelativeToListener                        = 1,
    SpeedOfSourceEmitter                           = 2,
    SpeedOfListener                                = 3,
    SpeedOfAngleDelta                              = 4,
    Count                                          = 5,
    ESourceEffectMotionFilterModSource_MAX         = 6
};


// Enum  Synthesis.ESourceEffectMotionFilterModDestination
enum class ESourceEffectMotionFilterModDestination : uint8_t
{
    FilterACutoffFrequency                         = 0,
    FilterAResonance                               = 1,
    FilterAOutputVolumeDB                          = 2,
    FilterBCutoffFrequency                         = 3,
    FilterBResonance                               = 4,
    FilterBOutputVolumeDB                          = 5,
    FilterMix                                      = 6,
    Count                                          = 7,
    ESourceEffectMotionFilterModDestination_MAX    = 8
};


// Enum  Synthesis.ESourceEffectMotionFilterTopology
enum class ESourceEffectMotionFilterTopology : uint8_t
{
    SerialMode                                     = 0,
    ParallelMode                                   = 1,
    Count                                          = 2,
    ESourceEffectMotionFilterTopology_MAX          = 3
};


// Enum  Synthesis.ESourceEffectMotionFilterCircuit
enum class ESourceEffectMotionFilterCircuit : uint8_t
{
    OnePole                                        = 0,
    StateVariable                                  = 1,
    Ladder                                         = 2,
    Count                                          = 3,
    ESourceEffectMotionFilterCircuit_MAX           = 4
};


// Enum  Synthesis.ESourceEffectMotionFilterType
enum class ESourceEffectMotionFilterType : uint8_t
{
    LowPass                                        = 0,
    HighPass                                       = 1,
    BandPass                                       = 2,
    BandStop                                       = 3,
    Count                                          = 4,
    ESourceEffectMotionFilterType_MAX              = 5
};


// Enum  Synthesis.EPhaserLFOType
enum class EPhaserLFOType : uint8_t
{
    Sine                                           = 0,
    UpSaw                                          = 1,
    DownSaw                                        = 2,
    Square                                         = 3,
    Triangle                                       = 4,
    Exponential                                    = 5,
    RandomSampleHold                               = 6,
    Count                                          = 7,
    EPhaserLFOType_MAX                             = 8
};


// Enum  Synthesis.ERingModulatorTypeSourceEffect
enum class ERingModulatorTypeSourceEffect : uint8_t
{
    Sine                                           = 0,
    Saw                                            = 1,
    Triangle                                       = 2,
    Square                                         = 3,
    Count                                          = 4,
    ERingModulatorTypeSourceEffect_MAX             = 5
};


// Enum  Synthesis.EStereoDelaySourceEffect
enum class EStereoDelaySourceEffect : uint8_t
{
    Normal                                         = 0,
    Cross                                          = 1,
    PingPong                                       = 2,
    Count                                          = 3,
    EStereoDelaySourceEffect_MAX                   = 4
};


// Enum  Synthesis.EStereoDelayFiltertype
enum class EStereoDelayFiltertype : uint8_t
{
    Lowpass                                        = 0,
    Highpass                                       = 1,
    Bandpass                                       = 2,
    Notch                                          = 3,
    Count                                          = 4,
    EStereoDelayFiltertype_MAX                     = 5
};


// Enum  Synthesis.ESubmixEffectConvolutionReverbBlockSize
enum class ESubmixEffectConvolutionReverbBlockSize : uint8_t
{
    BlockSize256                                   = 0,
    BlockSize512                                   = 1,
    BlockSize1024                                  = 2,
    ESubmixEffectConvolutionReverbBlockSize_MAX    = 3
};


// Enum  Synthesis.ESubmixFilterType
enum class ESubmixFilterType : uint8_t
{
    LowPass                                        = 0,
    HighPass                                       = 1,
    BandPass                                       = 2,
    BandStop                                       = 3,
    Count                                          = 4,
    ESubmixFilterType_MAX                          = 5
};


// Enum  Synthesis.ESubmixFilterAlgorithm
enum class ESubmixFilterAlgorithm : uint8_t
{
    OnePole                                        = 0,
    StateVariable                                  = 1,
    Ladder                                         = 2,
    Count                                          = 3,
    ESubmixFilterAlgorithm_MAX                     = 4
};


// Enum  Synthesis.ETapLineMode
enum class ETapLineMode : uint8_t
{
    SendToChannel                                  = 0,
    Panning                                        = 1,
    Disabled                                       = 2,
    ETapLineMode_MAX                               = 3
};


// Enum  Synthesis.EGranularSynthEnvelopeType
enum class EGranularSynthEnvelopeType : uint8_t
{
    Rectangular                                    = 0,
    Triangle                                       = 1,
    DownwardTriangle                               = 2,
    UpwardTriangle                                 = 3,
    ExponentialDecay                               = 4,
    ExponentialIncrease                            = 5,
    Gaussian                                       = 6,
    Hanning                                        = 7,
    Lanczos                                        = 8,
    Cosine                                         = 9,
    CosineSquared                                  = 10,
    Welch                                          = 11,
    Blackman                                       = 12,
    BlackmanHarris                                 = 13,
    Count                                          = 14,
    EGranularSynthEnvelopeType_MAX                 = 15
};


// Enum  Synthesis.EGranularSynthSeekType
enum class EGranularSynthSeekType : uint8_t
{
    FromBeginning                                  = 0,
    FromCurrentPosition                            = 1,
    Count                                          = 2,
    EGranularSynthSeekType_MAX                     = 3
};


// Enum  Synthesis.CurveInterpolationType
enum class CurveInterpolationType : uint8_t
{
    AUTOINTERP                                     = 0,
    LINEAR                                         = 1,
    CONSTANT                                       = 2,
    CurveInterpolationType_MAX                     = 3
};


// Enum  Synthesis.ESamplePlayerSeekType
enum class ESamplePlayerSeekType : uint8_t
{
    FromBeginning                                  = 0,
    FromCurrentPosition                            = 1,
    FromEnd                                        = 2,
    Count                                          = 3,
    ESamplePlayerSeekType_MAX                      = 4
};


// Enum  Synthesis.ESynthKnobSize
enum class ESynthKnobSize : uint8_t
{
    Medium                                         = 0,
    Large                                          = 1,
    Count                                          = 2,
    ESynthKnobSize_MAX                             = 3
};


// Enum  Synthesis.ESynthSlateSizeType
enum class ESynthSlateSizeType : uint8_t
{
    Small                                          = 0,
    Medium                                         = 1,
    Large                                          = 2,
    Count                                          = 3,
    ESynthSlateSizeType_MAX                        = 4
};


// Enum  Synthesis.ESynthSlateColorStyle
enum class ESynthSlateColorStyle : uint8_t
{
    Light                                          = 0,
    Dark                                           = 1,
    Count                                          = 2,
    ESynthSlateColorStyle_MAX                      = 3
};


// Enum  AudioSynesthesia.EConstantQNormalizationEnum
enum class EConstantQNormalizationEnum : uint8_t
{
    EqualEuclideanNorm                             = 0,
    EqualEnergy                                    = 1,
    EqualAmplitude                                 = 2,
    EConstantQNormalizationEnum_MAX                = 3
};


// Enum  AudioSynesthesia.EConstantQFFTSizeEnum
enum class EConstantQFFTSizeEnum : uint8_t
{
    Min                                            = 0,
    XXSmall                                        = 1,
    XSmall                                         = 2,
    Small                                          = 3,
    Medium                                         = 4,
    Large                                          = 5,
    XLarge                                         = 6,
    XXLarge                                        = 7,
    Max                                            = 8
};


// Enum  AudioSynesthesia.ELoudnessCurveTypeEnum
enum class ELoudnessCurveTypeEnum : uint8_t
{
    A                                              = 0,
    B                                              = 1,
    C                                              = 2,
    D                                              = 3,
    None                                           = 4,
    ELoudnessCurveTypeEnum_MAX                     = 5
};


// Enum  AudioSynesthesia.ELoudnessNRTCurveTypeEnum
enum class ELoudnessNRTCurveTypeEnum : uint8_t
{
    A                                              = 0,
    B                                              = 1,
    C                                              = 2,
    D                                              = 3,
    None                                           = 4,
    ELoudnessNRTCurveTypeEnum_MAX                  = 5
};


// Enum  AudioSynesthesia.EMeterPeakType
enum class EMeterPeakType : uint8_t
{
    MeanSquared                                    = 0,
    RootMeanSquared                                = 1,
    Peak                                           = 2,
    Count                                          = 3,
    EMeterPeakType_MAX                             = 4
};


// Enum  SMSystem.ESMLogType
enum class ESMLogType : uint8_t
{
    Note                                           = 0,
    Warning                                        = 1,
    Error                                          = 2,
    ESMLogType_MAX                                 = 3
};


// Enum  SMSystem.ESMNetworkConfigurationType
enum class ESMNetworkConfigurationType : uint8_t
{
    SM_Client                                      = 0,
    SM_Server                                      = 1,
    SM_ClientAndServer                             = 2,
    SM_MAX                                         = 3
};


// Enum  SMSystem.ESMExposedFunctionExecutionType
enum class ESMExposedFunctionExecutionType : uint8_t
{
    SM_Graph                                       = 0,
    SM_NodeInstance                                = 1,
    SM_None                                        = 2,
    SM_MAX                                         = 3
};


// Enum  SMSystem.ESMConditionalEvaluationType
enum class ESMConditionalEvaluationType : uint8_t
{
    SM_Graph                                       = 0,
    SM_NodeInstance                                = 1,
    SM_AlwaysFalse                                 = 2,
    SM_AlwaysTrue                                  = 3,
    SM_MAX                                         = 4
};


// Enum  SMSystem.ESMStateMachineInput
enum class ESMStateMachineInput : uint8_t
{
    Disabled                                       = 0,
    UseContextController                           = 1,
    Player0                                        = 2,
    Player1                                        = 3,
    Player2                                        = 4,
    Player3                                        = 5,
    Player4                                        = 6,
    Player5                                        = 7,
    Player6                                        = 8,
    Player7                                        = 9,
    ESMStateMachineInput_MAX                       = 10
};


// Enum  SMSystem.ESMNodeInput
enum class ESMNodeInput : uint8_t
{
    Disabled                                       = 0,
    UseOwningStateMachine                          = 1,
    UseContextController                           = 2,
    Player0                                        = 3,
    Player1                                        = 4,
    Player2                                        = 5,
    Player3                                        = 6,
    Player4                                        = 7,
    Player5                                        = 8,
    Player6                                        = 9,
    Player7                                        = 10,
    ESMNodeInput_MAX                               = 11
};


// Enum  SMSystem.ESMExecutionEnvironment
enum class ESMExecutionEnvironment : uint8_t
{
    EditorExecution                                = 0,
    GameExecution                                  = 1,
    ESMExecutionEnvironment_MAX                    = 2
};


// Enum  SMSystem.ESMValidEditorNode
enum class ESMValidEditorNode : uint8_t
{
    IsValidEditorNode                              = 0,
    IsNotValidEditorNode                           = 1,
    ESMValidEditorNode_MAX                         = 2
};


// Enum  SMSystem.ESMCompilerLogType
enum class ESMCompilerLogType : uint8_t
{
    Note                                           = 0,
    Warning                                        = 1,
    Error                                          = 2,
    ESMCompilerLogType_MAX                         = 3
};


// Enum  SMSystem.ESMThreadMode
enum class ESMThreadMode : uint8_t
{
    Blocking                                       = 0,
    Async                                          = 1,
    ESMThreadMode_MAX                              = 2
};


// Enum  SMSystem.ESMTransactionType
enum class ESMTransactionType : uint8_t
{
    SM_Unknown                                     = 0,
    SM_Transition                                  = 1,
    SM_State                                       = 2,
    SM_FullSync                                    = 3,
    SM_Start                                       = 4,
    SM_Stop                                        = 5,
    SM_Initialize                                  = 6,
    SM_Shutdown                                    = 7,
    SM_MAX                                         = 8
};


// Enum  StreamlineBlueprint.UStreamlineFeature
enum class UStreamlineFeature : uint8_t
{
    DLSSG                                          = 0,
    Reflex                                         = 1,
    Count                                          = 2,
    UStreamlineFeature_MAX                         = 3
};


// Enum  StreamlineBlueprint.UStreamlineFeatureSupport
enum class UStreamlineFeatureSupport : uint8_t
{
    Supported                                      = 0,
    NotSupported                                   = 1,
    NotSupportedIncompatibleHardware               = 2,
    NotSupportedDriverOutOfDate                    = 3,
    NotSupportedOperatingSystemOutOfDate           = 4,
    NotSupportedHardewareSchedulingDisabled        = 5,
    NotSupportedByRHI                              = 6,
    NotSupportedByPlatformAtBuildTime              = 7,
    NotSupportedIncompatibleAPICaptureToolActive   = 8,
    UStreamlineFeatureSupport_MAX                  = 9
};


// Enum  StreamlineBlueprint.UStreamlineFeatureRequirementsFlags
enum class UStreamlineFeatureRequirementsFlags : uint8_t
{
    None                                           = 0,
    D3D11Supported                                 = 1,
    D3D12Supported                                 = 2,
    VulkanSupported                                = 4,
    VSyncOffRequired                               = 8,
    HardwareSchedulingRequired                     = 16,
    UStreamlineFeatureRequirementsFlags_MAX        = 17
};


// Enum  StreamlineBlueprint.UStreamlineDLSSGMode
enum class UStreamlineDLSSGMode : uint8_t
{
    Off                                            = 0,
    On                                             = 1,
    Auto                                           = 2,
    UStreamlineDLSSGMode_MAX                       = 3
};


// Enum  StreamlineBlueprint.UStreamlineReflexMode
enum class UStreamlineReflexMode : uint8_t
{
    Disabled                                       = 0,
    Enabled                                        = 1,
    EnabledPlusBoost                               = 3,
    UStreamlineReflexMode_MAX                      = 4
};


// Enum  StreamlineRHI.EStreamlineSettingOverride
enum class EStreamlineSettingOverride : uint8_t
{
    Enabled                                        = 0,
    Disabled                                       = 1,
    UseProjectSettings                             = 2,
    EStreamlineSettingOverride_MAX                 = 3
};


// Enum  DLSS.EDLSSSettingOverride
enum class EDLSSSettingOverride : uint8_t
{
    Enabled                                        = 0,
    Disabled                                       = 1,
    UseProjectSettings                             = 2,
    EDLSSSettingOverride_MAX                       = 3
};


// Enum  DLSS.EDLSSPreset
enum class EDLSSPreset : uint8_t
{
    Default                                        = 0,
    A                                              = 1,
    B                                              = 2,
    C                                              = 3,
    D                                              = 4,
    E                                              = 5,
    F                                              = 6,
    G                                              = 7,
    EDLSSPreset_MAX                                = 8
};


// Enum  DLSSBlueprint.UDLSSSupport
enum class UDLSSSupport : uint8_t
{
    Supported                                      = 0,
    NotSupported                                   = 1,
    NotSupportedIncompatibleHardware               = 2,
    NotSupportedDriverOutOfDate                    = 3,
    NotSupportedOperatingSystemOutOfDate           = 4,
    NotSupportedByPlatformAtBuildTime              = 5,
    NotSupportedIncompatibleAPICaptureToolActive   = 6,
    UDLSSSupport_MAX                               = 7
};


// Enum  DLSSBlueprint.UDLSSMode
enum class UDLSSMode : uint8_t
{
    Off                                            = 0,
    Auto                                           = 1,
    DLAA                                           = 2,
    UltraQuality                                   = 3,
    Quality                                        = 4,
    Balanced                                       = 5,
    Performance                                    = 6,
    UltraPerformance                               = 7,
    UDLSSMode_MAX                                  = 8
};


// Enum  RTXGI.EDDGIRaysPerProbe
enum class EDDGIRaysPerProbe : uint32_t
{
    n144                                           = 144,
    n288                                           = 288,
    n432                                           = 432,
    n576                                           = 576,
    n720                                           = 720,
    n864                                           = 864,
    n1008                                          = 1008,
    EDDGIRaysPerProbe_MAX                          = 1009
};


// Enum  RTXGI.ERTXGIQualityPreset
enum class ERTXGIQualityPreset : uint8_t
{
    LOW                                            = 0,
    MEDIUM                                         = 1,
    HIGH                                           = 2,
    VERY_HIGH                                      = 3,
    ULTRA                                          = 4,
    CINEMATIC                                      = 5,
    CUSTOM                                         = 6,
    OFF                                            = 7,
    ERTXGIQualityPreset_MAX                        = 8
};


// Enum  RTXGI.ERTXGISurfacesMode
enum class ERTXGISurfacesMode : uint8_t
{
    DDGI                                           = 0,
    PATH_TRACE                                     = 1,
    ERTXGISurfacesMode_MAX                         = 2
};


// Enum  RTXGI.ERTXGIVolumetricsMode
enum class ERTXGIVolumetricsMode : uint8_t
{
    OFF                                            = 0,
    DDGI                                           = 1,
    ERTXGIVolumetricsMode_MAX                      = 2
};


// Enum  RTXGI.ERTXGICompositeMode
enum class ERTXGICompositeMode : uint8_t
{
    OFF                                            = 0,
    ON                                             = 1,
    ERTXGICompositeMode_MAX                        = 2
};


// Enum  RTXGI.ERTXGIPathTraceCheckerboardMode
enum class ERTXGIPathTraceCheckerboardMode : uint8_t
{
    OFF                                            = 0,
    ONE_QUARTER                                    = 1,
    TWO_QUARTER                                    = 2,
    THREE_QUARTER                                  = 3,
    ERTXGIPathTraceCheckerboardMode_MAX            = 4
};


// Enum  RTXGI.ERTXGIPathTraceDenoiseMode
enum class ERTXGIPathTraceDenoiseMode : uint8_t
{
    OFF                                            = 0,
    REFERENCE                                      = 1,
    ERTXGIPathTraceDenoiseMode_MAX                 = 2
};


// Enum  RTXGI.ERTXGIDDGIRayDataBitDepth
enum class ERTXGIDDGIRayDataBitDepth : uint8_t
{
    R32D32                                         = 0,
    R48D16                                         = 1,
    R96D32                                         = 2,
    ERTXGIDDGIRayDataBitDepth_MAX                  = 3
};


// Enum  RTXGI.ERTXGIDDGIIrradianceBitDepth
enum class ERTXGIDDGIIrradianceBitDepth : uint8_t
{
    D10                                            = 0,
    D16                                            = 1,
    D32                                            = 2,
    ERTXGIDDGIIrradianceBitDepth_MAX               = 3
};


// Enum  RTXGI.ERTXGIDDGIDistanceBitDepth
enum class ERTXGIDDGIDistanceBitDepth : uint8_t
{
    D16                                            = 0,
    D32                                            = 1,
    ERTXGIDDGIDistanceBitDepth_MAX                 = 2
};


// Enum  RTXGI.EDDGISkyLightType
enum class EDDGISkyLightType : uint8_t
{
    None                                           = 0,
    Raster                                         = 1,
    RayTracing                                     = 2,
    EDDGISkyLightType_MAX                          = 3
};


// Enum  RTXGI.ERTXGIVisDDGIProbeData
enum class ERTXGIVisDDGIProbeData : uint8_t
{
    OFF                                            = 0,
    IRRADIANCE                                     = 1,
    DISTANCE                                       = 2,
    DISTANCE_SQUARED                               = 3,
    ERTXGIVisDDGIProbeData_MAX                     = 4
};


// Enum  RTXGI.ERTXGIVisDDGIProbeView
enum class ERTXGIVisDDGIProbeView : uint8_t
{
    OFF                                            = 0,
    RADIANCE                                       = 1,
    HIT_KIND                                       = 2,
    NANS                                           = 3,
    ERTXGIVisDDGIProbeView_MAX                     = 4
};


// Enum  ControlRig.EControlRigComponentSpace
enum class EControlRigComponentSpace : uint8_t
{
    WorldSpace                                     = 0,
    ActorSpace                                     = 1,
    ComponentSpace                                 = 2,
    RigSpace                                       = 3,
    LocalSpace                                     = 4,
    Max                                            = 5
};


// Enum  ControlRig.EControlRigComponentMapDirection
enum class EControlRigComponentMapDirection : uint8_t
{
    Input                                          = 0,
    Output                                         = 1,
    EControlRigComponentMapDirection_MAX           = 2
};


// Enum  ControlRig.ETransformSpaceMode
enum class ETransformSpaceMode : uint8_t
{
    LocalSpace                                     = 0,
    GlobalSpace                                    = 1,
    BaseSpace                                      = 2,
    BaseJoint                                      = 3,
    Max                                            = 4
};


// Enum  ControlRig.EControlRigClampSpatialMode
enum class EControlRigClampSpatialMode : uint8_t
{
    Plane                                          = 0,
    Cylinder                                       = 1,
    Sphere                                         = 2,
    EControlRigClampSpatialMode_MAX                = 3
};


// Enum  ControlRig.ETransformGetterType
enum class ETransformGetterType : uint8_t
{
    Initial                                        = 0,
    Current                                        = 1,
    Max                                            = 2
};


// Enum  ControlRig.EBoneGetterSetterMode
enum class EBoneGetterSetterMode : uint8_t
{
    LocalSpace                                     = 0,
    GlobalSpace                                    = 1,
    Max                                            = 2
};


// Enum  ControlRig.ERigExecutionType
enum class ERigExecutionType : uint8_t
{
    Runtime                                        = 0,
    Editing                                        = 1,
    Max                                            = 2
};


// Enum  ControlRig.EControlRigDrawSettings
enum class EControlRigDrawSettings : uint8_t
{
    Points                                         = 0,
    Lines                                          = 1,
    LineStrip                                      = 2,
    DynamicMesh                                    = 3,
    EControlRigDrawSettings_MAX                    = 4
};


// Enum  ControlRig.EControlRigDrawHierarchyMode
enum class EControlRigDrawHierarchyMode : uint8_t
{
    Axes                                           = 0,
    Max                                            = 1
};


// Enum  ControlRig.EControlRigAnimEasingType
enum class EControlRigAnimEasingType : uint8_t
{
    Linear                                         = 0,
    QuadraticEaseIn                                = 1,
    QuadraticEaseOut                               = 2,
    QuadraticEaseInOut                             = 3,
    CubicEaseIn                                    = 4,
    CubicEaseOut                                   = 5,
    CubicEaseInOut                                 = 6,
    QuarticEaseIn                                  = 7,
    QuarticEaseOut                                 = 8,
    QuarticEaseInOut                               = 9,
    QuinticEaseIn                                  = 10,
    QuinticEaseOut                                 = 11,
    QuinticEaseInOut                               = 12,
    SineEaseIn                                     = 13,
    SineEaseOut                                    = 14,
    SineEaseInOut                                  = 15,
    CircularEaseIn                                 = 16,
    CircularEaseOut                                = 17,
    CircularEaseInOut                              = 18,
    ExponentialEaseIn                              = 19,
    ExponentialEaseOut                             = 20,
    ExponentialEaseInOut                           = 21,
    ElasticEaseIn                                  = 22,
    ElasticEaseOut                                 = 23,
    ElasticEaseInOut                               = 24,
    BackEaseIn                                     = 25,
    BackEaseOut                                    = 26,
    BackEaseInOut                                  = 27,
    BounceEaseIn                                   = 28,
    BounceEaseOut                                  = 29,
    BounceEaseInOut                                = 30,
    EControlRigAnimEasingType_MAX                  = 31
};


// Enum  ControlRig.ECRSimPointIntegrateType
enum class ECRSimPointIntegrateType : uint8_t
{
    Verlet                                         = 0,
    SemiExplicitEuler                              = 1,
    ECRSimPointIntegrateType_MAX                   = 2
};


// Enum  ControlRig.ECRSimConstraintType
enum class ECRSimConstraintType : uint8_t
{
    Distance                                       = 0,
    DistanceFromA                                  = 1,
    DistanceFromB                                  = 2,
    Plane                                          = 3,
    ECRSimConstraintType_MAX                       = 4
};


// Enum  ControlRig.ECRSimPointForceType
enum class ECRSimPointForceType : uint8_t
{
    Direction                                      = 0,
    ECRSimPointForceType_MAX                       = 1
};


// Enum  ControlRig.ECRSimSoftCollisionType
enum class ECRSimSoftCollisionType : uint8_t
{
    Plane                                          = 0,
    Sphere                                         = 1,
    Cone                                           = 2,
    ECRSimSoftCollisionType_MAX                    = 3
};


// Enum  ControlRig.EControlRigFKRigExecuteMode
enum class EControlRigFKRigExecuteMode : uint8_t
{
    Replace                                        = 0,
    Additive                                       = 1,
    Max                                            = 2
};


// Enum  ControlRig.EMovieSceneControlRigSpaceType
enum class EMovieSceneControlRigSpaceType : uint8_t
{
    Parent                                         = 0,
    World                                          = 1,
    ControlRig                                     = 2,
    EMovieSceneControlRigSpaceType_MAX             = 3
};


// Enum  ControlRig.ERigTransformStackEntryType
enum class ERigTransformStackEntryType : uint8_t
{
    TransformPose                                  = 0,
    ControlOffset                                  = 1,
    ControlShape                                   = 2,
    CurveValue                                     = 3,
    ERigTransformStackEntryType_MAX                = 4
};


// Enum  ControlRig.ERigElementType
enum class ERigElementType : uint8_t
{
    None                                           = 0,
    Bone                                           = 1,
    Null                                           = 2,
    Space                                          = 2,
    Control                                        = 4,
    Curve                                          = 8,
    RigidBody                                      = 16,
    Reference                                      = 32,
    Last                                           = 64,
    All                                            = 63,
    ToResetAfterSetupEvent                         = 13,
    ERigElementType_MAX                            = 65
};


// Enum  ControlRig.ERigBoneType
enum class ERigBoneType : uint8_t
{
    Imported                                       = 0,
    User                                           = 1,
    ERigBoneType_MAX                               = 2
};


// Enum  ControlRig.ERigHierarchyNotification
enum class ERigHierarchyNotification : uint8_t
{
    ElementAdded                                   = 0,
    ElementRemoved                                 = 1,
    ElementRenamed                                 = 2,
    ElementSelected                                = 3,
    ElementDeselected                              = 4,
    ParentChanged                                  = 5,
    HierarchyReset                                 = 6,
    ControlSettingChanged                          = 7,
    ControlVisibilityChanged                       = 8,
    ControlShapeTransformChanged                   = 9,
    ParentWeightsChanged                           = 10,
    Max                                            = 11
};


// Enum  ControlRig.ERigEvent
enum class ERigEvent : uint8_t
{
    None                                           = 0,
    RequestAutoKey                                 = 1,
    Max                                            = 2
};


// Enum  ControlRig.EControlRigSetKey
enum class EControlRigSetKey : uint8_t
{
    DoNotCare                                      = 0,
    Always                                         = 1,
    Never                                          = 2,
    EControlRigSetKey_MAX                          = 3
};


// Enum  ControlRig.ERigControlType
enum class ERigControlType : uint8_t
{
    Bool                                           = 0,
    Float                                          = 1,
    Integer                                        = 2,
    Vector2D                                       = 3,
    Position                                       = 4,
    Scale                                          = 5,
    Rotator                                        = 6,
    Transform                                      = 7,
    TransformNoScale                               = 8,
    EulerTransform                                 = 9,
    ERigControlType_MAX                            = 10
};


// Enum  ControlRig.ERigControlValueType
enum class ERigControlValueType : uint8_t
{
    Initial                                        = 0,
    Current                                        = 1,
    Minimum                                        = 2,
    Maximum                                        = 3,
    ERigControlValueType_MAX                       = 4
};


// Enum  ControlRig.ERigControlAxis
enum class ERigControlAxis : uint8_t
{
    X                                              = 0,
    Y                                              = 1,
    Z                                              = 2,
    ERigControlAxis_MAX                            = 3
};


// Enum  ControlRig.ERigTransformType
enum class ERigTransformType : uint8_t
{
    InitialLocal                                   = 0,
    CurrentLocal                                   = 1,
    InitialGlobal                                  = 2,
    CurrentGlobal                                  = 3,
    NumTransformTypes                              = 4,
    ERigTransformType_MAX                          = 5
};


// Enum  ControlRig.ERigSpaceType
enum class ERigSpaceType : uint8_t
{
    Global                                         = 0,
    Bone                                           = 1,
    Control                                        = 2,
    Space                                          = 3,
    ERigSpaceType_MAX                              = 4
};


// Enum  ControlRig.EControlRigState
enum class EControlRigState : uint8_t
{
    Init                                           = 0,
    Update                                         = 1,
    Invalid                                        = 2,
    EControlRigState_MAX                           = 3
};


// Enum  ControlRig.EAimMode
enum class EAimMode : uint8_t
{
    AimAtTarget                                    = 0,
    OrientToTarget                                 = 1,
    MAX                                            = 2
};


// Enum  ControlRig.EApplyTransformMode
enum class EApplyTransformMode : uint8_t
{
    Override                                       = 0,
    Additive                                       = 1,
    Max                                            = 2
};


// Enum  ControlRig.ERigUnitDebugPointMode
enum class ERigUnitDebugPointMode : uint8_t
{
    Point                                          = 0,
    Vector                                         = 1,
    Max                                            = 2
};


// Enum  ControlRig.ERigUnitDebugTransformMode
enum class ERigUnitDebugTransformMode : uint8_t
{
    Point                                          = 0,
    Axes                                           = 1,
    Box                                            = 2,
    Max                                            = 3
};


// Enum  ControlRig.ERigSwitchParentMode
enum class ERigSwitchParentMode : uint8_t
{
    World                                          = 0,
    DefaultParent                                  = 1,
    ParentItem                                     = 2,
    ERigSwitchParentMode_MAX                       = 3
};


// Enum  ControlRig.EControlRigCurveAlignment
enum class EControlRigCurveAlignment : uint8_t
{
    Front                                          = 0,
    Stretched                                      = 1,
    EControlRigCurveAlignment_MAX                  = 2
};


// Enum  ControlRig.EControlRigVectorKind
enum class EControlRigVectorKind : uint8_t
{
    Direction                                      = 0,
    Location                                       = 1,
    EControlRigVectorKind_MAX                      = 2
};


// Enum  ControlRig.ERBFKernelType
enum class ERBFKernelType : uint8_t
{
    Gaussian                                       = 0,
    Exponential                                    = 1,
    Linear                                         = 2,
    Cubic                                          = 3,
    Quintic                                        = 4,
    ERBFKernelType_MAX                             = 5
};


// Enum  ControlRig.ERBFQuatDistanceType
enum class ERBFQuatDistanceType : uint8_t
{
    Euclidean                                      = 0,
    ArcLength                                      = 1,
    SwingAngle                                     = 2,
    TwistAngle                                     = 3,
    ERBFQuatDistanceType_MAX                       = 4
};


// Enum  ControlRig.ERBFVectorDistanceType
enum class ERBFVectorDistanceType : uint8_t
{
    Euclidean                                      = 0,
    Manhattan                                      = 1,
    ArcLength                                      = 2,
    ERBFVectorDistanceType_MAX                     = 3
};


// Enum  ControlRig.EControlRigModifyBoneMode
enum class EControlRigModifyBoneMode : uint8_t
{
    OverrideLocal                                  = 0,
    OverrideGlobal                                 = 1,
    AdditiveLocal                                  = 2,
    AdditiveGlobal                                 = 3,
    Max                                            = 4
};


// Enum  ControlRig.EConstraintInterpType
enum class EConstraintInterpType : uint8_t
{
    Average                                        = 0,
    Shortest                                       = 1,
    Max                                            = 2
};


// Enum  ControlRig.ERigUnitVisualDebugPointMode
enum class ERigUnitVisualDebugPointMode : uint8_t
{
    Point                                          = 0,
    Vector                                         = 1,
    Max                                            = 2
};


// Enum  SequencerScripting.ESequenceTimeUnit
enum class ESequenceTimeUnit : uint8_t
{
    DisplayRate                                    = 0,
    TickResolution                                 = 1,
    ESequenceTimeUnit_MAX                          = 2
};


// Enum  FSR2TemporalUpscaling.EFSR2QualityMode
enum class EFSR2QualityMode : uint8_t
{
    Unused                                         = 0,
    Quality                                        = 1,
    Balanced                                       = 2,
    Performance                                    = 3,
    UltraPerformance                               = 4,
    EFSR2QualityMode_MAX                           = 5
};


// Enum  FSR2TemporalUpscaling.EFSR2HistoryFormat
enum class EFSR2HistoryFormat : uint8_t
{
    FloatRGBA                                      = 0,
    FloatR11G11B10                                 = 1,
    EFSR2HistoryFormat_MAX                         = 2
};


// Enum  FSR2TemporalUpscaling.EFSR2DeDitherMode
enum class EFSR2DeDitherMode : uint8_t
{
    Off                                            = 0,
    Full                                           = 1,
    HairOnly                                       = 2,
    EFSR2DeDitherMode_MAX                          = 3
};


// Enum  FSR2TemporalUpscaling.EFSR2LandscapeHISMMode
enum class EFSR2LandscapeHISMMode : uint8_t
{
    Off                                            = 0,
    AllStatic                                      = 1,
    StaticWPO                                      = 2,
    EFSR2LandscapeHISMMode_MAX                     = 3
};


// Enum  XeSSBlueprint.EXeSSQualityMode
enum class EXeSSQualityMode : uint8_t
{
    Off                                            = 0,
    Performance                                    = 1,
    Balanced                                       = 2,
    Quality                                        = 3,
    UltraQuality                                   = 4,
    EXeSSQualityMode_MAX                           = 5
};


// Enum  Engine.ERelativeTransformSpace
enum class ERelativeTransformSpace : uint8_t
{
    RTS_World                                      = 0,
    RTS_Actor                                      = 1,
    RTS_Component                                  = 2,
    RTS_ParentBoneSpace                            = 3,
    RTS_MAX                                        = 4
};


// Enum  Engine.EComponentMobility
enum class EComponentMobility : uint8_t
{
    Static                                         = 0,
    Stationary                                     = 1,
    Movable                                        = 2,
    EComponentMobility_MAX                         = 3
};


// Enum  Engine.EDetailMode
enum class EDetailMode : uint8_t
{
    DM_Low                                         = 0,
    DM_Medium                                      = 1,
    DM_High                                        = 2,
    DM_MAX                                         = 3
};


// Enum  Text3D.EText3DBevelType
enum class EText3DBevelType : uint8_t
{
    Linear                                         = 0,
    HalfCircle                                     = 1,
    Convex                                         = 2,
    Concave                                        = 3,
    OneStep                                        = 4,
    TwoSteps                                       = 5,
    Engraved                                       = 6,
    EText3DBevelType_MAX                           = 7
};


// Enum  Text3D.EText3DHorizontalTextAlignment
enum class EText3DHorizontalTextAlignment : uint8_t
{
    Left                                           = 0,
    Center                                         = 1,
    Right                                          = 2,
    EText3DHorizontalTextAlignment_MAX             = 3
};


// Enum  Text3D.EText3DVerticalTextAlignment
enum class EText3DVerticalTextAlignment : uint8_t
{
    FirstLine                                      = 0,
    Top                                            = 1,
    Center                                         = 2,
    Bottom                                         = 3,
    EText3DVerticalTextAlignment_MAX               = 4
};


// Enum  Text3D.EText3DCharacterEffectOrder
enum class EText3DCharacterEffectOrder : uint8_t
{
    Normal                                         = 0,
    FromCenter                                     = 1,
    ToCenter                                       = 2,
    Opposite                                       = 3,
    EText3DCharacterEffectOrder_MAX                = 4
};


// Enum  MetasoundFrontend.EMetasoundFrontendClassType
enum class EMetasoundFrontendClassType : uint8_t
{
    External                                       = 0,
    Graph                                          = 1,
    Input                                          = 2,
    Output                                         = 3,
    Literal                                        = 4,
    Variable                                       = 5,
    VariableDeferredAccessor                       = 6,
    VariableAccessor                               = 7,
    VariableMutator                                = 8,
    Invalid                                        = 9,
    EMetasoundFrontendClassType_MAX                = 10
};


// Enum  MetasoundFrontend.EMetasoundFrontendNodeStyleDisplayVisibility
enum class EMetasoundFrontendNodeStyleDisplayVisibility : uint8_t
{
    Visible                                        = 0,
    Hidden                                         = 1,
    EMetasoundFrontendNodeStyleDisplayVisibility_MAX = 2
};


// Enum  MetasoundFrontend.EMetasoundFrontendStyleEdgeDisplay
enum class EMetasoundFrontendStyleEdgeDisplay : uint8_t
{
    Default                                        = 0,
    Inherited                                      = 1,
    Hidden                                         = 2,
    EMetasoundFrontendStyleEdgeDisplay_MAX         = 3
};


// Enum  MetasoundFrontend.EMetasoundFrontendLiteralType
enum class EMetasoundFrontendLiteralType : uint8_t
{
    None                                           = 0,
    Boolean                                        = 1,
    Integer                                        = 2,
    Float                                          = 3,
    String                                         = 4,
    UObject                                        = 5,
    NoneArray                                      = 6,
    BooleanArray                                   = 7,
    IntegerArray                                   = 8,
    FloatArray                                     = 9,
    StringArray                                    = 10,
    UObjectArray                                   = 11,
    Invalid                                        = 12,
    EMetasoundFrontendLiteralType_MAX              = 13
};


// Enum  MetasoundEngine.EMetaSoundMessageLevel
enum class EMetaSoundMessageLevel : uint8_t
{
    Error                                          = 0,
    Warning                                        = 1,
    Info                                           = 2,
    EMetaSoundMessageLevel_MAX                     = 3
};


// Enum  MetasoundEngine.EMetasoundSourceAudioFormat
enum class EMetasoundSourceAudioFormat : uint8_t
{
    Mono                                           = 0,
    Stereo                                         = 1,
    COUNT                                          = 2,
    EMetasoundSourceAudioFormat_MAX                = 3
};


// Enum  SlateCore.EOrientation
enum class EOrientation : uint8_t
{
    Orient_Horizontal                              = 0,
    Orient_Vertical                                = 1,
    Orient_MAX                                     = 2
};


// Enum  AudioWidgets.EAudioRadialSliderLayout
enum class EAudioRadialSliderLayout : uint8_t
{
    Layout_LabelTop                                = 0,
    Layout_LabelCenter                             = 1,
    Layout_LabelBottom                             = 2,
    Layout_MAX                                     = 3
};


// Enum  Sentry.ESentryLevel
enum class ESentryLevel : uint8_t
{
    Debug                                          = 0,
    Info                                           = 1,
    Warning                                        = 2,
    Error                                          = 3,
    Fatal                                          = 4,
    ESentryLevel_MAX                               = 5
};


// Enum  EmbarkCloth.EEmbarkClothSimulationType
enum class EEmbarkClothSimulationType : uint8_t
{
    None                                           = 0,
    PBD                                            = 1,
    EEmbarkClothSimulationType_MAX                 = 2
};


// Enum  EmbarkCloth.EEmbarkClothDeformerType
enum class EEmbarkClothDeformerType : uint8_t
{
    None                                           = 0,
    MorphTargets                                   = 1,
    LinearSkinning                                 = 2,
    ToWorld                                        = 3,
    ToComponent                                    = 4,
    SoftenNormals                                  = 5,
    UnholySkinning                                 = 6,
    EEmbarkClothDeformerType_MAX                   = 7
};


// Enum  EmbarkCloth.EEmbarkWeightMapTarget
enum class EEmbarkWeightMapTarget : uint8_t
{
    None                                           = 0,
    MaxDistance                                    = 1,
    BackstopDistance                               = 2,
    BackstopRadius                                 = 3,
    AnimDriveStiffness                             = 4,
    AnimDriveDamping                               = 5,
    Mass                                           = 6,
    Damping                                        = 7,
    EdgeStiffness                                  = 8,
    BendingSpringStiffness                         = 9,
    AreaStiffness                                  = 10,
    VolumeStiffness                                = 11,
    TetherStiffness                                = 12,
    TetherScale                                    = 13,
    CollisionThickness                             = 14,
    CollisionFriction                              = 15,
    EEmbarkWeightMapTarget_MAX                     = 16
};


// Enum  EmbarkSplineTools.ESplineMergeType
enum class ESplineMergeType : uint8_t
{
    None                                           = 0,
    StaticMesh                                     = 1,
    SplineMesh                                     = 2,
    ESplineMergeType_MAX                           = 3
};


// Enum  EmbarkSplineTools.ESplineEndSegmentPlacement
enum class ESplineEndSegmentPlacement : uint8_t
{
    Default                                        = 0,
    PlaceOnSplineEndPoint                          = 1,
    SnapToLastSegment                              = 2,
    ESplineEndSegmentPlacement_MAX                 = 3
};


// Enum  EmbarkSplineTools.ESplineMeshAlignment
enum class ESplineMeshAlignment : uint8_t
{
    AlignToSpline                                  = 0,
    AlignToGround                                  = 1,
    ObjectSpace                                    = 2,
    WorldSpace                                     = 3,
    SplineHeadingOnly                              = 4,
    ESplineMeshAlignment_MAX                       = 5
};


// Enum  EmbarkSplineTools.ESplineMeshDistributionMethod
enum class ESplineMeshDistributionMethod : uint8_t
{
    BestFit                                        = 0,
    OneMeshPerSplineSegment                        = 1,
    OneMeshPerSplinePoint                          = 2,
    ESplineMeshDistributionMethod_MAX              = 3
};


// Enum  EmbarkSplineTools.ESplineMeshSegmentObjectType
enum class ESplineMeshSegmentObjectType : uint8_t
{
    StaticMesh                                     = 0,
    SplineMesh                                     = 1,
    ActorClass                                     = 2,
    ESplineMeshSegmentObjectType_MAX               = 3
};


// Enum  GameplayCameras.ECameraAnimationPlaySpace
enum class ECameraAnimationPlaySpace : uint8_t
{
    CameraLocal                                    = 0,
    World                                          = 1,
    UserDefined                                    = 2,
    ECameraAnimationPlaySpace_MAX                  = 3
};


// Enum  GameplayCameras.ECameraAnimationEasingType
enum class ECameraAnimationEasingType : uint8_t
{
    Linear                                         = 0,
    Sinusoidal                                     = 1,
    Quadratic                                      = 2,
    Cubic                                          = 3,
    Quartic                                        = 4,
    Quintic                                        = 5,
    Exponential                                    = 6,
    Circular                                       = 7,
    ECameraAnimationEasingType_MAX                 = 8
};


// Enum  GameplayCameras.EOscillatorWaveform
enum class EOscillatorWaveform : uint8_t
{
    SineWave                                       = 0,
    PerlinNoise                                    = 1,
    EOscillatorWaveform_MAX                        = 2
};


// Enum  GameplayCameras.EInitialOscillatorOffset
enum class EInitialOscillatorOffset : uint8_t
{
    EOO_OffsetRandom                               = 0,
    EOO_OffsetZero                                 = 1,
    EOO_MAX                                        = 2
};


// Enum  GameplayCameras.EInitialWaveOscillatorOffsetType
enum class EInitialWaveOscillatorOffsetType : uint8_t
{
    Random                                         = 0,
    Zero                                           = 1,
    EInitialWaveOscillatorOffsetType_MAX           = 2
};


// Enum  TemplateSequence.ETemplateSectionPropertyScaleType
enum class ETemplateSectionPropertyScaleType : uint8_t
{
    FloatProperty                                  = 0,
    TransformPropertyLocationOnly                  = 1,
    TransformPropertyRotationOnly                  = 2,
    ETemplateSectionPropertyScaleType_MAX          = 3
};


// Enum  KantanChartsSlate.EChartAxisPosition
enum class EChartAxisPosition : uint8_t
{
    LeftBottom                                     = 0,
    RightTop                                       = 1,
    Floating                                       = 2,
    EChartAxisPosition_MAX                         = 3
};


// Enum  KantanChartsSlate.ECartesianScalingType
enum class ECartesianScalingType : uint8_t
{
    FixedScale                                     = 0,
    FixedRange                                     = 1,
    ECartesianScalingType_MAX                      = 2
};


// Enum  KantanChartsSlate.ECartesianRangeBoundType
enum class ECartesianRangeBoundType : uint8_t
{
    FixedValue                                     = 0,
    FitToData                                      = 1,
    FitToDataRounded                               = 2,
    ECartesianRangeBoundType_MAX                   = 3
};


// Enum  KantanChartsSlate.EKantanDataPointSize
enum class EKantanDataPointSize : uint8_t
{
    Small                                          = 0,
    Medium                                         = 1,
    Large                                          = 2,
    EKantanDataPointSize_MAX                       = 3
};


// Enum  KantanChartsSlate.EKantanBarChartOrientation
enum class EKantanBarChartOrientation : uint8_t
{
    Vertical                                       = 0,
    Horizontal                                     = 1,
    EKantanBarChartOrientation_MAX                 = 2
};


// Enum  KantanChartsSlate.EKantanBarLabelPosition
enum class EKantanBarLabelPosition : uint8_t
{
    NoLabels                                       = 0,
    Standard                                       = 1,
    Overlaid                                       = 2,
    EKantanBarLabelPosition_MAX                    = 3
};


// Enum  KantanChartsSlate.EKantanBarValueExtents
enum class EKantanBarValueExtents : uint8_t
{
    NoValueLines                                   = 0,
    ZeroLineOnly                                   = 1,
    ZeroAndMaxLines                                = 2,
    EKantanBarValueExtents_MAX                     = 3
};


// Enum  PrefabricatorRuntime.EPrefabricatorPivotPosition
enum class EPrefabricatorPivotPosition : uint8_t
{
    ExtremeLeft                                    = 0,
    ExtremeRight                                   = 1,
    Center                                         = 2,
    EPrefabricatorPivotPosition_MAX                = 3
};


// Enum  ConstructionSystemRuntime.EConstructionSystemToolType
enum class EConstructionSystemToolType : uint8_t
{
    BuildTool                                      = 0,
    RemoveTool                                     = 1,
    EConstructionSystemToolType_MAX                = 2
};


// Enum  ConstructionSystemRuntime.EConstructionSystemCursorVisiblity
enum class EConstructionSystemCursorVisiblity : uint8_t
{
    Visible                                        = 0,
    VisibleInvalid                                 = 1,
    Hidden                                         = 2,
    EConstructionSystemCursorVisiblity_MAX         = 3
};


// Enum  ConstructionSystemRuntime.EPrefabricatorConstructionSnapType
enum class EPrefabricatorConstructionSnapType : uint8_t
{
    Floor                                          = 0,
    Wall                                           = 1,
    Object                                         = 2,
    EPrefabricatorConstructionSnapType_MAX         = 3
};


// Enum  ProceduralMeshComponent.EProcMeshSliceCapOption
enum class EProcMeshSliceCapOption : uint8_t
{
    NoCap                                          = 0,
    CreateNewSectionForCap                         = 1,
    UseLastSectionForCap                           = 2,
    EProcMeshSliceCapOption_MAX                    = 3
};


// Enum  ControlRigSpline.ESplineType
enum class ESplineType : uint8_t
{
    BSpline                                        = 0,
    Hermite                                        = 1,
    Max                                            = 2
};


// Enum  IKRig.ERetargetTranslationMode
enum class ERetargetTranslationMode : uint8_t
{
    None                                           = 0,
    GloballyScaled                                 = 1,
    Absolute                                       = 2,
    ERetargetTranslationMode_MAX                   = 3
};


// Enum  IKRig.ERetargetRotationMode
enum class ERetargetRotationMode : uint8_t
{
    Interpolated                                   = 0,
    OneToOne                                       = 1,
    OneToOneReversed                               = 2,
    None                                           = 3,
    ERetargetRotationMode_MAX                      = 4
};


// Enum  IKRig.EIKRigGoalSpace
enum class EIKRigGoalSpace : uint8_t
{
    Component                                      = 0,
    Additive                                       = 1,
    World                                          = 2,
    EIKRigGoalSpace_MAX                            = 3
};


// Enum  IKRig.EIKRigGoalTransformSource
enum class EIKRigGoalTransformSource : uint8_t
{
    Manual                                         = 0,
    Bone                                           = 1,
    ActorComponent                                 = 2,
    EIKRigGoalTransformSource_MAX                  = 3
};


// Enum  FullBodyIK.EFBIKBoneLimitType
enum class EFBIKBoneLimitType : uint8_t
{
    Free                                           = 0,
    Limit                                          = 1,
    Locked                                         = 2,
    EFBIKBoneLimitType_MAX                         = 3
};


// Enum  FullBodyIK.EPoleVectorOption
enum class EPoleVectorOption : uint8_t
{
    Direction                                      = 0,
    Location                                       = 1,
    EPoleVectorOption_MAX                          = 2
};


// Enum  PBIK.EPBIKRootBehavior
enum class EPBIKRootBehavior : uint8_t
{
    PrePull                                        = 0,
    PinToInput                                     = 1,
    Free                                           = 2,
    EPBIKRootBehavior_MAX                          = 3
};


// Enum  PBIK.EPBIKLimitType
enum class EPBIKLimitType : uint8_t
{
    Free                                           = 0,
    Limited                                        = 1,
    Locked                                         = 2,
    EPBIKLimitType_MAX                             = 3
};


// Enum  DatasmithContent.EDatasmithAreaLightActorShape
enum class EDatasmithAreaLightActorShape : uint8_t
{
    Rectangle                                      = 0,
    Disc                                           = 1,
    Sphere                                         = 2,
    Cylinder                                       = 3,
    None                                           = 4,
    EDatasmithAreaLightActorShape_MAX              = 5
};


// Enum  DatasmithContent.EDatasmithAreaLightActorType
enum class EDatasmithAreaLightActorType : uint8_t
{
    Point                                          = 0,
    Spot                                           = 1,
    Rect                                           = 2,
    EDatasmithAreaLightActorType_MAX               = 3
};


// Enum  DatasmithContent.EDatasmithImportSearchPackagePolicy
enum class EDatasmithImportSearchPackagePolicy : uint8_t
{
    Current                                        = 0,
    All                                            = 1,
    EDatasmithImportSearchPackagePolicy_MAX        = 2
};


// Enum  DatasmithContent.EDatasmithImportAssetConflictPolicy
enum class EDatasmithImportAssetConflictPolicy : uint8_t
{
    Replace                                        = 0,
    Update                                         = 1,
    Use                                            = 2,
    Ignore                                         = 3,
    EDatasmithImportAssetConflictPolicy_MAX        = 4
};


// Enum  DatasmithContent.EDatasmithImportActorPolicy
enum class EDatasmithImportActorPolicy : uint8_t
{
    Update                                         = 0,
    Full                                           = 1,
    Ignore                                         = 2,
    EDatasmithImportActorPolicy_MAX                = 3
};


// Enum  DatasmithContent.EDatasmithImportMaterialQuality
enum class EDatasmithImportMaterialQuality : uint8_t
{
    UseNoFresnelCurves                             = 0,
    UseSimplifierFresnelCurves                     = 1,
    UseRealFresnelCurves                           = 2,
    EDatasmithImportMaterialQuality_MAX            = 3
};


// Enum  DatasmithContent.EDatasmithImportLightmapMin
enum class EDatasmithImportLightmapMin : uint8_t
{
    LIGHTMAP                                       = 0,
    LIGHTMAP                                       = 1,
    LIGHTMAP                                       = 2,
    LIGHTMAP                                       = 3,
    LIGHTMAP                                       = 4,
    LIGHTMAP                                       = 5,
    LIGHTMAP_MAX                                   = 6
};


// Enum  DatasmithContent.EDatasmithImportLightmapMax
enum class EDatasmithImportLightmapMax : uint8_t
{
    LIGHTMAP                                       = 0,
    LIGHTMAP                                       = 1,
    LIGHTMAP                                       = 2,
    LIGHTMAP                                       = 3,
    LIGHTMAP                                       = 4,
    LIGHTMAP                                       = 5,
    LIGHTMAP                                       = 6,
    LIGHTMAP_MAX                                   = 7
};


// Enum  DatasmithContent.EDatasmithImportScene
enum class EDatasmithImportScene : uint8_t
{
    NewLevel                                       = 0,
    CurrentLevel                                   = 1,
    AssetsOnly                                     = 2,
    EDatasmithImportScene_MAX                      = 3
};


// Enum  DatasmithContent.EDatasmithCADStitchingTechnique
enum class EDatasmithCADStitchingTechnique : uint8_t
{
    StitchingNone                                  = 0,
    StitchingHeal                                  = 1,
    StitchingSew                                   = 2,
    EDatasmithCADStitchingTechnique_MAX            = 3
};


// Enum  DatasmithContent.EDatasmithCADRetessellationRule
enum class EDatasmithCADRetessellationRule : uint8_t
{
    All                                            = 0,
    SkipDeletedSurfaces                            = 1,
    EDatasmithCADRetessellationRule_MAX            = 2
};


// Enum  VariantManagerContent.EPropertyValueCategory
enum class EPropertyValueCategory : uint8_t
{
    Undefined                                      = 0,
    Generic                                        = 1,
    RelativeLocation                               = 2,
    RelativeRotation                               = 4,
    RelativeScale3D                                = 8,
    Visibility                                     = 16,
    Material                                       = 32,
    Color                                          = 64,
    Option                                         = 128,
    EPropertyValueCategory_MAX                     = 129
};


// Enum  ChaosNiagara.EDataSortTypeEnum
enum class EDataSortTypeEnum : uint8_t
{
    ChaosNiagara_DataSortType_NoSorting            = 0,
    ChaosNiagara_DataSortType_RandomShuffle        = 1,
    ChaosNiagara_DataSortType_SortByMassMaxToMin   = 2,
    ChaosNiagara_DataSortType_SortByMassMinToMax   = 3,
    ChaosNiagara_Max                               = 4
};


// Enum  ChaosNiagara.ERandomVelocityGenerationTypeEnum
enum class ERandomVelocityGenerationTypeEnum : uint8_t
{
    ChaosNiagara_RandomVelocityGenerationType_RandomDistribution = 0,
    ChaosNiagara_RandomVelocityGenerationType_RandomDistributionWithStreamers = 1,
    ChaosNiagara_RandomVelocityGenerationType_CollisionNormalBased = 2,
    ChaosNiagara_Max                               = 3
};


// Enum  ChaosNiagara.EDebugTypeEnum
enum class EDebugTypeEnum : uint8_t
{
    ChaosNiagara_DebugType_NoDebug                 = 0,
    ChaosNiagara_DebugType_ColorBySolver           = 1,
    ChaosNiagara_DebugType_ColorByParticleIndex    = 2,
    ChaosNiagara_Max                               = 3
};


// Enum  ChaosNiagara.EDataSourceTypeEnum
enum class EDataSourceTypeEnum : uint8_t
{
    ChaosNiagara_DataSourceType_Collision          = 0,
    ChaosNiagara_DataSourceType_Breaking           = 1,
    ChaosNiagara_DataSourceType_Trailing           = 2,
    ChaosNiagara_Max                               = 3
};


// Enum  ChaosNiagara.ELocationFilteringModeEnum
enum class ELocationFilteringModeEnum : uint8_t
{
    ChaosNiagara_LocationFilteringMode_Inclusive   = 0,
    ChaosNiagara_LocationFilteringMode_Exclusive   = 1,
    ChaosNiagara_Max                               = 2
};


// Enum  ChaosNiagara.ELocationXToSpawnEnum
enum class ELocationXToSpawnEnum : uint8_t
{
    ChaosNiagara_LocationXToSpawn_None             = 0,
    ChaosNiagara_LocationXToSpawn_Min              = 1,
    ChaosNiagara_LocationXToSpawn_Max              = 2,
    ChaosNiagara_LocationXToSpawn_MinMax           = 3,
    ChaosNiagara_Max                               = 4
};


// Enum  ChaosNiagara.ELocationYToSpawnEnum
enum class ELocationYToSpawnEnum : uint8_t
{
    ChaosNiagara_LocationYToSpawn_None             = 0,
    ChaosNiagara_LocationYToSpawn_Min              = 1,
    ChaosNiagara_LocationYToSpawn_Max              = 2,
    ChaosNiagara_LocationYToSpawn_MinMax           = 3,
    ChaosNiagara_Max                               = 4
};


// Enum  ChaosNiagara.ELocationZToSpawnEnum
enum class ELocationZToSpawnEnum : uint8_t
{
    ChaosNiagara_LocationZToSpawn_None             = 0,
    ChaosNiagara_LocationZToSpawn_Min              = 1,
    ChaosNiagara_LocationZToSpawn_Max              = 2,
    ChaosNiagara_LocationZToSpawn_MinMax           = 3,
    ChaosNiagara_Max                               = 4
};


// Enum  AppleProResMedia.EAppleProResEncoderCodec
enum class EAppleProResEncoderCodec : uint8_t
{
    ProRes_422Proxy                                = 0,
    ProRes_422LT                                   = 1,
    ProRes                                         = 2,
    ProRes_422HQ                                   = 3,
    ProRes                                         = 4,
    ProRes_4444XQ                                  = 5,
    ProRes_MAX                                     = 6
};


// Enum  AppleProResMedia.EAppleProResEncoderColorPrimaries
enum class EAppleProResEncoderColorPrimaries : uint8_t
{
    CD_SDREC601_525_60HZ                           = 0,
    CD_SDREC601_625_50HZ                           = 1,
    CD_HDREC709                                    = 2,
    CD_MAX                                         = 3
};


// Enum  AppleProResMedia.EAppleProResEncoderScanMode
enum class EAppleProResEncoderScanMode : uint8_t
{
    IM_PROGRESSIVE_SCAN                            = 0,
    IM_INTERLACED_TOP_FIELD_FIRST                  = 1,
    IM_INTERLATED_BOTTOM_FIRST_FIRST               = 2,
    IM_MAX                                         = 3
};


// Enum  AppleProResMedia.EAppleProResEncoderFormats
enum class EAppleProResEncoderFormats : uint8_t
{
    F_422HQ                                        = 0,
    F                                              = 1,
    F_422LT                                        = 2,
    F_422Proxy                                     = 3,
    F                                              = 4,
    F_4444XQ                                       = 5,
    F_MAX                                          = 6
};


// Enum  AppleProResMedia.EAppleProResEncoderColorDescription
enum class EAppleProResEncoderColorDescription : uint8_t
{
    CD_SDREC601_525_60HZ                           = 0,
    CD_SDREC601_625_50HZ                           = 1,
    CD_HDREC709                                    = 2,
    CD_MAX                                         = 3
};


// Enum  AppleProResMedia.EAppleProResEncoderScanType
enum class EAppleProResEncoderScanType : uint8_t
{
    IM_PROGRESSIVE_SCAN                            = 0,
    IM_INTERLACED_TOP_FIELD_FIRST                  = 1,
    IM_INTERLATED_BOTTOM_FIRST_FIRST               = 2,
    IM_MAX                                         = 3
};


// Enum  MovieRenderPipelineCore.EMoviePipelineEncodeQuality
enum class EMoviePipelineEncodeQuality : uint8_t
{
    Low                                            = 0,
    Medium                                         = 1,
    High                                           = 2,
    Epic                                           = 3,
    EMoviePipelineEncodeQuality_MAX                = 4
};


// Enum  MovieRenderPipelineCore.FCPXMLExportDataSource
enum class FCPXMLExportDataSource : uint8_t
{
    OutputMetadata                                 = 0,
    SequenceData                                   = 1,
    FCPXMLExportDataSource_MAX                     = 2
};


// Enum  MovieRenderPipelineCore.EMoviePipelineTextureStreamingMethod
enum class EMoviePipelineTextureStreamingMethod : uint8_t
{
    None                                           = 0,
    Disabled                                       = 1,
    FullyLoad                                      = 2,
    EMoviePipelineTextureStreamingMethod_MAX       = 3
};


// Enum  MovieRenderPipelineCore.EMovieRenderPipelineState
enum class EMovieRenderPipelineState : uint8_t
{
    Uninitialized                                  = 0,
    ProducingFrames                                = 1,
    Finalize                                       = 2,
    Export                                         = 3,
    Finished                                       = 4,
    EMovieRenderPipelineState_MAX                  = 5
};


// Enum  MovieRenderPipelineCore.EMovieRenderShotState
enum class EMovieRenderShotState : uint8_t
{
    Uninitialized                                  = 0,
    WarmingUp                                      = 1,
    MotionBlur                                     = 2,
    Rendering                                      = 3,
    Finished                                       = 4,
    EMovieRenderShotState_MAX                      = 5
};


// Enum  MovieRenderPipelineCore.EMoviePipelineShutterTiming
enum class EMoviePipelineShutterTiming : uint8_t
{
    FrameOpen                                      = 0,
    FrameCenter                                    = 1,
    FrameClose                                     = 2,
    EMoviePipelineShutterTiming_MAX                = 3
};


// Enum  MovieRenderPipelineRenderPasses.EEXRCompressionFormat
enum class EEXRCompressionFormat : uint8_t
{
    None                                           = 0,
    PIZ                                            = 1,
    ZIP                                            = 2,
    DWAA                                           = 3,
    DWAB                                           = 4,
    EEXRCompressionFormat_MAX                      = 5
};


// Enum  UdpMessaging.EUdpMessageFormat
enum class EUdpMessageFormat : uint8_t
{
    None                                           = 0,
    Json                                           = 1,
    TaggedProperty                                 = 2,
    CborPlatformEndianness                         = 3,
    CborStandardEndianness                         = 4,
    EUdpMessageFormat_MAX                          = 5
};


// Enum  ActorSequence.EActorSequenceObjectReferenceType
enum class EActorSequenceObjectReferenceType : uint8_t
{
    ContextActor                                   = 0,
    ExternalActor                                  = 1,
    Component                                      = 2,
    EActorSequenceObjectReferenceType_MAX          = 3
};


// Enum  AppleImageUtils.ETextureRotationDirection
enum class ETextureRotationDirection : uint8_t
{
    None                                           = 0,
    Left                                           = 1,
    Right                                          = 2,
    Down                                           = 3,
    LeftMirrored                                   = 4,
    RightMirrored                                  = 5,
    DownMirrored                                   = 6,
    UpMirrored                                     = 7,
    ETextureRotationDirection_MAX                  = 8
};


// Enum  AppleImageUtils.EAppleTextureType
enum class EAppleTextureType : uint8_t
{
    Unknown                                        = 0,
    Image                                          = 1,
    PixelBuffer                                    = 2,
    Surface                                        = 3,
    MetalTexture                                   = 4,
    EAppleTextureType_MAX                          = 5
};


// Enum  AssetTags.ECollectionScriptingShareType
enum class ECollectionScriptingShareType : uint8_t
{
    Local                                          = 0,
    Private                                        = 1,
    Shared                                         = 2,
    ECollectionScriptingShareType_MAX              = 3
};


// Enum  AudioModulation.ESoundModulationLFOShape
enum class ESoundModulationLFOShape : uint8_t
{
    Sine                                           = 0,
    UpSaw                                          = 1,
    DownSaw                                        = 2,
    Square                                         = 3,
    Triangle                                       = 4,
    Exponential                                    = 5,
    RandomSampleHold                               = 6,
    COUNT                                          = 7,
    ESoundModulationLFOShape_MAX                   = 8
};


// Enum  AudioModulation.ESoundModulatorCurve
enum class ESoundModulatorCurve : uint8_t
{
    Linear                                         = 0,
    Exp                                            = 1,
    Exp_Inverse                                    = 2,
    Log                                            = 3,
    Sin                                            = 4,
    SCurve                                         = 5,
    Shared                                         = 6,
    Custom                                         = 7,
    Count                                          = 8,
    ESoundModulatorCurve_MAX                       = 9
};


// Enum  HoudiniEngineRuntime.EHoudiniStaticMeshMethod
enum class EHoudiniStaticMeshMethod : uint8_t
{
    RawMesh                                        = 0,
    FMeshDescription                               = 1,
    UHoudiniStaticMesh                             = 2,
    EHoudiniStaticMeshMethod_MAX                   = 3
};


// Enum  HoudiniEngineRuntime.EHoudiniAssetState
enum class EHoudiniAssetState : uint8_t
{
    NeedInstantiation                              = 0,
    NewHDA                                         = 1,
    PreInstantiation                               = 2,
    Instantiating                                  = 3,
    PreCook                                        = 4,
    Cooking                                        = 5,
    PostCook                                       = 6,
    PreProcess                                     = 7,
    Processing                                     = 8,
    None                                           = 9,
    NeedRebuild                                    = 10,
    NeedDelete                                     = 11,
    Deleting                                       = 12,
    ProcessTemplate                                = 13,
    EHoudiniAssetState_MAX                         = 14
};


// Enum  HoudiniEngineRuntime.EHoudiniAssetStateResult
enum class EHoudiniAssetStateResult : uint8_t
{
    None                                           = 0,
    Working                                        = 1,
    Success                                        = 2,
    FinishedWithError                              = 3,
    FinishedWithFatalError                         = 4,
    Aborted                                        = 5,
    EHoudiniAssetStateResult_MAX                   = 6
};


// Enum  HoudiniEngineRuntime.EHoudiniRampInterpolationType
enum class EHoudiniRampInterpolationType : uint32_t
{
    InValid                                        = 4294967295,
    CONSTANT                                       = 0,
    LINEAR                                         = 1,
    CATMULL_ROM                                    = 2,
    MONOTONE_CUBIC                                 = 3,
    BEZIER                                         = 4,
    BSPLINE                                        = 5,
    HERMITE                                        = 6,
    EHoudiniRampInterpolationType_MAX              = 7
};


// Enum  HoudiniEngineRuntime.EHoudiniLandscapeOutputBakeType
enum class EHoudiniLandscapeOutputBakeType : uint8_t
{
    Detachment                                     = 0,
    BakeToImage                                    = 1,
    BakeToWorld                                    = 2,
    InValid                                        = 3,
    EHoudiniLandscapeOutputBakeType_MAX            = 4
};


// Enum  HoudiniEngineRuntime.EHoudiniInputType
enum class EHoudiniInputType : uint8_t
{
    Invalid                                        = 0,
    Geometry                                       = 1,
    Curve                                          = 2,
    Asset                                          = 3,
    Landscape                                      = 4,
    World                                          = 5,
    Skeletal                                       = 6,
    GeometryCollection                             = 7,
    EHoudiniInputType_MAX                          = 8
};


// Enum  HoudiniEngineRuntime.EHoudiniOutputType
enum class EHoudiniOutputType : uint8_t
{
    Invalid                                        = 0,
    Mesh                                           = 1,
    Instancer                                      = 2,
    Landscape                                      = 3,
    Curve                                          = 4,
    Skeletal                                       = 5,
    GeometryCollection                             = 6,
    DataTable                                      = 7,
    EHoudiniOutputType_MAX                         = 8
};


// Enum  HoudiniEngineRuntime.EHoudiniCurveType
enum class EHoudiniCurveType : uint32_t
{
    Invalid                                        = 4294967295,
    Polygon                                        = 0,
    Nurbs                                          = 1,
    Bezier                                         = 2,
    Points                                         = 3,
    EHoudiniCurveType_MAX                          = 4
};


// Enum  HoudiniEngineRuntime.EHoudiniCurveMethod
enum class EHoudiniCurveMethod : uint32_t
{
    Invalid                                        = 4294967295,
    CVs                                            = 0,
    Breakpoints                                    = 1,
    Freehand                                       = 2,
    EHoudiniCurveMethod_MAX                        = 3
};


// Enum  HoudiniEngineRuntime.EHoudiniCurveBreakpointParameterization
enum class EHoudiniCurveBreakpointParameterization : uint32_t
{
    Invalid                                        = 4294967295,
    Uniform                                        = 0,
    Chord                                          = 1,
    Centripetal                                    = 2,
    EHoudiniCurveBreakpointParameterization_MAX    = 3
};


// Enum  HoudiniEngineRuntime.EHoudiniLandscapeExportType
enum class EHoudiniLandscapeExportType : uint8_t
{
    Heightfield                                    = 0,
    Mesh                                           = 1,
    Points                                         = 2,
    EHoudiniLandscapeExportType_MAX                = 3
};


// Enum  HoudiniEngineRuntime.EHoudiniProxyRefineResult
enum class EHoudiniProxyRefineResult : uint8_t
{
    Invalid                                        = 0,
    Failed                                         = 1,
    Success                                        = 2,
    Skipped                                        = 3,
    EHoudiniProxyRefineResult_MAX                  = 4
};


// Enum  HoudiniEngineRuntime.EHoudiniProxyRefineRequestResult
enum class EHoudiniProxyRefineRequestResult : uint8_t
{
    Invalid                                        = 0,
    None                                           = 1,
    PendingCooks                                   = 2,
    Refined                                        = 3,
    EHoudiniProxyRefineRequestResult_MAX           = 4
};


// Enum  HoudiniEngineRuntime.EAttribStorageType
enum class EAttribStorageType : uint32_t
{
    Invalid                                        = 4294967295,
    INT                                            = 0,
    INT64                                          = 1,
    FLOAT                                          = 2,
    FLOAT64                                        = 3,
    STRING                                         = 4,
    EAttribStorageType_MAX                         = 5
};


// Enum  HoudiniEngineRuntime.EAttribOwner
enum class EAttribOwner : uint32_t
{
    Invalid                                        = 4294967295,
    Vertex                                         = 0,
    Point                                          = 1,
    Prim                                           = 2,
    Detail                                         = 3,
    EAttribOwner_MAX                               = 4
};


// Enum  HoudiniEngineRuntime.EHoudiniGeoType
enum class EHoudiniGeoType : uint8_t
{
    Invalid                                        = 0,
    Default                                        = 1,
    Intermediate                                   = 2,
    Input                                          = 3,
    Curve                                          = 4,
    EHoudiniGeoType_MAX                            = 5
};


// Enum  HoudiniEngineRuntime.EHoudiniPartType
enum class EHoudiniPartType : uint8_t
{
    Invalid                                        = 0,
    Mesh                                           = 1,
    Instancer                                      = 2,
    Curve                                          = 3,
    Volume                                         = 4,
    DataTable                                      = 5,
    EHoudiniPartType_MAX                           = 6
};


// Enum  HoudiniEngineRuntime.EHoudiniInstancerType
enum class EHoudiniInstancerType : uint8_t
{
    Invalid                                        = 0,
    ObjectInstancer                                = 1,
    PackedPrimitive                                = 2,
    AttributeInstancer                             = 3,
    OldSchoolAttributeInstancer                    = 4,
    GeometryCollection                             = 5,
    EHoudiniInstancerType_MAX                      = 6
};


// Enum  HoudiniEngineRuntime.EXformParameter
enum class EXformParameter : uint8_t
{
    TX                                             = 0,
    TY                                             = 1,
    TZ                                             = 2,
    RX                                             = 3,
    RY                                             = 4,
    RZ                                             = 5,
    SX                                             = 6,
    SY                                             = 7,
    SZ                                             = 8,
    COUNT                                          = 9,
    EXformParameter_MAX                            = 10
};


// Enum  HoudiniEngineRuntime.EHoudiniHandleType
enum class EHoudiniHandleType : uint8_t
{
    Xform                                          = 0,
    Bounder                                        = 1,
    Unsupported                                    = 2,
    EHoudiniHandleType_MAX                         = 3
};


// Enum  HoudiniEngineRuntime.EHoudiniInputObjectType
enum class EHoudiniInputObjectType : uint8_t
{
    Invalid                                        = 0,
    Object                                         = 1,
    StaticMesh                                     = 2,
    SkeletalMesh                                   = 3,
    SceneComponent                                 = 4,
    StaticMeshComponent                            = 5,
    InstancedStaticMeshComponent                   = 6,
    SplineComponent                                = 7,
    HoudiniSplineComponent                         = 8,
    HoudiniAssetComponent                          = 9,
    Actor                                          = 10,
    Landscape                                      = 11,
    Brush                                          = 12,
    CameraComponent                                = 13,
    DataTable                                      = 14,
    HoudiniAssetActor                              = 15,
    FoliageType_InstancedStaticMesh                = 16,
    GeometryCollection                             = 17,
    GeometryCollectionComponent                    = 18,
    GeometryCollectionActor_Deprecated             = 19,
    SkeletalMeshComponent                          = 20,
    Blueprint                                      = 21,
    EHoudiniInputObjectType_MAX                    = 22
};


// Enum  HoudiniEngineRuntime.EHoudiniXformType
enum class EHoudiniXformType : uint8_t
{
    None                                           = 0,
    IntoThisObject                                 = 1,
    Auto                                           = 2,
    EHoudiniXformType_MAX                          = 3
};


// Enum  HoudiniEngineRuntime.EHoudiniCurveOutputType
enum class EHoudiniCurveOutputType : uint8_t
{
    UnrealSpline                                   = 0,
    HoudiniSpline                                  = 1,
    EHoudiniCurveOutputType_MAX                    = 2
};


// Enum  HoudiniEngineRuntime.EHoudiniParameterType
enum class EHoudiniParameterType : uint8_t
{
    Invalid                                        = 0,
    Button                                         = 1,
    ButtonStrip                                    = 2,
    Color                                          = 3,
    ColorRamp                                      = 4,
    File                                           = 5,
    FileDir                                        = 6,
    FileGeo                                        = 7,
    FileImage                                      = 8,
    Float                                          = 9,
    FloatRamp                                      = 10,
    Folder                                         = 11,
    FolderList                                     = 12,
    Input                                          = 13,
    Int                                            = 14,
    IntChoice                                      = 15,
    Label                                          = 16,
    MultiParm                                      = 17,
    Separator                                      = 18,
    String                                         = 19,
    StringChoice                                   = 20,
    StringAssetRef                                 = 21,
    Toggle                                         = 22,
    EHoudiniParameterType_MAX                      = 23
};


// Enum  HoudiniEngineRuntime.EHoudiniFolderParameterType
enum class EHoudiniFolderParameterType : uint8_t
{
    Invalid                                        = 0,
    Collapsible                                    = 1,
    Simple                                         = 2,
    Tabs                                           = 3,
    Radio                                          = 4,
    Other                                          = 5,
    EHoudiniFolderParameterType_MAX                = 6
};


// Enum  HoudiniEngineRuntime.EHoudiniMultiParmModificationType
enum class EHoudiniMultiParmModificationType : uint8_t
{
    None                                           = 0,
    Inserted                                       = 1,
    Removed                                        = 2,
    Modified                                       = 3,
    EHoudiniMultiParmModificationType_MAX          = 4
};


// Enum  HoudiniEngineRuntime.EHoudiniRampPointConstructStatus
enum class EHoudiniRampPointConstructStatus : uint8_t
{
    None                                           = 0,
    INITIALIZED                                    = 1,
    POSITION_INSERTED                              = 2,
    VALUE_INSERTED                                 = 3,
    INTERPTYPE_INSERTED                            = 4,
    EHoudiniRampPointConstructStatus_MAX           = 5
};


// Enum  HoudiniEngineRuntime.EPDGLinkState
enum class EPDGLinkState : uint8_t
{
    Inactive                                       = 0,
    Linking                                        = 1,
    Linked                                         = 2,
    Error_Not_Linked                               = 3,
    EPDGLinkState_MAX                              = 4
};


// Enum  HoudiniEngineRuntime.EPDGNodeState
enum class EPDGNodeState : uint8_t
{
    None                                           = 0,
    Dirtied                                        = 1,
    Dirtying                                       = 2,
    Cooking                                        = 3,
    Cook_Complete                                  = 4,
    Cook_Failed                                    = 5,
    EPDGNodeState_MAX                              = 6
};


// Enum  HoudiniEngineRuntime.EPDGWorkResultState
enum class EPDGWorkResultState : uint8_t
{
    None                                           = 0,
    ToLoad                                         = 1,
    Loading                                        = 2,
    Loaded                                         = 3,
    ToDelete                                       = 4,
    Deleting                                       = 5,
    Deleted                                        = 6,
    NotLoaded                                      = 7,
    EPDGWorkResultState_MAX                        = 8
};


// Enum  HoudiniEngineRuntime.EHoudiniRuntimeSettingsSessionType
enum class EHoudiniRuntimeSettingsSessionType : uint8_t
{
    HRSST_InProcess                                = 0,
    HRSST_Socket                                   = 1,
    HRSST_NamedPipe                                = 2,
    HRSST_None                                     = 3,
    HRSST_MAX                                      = 4
};


// Enum  HoudiniEngineRuntime.EHoudiniRuntimeSettingsRecomputeFlag
enum class EHoudiniRuntimeSettingsRecomputeFlag : uint8_t
{
    HRSRF_Always                                   = 0,
    HRSRF_OnlyIfMissing                            = 1,
    HRSRF_Never                                    = 2,
    HRSRF_MAX                                      = 3
};


// Enum  HoudiniEngineRuntime.EHoudiniExecutableType
enum class EHoudiniExecutableType : uint8_t
{
    HRSHE_Houdini                                  = 0,
    HRSHE_HoudiniFX                                = 1,
    HRSHE_HoudiniCore                              = 2,
    HRSHE_HoudiniIndie                             = 3,
    HRSHE_MAX                                      = 4
};


// Enum  LocationServicesBPLibrary.ELocationAccuracy
enum class ELocationAccuracy : uint8_t
{
    LA_ThreeKilometers                             = 0,
    LA_OneKilometer                                = 1,
    LA_HundredMeters                               = 2,
    LA_TenMeters                                   = 3,
    LA_Best                                        = 4,
    LA_Navigation                                  = 5,
    LA_MAX                                         = 6
};


// Enum  CoreUObject.ELifetimeCondition
enum class ELifetimeCondition : uint8_t
{
    COND_None                                      = 0,
    COND_InitialOnly                               = 1,
    COND_OwnerOnly                                 = 2,
    COND_SkipOwner                                 = 3,
    COND_SimulatedOnly                             = 4,
    COND_AutonomousOnly                            = 5,
    COND_SimulatedOrPhysics                        = 6,
    COND_InitialOrOwner                            = 7,
    COND_Custom                                    = 8,
    COND_ReplayOrOwner                             = 9,
    COND_ReplayOnly                                = 10,
    COND_SimulatedOnlyNoReplay                     = 11,
    COND_SimulatedOrPhysicsNoReplay                = 12,
    COND_SkipReplay                                = 13,
    COND_Never                                     = 15,
    COND_Max                                       = 16
};


// Enum  CoreUObject.ESearchCase
enum class ESearchCase : uint8_t
{
    CaseSensitive                                  = 0,
    IgnoreCase                                     = 1,
    ESearchCase_MAX                                = 2
};


// Enum  CoreUObject.ESearchDir
enum class ESearchDir : uint8_t
{
    FromStart                                      = 0,
    FromEnd                                        = 1,
    ESearchDir_MAX                                 = 2
};


// Enum  CoreUObject.ELogTimes
enum class ELogTimes : uint8_t
{
    None                                           = 0,
    UTC                                            = 1,
    SinceGStartTime                                = 2,
    Local                                          = 3,
    ELogTimes_MAX                                  = 4
};


// Enum  CoreUObject.EAxis
enum class EAxis : uint8_t
{
    None                                           = 0,
    X                                              = 1,
    Y                                              = 2,
    Z                                              = 3,
    EAxis_MAX                                      = 4
};


// Enum  CoreUObject.EPixelFormat
enum class EPixelFormat : uint8_t
{
    PF_Unknown                                     = 0,
    PF_A32B32G32R32F                               = 1,
    PF_B8G8R8A8                                    = 2,
    PF_G8                                          = 3,
    PF_G16                                         = 4,
    PF_DXT1                                        = 5,
    PF_DXT3                                        = 6,
    PF_DXT5                                        = 7,
    PF_UYVY                                        = 8,
    PF_FloatRGB                                    = 9,
    PF_FloatRGBA                                   = 10,
    PF_DepthStencil                                = 11,
    PF_ShadowDepth                                 = 12,
    PF_R32_FLOAT                                   = 13,
    PF_G16R16                                      = 14,
    PF_G16R16F                                     = 15,
    PF_G16R16F_FILTER                              = 16,
    PF_G32R32F                                     = 17,
    PF_A2B10G10R10                                 = 18,
    PF_A16B16G16R16                                = 19,
    PF_D24                                         = 20,
    PF_R16F                                        = 21,
    PF_R16F_FILTER                                 = 22,
    PF_BC5                                         = 23,
    PF_V8U8                                        = 24,
    PF_A1                                          = 25,
    PF_FloatR11G11B10                              = 26,
    PF_A8                                          = 27,
    PF_R32_UINT                                    = 28,
    PF_R32_SINT                                    = 29,
    PF_PVRTC2                                      = 30,
    PF_PVRTC4                                      = 31,
    PF_R16_UINT                                    = 32,
    PF_R16_SINT                                    = 33,
    PF_R16G16B16A16_UINT                           = 34,
    PF_R16G16B16A16_SINT                           = 35,
    PF_R5G6B5_UNORM                                = 36,
    PF_R8G8B8A8                                    = 37,
    PF_A8R8G8B8                                    = 38,
    PF_BC4                                         = 39,
    PF_R8G8                                        = 40,
    PF_ATC_RGB                                     = 41,
    PF_ATC_RGBA_E                                  = 42,
    PF_ATC_RGBA_I                                  = 43,
    PF_X24_G8                                      = 44,
    PF_ETC1                                        = 45,
    PF_ETC2_RGB                                    = 46,
    PF_ETC2_RGBA                                   = 47,
    PF_R32G32B32A32_UINT                           = 48,
    PF_R16G16_UINT                                 = 49,
    PF_ASTC_4x4                                    = 50,
    PF_ASTC_6x6                                    = 51,
    PF_ASTC_8x8                                    = 52,
    PF_ASTC_10x10                                  = 53,
    PF_ASTC_12x12                                  = 54,
    PF_BC6H                                        = 55,
    PF_BC7                                         = 56,
    PF_R8_UINT                                     = 57,
    PF_L8                                          = 58,
    PF_XGXR8                                       = 59,
    PF_R8G8B8A8_UINT                               = 60,
    PF_R8G8B8A8_SNORM                              = 61,
    PF_R16G16B16A16_UNORM                          = 62,
    PF_R16G16B16A16_SNORM                          = 63,
    PF_PLATFORM_HDR                                = 64,
    PF_PLATFORM_HDR                                = 65,
    PF_PLATFORM_HDR                                = 66,
    PF_NV12                                        = 67,
    PF_R32G32_UINT                                 = 68,
    PF_ETC2_R11_EAC                                = 69,
    PF_ETC2_RG11_EAC                               = 70,
    PF_R8                                          = 71,
    PF_B5G5R5A1_UNORM                              = 72,
    PF_G16R16_SNORM                                = 78,
    PF_R8G8_UINT                                   = 79,
    PF_R32G32B32_UINT                              = 80,
    PF_R32G32B32_SINT                              = 81,
    PF_R32G32B32F                                  = 82,
    PF_R8_SINT                                     = 83,
    PF_R64_UINT                                    = 84,
    PF_MAX                                         = 85
};


// Enum  CoreUObject.EUnit
enum class EUnit : uint8_t
{
    Micrometers                                    = 0,
    Millimeters                                    = 1,
    Centimeters                                    = 2,
    Meters                                         = 3,
    Kilometers                                     = 4,
    Inches                                         = 5,
    Feet                                           = 6,
    Yards                                          = 7,
    Miles                                          = 8,
    Lightyears                                     = 9,
    Degrees                                        = 10,
    Radians                                        = 11,
    CentimetersPerSecond                           = 12,
    MetersPerSecond                                = 13,
    KilometersPerHour                              = 14,
    MilesPerHour                                   = 15,
    Celsius                                        = 16,
    Farenheit                                      = 17,
    Kelvin                                         = 18,
    Micrograms                                     = 19,
    Milligrams                                     = 20,
    Grams                                          = 21,
    Kilograms                                      = 22,
    MetricTons                                     = 23,
    Ounces                                         = 24,
    Pounds                                         = 25,
    Stones                                         = 26,
    Newtons                                        = 27,
    PoundsForce                                    = 28,
    KilogramsForce                                 = 29,
    Hertz                                          = 30,
    Kilohertz                                      = 31,
    Megahertz                                      = 32,
    Gigahertz                                      = 33,
    RevolutionsPerMinute                           = 34,
    Bytes                                          = 35,
    Kilobytes                                      = 36,
    Megabytes                                      = 37,
    Gigabytes                                      = 38,
    Terabytes                                      = 39,
    Lumens                                         = 40,
    Milliseconds                                   = 44,
    Seconds                                        = 45,
    Minutes                                        = 46,
    Hours                                          = 47,
    Days                                           = 48,
    Months                                         = 49,
    Years                                          = 50,
    Multiplier                                     = 53,
    Percentage                                     = 52,
    Unspecified                                    = 54,
    EUnit_MAX                                      = 55
};


// Enum  CoreUObject.EPropertyAccessChangeNotifyMode
enum class EPropertyAccessChangeNotifyMode : uint8_t
{
    Default                                        = 0,
    Never                                          = 1,
    Always                                         = 2,
    EPropertyAccessChangeNotifyMode_MAX            = 3
};


// Enum  CoreUObject.EAppReturnType
enum class EAppReturnType : uint8_t
{
    No                                             = 0,
    Yes                                            = 1,
    YesAll                                         = 2,
    NoAll                                          = 3,
    Cancel                                         = 4,
    Ok                                             = 5,
    Retry                                          = 6,
    Continue                                       = 7,
    EAppReturnType_MAX                             = 8
};


// Enum  CoreUObject.EAppMsgType
enum class EAppMsgType : uint8_t
{
    Ok                                             = 0,
    YesNo                                          = 1,
    OkCancel                                       = 2,
    YesNoCancel                                    = 3,
    CancelRetryContinue                            = 4,
    YesNoYesAllNoAll                               = 5,
    YesNoYesAllNoAllCancel                         = 6,
    YesNoYesAll                                    = 7,
    EAppMsgType_MAX                                = 8
};


// Enum  CoreUObject.EDataValidationResult
enum class EDataValidationResult : uint8_t
{
    Invalid                                        = 0,
    Valid                                          = 1,
    NotValidated                                   = 2,
    EDataValidationResult_MAX                      = 3
};


// Enum  AnimationCore.EConstraintType
enum class EConstraintType : uint8_t
{
    Transform                                      = 0,
    Aim                                            = 1,
    MAX                                            = 2
};


// Enum  AnimationCore.ETransformConstraintType
enum class ETransformConstraintType : uint8_t
{
    Translation                                    = 0,
    Rotation                                       = 1,
    Scale                                          = 2,
    Parent                                         = 3,
    ETransformConstraintType_MAX                   = 4
};


// Enum  AnimationCore.EEulerRotationOrder
enum class EEulerRotationOrder : uint8_t
{
    XYZ                                            = 0,
    XZY                                            = 1,
    YXZ                                            = 2,
    YZX                                            = 3,
    ZXY                                            = 4,
    ZYX                                            = 5,
    EEulerRotationOrder_MAX                        = 6
};


// Enum  InputCore.EConsoleForGamepadLabels
enum class EConsoleForGamepadLabels : uint8_t
{
    None                                           = 0,
    XBoxOne                                        = 1,
    PS4                                            = 2,
    EConsoleForGamepadLabels_MAX                   = 3
};


// Enum  InputCore.ETouchType
enum class ETouchType : uint8_t
{
    Began                                          = 0,
    Moved                                          = 1,
    Stationary                                     = 2,
    ForceChanged                                   = 3,
    FirstMove                                      = 4,
    Ended                                          = 5,
    NumTypes                                       = 6,
    ETouchType_MAX                                 = 7
};


// Enum  SlateCore.EFontHinting
enum class EFontHinting : uint8_t
{
    Default                                        = 0,
    Auto                                           = 1,
    AutoLight                                      = 2,
    Monochrome                                     = 3,
    None                                           = 4,
    EFontHinting_MAX                               = 5
};


// Enum  SlateCore.EFontLoadingPolicy
enum class EFontLoadingPolicy : uint8_t
{
    LazyLoad                                       = 0,
    Stream                                         = 1,
    Inline                                         = 2,
    EFontLoadingPolicy_MAX                         = 3
};


// Enum  SlateCore.EFontLayoutMethod
enum class EFontLayoutMethod : uint8_t
{
    Metrics                                        = 0,
    BoundingBox                                    = 1,
    EFontLayoutMethod_MAX                          = 2
};


// Enum  SlateCore.EFocusCause
enum class EFocusCause : uint8_t
{
    Mouse                                          = 0,
    Navigation                                     = 1,
    SetDirectly                                    = 2,
    Cleared                                        = 3,
    OtherWidgetLostFocus                           = 4,
    WindowActivate                                 = 5,
    EFocusCause_MAX                                = 6
};


// Enum  SlateCore.ESlateDebuggingInputEvent
enum class ESlateDebuggingInputEvent : uint8_t
{
    MouseMove                                      = 0,
    MouseEnter                                     = 1,
    MouseLeave                                     = 2,
    PreviewMouseButtonDown                         = 3,
    MouseButtonDown                                = 4,
    MouseButtonUp                                  = 5,
    MouseButtonDoubleClick                         = 6,
    MouseWheel                                     = 7,
    TouchStart                                     = 8,
    TouchEnd                                       = 9,
    TouchForceChanged                              = 10,
    TouchFirstMove                                 = 11,
    TouchMoved                                     = 12,
    DragDetected                                   = 13,
    DragEnter                                      = 14,
    DragLeave                                      = 15,
    DragOver                                       = 16,
    DragDrop                                       = 17,
    DropMessage                                    = 18,
    PreviewKeyDown                                 = 19,
    KeyDown                                        = 20,
    KeyUp                                          = 21,
    KeyChar                                        = 22,
    AnalogInput                                    = 23,
    TouchGesture                                   = 24,
    MotionDetected                                 = 25,
    MAX                                            = 26
};


// Enum  SlateCore.ESlateDebuggingStateChangeEvent
enum class ESlateDebuggingStateChangeEvent : uint8_t
{
    MouseCaptureGained                             = 0,
    MouseCaptureLost                               = 1,
    ESlateDebuggingStateChangeEvent_MAX            = 2
};


// Enum  SlateCore.ESlateDebuggingNavigationMethod
enum class ESlateDebuggingNavigationMethod : uint8_t
{
    Unknown                                        = 0,
    Explicit                                       = 1,
    CustomDelegateBound                            = 2,
    CustomDelegateUnbound                          = 3,
    NextOrPrevious                                 = 4,
    HitTestGrid                                    = 5,
    ESlateDebuggingNavigationMethod_MAX            = 6
};


// Enum  SlateCore.ESlateDebuggingFocusEvent
enum class ESlateDebuggingFocusEvent : uint8_t
{
    FocusChanging                                  = 0,
    FocusLost                                      = 1,
    FocusReceived                                  = 2,
    MAX                                            = 3
};


// Enum  SlateCore.EButtonClickMethod
enum class EButtonClickMethod : uint8_t
{
    DownAndUp                                      = 0,
    MouseDown                                      = 1,
    MouseUp                                        = 2,
    PreciseClick                                   = 3,
    EButtonClickMethod_MAX                         = 4
};


// Enum  SlateCore.EButtonTouchMethod
enum class EButtonTouchMethod : uint8_t
{
    DownAndUp                                      = 0,
    Down                                           = 1,
    PreciseTap                                     = 2,
    EButtonTouchMethod_MAX                         = 3
};


// Enum  SlateCore.EButtonPressMethod
enum class EButtonPressMethod : uint8_t
{
    DownAndUp                                      = 0,
    ButtonPress                                    = 1,
    ButtonRelease                                  = 2,
    EButtonPressMethod_MAX                         = 3
};


// Enum  SlateCore.EUINavigationAction
enum class EUINavigationAction : uint8_t
{
    Accept                                         = 0,
    Back                                           = 1,
    Num                                            = 2,
    Invalid                                        = 3,
    EUINavigationAction_MAX                        = 4
};


// Enum  SlateCore.ENavigationSource
enum class ENavigationSource : uint8_t
{
    FocusedWidget                                  = 0,
    WidgetUnderCursor                              = 1,
    ENavigationSource_MAX                          = 2
};


// Enum  SlateCore.ENavigationGenesis
enum class ENavigationGenesis : uint8_t
{
    Keyboard                                       = 0,
    Controller                                     = 1,
    User                                           = 2,
    ENavigationGenesis_MAX                         = 3
};


// Enum  SlateCore.EScrollDirection
enum class EScrollDirection : uint8_t
{
    Scroll_Down                                    = 0,
    Scroll_Up                                      = 1,
    Scroll_MAX                                     = 2
};


// Enum  SlateCore.EConsumeMouseWheel
enum class EConsumeMouseWheel : uint8_t
{
    WhenScrollingPossible                          = 0,
    Always                                         = 1,
    Never                                          = 2,
    EConsumeMouseWheel_MAX                         = 3
};


// Enum  SlateCore.ESlateParentWindowSearchMethod
enum class ESlateParentWindowSearchMethod : uint8_t
{
    ActiveWindow                                   = 0,
    MainWindow                                     = 1,
    ESlateParentWindowSearchMethod_MAX             = 2
};


// Enum  SlateCore.ESlateCheckBoxType
enum class ESlateCheckBoxType : uint8_t
{
    CheckBox                                       = 0,
    ToggleButton                                   = 1,
    ESlateCheckBoxType_MAX                         = 2
};


// Enum  SlateCore.EStyleColor
enum class EStyleColor : uint8_t
{
    Black                                          = 0,
    Background                                     = 1,
    Title                                          = 2,
    WindowBorder                                   = 3,
    Foldout                                        = 4,
    Input                                          = 5,
    InputOutline                                   = 6,
    Recessed                                       = 7,
    Panel                                          = 8,
    Header                                         = 9,
    Dropdown                                       = 10,
    DropdownOutline                                = 11,
    Hover                                          = 12,
    Hover2                                         = 13,
    White                                          = 14,
    White25                                        = 15,
    Highlight                                      = 16,
    Primary                                        = 17,
    PrimaryHover                                   = 18,
    PrimaryPress                                   = 19,
    Secondary                                      = 20,
    Foreground                                     = 21,
    ForegroundHover                                = 22,
    ForegroundInverted                             = 23,
    ForegroundHeader                               = 24,
    Select                                         = 25,
    SelectInactive                                 = 26,
    SelectParent                                   = 27,
    SelectHover                                    = 28,
    Notifications                                  = 29,
    AccentBlue                                     = 30,
    AccentPurple                                   = 31,
    AccentPink                                     = 32,
    AccentRed                                      = 33,
    AccentOrange                                   = 34,
    AccentYellow                                   = 35,
    AccentGreen                                    = 36,
    AccentBrown                                    = 37,
    AccentBlack                                    = 38,
    AccentGray                                     = 39,
    AccentWhite                                    = 40,
    AccentFolder                                   = 41,
    Warning                                        = 42,
    Error                                          = 43,
    Success                                        = 44,
    User1                                          = 45,
    User2                                          = 46,
    User3                                          = 47,
    User4                                          = 48,
    User5                                          = 49,
    User6                                          = 50,
    User7                                          = 51,
    User8                                          = 52,
    User9                                          = 53,
    User10                                         = 54,
    User11                                         = 55,
    User12                                         = 56,
    User13                                         = 57,
    User14                                         = 58,
    User15                                         = 59,
    User16                                         = 60,
    MAX                                            = 61
};


// Enum  EmbarkPerformanceTracking.EGameThreadFrameBudget
enum class EGameThreadFrameBudget : uint8_t
{
    InputSampling                                  = 0,
    NetworkReplication                             = 1,
    StateInterpolation                             = 2,
    PrePhysics                                     = 3,
    StartPhysics                                   = 4,
    DuringPhysics                                  = 5,
    EndPhysics                                     = 6,
    PostPhysics                                    = 7,
    PostUpdateWork                                 = 8,
    LastDemotable                                  = 9,
    SlateUI                                        = 10,
    Count                                          = 11,
    EGameThreadFrameBudget_MAX                     = 12
};


// Enum  Slate.ESelectionMode
enum class ESelectionMode : uint8_t
{
    None                                           = 0,
    Single                                         = 1,
    SingleToggle                                   = 2,
    Multi                                          = 3,
    ESelectionMode_MAX                             = 4
};


// Enum  Slate.ETableViewMode
enum class ETableViewMode : uint8_t
{
    List                                           = 0,
    Tile                                           = 1,
    Tree                                           = 2,
    ETableViewMode_MAX                             = 3
};


// Enum  Slate.EMultiBoxType
enum class EMultiBoxType : uint8_t
{
    MenuBar                                        = 0,
    ToolBar                                        = 1,
    VerticalToolBar                                = 2,
    SlimHorizontalToolBar                          = 3,
    UniformToolBar                                 = 4,
    Menu                                           = 5,
    ButtonRow                                      = 6,
    EMultiBoxType_MAX                              = 7
};


// Enum  Slate.EMultiBlockType
enum class EMultiBlockType : uint8_t
{
    None                                           = 0,
    ButtonRow                                      = 1,
    EditableText                                   = 2,
    Heading                                        = 3,
    MenuEntry                                      = 4,
    Separator                                      = 5,
    ToolBarButton                                  = 6,
    ToolBarComboButton                             = 7,
    Widget                                         = 8,
    EMultiBlockType_MAX                            = 9
};


// Enum  Slate.EProgressBarFillType
enum class EProgressBarFillType : uint8_t
{
    LeftToRight                                    = 0,
    RightToLeft                                    = 1,
    FillFromCenter                                 = 2,
    FillFromCenterHorizontal                       = 3,
    FillFromCenterVertical                         = 4,
    TopToBottom                                    = 5,
    BottomToTop                                    = 6,
    EProgressBarFillType_MAX                       = 7
};


// Enum  Slate.EProgressBarFillStyle
enum class EProgressBarFillStyle : uint8_t
{
    Mask                                           = 0,
    Scale                                          = 1,
    EProgressBarFillStyle_MAX                      = 2
};


// Enum  Slate.EStretchDirection
enum class EStretchDirection : uint8_t
{
    Both                                           = 0,
    DownOnly                                       = 1,
    UpOnly                                         = 2,
    EStretchDirection_MAX                          = 3
};


// Enum  Slate.EStretch
enum class EStretch : uint8_t
{
    None                                           = 0,
    Fill                                           = 1,
    ScaleToFit                                     = 2,
    ScaleToFitX                                    = 3,
    ScaleToFitY                                    = 4,
    ScaleToFill                                    = 5,
    ScaleBySafeZone                                = 6,
    UserSpecified                                  = 7,
    EStretch_MAX                                   = 8
};


// Enum  Slate.EDescendantScrollDestination
enum class EDescendantScrollDestination : uint8_t
{
    IntoView                                       = 0,
    TopOrLeft                                      = 1,
    Center                                         = 2,
    BottomOrRight                                  = 3,
    EDescendantScrollDestination_MAX               = 4
};


// Enum  Slate.EScrollWhenFocusChanges
enum class EScrollWhenFocusChanges : uint8_t
{
    NoScroll                                       = 0,
    InstantScroll                                  = 1,
    AnimatedScroll                                 = 2,
    EScrollWhenFocusChanges_MAX                    = 3
};


// Enum  Slate.EListItemAlignment
enum class EListItemAlignment : uint8_t
{
    EvenlyDistributed                              = 0,
    EvenlySize                                     = 1,
    EvenlyWide                                     = 2,
    LeftAligned                                    = 3,
    RightAligned                                   = 4,
    CenterAligned                                  = 5,
    Fill                                           = 6,
    EListItemAlignment_MAX                         = 7
};


// Enum  Slate.ECustomizedToolMenuVisibility
enum class ECustomizedToolMenuVisibility : uint8_t
{
    None                                           = 0,
    Visible                                        = 1,
    Hidden                                         = 2,
    ECustomizedToolMenuVisibility_MAX              = 3
};


// Enum  Slate.EUserInterfaceActionType
enum class EUserInterfaceActionType : uint8_t
{
    None                                           = 0,
    Button                                         = 1,
    ToggleButton                                   = 2,
    RadioButton                                    = 3,
    Check                                          = 4,
    CollapsedButton                                = 5,
    EUserInterfaceActionType_MAX                   = 6
};


// Enum  Slate.EMultipleKeyBindingIndex
enum class EMultipleKeyBindingIndex : uint8_t
{
    Primary                                        = 0,
    Secondary                                      = 1,
    NumChords                                      = 2,
    EMultipleKeyBindingIndex_MAX                   = 3
};


// Enum  ImageWriteQueue.EDesiredImageFormat
enum class EDesiredImageFormat : uint8_t
{
    PNG                                            = 0,
    JPG                                            = 1,
    BMP                                            = 2,
    EXR                                            = 3,
    EDesiredImageFormat_MAX                        = 4
};


// Enum  EmbarkRenderingPerformanceTracking.ERenderThreadFrameBudget
enum class ERenderThreadFrameBudget : uint8_t
{
    UpdatePrimitiveSceneInfo                       = 0,
    ComputeViewVisibility                          = 1,
    InitDynamicShadows                             = 2,
    ExecutePasses                                  = 3,
    Count                                          = 4,
    ERenderThreadFrameBudget_MAX                   = 5
};


// Enum  EmbarkRenderingPerformanceTracking.EGPUFrameBudget
enum class EGPUFrameBudget : uint8_t
{
    BasePass                                       = 0,
    ShadowDepth                                    = 1,
    DistanceFieldShadows                           = 2,
    RenderVelocities                               = 3,
    RTXGIUpdate                                    = 4,
    Lights                                         = 5,
    ScreenSpaceReflections                         = 6,
    ReflectionEnvironment                          = 7,
    Translucency                                   = 8,
    PostProcessing                                 = 9,
    Count                                          = 10,
    EGPUFrameBudget_MAX                            = 11
};


// Enum  MaterialShaderQualitySettings.EMobileShadowQuality
enum class EMobileShadowQuality : uint8_t
{
    NoFiltering                                    = 0,
    PCF_1x1                                        = 1,
    PCF_3x3                                        = 2,
    PCF_5x5                                        = 3,
    EMobileShadowQuality_MAX                       = 4
};


// Enum  EyeTracker.EEyeTrackerStatus
enum class EEyeTrackerStatus : uint8_t
{
    NotConnected                                   = 0,
    NotTracking                                    = 1,
    Tracking                                       = 2,
    EEyeTrackerStatus_MAX                          = 3
};


// Enum  EngineSettings.ETwoPlayerSplitScreenType
enum class ETwoPlayerSplitScreenType : uint8_t
{
    Horizontal                                     = 0,
    Vertical                                       = 1,
    ETwoPlayerSplitScreenType_MAX                  = 2
};


// Enum  EngineSettings.EThreePlayerSplitScreenType
enum class EThreePlayerSplitScreenType : uint8_t
{
    FavorTop                                       = 0,
    FavorBottom                                    = 1,
    Vertical                                       = 2,
    Horizontal                                     = 3,
    EThreePlayerSplitScreenType_MAX                = 4
};


// Enum  EngineSettings.EFourPlayerSplitScreenType
enum class EFourPlayerSplitScreenType : uint8_t
{
    Grid                                           = 0,
    Vertical                                       = 1,
    Horizontal                                     = 2,
    EFourPlayerSplitScreenType_MAX                 = 3
};


// Enum  EngineSettings.ESubLevelStripMode
enum class ESubLevelStripMode : uint8_t
{
    ExactClass                                     = 0,
    IsChildOf                                      = 1,
    ESubLevelStripMode_MAX                         = 2
};


// Enum  Chaos.EClusterUnionMethod
enum class EClusterUnionMethod : uint8_t
{
    PointImplicit                                  = 0,
    DelaunayTriangulation                          = 1,
    MinimalSpanningSubsetDelaunayTriangulation     = 2,
    PointImplicitAugmentedWithMinimalDelaunay      = 3,
    None                                           = 4,
    EClusterUnionMethod_MAX                        = 5
};


// Enum  Chaos.ESetMaskConditionType
enum class ESetMaskConditionType : uint8_t
{
    Field_Set_Always                               = 0,
    Field_Set_IFF_NOT_Interior                     = 1,
    Field_Set_IFF_NOT_Exterior                     = 2,
    Field_MaskCondition_Max                        = 3,
    Field_MAX                                      = 4
};


// Enum  Chaos.EWaveFunctionType
enum class EWaveFunctionType : uint8_t
{
    Field_Wave_Cosine                              = 0,
    Field_Wave_Gaussian                            = 1,
    Field_Wave_Falloff                             = 2,
    Field_Wave_Decay                               = 3,
    Field_Wave_Max                                 = 4
};


// Enum  Chaos.EFieldOperationType
enum class EFieldOperationType : uint8_t
{
    Field_Multiply                                 = 0,
    Field_Divide                                   = 1,
    Field_Add                                      = 2,
    Field_Substract                                = 3,
    Field_Operation_Max                            = 4
};


// Enum  Chaos.EFieldCullingOperationType
enum class EFieldCullingOperationType : uint8_t
{
    Field_Culling_Inside                           = 0,
    Field_Culling_Outside                          = 1,
    Field_Culling_Operation_Max                    = 2,
    Field_Culling_MAX                              = 3
};


// Enum  Chaos.EFieldResolutionType
enum class EFieldResolutionType : uint8_t
{
    Field_Resolution_Minimal                       = 0,
    Field_Resolution_DisabledParents               = 1,
    Field_Resolution_Maximum                       = 2,
    Field_Resolution_Max                           = 3
};


// Enum  Chaos.EFieldFilterType
enum class EFieldFilterType : uint8_t
{
    Field_Filter_Dynamic                           = 0,
    Field_Filter_Kinematic                         = 1,
    Field_Filter_Static                            = 2,
    Field_Filter_All                               = 3,
    Field_Filter_Sleeping                          = 4,
    Field_Filter_Disabled                          = 5,
    Field_Filter_Max                               = 6
};


// Enum  Chaos.EFieldObjectType
enum class EFieldObjectType : uint8_t
{
    Field_Object_Rigid                             = 0,
    Field_Object_Cloth                             = 1,
    Field_Object_Destruction                       = 2,
    Field_Object_Character                         = 3,
    Field_Object_All                               = 4,
    Field_Object_Max                               = 5
};


// Enum  Chaos.EFieldPositionType
enum class EFieldPositionType : uint8_t
{
    Field_Position_CenterOfMass                    = 0,
    Field_Position_PivotPoint                      = 1,
    Field_Position_Max                             = 2
};


// Enum  Chaos.EFieldFalloffType
enum class EFieldFalloffType : uint8_t
{
    Field_FallOff_None                             = 0,
    Field_Falloff_Linear                           = 1,
    Field_Falloff_Inverse                          = 2,
    Field_Falloff_Squared                          = 3,
    Field_Falloff_Logarithmic                      = 4,
    Field_Falloff_Max                              = 5
};


// Enum  Chaos.EFieldPhysicsType
enum class EFieldPhysicsType : uint8_t
{
    Field_None                                     = 0,
    Field_DynamicState                             = 1,
    Field_LinearForce                              = 2,
    Field_ExternalClusterStrain                    = 3,
    Field_Kill                                     = 4,
    Field_LinearVelocity                           = 5,
    Field_AngularVelociy                           = 6,
    Field_AngularTorque                            = 7,
    Field_InternalClusterStrain                    = 8,
    Field_DisableThreshold                         = 9,
    Field_SleepingThreshold                        = 10,
    Field_PositionStatic                           = 11,
    Field_PositionAnimated                         = 12,
    Field_PositionTarget                           = 13,
    Field_DynamicConstraint                        = 14,
    Field_CollisionGroup                           = 15,
    Field_ActivateDisabled                         = 16,
    Field_InitialLinearVelocity                    = 17,
    Field_InitialAngularVelocity                   = 18,
    Field_PhysicsType_Max                          = 19
};


// Enum  Chaos.EFieldVectorType
enum class EFieldVectorType : uint8_t
{
    Vector_LinearForce                             = 0,
    Vector_LinearVelocity                          = 1,
    Vector_AngularVelocity                         = 2,
    Vector_AngularTorque                           = 3,
    Vector_PositionTarget                          = 4,
    Vector_InitialLinearVelocity                   = 5,
    Vector_InitialAngularVelocity                  = 6,
    Vector_TargetMax                               = 7,
    Vector_MAX                                     = 8
};


// Enum  Chaos.EFieldScalarType
enum class EFieldScalarType : uint8_t
{
    Scalar_ExternalClusterStrain                   = 0,
    Scalar_Kill                                    = 1,
    Scalar_DisableThreshold                        = 2,
    Scalar_SleepingThreshold                       = 3,
    Scalar_InternalClusterStrain                   = 4,
    Scalar_DynamicConstraint                       = 5,
    Scalar_TargetMax                               = 6,
    Scalar_MAX                                     = 7
};


// Enum  Chaos.EFieldIntegerType
enum class EFieldIntegerType : uint8_t
{
    Integer_DynamicState                           = 0,
    Integer_ActivateDisabled                       = 1,
    Integer_CollisionGroup                         = 2,
    Integer_PositionAnimated                       = 3,
    Integer_PositionStatic                         = 4,
    Integer_TargetMax                              = 5,
    Integer_MAX                                    = 6
};


// Enum  Chaos.EFieldOutputType
enum class EFieldOutputType : uint8_t
{
    Field_Output_Vector                            = 0,
    Field_Output_Scalar                            = 1,
    Field_Output_Integer                           = 2,
    Field_Output_Max                               = 3
};


// Enum  Chaos.EFieldPhysicsDefaultFields
enum class EFieldPhysicsDefaultFields : uint8_t
{
    Field_RadialIntMask                            = 0,
    Field_RadialFalloff                            = 1,
    Field_UniformVector                            = 2,
    Field_RadialVector                             = 3,
    Field_RadialVectorFalloff                      = 4,
    Field_EFieldPhysicsDefaultFields_Max           = 5
};


// Enum  Chaos.ECollisionTypeEnum
enum class ECollisionTypeEnum : uint8_t
{
    Chaos_Volumetric                               = 0,
    Chaos_Surface_Volumetric                       = 1,
    Chaos_Max                                      = 2
};


// Enum  Chaos.EImplicitTypeEnum
enum class EImplicitTypeEnum : uint8_t
{
    Chaos_Implicit_Box                             = 0,
    Chaos_Implicit_Sphere                          = 1,
    Chaos_Implicit_Capsule                         = 2,
    Chaos_Implicit_LevelSet                        = 3,
    Chaos_Implicit_None                            = 4,
    Chaos_Implicit_Convex                          = 5,
    Chaos_Max                                      = 6
};


// Enum  Chaos.EObjectStateTypeEnum
enum class EObjectStateTypeEnum : uint8_t
{
    Chaos_NONE                                     = 0,
    Chaos_Object_Sleeping                          = 1,
    Chaos_Object_Kinematic                         = 2,
    Chaos_Object_Static                            = 3,
    Chaos_Object_Dynamic                           = 4,
    Chaos_Object_UserDefined                       = 100,
    Chaos_Max                                      = 101
};


// Enum  Chaos.EGeometryCollectionPhysicsTypeEnum
enum class EGeometryCollectionPhysicsTypeEnum : uint8_t
{
    Chaos_AngularVelocity                          = 0,
    Chaos_DynamicState                             = 1,
    Chaos_LinearVelocity                           = 2,
    Chaos_InitialAngularVelocity                   = 3,
    Chaos_InitialLinearVelocity                    = 4,
    Chaos_CollisionGroup                           = 5,
    Chaos_LinearForce                              = 6,
    Chaos_AngularTorque                            = 7,
    Chaos_DisableThreshold                         = 8,
    Chaos_SleepingThreshold                        = 9,
    Chaos_Max                                      = 10
};


// Enum  Chaos.EInitialVelocityTypeEnum
enum class EInitialVelocityTypeEnum : uint8_t
{
    Chaos_Initial_Velocity_User_Defined            = 0,
    Chaos_Initial_Velocity_None                    = 1,
    Chaos_Max                                      = 2
};


// Enum  Chaos.EEmissionPatternTypeEnum
enum class EEmissionPatternTypeEnum : uint8_t
{
    Chaos_Emission_Pattern_First_Frame             = 0,
    Chaos_Emission_Pattern_On_Demand               = 1,
    Chaos_Max                                      = 2
};


// Enum  Chaos.EChaosSolverTickMode
enum class EChaosSolverTickMode : uint8_t
{
    Fixed                                          = 0,
    Variable                                       = 1,
    VariableCapped                                 = 2,
    VariableCappedWithTarget                       = 3,
    EChaosSolverTickMode_MAX                       = 4
};


// Enum  Chaos.EChaosThreadingMode
enum class EChaosThreadingMode : uint8_t
{
    DedicatedThread                                = 0,
    TaskGraph                                      = 1,
    SingleThread                                   = 2,
    Num                                            = 3,
    Invalid                                        = 4,
    EChaosThreadingMode_MAX                        = 5
};


// Enum  Chaos.EChaosBufferMode
enum class EChaosBufferMode : uint8_t
{
    Double                                         = 0,
    Triple                                         = 1,
    Num                                            = 2,
    Invalid                                        = 3,
    EChaosBufferMode_MAX                           = 4
};


// Enum  Chaos.EGeometryCollectionCacheType
enum class EGeometryCollectionCacheType : uint8_t
{
    None                                           = 0,
    Record                                         = 1,
    Play                                           = 2,
    RecordAndPlay                                  = 3,
    EGeometryCollectionCacheType_MAX               = 4
};


// Enum  PhysicsCore.ECollisionTraceFlag
enum class ECollisionTraceFlag : uint8_t
{
    CTF_UseDefault                                 = 0,
    CTF_UseSimpleAndComplex                        = 1,
    CTF_UseSimpleAsComplex                         = 2,
    CTF_UseComplexAsSimple                         = 3,
    CTF_MAX                                        = 4
};


// Enum  PhysicsCore.EPhysicsType
enum class EPhysicsType : uint8_t
{
    PhysType_Default                               = 0,
    PhysType_Kinematic                             = 1,
    PhysType_Simulated                             = 2,
    PhysType_MAX                                   = 3
};


// Enum  PhysicsCore.EBodyCollisionResponse
enum class EBodyCollisionResponse : uint8_t
{
    BodyCollision_Enabled                          = 0,
    BodyCollision_Disabled                         = 1,
    BodyCollision_MAX                              = 2
};


// Enum  PhysicsCore.EPhysicalSurface
enum class EPhysicalSurface : uint8_t
{
    SurfaceType_Default                            = 0,
    SurfaceType1                                   = 1,
    SurfaceType2                                   = 2,
    SurfaceType3                                   = 3,
    SurfaceType4                                   = 4,
    SurfaceType5                                   = 5,
    SurfaceType6                                   = 6,
    SurfaceType7                                   = 7,
    SurfaceType8                                   = 8,
    SurfaceType9                                   = 9,
    SurfaceType10                                  = 10,
    SurfaceType11                                  = 11,
    SurfaceType12                                  = 12,
    SurfaceType13                                  = 13,
    SurfaceType14                                  = 14,
    SurfaceType15                                  = 15,
    SurfaceType16                                  = 16,
    SurfaceType17                                  = 17,
    SurfaceType18                                  = 18,
    SurfaceType19                                  = 19,
    SurfaceType20                                  = 20,
    SurfaceType21                                  = 21,
    SurfaceType22                                  = 22,
    SurfaceType23                                  = 23,
    SurfaceType24                                  = 24,
    SurfaceType25                                  = 25,
    SurfaceType26                                  = 26,
    SurfaceType27                                  = 27,
    SurfaceType28                                  = 28,
    SurfaceType29                                  = 29,
    SurfaceType30                                  = 30,
    SurfaceType31                                  = 31,
    SurfaceType32                                  = 32,
    SurfaceType33                                  = 33,
    SurfaceType34                                  = 34,
    SurfaceType35                                  = 35,
    SurfaceType36                                  = 36,
    SurfaceType37                                  = 37,
    SurfaceType38                                  = 38,
    SurfaceType39                                  = 39,
    SurfaceType40                                  = 40,
    SurfaceType41                                  = 41,
    SurfaceType42                                  = 42,
    SurfaceType43                                  = 43,
    SurfaceType44                                  = 44,
    SurfaceType45                                  = 45,
    SurfaceType46                                  = 46,
    SurfaceType47                                  = 47,
    SurfaceType48                                  = 48,
    SurfaceType49                                  = 49,
    SurfaceType50                                  = 50,
    SurfaceType51                                  = 51,
    SurfaceType52                                  = 52,
    SurfaceType53                                  = 53,
    SurfaceType54                                  = 54,
    SurfaceType55                                  = 55,
    SurfaceType56                                  = 56,
    SurfaceType57                                  = 57,
    SurfaceType58                                  = 58,
    SurfaceType59                                  = 59,
    SurfaceType60                                  = 60,
    SurfaceType61                                  = 61,
    SurfaceType62                                  = 62,
    SurfaceType_Max                                = 63,
    EPhysicalSurface_MAX                           = 64
};


// Enum  PhysicsCore.ERadialImpulseFalloff
enum class ERadialImpulseFalloff : uint8_t
{
    RIF_Constant                                   = 0,
    RIF_Linear                                     = 1,
    RIF_MAX                                        = 2
};


// Enum  PhysicsCore.ESleepFamily
enum class ESleepFamily : uint8_t
{
    Normal                                         = 0,
    Sensitive                                      = 1,
    Custom                                         = 2,
    ESleepFamily_MAX                               = 3
};


// Enum  PhysicsCore.EAngularConstraintMotion
enum class EAngularConstraintMotion : uint8_t
{
    ACM_Free                                       = 0,
    ACM_Limited                                    = 1,
    ACM_Locked                                     = 2,
    ACM_MAX                                        = 3
};


// Enum  PhysicsCore.EConstraintFrame
enum class EConstraintFrame : uint8_t
{
    Frame1                                         = 0,
    Frame2                                         = 1,
    EConstraintFrame_MAX                           = 2
};


// Enum  PhysicsCore.EConstraintPlasticityType
enum class EConstraintPlasticityType : uint8_t
{
    CCPT_Free                                      = 0,
    CCPT_Shrink                                    = 1,
    CCPT_Grow                                      = 2,
    CCPT_MAX                                       = 3
};


// Enum  PhysicsCore.ELinearConstraintMotion
enum class ELinearConstraintMotion : uint8_t
{
    LCM_Free                                       = 0,
    LCM_Limited                                    = 1,
    LCM_Locked                                     = 2,
    LCM_MAX                                        = 3
};


// Enum  PhysicsCore.EFrictionCombineMode
enum class EFrictionCombineMode : uint8_t
{
    Average                                        = 0,
    Min                                            = 1,
    Multiply                                       = 2,
    Max                                            = 3
};


// Enum  MRMesh.EMeshTrackerVertexColorMode
enum class EMeshTrackerVertexColorMode : uint8_t
{
    None                                           = 0,
    Confidence                                     = 1,
    Block                                          = 2,
    EMeshTrackerVertexColorMode_MAX                = 3
};


// Enum  AugmentedReality.EARTrackingState
enum class EARTrackingState : uint8_t
{
    Unknown                                        = 0,
    Tracking                                       = 1,
    NotTracking                                    = 2,
    StoppedTracking                                = 3,
    EARTrackingState_MAX                           = 4
};


// Enum  AugmentedReality.EARSessionConfigFlags
enum class EARSessionConfigFlags : uint8_t
{
    None                                           = 0,
    GenerateMeshData                               = 1,
    RenderMeshDataInWireframe                      = 2,
    GenerateCollisionForMeshData                   = 4,
    GenerateNavMeshForMeshData                     = 8,
    UseMeshDataForOcclusion                        = 16,
    EARSessionConfigFlags_MAX                      = 17
};


// Enum  AugmentedReality.EPlaneComponentDebugMode
enum class EPlaneComponentDebugMode : uint8_t
{
    None                                           = 0,
    ShowNetworkRole                                = 1,
    ShowClassification                             = 2,
    EPlaneComponentDebugMode_MAX                   = 3
};


// Enum  AugmentedReality.EFaceComponentDebugMode
enum class EFaceComponentDebugMode : uint8_t
{
    None                                           = 0,
    ShowEyeVectors                                 = 1,
    ShowFaceMesh                                   = 2,
    EFaceComponentDebugMode_MAX                    = 3
};


// Enum  AugmentedReality.EARFaceTransformMixing
enum class EARFaceTransformMixing : uint8_t
{
    ComponentOnly                                  = 0,
    ComponentLocationTrackedRotation               = 1,
    ComponentWithTracked                           = 2,
    TrackingOnly                                   = 3,
    EARFaceTransformMixing_MAX                     = 4
};


// Enum  AugmentedReality.EImageComponentDebugMode
enum class EImageComponentDebugMode : uint8_t
{
    None                                           = 0,
    ShowDetectedImage                              = 1,
    EImageComponentDebugMode_MAX                   = 2
};


// Enum  AugmentedReality.EQRCodeComponentDebugMode
enum class EQRCodeComponentDebugMode : uint8_t
{
    None                                           = 0,
    ShowQRCode                                     = 1,
    EQRCodeComponentDebugMode_MAX                  = 2
};


// Enum  AugmentedReality.EPoseComponentDebugMode
enum class EPoseComponentDebugMode : uint8_t
{
    None                                           = 0,
    ShowSkeleton                                   = 1,
    EPoseComponentDebugMode_MAX                    = 2
};


// Enum  AugmentedReality.EGeoAnchorComponentDebugMode
enum class EGeoAnchorComponentDebugMode : uint8_t
{
    None                                           = 0,
    ShowGeoData                                    = 1,
    EGeoAnchorComponentDebugMode_MAX               = 2
};


// Enum  AugmentedReality.EARServiceAvailability
enum class EARServiceAvailability : uint8_t
{
    UnknownError                                   = 0,
    UnknownChecking                                = 1,
    UnknownTimedOut                                = 2,
    UnsupportedDeviceNotCapable                    = 3,
    SupportedNotInstalled                          = 4,
    SupportedVersionTooOld                         = 5,
    SupportedInstalled                             = 6,
    EARServiceAvailability_MAX                     = 7
};


// Enum  AugmentedReality.EARServiceInstallRequestResult
enum class EARServiceInstallRequestResult : uint8_t
{
    Installed                                      = 0,
    DeviceNotCompatible                            = 1,
    UserDeclinedInstallation                       = 2,
    FatalError                                     = 3,
    EARServiceInstallRequestResult_MAX             = 4
};


// Enum  AugmentedReality.EARServicePermissionRequestResult
enum class EARServicePermissionRequestResult : uint8_t
{
    Granted                                        = 0,
    Denied                                         = 1,
    EARServicePermissionRequestResult_MAX          = 2
};


// Enum  AugmentedReality.EARGeoTrackingState
enum class EARGeoTrackingState : uint8_t
{
    Initializing                                   = 0,
    Localized                                      = 1,
    Localizing                                     = 2,
    NotAvailable                                   = 3,
    EARGeoTrackingState_MAX                        = 4
};


// Enum  AugmentedReality.EARGeoTrackingStateReason
enum class EARGeoTrackingStateReason : uint8_t
{
    None                                           = 0,
    NotAvailableAtLocation                         = 1,
    NeedLocationPermissions                        = 2,
    DevicePointedTooLow                            = 3,
    WorldTrackingUnstable                          = 4,
    WaitingForLocation                             = 5,
    GeoDataNotLoaded                               = 6,
    VisualLocalizationFailed                       = 7,
    WaitingForAvailabilityCheck                    = 8,
    EARGeoTrackingStateReason_MAX                  = 9
};


// Enum  AugmentedReality.EARGeoTrackingAccuracy
enum class EARGeoTrackingAccuracy : uint8_t
{
    Undetermined                                   = 0,
    Low                                            = 1,
    Medium                                         = 2,
    High                                           = 3,
    EARGeoTrackingAccuracy_MAX                     = 4
};


// Enum  AugmentedReality.EARWorldAlignment
enum class EARWorldAlignment : uint8_t
{
    Gravity                                        = 0,
    GravityAndHeading                              = 1,
    Camera                                         = 2,
    EARWorldAlignment_MAX                          = 3
};


// Enum  AugmentedReality.EARSessionType
enum class EARSessionType : uint8_t
{
    None                                           = 0,
    Orientation                                    = 1,
    World                                          = 2,
    Face                                           = 3,
    Image                                          = 4,
    ObjectScanning                                 = 5,
    PoseTracking                                   = 6,
    GeoTracking                                    = 7,
    EARSessionType_MAX                             = 8
};


// Enum  AugmentedReality.EARPlaneDetectionMode
enum class EARPlaneDetectionMode : uint8_t
{
    None                                           = 0,
    HorizontalPlaneDetection                       = 1,
    VerticalPlaneDetection                         = 2,
    EARPlaneDetectionMode_MAX                      = 3
};


// Enum  AugmentedReality.EARLightEstimationMode
enum class EARLightEstimationMode : uint8_t
{
    None                                           = 0,
    AmbientLightEstimate                           = 1,
    DirectionalLightEstimate                       = 2,
    EARLightEstimationMode_MAX                     = 3
};


// Enum  AugmentedReality.EARFrameSyncMode
enum class EARFrameSyncMode : uint8_t
{
    SyncTickWithCameraImage                        = 0,
    SyncTickWithoutCameraImage                     = 1,
    EARFrameSyncMode_MAX                           = 2
};


// Enum  AugmentedReality.EAREnvironmentCaptureProbeType
enum class EAREnvironmentCaptureProbeType : uint8_t
{
    None                                           = 0,
    Manual                                         = 1,
    Automatic                                      = 2,
    EAREnvironmentCaptureProbeType_MAX             = 3
};


// Enum  AugmentedReality.EARFaceTrackingUpdate
enum class EARFaceTrackingUpdate : uint8_t
{
    CurvesAndGeo                                   = 0,
    CurvesOnly                                     = 1,
    EARFaceTrackingUpdate_MAX                      = 2
};


// Enum  AugmentedReality.EARSessionTrackingFeature
enum class EARSessionTrackingFeature : uint8_t
{
    None                                           = 0,
    PoseDetection2D                                = 1,
    PersonSegmentation                             = 2,
    PersonSegmentationWithDepth                    = 3,
    SceneDepth                                     = 4,
    SmoothedSceneDepth                             = 5,
    EARSessionTrackingFeature_MAX                  = 6
};


// Enum  AugmentedReality.EARSceneReconstruction
enum class EARSceneReconstruction : uint8_t
{
    None                                           = 0,
    MeshOnly                                       = 1,
    MeshWithClassification                         = 2,
    EARSceneReconstruction_MAX                     = 3
};


// Enum  AugmentedReality.EARTextureType
enum class EARTextureType : uint8_t
{
    Unknown                                        = 0,
    CameraImage                                    = 1,
    CameraDepth                                    = 2,
    EnvironmentCapture                             = 3,
    PersonSegmentationImage                        = 4,
    PersonSegmentationDepth                        = 5,
    SceneDepthMap                                  = 6,
    SceneDepthConfidenceMap                        = 7,
    EARTextureType_MAX                             = 8
};


// Enum  AugmentedReality.EARDepthQuality
enum class EARDepthQuality : uint8_t
{
    Unkown                                         = 0,
    Low                                            = 1,
    High                                           = 2,
    EARDepthQuality_MAX                            = 3
};


// Enum  AugmentedReality.EARDepthAccuracy
enum class EARDepthAccuracy : uint8_t
{
    Unkown                                         = 0,
    Approximate                                    = 1,
    Accurate                                       = 2,
    EARDepthAccuracy_MAX                           = 3
};


// Enum  AugmentedReality.EARFaceTrackingDirection
enum class EARFaceTrackingDirection : uint8_t
{
    FaceRelative                                   = 0,
    FaceMirrored                                   = 1,
    EARFaceTrackingDirection_MAX                   = 2
};


// Enum  AugmentedReality.EARFaceBlendShape
enum class EARFaceBlendShape : uint8_t
{
    EyeBlinkLeft                                   = 0,
    EyeLookDownLeft                                = 1,
    EyeLookInLeft                                  = 2,
    EyeLookOutLeft                                 = 3,
    EyeLookUpLeft                                  = 4,
    EyeSquintLeft                                  = 5,
    EyeWideLeft                                    = 6,
    EyeBlinkRight                                  = 7,
    EyeLookDownRight                               = 8,
    EyeLookInRight                                 = 9,
    EyeLookOutRight                                = 10,
    EyeLookUpRight                                 = 11,
    EyeSquintRight                                 = 12,
    EyeWideRight                                   = 13,
    JawForward                                     = 14,
    JawLeft                                        = 15,
    JawRight                                       = 16,
    JawOpen                                        = 17,
    MouthClose                                     = 18,
    MouthFunnel                                    = 19,
    MouthPucker                                    = 20,
    MouthLeft                                      = 21,
    MouthRight                                     = 22,
    MouthSmileLeft                                 = 23,
    MouthSmileRight                                = 24,
    MouthFrownLeft                                 = 25,
    MouthFrownRight                                = 26,
    MouthDimpleLeft                                = 27,
    MouthDimpleRight                               = 28,
    MouthStretchLeft                               = 29,
    MouthStretchRight                              = 30,
    MouthRollLower                                 = 31,
    MouthRollUpper                                 = 32,
    MouthShrugLower                                = 33,
    MouthShrugUpper                                = 34,
    MouthPressLeft                                 = 35,
    MouthPressRight                                = 36,
    MouthLowerDownLeft                             = 37,
    MouthLowerDownRight                            = 38,
    MouthUpperUpLeft                               = 39,
    MouthUpperUpRight                              = 40,
    BrowDownLeft                                   = 41,
    BrowDownRight                                  = 42,
    BrowInnerUp                                    = 43,
    BrowOuterUpLeft                                = 44,
    BrowOuterUpRight                               = 45,
    CheekPuff                                      = 46,
    CheekSquintLeft                                = 47,
    CheekSquintRight                               = 48,
    NoseSneerLeft                                  = 49,
    NoseSneerRight                                 = 50,
    TongueOut                                      = 51,
    HeadYaw                                        = 52,
    HeadPitch                                      = 53,
    HeadRoll                                       = 54,
    LeftEyeYaw                                     = 55,
    LeftEyePitch                                   = 56,
    LeftEyeRoll                                    = 57,
    RightEyeYaw                                    = 58,
    RightEyePitch                                  = 59,
    RightEyeRoll                                   = 60,
    MAX                                            = 61
};


// Enum  AugmentedReality.EAREye
enum class EAREye : uint8_t
{
    LeftEye                                        = 0,
    RightEye                                       = 1,
    EAREye_MAX                                     = 2
};


// Enum  AugmentedReality.EARCaptureType
enum class EARCaptureType : uint8_t
{
    Camera                                         = 0,
    QRCode                                         = 1,
    SpatialMapping                                 = 2,
    SceneUnderstanding                             = 3,
    HandMesh                                       = 4,
    EARCaptureType_MAX                             = 5
};


// Enum  AugmentedReality.EARLineTraceChannels
enum class EARLineTraceChannels : uint8_t
{
    None                                           = 0,
    FeaturePoint                                   = 1,
    GroundPlane                                    = 2,
    PlaneUsingExtent                               = 4,
    PlaneUsingBoundaryPolygon                      = 8,
    EARLineTraceChannels_MAX                       = 9
};


// Enum  AugmentedReality.EARTrackingQuality
enum class EARTrackingQuality : uint8_t
{
    NotTracking                                    = 0,
    OrientationOnly                                = 1,
    OrientationAndPosition                         = 2,
    EARTrackingQuality_MAX                         = 3
};


// Enum  AugmentedReality.EARTrackingQualityReason
enum class EARTrackingQualityReason : uint8_t
{
    None                                           = 0,
    Initializing                                   = 1,
    Relocalizing                                   = 2,
    ExcessiveMotion                                = 3,
    InsufficientFeatures                           = 4,
    InsufficientLight                              = 5,
    BadState                                       = 6,
    EARTrackingQualityReason_MAX                   = 7
};


// Enum  AugmentedReality.EARSessionStatus
enum class EARSessionStatus : uint8_t
{
    NotStarted                                     = 0,
    Running                                        = 1,
    NotSupported                                   = 2,
    FatalError                                     = 3,
    PermissionNotGranted                           = 4,
    UnsupportedConfiguration                       = 5,
    Other                                          = 6,
    EARSessionStatus_MAX                           = 7
};


// Enum  AugmentedReality.EARWorldMappingState
enum class EARWorldMappingState : uint8_t
{
    NotAvailable                                   = 0,
    StillMappingNotRelocalizable                   = 1,
    StillMappingRelocalizable                      = 2,
    Mapped                                         = 3,
    EARWorldMappingState_MAX                       = 4
};


// Enum  AugmentedReality.EARPlaneOrientation
enum class EARPlaneOrientation : uint8_t
{
    Horizontal                                     = 0,
    Vertical                                       = 1,
    Diagonal                                       = 2,
    EARPlaneOrientation_MAX                        = 3
};


// Enum  AugmentedReality.EARObjectClassification
enum class EARObjectClassification : uint8_t
{
    NotApplicable                                  = 0,
    Unknown                                        = 1,
    Wall                                           = 2,
    Ceiling                                        = 3,
    Floor                                          = 4,
    Table                                          = 5,
    Seat                                           = 6,
    Face                                           = 7,
    Image                                          = 8,
    World                                          = 9,
    SceneObject                                    = 10,
    HandMesh                                       = 11,
    Door                                           = 12,
    Window                                         = 13,
    EARObjectClassification_MAX                    = 14
};


// Enum  AugmentedReality.EARSpatialMeshUsageFlags
enum class EARSpatialMeshUsageFlags : uint8_t
{
    NotApplicable                                  = 0,
    Visible                                        = 1,
    Collision                                      = 2,
    EARSpatialMeshUsageFlags_MAX                   = 3
};


// Enum  AugmentedReality.EARJointTransformSpace
enum class EARJointTransformSpace : uint8_t
{
    Model                                          = 0,
    ParentJoint                                    = 1,
    EARJointTransformSpace_MAX                     = 2
};


// Enum  AugmentedReality.EARAltitudeSource
enum class EARAltitudeSource : uint8_t
{
    Precise                                        = 0,
    Coarse                                         = 1,
    UserDefined                                    = 2,
    Unknown                                        = 3,
    EARAltitudeSource_MAX                          = 4
};


// Enum  AugmentedReality.EARCandidateImageOrientation
enum class EARCandidateImageOrientation : uint8_t
{
    Landscape                                      = 0,
    Portrait                                       = 1,
    EARCandidateImageOrientation_MAX               = 2
};


// Enum  HeadMountedDisplay.EOrientPositionSelector
enum class EOrientPositionSelector : uint8_t
{
    Orientation                                    = 0,
    Position                                       = 1,
    OrientationAndPosition                         = 2,
    EOrientPositionSelector_MAX                    = 3
};


// Enum  HeadMountedDisplay.EHMDTrackingOrigin
enum class EHMDTrackingOrigin : uint8_t
{
    Floor                                          = 0,
    Eye                                            = 1,
    Stage                                          = 2,
    EHMDTrackingOrigin_MAX                         = 3
};


// Enum  HeadMountedDisplay.EHMDWornState
enum class EHMDWornState : uint8_t
{
    Unknown                                        = 0,
    Worn                                           = 1,
    NotWorn                                        = 2,
    EHMDWornState_MAX                              = 3
};


// Enum  HeadMountedDisplay.EXRDeviceConnectionResult
enum class EXRDeviceConnectionResult : uint8_t
{
    NoTrackingSystem                               = 0,
    FeatureNotSupported                            = 1,
    NoValidViewport                                = 2,
    MiscFailure                                    = 3,
    Success                                        = 4,
    EXRDeviceConnectionResult_MAX                  = 5
};


// Enum  HeadMountedDisplay.EXRSystemFlags
enum class EXRSystemFlags : uint8_t
{
    NoFlags                                        = 0,
    IsAR                                           = 1,
    IsTablet                                       = 2,
    IsHeadMounted                                  = 4,
    SupportsHandTracking                           = 8,
    EXRSystemFlags_MAX                             = 9
};


// Enum  HeadMountedDisplay.ESpectatorScreenMode
enum class ESpectatorScreenMode : uint8_t
{
    Disabled                                       = 0,
    SingleEyeLetterboxed                           = 1,
    Undistorted                                    = 2,
    Distorted                                      = 3,
    SingleEye                                      = 4,
    SingleEyeCroppedToFill                         = 5,
    Texture                                        = 6,
    TexturePlusEye                                 = 7,
    ESpectatorScreenMode_MAX                       = 8
};


// Enum  HeadMountedDisplay.EXRTrackedDeviceType
enum class EXRTrackedDeviceType : uint8_t
{
    HeadMountedDisplay                             = 0,
    Controller                                     = 1,
    TrackingReference                              = 2,
    Other                                          = 3,
    Invalid                                        = 254,
    Any                                            = 255,
    EXRTrackedDeviceType_MAX                       = 256
};


// Enum  HeadMountedDisplay.EHandKeypoint
enum class EHandKeypoint : uint8_t
{
    Palm                                           = 0,
    Wrist                                          = 1,
    ThumbMetacarpal                                = 2,
    ThumbProximal                                  = 3,
    ThumbDistal                                    = 4,
    ThumbTip                                       = 5,
    IndexMetacarpal                                = 6,
    IndexProximal                                  = 7,
    IndexIntermediate                              = 8,
    IndexDistal                                    = 9,
    IndexTip                                       = 10,
    MiddleMetacarpal                               = 11,
    MiddleProximal                                 = 12,
    MiddleIntermediate                             = 13,
    MiddleDistal                                   = 14,
    MiddleTip                                      = 15,
    RingMetacarpal                                 = 16,
    RingProximal                                   = 17,
    RingIntermediate                               = 18,
    RingDistal                                     = 19,
    RingTip                                        = 20,
    LittleMetacarpal                               = 21,
    LittleProximal                                 = 22,
    LittleIntermediate                             = 23,
    LittleDistal                                   = 24,
    LittleTip                                      = 25,
    EHandKeypoint_MAX                              = 26
};


// Enum  HeadMountedDisplay.EXRVisualType
enum class EXRVisualType : uint8_t
{
    Controller                                     = 0,
    Hand                                           = 1,
    EXRVisualType_MAX                              = 2
};


// Enum  HeadMountedDisplay.ETrackingStatus
enum class ETrackingStatus : uint8_t
{
    NotTracked                                     = 0,
    InertialOnly                                   = 1,
    Tracked                                        = 2,
    ETrackingStatus_MAX                            = 3
};


// Enum  HeadMountedDisplay.ESpatialInputGestureAxis
enum class ESpatialInputGestureAxis : uint8_t
{
    None                                           = 0,
    Manipulation                                   = 1,
    Navigation                                     = 2,
    NavigationRails                                = 3,
    ESpatialInputGestureAxis_MAX                   = 4
};


// Enum  Foliage.FoliageVertexColorMask
enum class FoliageVertexColorMask : uint8_t
{
    FOLIAGEVERTEXCOLORMASK_Disabled                = 0,
    FOLIAGEVERTEXCOLORMASK_Red                     = 1,
    FOLIAGEVERTEXCOLORMASK_Green                   = 2,
    FOLIAGEVERTEXCOLORMASK_Blue                    = 3,
    FOLIAGEVERTEXCOLORMASK_Alpha                   = 4,
    FOLIAGEVERTEXCOLORMASK_MAX                     = 5
};


// Enum  Foliage.EVertexColorMaskChannel
enum class EVertexColorMaskChannel : uint8_t
{
    Red                                            = 0,
    Green                                          = 1,
    Blue                                           = 2,
    Alpha                                          = 3,
    MAX_None                                       = 4,
    EVertexColorMaskChannel_MAX                    = 5
};


// Enum  Foliage.EFoliageScaling
enum class EFoliageScaling : uint8_t
{
    Uniform                                        = 0,
    Free                                           = 1,
    LockXY                                         = 2,
    LockXZ                                         = 3,
    LockYZ                                         = 4,
    EFoliageScaling_MAX                            = 5
};


// Enum  Foliage.ESimulationOverlap
enum class ESimulationOverlap : uint8_t
{
    CollisionOverlap                               = 0,
    ShadeOverlap                                   = 1,
    None                                           = 2,
    ESimulationOverlap_MAX                         = 3
};


// Enum  Foliage.ESimulationQuery
enum class ESimulationQuery : uint8_t
{
    None                                           = 0,
    CollisionOverlap                               = 1,
    ShadeOverlap                                   = 2,
    AnyOverlap                                     = 3,
    ESimulationQuery_MAX                           = 4
};


// Enum  Landscape.ELandscapeSetupErrors
enum class ELandscapeSetupErrors : uint8_t
{
    LSE_None                                       = 0,
    LSE_NoLandscapeInfo                            = 1,
    LSE_CollsionXY                                 = 2,
    LSE_NoLayerInfo                                = 3,
    LSE_MAX                                        = 4
};


// Enum  Landscape.ERTDrawingType
enum class ERTDrawingType : uint8_t
{
    RTAtlas                                        = 0,
    RTAtlasToNonAtlas                              = 1,
    RTNonAtlasToAtlas                              = 2,
    RTNonAtlas                                     = 3,
    RTMips                                         = 4,
    ERTDrawingType_MAX                             = 5
};


// Enum  Landscape.EHeightmapRTType
enum class EHeightmapRTType : uint8_t
{
    HeightmapRT_CombinedAtlas                      = 0,
    HeightmapRT_CombinedNonAtlas                   = 1,
    HeightmapRT_Scratch1                           = 2,
    HeightmapRT_Scratch2                           = 3,
    HeightmapRT_Scratch3                           = 4,
    HeightmapRT_Mip1                               = 5,
    HeightmapRT_Mip2                               = 6,
    HeightmapRT_Mip3                               = 7,
    HeightmapRT_Mip4                               = 8,
    HeightmapRT_Mip5                               = 9,
    HeightmapRT_Mip6                               = 10,
    HeightmapRT_Mip7                               = 11,
    HeightmapRT_Count                              = 12,
    HeightmapRT_MAX                                = 13
};


// Enum  Landscape.EWeightmapRTType
enum class EWeightmapRTType : uint8_t
{
    WeightmapRT_Scratch_RGBA                       = 0,
    WeightmapRT_Scratch1                           = 1,
    WeightmapRT_Scratch2                           = 2,
    WeightmapRT_Scratch3                           = 3,
    WeightmapRT_Mip0                               = 4,
    WeightmapRT_Mip1                               = 5,
    WeightmapRT_Mip2                               = 6,
    WeightmapRT_Mip3                               = 7,
    WeightmapRT_Mip4                               = 8,
    WeightmapRT_Mip5                               = 9,
    WeightmapRT_Mip6                               = 10,
    WeightmapRT_Mip7                               = 11,
    WeightmapRT_Count                              = 12,
    WeightmapRT_MAX                                = 13
};


// Enum  Landscape.ELandscapeBlendMode
enum class ELandscapeBlendMode : uint8_t
{
    LSBM_AdditiveBlend                             = 0,
    LSBM_AlphaBlend                                = 1,
    LSBM_MAX                                       = 2
};


// Enum  Landscape.ELandscapeClearMode
enum class ELandscapeClearMode : uint8_t
{
    Clear_Weightmap                                = 1,
    Clear_Heightmap                                = 2,
    Clear_All                                      = 3,
    Clear_MAX                                      = 4
};


// Enum  Landscape.ELandscapeResizeMode
enum class ELandscapeResizeMode : uint8_t
{
    Resample                                       = 0,
    Clip                                           = 1,
    Expand                                         = 2,
    ELandscapeResizeMode_MAX                       = 3
};


// Enum  Landscape.ELandscapeGizmoType
enum class ELandscapeGizmoType : uint8_t
{
    LGT_None                                       = 0,
    LGT_Height                                     = 1,
    LGT_Weight                                     = 2,
    LGT_MAX                                        = 3
};


// Enum  Landscape.EGrassScaling
enum class EGrassScaling : uint8_t
{
    Uniform                                        = 0,
    Free                                           = 1,
    LockXY                                         = 2,
    EGrassScaling_MAX                              = 3
};


// Enum  Landscape.ESplineModulationColorMask
enum class ESplineModulationColorMask : uint8_t
{
    Red                                            = 0,
    Green                                          = 1,
    Blue                                           = 2,
    Alpha                                          = 3,
    ESplineModulationColorMask_MAX                 = 4
};


// Enum  Landscape.ELandscapeImportAlphamapType
enum class ELandscapeImportAlphamapType : uint8_t
{
    Additive                                       = 0,
    Layered                                        = 1,
    ELandscapeImportAlphamapType_MAX               = 2
};


// Enum  Landscape.ELandscapeLayerPaintingRestriction
enum class ELandscapeLayerPaintingRestriction : uint8_t
{
    None                                           = 0,
    UseMaxLayers                                   = 1,
    ExistingOnly                                   = 2,
    UseComponentAllowList                          = 3,
    ELandscapeLayerPaintingRestriction_MAX         = 4
};


// Enum  Landscape.ELandscapeLayerDisplayMode
enum class ELandscapeLayerDisplayMode : uint8_t
{
    Default                                        = 0,
    Alphabetical                                   = 1,
    UserSpecific                                   = 2,
    ELandscapeLayerDisplayMode_MAX                 = 3
};


// Enum  Landscape.ELandscapeLODFalloff
enum class ELandscapeLODFalloff : uint8_t
{
    Linear                                         = 0,
    SquareRoot                                     = 1,
    ELandscapeLODFalloff_MAX                       = 2
};


// Enum  Landscape.LandscapeSplineMeshOrientation
enum class LandscapeSplineMeshOrientation : uint8_t
{
    LSMO_XUp                                       = 0,
    LSMO_YUp                                       = 1,
    LSMO_MAX                                       = 2
};


// Enum  Landscape.ELandscapeLayerBlendType
enum class ELandscapeLayerBlendType : uint8_t
{
    LB_WeightBlend                                 = 0,
    LB_AlphaBlend                                  = 1,
    LB_HeightBlend                                 = 2,
    LB_MAX                                         = 3
};


// Enum  Landscape.ETerrainCoordMappingType
enum class ETerrainCoordMappingType : uint8_t
{
    TCMT_Auto                                      = 0,
    TCMT_XY                                        = 1,
    TCMT_XZ                                        = 2,
    TCMT_YZ                                        = 3,
    TCMT_MAX                                       = 4
};


// Enum  Landscape.ELandscapeCustomizedCoordType
enum class ELandscapeCustomizedCoordType : uint8_t
{
    LCCT_None                                      = 0,
    LCCT_CustomUV0                                 = 1,
    LCCT_CustomUV1                                 = 2,
    LCCT_CustomUV2                                 = 3,
    LCCT_WeightMapUV                               = 4,
    LCCT_MAX                                       = 5
};


// Enum  TimeManagement.EFrameNumberDisplayFormats
enum class EFrameNumberDisplayFormats : uint8_t
{
    NonDropFrameTimecode                           = 0,
    DropFrameTimecode                              = 1,
    Seconds                                        = 2,
    Frames                                         = 3,
    MAX_Count                                      = 4,
    EFrameNumberDisplayFormats_MAX                 = 5
};


// Enum  TimeManagement.ETimedDataInputEvaluationType
enum class ETimedDataInputEvaluationType : uint8_t
{
    None                                           = 0,
    Timecode                                       = 1,
    PlatformTime                                   = 2,
    ETimedDataInputEvaluationType_MAX              = 3
};


// Enum  TimeManagement.ETimedDataInputState
enum class ETimedDataInputState : uint8_t
{
    Connected                                      = 0,
    Unresponsive                                   = 1,
    Disconnected                                   = 2,
    ETimedDataInputState_MAX                       = 3
};


// Enum  MovieScene.EMovieSceneKeyInterpolation
enum class EMovieSceneKeyInterpolation : uint8_t
{
    Auto                                           = 0,
    User                                           = 1,
    Break                                          = 2,
    Linear                                         = 3,
    Constant                                       = 4,
    EMovieSceneKeyInterpolation_MAX                = 5
};


// Enum  MovieScene.EMovieSceneBlendType
enum class EMovieSceneBlendType : uint8_t
{
    Invalid                                        = 0,
    Absolute                                       = 1,
    Additive                                       = 2,
    Relative                                       = 4,
    AdditiveFromBase                               = 8,
    EMovieSceneBlendType_MAX                       = 9
};


// Enum  MovieScene.EMovieSceneCompletionMode
enum class EMovieSceneCompletionMode : uint8_t
{
    KeepState                                      = 0,
    RestoreState                                   = 1,
    ProjectDefault                                 = 2,
    EMovieSceneCompletionMode_MAX                  = 3
};


// Enum  MovieScene.EMovieSceneBuiltInEasing
enum class EMovieSceneBuiltInEasing : uint8_t
{
    Linear                                         = 0,
    SinIn                                          = 1,
    SinOut                                         = 2,
    SinInOut                                       = 3,
    QuadIn                                         = 4,
    QuadOut                                        = 5,
    QuadInOut                                      = 6,
    CubicIn                                        = 7,
    CubicOut                                       = 8,
    CubicInOut                                     = 9,
    QuartIn                                        = 10,
    QuartOut                                       = 11,
    QuartInOut                                     = 12,
    QuintIn                                        = 13,
    QuintOut                                       = 14,
    QuintInOut                                     = 15,
    ExpoIn                                         = 16,
    ExpoOut                                        = 17,
    ExpoInOut                                      = 18,
    CircIn                                         = 19,
    CircOut                                        = 20,
    CircInOut                                      = 21,
    EMovieSceneBuiltInEasing_MAX                   = 22
};


// Enum  MovieScene.EEvaluationMethod
enum class EEvaluationMethod : uint8_t
{
    Static                                         = 0,
    Swept                                          = 1,
    EEvaluationMethod_MAX                          = 2
};


// Enum  MovieScene.EMovieScenePlayerStatus
enum class EMovieScenePlayerStatus : uint8_t
{
    Stopped                                        = 0,
    Playing                                        = 1,
    Scrubbing                                      = 2,
    Jumping                                        = 3,
    Stepping                                       = 4,
    Paused                                         = 5,
    MAX                                            = 6
};


// Enum  MovieScene.EMovieSceneEvaluationType
enum class EMovieSceneEvaluationType : uint8_t
{
    FrameLocked                                    = 0,
    WithSubFrames                                  = 1,
    EMovieSceneEvaluationType_MAX                  = 2
};


// Enum  MovieScene.EUpdateClockSource
enum class EUpdateClockSource : uint8_t
{
    Tick                                           = 0,
    Platform                                       = 1,
    Audio                                          = 2,
    RelativeTimecode                               = 3,
    Timecode                                       = 4,
    PlayEveryFrame                                 = 5,
    Custom                                         = 6,
    EUpdateClockSource_MAX                         = 7
};


// Enum  MovieScene.EMovieSceneSequenceFlags
enum class EMovieSceneSequenceFlags : uint8_t
{
    None                                           = 0,
    Volatile                                       = 1,
    BlockingEvaluation                             = 2,
    InheritedFlags                                 = 1,
    EMovieSceneSequenceFlags_MAX                   = 3
};


// Enum  MovieScene.EMovieSceneServerClientMask
enum class EMovieSceneServerClientMask : uint8_t
{
    None                                           = 0,
    Server                                         = 1,
    Client                                         = 2,
    All                                            = 3,
    EMovieSceneServerClientMask_MAX                = 4
};


// Enum  MovieScene.EMovieSceneObjectBindingSpace
enum class EMovieSceneObjectBindingSpace : uint8_t
{
    Local                                          = 0,
    Root                                           = 1,
    Unused                                         = 2,
    EMovieSceneObjectBindingSpace_MAX              = 3
};


// Enum  MovieScene.ESectionEvaluationFlags
enum class ESectionEvaluationFlags : uint8_t
{
    None                                           = 0,
    PreRoll                                        = 1,
    PostRoll                                       = 2,
    ESectionEvaluationFlags_MAX                    = 3
};


// Enum  MovieScene.EUpdatePositionMethod
enum class EUpdatePositionMethod : uint8_t
{
    Play                                           = 0,
    Jump                                           = 1,
    Scrub                                          = 2,
    EUpdatePositionMethod_MAX                      = 3
};


// Enum  MovieScene.EMovieScenePositionType
enum class EMovieScenePositionType : uint8_t
{
    Frame                                          = 0,
    Time                                           = 1,
    MarkedFrame                                    = 2,
    EMovieScenePositionType_MAX                    = 3
};


// Enum  MovieScene.ESpawnOwnership
enum class ESpawnOwnership : uint8_t
{
    InnerSequence                                  = 0,
    MasterSequence                                 = 1,
    External                                       = 2,
    ESpawnOwnership_MAX                            = 3
};


// Enum  AnimGraphRuntime.AnimPhysAngularConstraintType
enum class AnimPhysAngularConstraintType : uint8_t
{
    Angular                                        = 0,
    Cone                                           = 1,
    AnimPhysAngularConstraintType_MAX              = 2
};


// Enum  AnimGraphRuntime.AnimPhysLinearConstraintType
enum class AnimPhysLinearConstraintType : uint8_t
{
    Free                                           = 0,
    Limited                                        = 1,
    AnimPhysLinearConstraintType_MAX               = 2
};


// Enum  AnimGraphRuntime.AnimPhysSimSpaceType
enum class AnimPhysSimSpaceType : uint8_t
{
    Component                                      = 0,
    Actor                                          = 1,
    World                                          = 2,
    RootRelative                                   = 3,
    BoneRelative                                   = 4,
    AnimPhysSimSpaceType_MAX                       = 5
};


// Enum  AnimGraphRuntime.ESphericalLimitType
enum class ESphericalLimitType : uint8_t
{
    Inner                                          = 0,
    Outer                                          = 1,
    ESphericalLimitType_MAX                        = 2
};


// Enum  AnimGraphRuntime.EBlendListTransitionType
enum class EBlendListTransitionType : uint8_t
{
    StandardBlend                                  = 0,
    Inertialization                                = 1,
    EBlendListTransitionType_MAX                   = 2
};


// Enum  AnimGraphRuntime.EDrivenBoneModificationMode
enum class EDrivenBoneModificationMode : uint8_t
{
    AddToInput                                     = 0,
    ReplaceComponent                               = 1,
    AddToRefPose                                   = 2,
    EDrivenBoneModificationMode_MAX                = 3
};


// Enum  AnimGraphRuntime.EDrivenDestinationMode
enum class EDrivenDestinationMode : uint8_t
{
    Bone                                           = 0,
    MorphTarget                                    = 1,
    MaterialParameter                              = 2,
    EDrivenDestinationMode_MAX                     = 3
};


// Enum  AnimGraphRuntime.EAnimFunctionCallSite
enum class EAnimFunctionCallSite : uint8_t
{
    OnInitialize                                   = 0,
    OnUpdate                                       = 1,
    OnBecomeRelevant                               = 2,
    OnEvaluate                                     = 3,
    OnInitializePostRecursion                      = 4,
    OnUpdatePostRecursion                          = 5,
    OnBecomeRelevantPostRecursion                  = 6,
    OnEvaluatePostRecursion                        = 7,
    OnStartedBlendingOut                           = 8,
    OnStartedBlendingIn                            = 9,
    OnFinishedBlendingOut                          = 10,
    OnFinishedBlendingIn                           = 11,
    EAnimFunctionCallSite_MAX                      = 12
};


// Enum  AnimGraphRuntime.EConstraintOffsetOption
enum class EConstraintOffsetOption : uint8_t
{
    None                                           = 0,
    Offset_RefPose                                 = 1,
    EConstraintOffsetOption_MAX                    = 2
};


// Enum  AnimGraphRuntime.CopyBoneDeltaMode
enum class CopyBoneDeltaMode : uint8_t
{
    Accumulate                                     = 0,
    Copy                                           = 1,
    CopyBoneDeltaMode_MAX                          = 2
};


// Enum  AnimGraphRuntime.ELayeredBoneBlendMode
enum class ELayeredBoneBlendMode : uint8_t
{
    BranchFilter                                   = 0,
    BlendMask                                      = 1,
    ELayeredBoneBlendMode_MAX                      = 2
};


// Enum  AnimGraphRuntime.EAnimLayerCurveBlendMode
enum class EAnimLayerCurveBlendMode : uint8_t
{
    Blend                                          = 0,
    Additive                                       = 1,
    Override                                       = 2,
    Ignored                                        = 3,
    EAnimLayerCurveBlendMode_MAX                   = 4
};


// Enum  AnimGraphRuntime.EAnimLayerAdditivePoseBlendMode
enum class EAnimLayerAdditivePoseBlendMode : uint8_t
{
    LocalSpace                                     = 0,
    MeshSpace                                      = 1,
    EAnimLayerAdditivePoseBlendMode_MAX            = 2
};


// Enum  AnimGraphRuntime.EAnimLayerPoseBlendMode
enum class EAnimLayerPoseBlendMode : uint8_t
{
    LocalSpace                                     = 0,
    MeshSpace                                      = 1,
    EAnimLayerPoseBlendMode_MAX                    = 2
};


// Enum  AnimGraphRuntime.EInterpolationBlend
enum class EInterpolationBlend : uint8_t
{
    Linear                                         = 0,
    Cubic                                          = 1,
    Sinusoidal                                     = 2,
    EaseInOutExponent2                             = 3,
    EaseInOutExponent3                             = 4,
    EaseInOutExponent4                             = 5,
    EaseInOutExponent5                             = 6,
    MAX                                            = 7
};


// Enum  AnimGraphRuntime.EBoneModificationMode
enum class EBoneModificationMode : uint8_t
{
    BMM_Ignore                                     = 0,
    BMM_Replace                                    = 1,
    BMM_Additive                                   = 2,
    BMM_MAX                                        = 3
};


// Enum  AnimGraphRuntime.EModifyCurveApplyMode
enum class EModifyCurveApplyMode : uint8_t
{
    Add                                            = 0,
    Scale                                          = 1,
    Blend                                          = 2,
    WeightedMovingAverage                          = 3,
    RemapCurve                                     = 4,
    EModifyCurveApplyMode_MAX                      = 5
};


// Enum  AnimGraphRuntime.EPoseDriverType
enum class EPoseDriverType : uint8_t
{
    SwingAndTwist                                  = 0,
    SwingOnly                                      = 1,
    Translation                                    = 2,
    EPoseDriverType_MAX                            = 3
};


// Enum  AnimGraphRuntime.EPoseDriverSource
enum class EPoseDriverSource : uint8_t
{
    Rotation                                       = 0,
    Translation                                    = 1,
    EPoseDriverSource_MAX                          = 2
};


// Enum  AnimGraphRuntime.EPoseDriverOutput
enum class EPoseDriverOutput : uint8_t
{
    DrivePoses                                     = 0,
    DriveCurves                                    = 1,
    EPoseDriverOutput_MAX                          = 2
};


// Enum  AnimGraphRuntime.ESnapshotSourceMode
enum class ESnapshotSourceMode : uint8_t
{
    NamedSnapshot                                  = 0,
    SnapshotPin                                    = 1,
    ESnapshotSourceMode_MAX                        = 2
};


// Enum  AnimGraphRuntime.ERefPoseType
enum class ERefPoseType : uint8_t
{
    EIT_LocalSpace                                 = 0,
    EIT_Additive                                   = 1,
    EIT_MAX                                        = 2
};


// Enum  AnimGraphRuntime.ESimulationSpace
enum class ESimulationSpace : uint8_t
{
    ComponentSpace                                 = 0,
    WorldSpace                                     = 1,
    BaseBoneSpace                                  = 2,
    ESimulationSpace_MAX                           = 3
};


// Enum  AnimGraphRuntime.EScaleChainInitialLength
enum class EScaleChainInitialLength : uint8_t
{
    FixedDefaultLengthValue                        = 0,
    Distance                                       = 1,
    ChainLength                                    = 2,
    EScaleChainInitialLength_MAX                   = 3
};


// Enum  AnimGraphRuntime.ESequenceEvalReinit
enum class ESequenceEvalReinit : uint8_t
{
    NoReset                                        = 0,
    StartPosition                                  = 1,
    ExplicitTime                                   = 2,
    ESequenceEvalReinit_MAX                        = 3
};


// Enum  AnimGraphRuntime.ESplineBoneAxis
enum class ESplineBoneAxis : uint8_t
{
    None                                           = 0,
    X                                              = 1,
    Y                                              = 2,
    Z                                              = 3,
    ESplineBoneAxis_MAX                            = 4
};


// Enum  AnimGraphRuntime.EWarpingEvaluationMode
enum class EWarpingEvaluationMode : uint8_t
{
    Manual                                         = 0,
    Graph                                          = 1,
    EWarpingEvaluationMode_MAX                     = 2
};


// Enum  AnimGraphRuntime.EWarpingVectorMode
enum class EWarpingVectorMode : uint8_t
{
    ComponentSpaceVector                           = 0,
    ActorSpaceVector                               = 1,
    WorldSpaceVector                               = 2,
    IKFootRootLocalSpaceVector                     = 3,
    EWarpingVectorMode_MAX                         = 4
};


// Enum  AnimGraphRuntime.EEasingFuncType
enum class EEasingFuncType : uint8_t
{
    Linear                                         = 0,
    Sinusoidal                                     = 1,
    Cubic                                          = 2,
    QuadraticInOut                                 = 3,
    CubicInOut                                     = 4,
    HermiteCubic                                   = 5,
    QuarticInOut                                   = 6,
    QuinticInOut                                   = 7,
    CircularIn                                     = 8,
    CircularOut                                    = 9,
    CircularInOut                                  = 10,
    ExpIn                                          = 11,
    ExpOut                                         = 12,
    ExpInOut                                       = 13,
    CustomCurve                                    = 14,
    EEasingFuncType_MAX                            = 15
};


// Enum  AnimGraphRuntime.ERotationComponent
enum class ERotationComponent : uint8_t
{
    EulerX                                         = 0,
    EulerY                                         = 1,
    EulerZ                                         = 2,
    QuaternionAngle                                = 3,
    SwingAngle                                     = 4,
    TwistAngle                                     = 5,
    ERotationComponent_MAX                         = 6
};


// Enum  AnimGraphRuntime.ERBFSolverType
enum class ERBFSolverType : uint8_t
{
    Additive                                       = 0,
    Interpolative                                  = 1,
    ERBFSolverType_MAX                             = 2
};


// Enum  AnimGraphRuntime.ERBFFunctionType
enum class ERBFFunctionType : uint8_t
{
    Gaussian                                       = 0,
    Exponential                                    = 1,
    Linear                                         = 2,
    Cubic                                          = 3,
    Quintic                                        = 4,
    DefaultFunction                                = 5,
    ERBFFunctionType_MAX                           = 6
};


// Enum  AnimGraphRuntime.ERBFDistanceMethod
enum class ERBFDistanceMethod : uint8_t
{
    Euclidean                                      = 0,
    Quaternion                                     = 1,
    SwingAngle                                     = 2,
    TwistAngle                                     = 3,
    DefaultMethod                                  = 4,
    ERBFDistanceMethod_MAX                         = 5
};


// Enum  AnimGraphRuntime.ERBFNormalizeMethod
enum class ERBFNormalizeMethod : uint8_t
{
    OnlyNormalizeAboveOne                          = 0,
    AlwaysNormalize                                = 1,
    NormalizeWithinMedian                          = 2,
    NoNormalization                                = 3,
    ERBFNormalizeMethod_MAX                        = 4
};


// Enum  AudioExtensions.EAudioParameterType
enum class EAudioParameterType : uint8_t
{
    None                                           = 0,
    Boolean                                        = 1,
    Integer                                        = 2,
    Float                                          = 3,
    String                                         = 4,
    Object                                         = 5,
    NoneArray                                      = 6,
    BooleanArray                                   = 7,
    IntegerArray                                   = 8,
    FloatArray                                     = 9,
    StringArray                                    = 10,
    ObjectArray                                    = 11,
    COUNT                                          = 12,
    EAudioParameterType_MAX                        = 13
};


// Enum  AudioExtensions.EPcmBitDepthConversion
enum class EPcmBitDepthConversion : uint8_t
{
    SameAsSource                                   = 0,
    Int16                                          = 1,
    Float32                                        = 2,
    EPcmBitDepthConversion_MAX                     = 3
};


// Enum  MovieSceneTracks.MovieScene3DPathSection_Axis
enum class MovieScene3DPathSection_Axis : uint8_t
{
    X                                              = 0,
    Y                                              = 1,
    Z                                              = 2,
    NEG_X                                          = 3,
    NEG_Y                                          = 4,
    NEG_Z                                          = 5,
    MovieScene3DPathSection_MAX                    = 6
};


// Enum  MovieSceneTracks.EFireEventsAtPosition
enum class EFireEventsAtPosition : uint8_t
{
    AtStartOfEvaluation                            = 0,
    AtEndOfEvaluation                              = 1,
    AfterSpawn                                     = 2,
    EFireEventsAtPosition_MAX                      = 3
};


// Enum  MovieSceneTracks.ELevelVisibility
enum class ELevelVisibility : uint8_t
{
    Visible                                        = 0,
    Hidden                                         = 1,
    ELevelVisibility_MAX                           = 2
};


// Enum  MovieSceneTracks.EParticleKey
enum class EParticleKey : uint8_t
{
    Activate                                       = 0,
    Deactivate                                     = 1,
    Trigger                                        = 2,
    EParticleKey_MAX                               = 3
};


// Enum  UMG.EDragPivot
enum class EDragPivot : uint8_t
{
    MouseDown                                      = 0,
    TopLeft                                        = 1,
    TopCenter                                      = 2,
    TopRight                                       = 3,
    CenterLeft                                     = 4,
    CenterCenter                                   = 5,
    CenterRight                                    = 6,
    BottomLeft                                     = 7,
    BottomCenter                                   = 8,
    BottomRight                                    = 9,
    EDragPivot_MAX                                 = 10
};


// Enum  UMG.EDynamicBoxType
enum class EDynamicBoxType : uint8_t
{
    Horizontal                                     = 0,
    Vertical                                       = 1,
    Wrap                                           = 2,
    VerticalWrap                                   = 3,
    Radial                                         = 4,
    Overlay                                        = 5,
    EDynamicBoxType_MAX                            = 6
};


// Enum  UMG.ESlateSizeRule
enum class ESlateSizeRule : uint8_t
{
    Automatic                                      = 0,
    Fill                                           = 1,
    ESlateSizeRule_MAX                             = 2
};


// Enum  UMG.EWidgetDesignFlags
enum class EWidgetDesignFlags : uint8_t
{
    None                                           = 0,
    Designing                                      = 1,
    ShowOutline                                    = 2,
    ExecutePreConstruct                            = 4,
    EWidgetDesignFlags_MAX                         = 5
};


// Enum  UMG.EBindingKind
enum class EBindingKind : uint8_t
{
    Function                                       = 0,
    Property                                       = 1,
    EBindingKind_MAX                               = 2
};


// Enum  UMG.EWidgetSpace
enum class EWidgetSpace : uint8_t
{
    World                                          = 0,
    Screen                                         = 1,
    EWidgetSpace_MAX                               = 2
};


// Enum  UMG.EWidgetTimingPolicy
enum class EWidgetTimingPolicy : uint8_t
{
    RealTime                                       = 0,
    GameTime                                       = 1,
    EWidgetTimingPolicy_MAX                        = 2
};


// Enum  UMG.EWidgetBlendMode
enum class EWidgetBlendMode : uint8_t
{
    Opaque                                         = 0,
    Masked                                         = 1,
    Transparent                                    = 2,
    EWidgetBlendMode_MAX                           = 3
};


// Enum  UMG.EWidgetGeometryMode
enum class EWidgetGeometryMode : uint8_t
{
    Plane                                          = 0,
    Cylinder                                       = 1,
    EWidgetGeometryMode_MAX                        = 2
};


// Enum  UMG.EWindowVisibility
enum class EWindowVisibility : uint8_t
{
    Visible                                        = 0,
    SelfHitTestInvisible                           = 1,
    EWindowVisibility_MAX                          = 2
};


// Enum  UMG.ETickMode
enum class ETickMode : uint8_t
{
    Disabled                                       = 0,
    Enabled                                        = 1,
    Automatic                                      = 2,
    ETickMode_MAX                                  = 3
};


// Enum  UMG.EWidgetInteractionSource
enum class EWidgetInteractionSource : uint8_t
{
    World                                          = 0,
    Mouse                                          = 1,
    CenterScreen                                   = 2,
    Custom                                         = 3,
    EWidgetInteractionSource_MAX                   = 4
};


// Enum  TypedElementRuntime.ETypedElementChildInclusionMethod
enum class ETypedElementChildInclusionMethod : uint8_t
{
    None                                           = 0,
    Immediate                                      = 1,
    Recursive                                      = 2,
    ETypedElementChildInclusionMethod_MAX          = 3
};


// Enum  TypedElementRuntime.ETypedElementSelectionMethod
enum class ETypedElementSelectionMethod : uint8_t
{
    Primary                                        = 0,
    Secondary                                      = 1,
    ETypedElementSelectionMethod_MAX               = 2
};


// Enum  CinematicCamera.ECameraFocusMethod
enum class ECameraFocusMethod : uint8_t
{
    DoNotOverride                                  = 0,
    Manual                                         = 1,
    Tracking                                       = 2,
    Disable                                        = 3,
    MAX                                            = 4
};


// Enum  AudioPlatformConfiguration.ESoundwaveSampleRateSettings
enum class ESoundwaveSampleRateSettings : uint8_t
{
    Max                                            = 0,
    High                                           = 1,
    Medium                                         = 2,
    Low                                            = 3,
    Min                                            = 4,
    MatchDevice                                    = 5
};


// Enum  AudioMixer.EAudioDeviceChangedRole
enum class EAudioDeviceChangedRole : uint8_t
{
    Invalid                                        = 0,
    Console                                        = 1,
    Multimedia                                     = 2,
    Communications                                 = 3,
    Count                                          = 4,
    EAudioDeviceChangedRole_MAX                    = 5
};


// Enum  AudioMixer.EAudioDeviceChangedState
enum class EAudioDeviceChangedState : uint8_t
{
    Invalid                                        = 0,
    Active                                         = 1,
    Disabled                                       = 2,
    NotPresent                                     = 3,
    Unplugged                                      = 4,
    Count                                          = 5,
    EAudioDeviceChangedState_MAX                   = 6
};


// Enum  AudioMixer.EAudioMixerChannelType
enum class EAudioMixerChannelType : uint8_t
{
    FrontLeft                                      = 0,
    FrontRight                                     = 1,
    FrontCenter                                    = 2,
    LowFrequency                                   = 3,
    BackLeft                                       = 4,
    BackRight                                      = 5,
    FrontLeftOfCenter                              = 6,
    FrontRightOfCenter                             = 7,
    BackCenter                                     = 8,
    SideLeft                                       = 9,
    SideRight                                      = 10,
    TopCenter                                      = 11,
    TopFrontLeft                                   = 12,
    TopFrontCenter                                 = 13,
    TopFrontRight                                  = 14,
    TopBackLeft                                    = 15,
    TopBackCenter                                  = 16,
    TopBackRight                                   = 17,
    Unknown                                        = 18,
    ChannelTypeCount                               = 19,
    DefaultChannel                                 = 0,
    EAudioMixerChannelType_MAX                     = 20
};


// Enum  AudioMixer.EAudioMixerStreamDataFormatType
enum class EAudioMixerStreamDataFormatType : uint8_t
{
    Unknown                                        = 0,
    Float                                          = 1,
    Int16                                          = 2,
    Unsupported                                    = 3,
    EAudioMixerStreamDataFormatType_MAX            = 4
};


// Enum  AudioMixer.ESwapAudioOutputDeviceResultState
enum class ESwapAudioOutputDeviceResultState : uint8_t
{
    Failure                                        = 0,
    Success                                        = 1,
    None                                           = 2,
    ESwapAudioOutputDeviceResultState_MAX          = 3
};


// Enum  AudioMixer.EMusicalNoteName
enum class EMusicalNoteName : uint8_t
{
    C                                              = 0,
    Db                                             = 1,
    D                                              = 2,
    Eb                                             = 3,
    E                                              = 4,
    F                                              = 5,
    Gb                                             = 6,
    G                                              = 7,
    Ab                                             = 8,
    A                                              = 9,
    Bb                                             = 10,
    B                                              = 11,
    EMusicalNoteName_MAX                           = 12
};


// Enum  AudioMixer.ESubmixEffectDynamicsProcessorType
enum class ESubmixEffectDynamicsProcessorType : uint8_t
{
    Compressor                                     = 0,
    Limiter                                        = 1,
    Expander                                       = 2,
    Gate                                           = 3,
    UpwardsCompressor                              = 4,
    Count                                          = 5,
    ESubmixEffectDynamicsProcessorType_MAX         = 6
};


// Enum  AudioMixer.ESubmixEffectDynamicsPeakMode
enum class ESubmixEffectDynamicsPeakMode : uint8_t
{
    MeanSquared                                    = 0,
    RootMeanSquared                                = 1,
    Peak                                           = 2,
    Count                                          = 3,
    ESubmixEffectDynamicsPeakMode_MAX              = 4
};


// Enum  AudioMixer.ESubmixEffectDynamicsChannelLinkMode
enum class ESubmixEffectDynamicsChannelLinkMode : uint8_t
{
    Disabled                                       = 0,
    Average                                        = 1,
    Peak                                           = 2,
    Count                                          = 3,
    ESubmixEffectDynamicsChannelLinkMode_MAX       = 4
};


// Enum  AudioMixer.ESubmixEffectDynamicsKeySource
enum class ESubmixEffectDynamicsKeySource : uint8_t
{
    Default                                        = 0,
    AudioBus                                       = 1,
    Submix                                         = 2,
    Count                                          = 3,
    ESubmixEffectDynamicsKeySource_MAX             = 4
};


// Enum  AudioMixer.EQuarztClockManagerType
enum class EQuarztClockManagerType : uint8_t
{
    AudioEngine                                    = 0,
    QuartzSubsystem                                = 1,
    Count                                          = 2,
    EQuarztClockManagerType_MAX                    = 3
};


// Enum  CoreOnline.ECoreOnlineDummy
enum class ECoreOnlineDummy : uint8_t
{
    Dummy                                          = 0,
    ECoreOnlineDummy_MAX                           = 1
};


// Enum  NetCore.ENetCloseResult
enum class ENetCloseResult : uint8_t
{
    NetDriverAlreadyExists                         = 0,
    NetDriverCreateFailure                         = 1,
    NetDriverListenFailure                         = 2,
    ConnectionLost                                 = 3,
    ConnectionTimeout                              = 4,
    FailureReceived                                = 5,
    OutdatedClient                                 = 6,
    OutdatedServer                                 = 7,
    PendingConnectionFailure                       = 8,
    NetGuidMismatch                                = 9,
    NetChecksumMismatch                            = 10,
    SecurityMalformedPacket                        = 11,
    SecurityInvalidData                            = 12,
    SecurityClosed                                 = 13,
    Unknown                                        = 14,
    Success                                        = 15,
    Extended                                       = 16,
    RPCDoS                                         = 17,
    Cleanup                                        = 18,
    MissingLevelPackage                            = 19,
    PacketHandlerIncomingError                     = 20,
    ZeroLastByte                                   = 21,
    ZeroSize                                       = 22,
    ReadHeaderFail                                 = 23,
    ReadHeaderExtraFail                            = 24,
    AckSequenceMismatch                            = 25,
    BunchBadChannelIndex                           = 26,
    BunchChannelNameFail                           = 27,
    BunchWrongChannelType                          = 28,
    BunchHeaderOverflow                            = 29,
    BunchDataOverflow                              = 30,
    BunchPrematureControlChannel                   = 31,
    BunchPrematureChannel                          = 32,
    BunchPrematureControlClose                     = 33,
    UnknownChannelType                             = 34,
    PrematureSend                                  = 35,
    CorruptData                                    = 36,
    SocketSendFailure                              = 37,
    BadChildConnectionIndex                        = 38,
    LogLimitInstant                                = 39,
    LogLimitSustained                              = 40,
    ReceivedNetGUIDBunchFail                       = 41,
    MaxReliableExceeded                            = 42,
    ReceivedNextBunchFail                          = 43,
    ReceivedNextBunchQueueFail                     = 44,
    PartialInitialReliableDestroy                  = 45,
    PartialMergeReliableDestroy                    = 46,
    PartialInitialNonByteAligned                   = 47,
    PartialNonByteAligned                          = 48,
    PartialFinalPackageMapExports                  = 49,
    PartialTooLarge                                = 50,
    AlreadyOpen                                    = 51,
    ReliableBeforeOpen                             = 52,
    ReliableBufferOverflow                         = 53,
    ControlChannelClose                            = 54,
    ControlChannelEndianCheck                      = 55,
    ControlChannelPlayerChannelFail                = 56,
    ControlChannelMessageUnknown                   = 57,
    ControlChannelMessageFail                      = 58,
    ControlChannelMessagePayloadFail               = 59,
    ControlChannelBunchOverflowed                  = 60,
    ControlChannelQueueBunchOverflowed             = 61,
    ClientHasMustBeMappedGUIDs                     = 62,
    UnregisteredMustBeMappedGUID                   = 63,
    ObjectReplicatorReceivedBunchFail              = 64,
    ContentBlockFail                               = 65,
    ContentBlockHeaderRepLayoutFail                = 66,
    ContentBlockHeaderIsActorFail                  = 67,
    ContentBlockHeaderObjFail                      = 68,
    ContentBlockHeaderPrematureEnd                 = 69,
    ContentBlockHeaderSubObjectActor               = 70,
    ContentBlockHeaderBadParent                    = 71,
    ContentBlockHeaderInvalidCreate                = 72,
    ContentBlockHeaderStablyNamedFail              = 73,
    ContentBlockHeaderNoSubObjectClass             = 74,
    ContentBlockHeaderUObjectSubObject             = 75,
    ContentBlockHeaderAActorSubObject              = 76,
    ContentBlockHeaderFail                         = 77,
    ContentBlockPayloadBitsFail                    = 78,
    FieldHeaderRepIndex                            = 79,
    FieldHeaderBadRepIndex                         = 80,
    FieldHeaderPayloadBitsFail                     = 81,
    FieldPayloadFail                               = 82,
    FaultDisconnect                                = 83,
    NotRecoverable                                 = 84,
    ENetCloseResult_MAX                            = 85
};


// Enum  GameplayTags.EGameplayContainerMatchType
enum class EGameplayContainerMatchType : uint8_t
{
    Any                                            = 0,
    All                                            = 1,
    EGameplayContainerMatchType_MAX                = 2
};


// Enum  GameplayTags.EGameplayTagQueryExprType
enum class EGameplayTagQueryExprType : uint8_t
{
    Undefined                                      = 0,
    AnyTagsMatch                                   = 1,
    AllTagsMatch                                   = 2,
    NoTagsMatch                                    = 3,
    AnyExprMatch                                   = 4,
    AllExprMatch                                   = 5,
    NoExprMatch                                    = 6,
    EGameplayTagQueryExprType_MAX                  = 7
};


// Enum  GameplayTags.EGameplayTagSourceType
enum class EGameplayTagSourceType : uint8_t
{
    Native                                         = 0,
    DefaultTagList                                 = 1,
    TagList                                        = 2,
    RestrictedTagList                              = 3,
    DataTable                                      = 4,
    Invalid                                        = 5,
    EGameplayTagSourceType_MAX                     = 6
};


// Enum  GameplayTags.EGameplayTagSelectionType
enum class EGameplayTagSelectionType : uint8_t
{
    None                                           = 0,
    NonRestrictedOnly                              = 1,
    RestrictedOnly                                 = 2,
    All                                            = 3,
    EGameplayTagSelectionType_MAX                  = 4
};


// Enum  MeshDescription.EComputeNTBsOptions
enum class EComputeNTBsOptions : uint8_t
{
    None                                           = 0,
    Normals                                        = 1,
    Tangents                                       = 2,
    WeightedNTBs                                   = 4,
    EComputeNTBsOptions_MAX                        = 5
};


// Enum  MediaUtils.EMediaPlayerOptionBooleanOverride
enum class EMediaPlayerOptionBooleanOverride : uint8_t
{
    UseMediaPlayerSetting                          = 0,
    Enabled                                        = 1,
    Disabled                                       = 2,
    EMediaPlayerOptionBooleanOverride_MAX          = 3
};


// Enum  MediaAssets.EMediaAudioCaptureDeviceFilter
enum class EMediaAudioCaptureDeviceFilter : uint8_t
{
    None                                           = 0,
    Card                                           = 1,
    Microphone                                     = 2,
    Software                                       = 4,
    Unknown                                        = 8,
    EMediaAudioCaptureDeviceFilter_MAX             = 9
};


// Enum  MediaAssets.EMediaVideoCaptureDeviceFilter
enum class EMediaVideoCaptureDeviceFilter : uint8_t
{
    None                                           = 0,
    Card                                           = 1,
    Software                                       = 2,
    Unknown                                        = 4,
    Webcam                                         = 8,
    EMediaVideoCaptureDeviceFilter_MAX             = 9
};


// Enum  MediaAssets.EMediaWebcamCaptureDeviceFilter
enum class EMediaWebcamCaptureDeviceFilter : uint8_t
{
    None                                           = 0,
    DepthSensor                                    = 1,
    Front                                          = 2,
    Rear                                           = 4,
    Unknown                                        = 8,
    EMediaWebcamCaptureDeviceFilter_MAX            = 9
};


// Enum  MediaAssets.EMediaPlayerTrack
enum class EMediaPlayerTrack : uint8_t
{
    Audio                                          = 0,
    Caption                                        = 1,
    Metadata                                       = 2,
    Script                                         = 3,
    Subtitle                                       = 4,
    Text                                           = 5,
    Video                                          = 6,
    EMediaPlayerTrack_MAX                          = 7
};


// Enum  MediaAssets.EMediaSoundChannels
enum class EMediaSoundChannels : uint8_t
{
    Mono                                           = 0,
    Stereo                                         = 1,
    Surround                                       = 2,
    EMediaSoundChannels_MAX                        = 3
};


// Enum  MediaAssets.EMediaSoundComponentFFTSize
enum class EMediaSoundComponentFFTSize : uint8_t
{
    Min                                            = 0,
    Small                                          = 1,
    Medium                                         = 2,
    Large                                          = 3,
    EMediaSoundComponentFFTSize_MAX                = 4
};


// Enum  MediaAssets.MediaTextureOutputFormat
enum class MediaTextureOutputFormat : uint8_t
{
    MTOF_Default                                   = 0,
    MTOF_SRGB_LINOUT                               = 1,
    MTOF_MAX                                       = 2
};


// Enum  MediaAssets.MediaTextureOrientation
enum class MediaTextureOrientation : uint8_t
{
    MTORI_Original                                 = 0,
    MTORI_CW90                                     = 1,
    MTORI_CW180                                    = 2,
    MTORI_CW270                                    = 3,
    MTORI_MAX                                      = 4
};


// Enum  MovieSceneCapture.EHDRCaptureGamut
enum class EHDRCaptureGamut : uint8_t
{
    HCGM_Rec709                                    = 0,
    HCGM_P3DCI                                     = 1,
    HCGM_Rec2020                                   = 2,
    HCGM_ACES                                      = 3,
    HCGM_ACEScg                                    = 4,
    HCGM_Linear                                    = 5,
    HCGM_MAX                                       = 6
};


// Enum  MovieSceneCapture.EMovieSceneCaptureProtocolState
enum class EMovieSceneCaptureProtocolState : uint8_t
{
    Idle                                           = 0,
    Initialized                                    = 1,
    Capturing                                      = 2,
    Finalizing                                     = 3,
    EMovieSceneCaptureProtocolState_MAX            = 4
};


// Enum  MoviePlayer.EMoviePlaybackType
enum class EMoviePlaybackType : uint8_t
{
    MT_Normal                                      = 0,
    MT_Looped                                      = 1,
    MT_LoadingLoop                                 = 2,
    MT_MAX                                         = 3
};


// Enum  Engine.EAlphaBlendOption
enum class EAlphaBlendOption : uint8_t
{
    Linear                                         = 0,
    Cubic                                          = 1,
    HermiteCubic                                   = 2,
    Sinusoidal                                     = 3,
    QuadraticInOut                                 = 4,
    CubicInOut                                     = 5,
    QuarticInOut                                   = 6,
    QuinticInOut                                   = 7,
    CircularIn                                     = 8,
    CircularOut                                    = 9,
    CircularInOut                                  = 10,
    ExpIn                                          = 11,
    ExpOut                                         = 12,
    ExpInOut                                       = 13,
    Custom                                         = 14,
    EAlphaBlendOption_MAX                          = 15
};


// Enum  Engine.EAnimGroupRole
enum class EAnimGroupRole : uint8_t
{
    CanBeLeader                                    = 0,
    AlwaysFollower                                 = 1,
    AlwaysLeader                                   = 2,
    TransitionLeader                               = 3,
    TransitionFollower                             = 4,
    EAnimGroupRole_MAX                             = 5
};


// Enum  Engine.EAnimSyncGroupScope
enum class EAnimSyncGroupScope : uint8_t
{
    Local                                          = 0,
    Component                                      = 1,
    EAnimSyncGroupScope_MAX                        = 2
};


// Enum  Engine.EAnimSyncMethod
enum class EAnimSyncMethod : uint8_t
{
    DoNotSync                                      = 0,
    SyncGroup                                      = 1,
    Graph                                          = 2,
    EAnimSyncMethod_MAX                            = 3
};


// Enum  Engine.EPreviewAnimationBlueprintApplicationMethod
enum class EPreviewAnimationBlueprintApplicationMethod : uint8_t
{
    LinkedLayers                                   = 0,
    LinkedAnimGraph                                = 1,
    EPreviewAnimationBlueprintApplicationMethod_MAX = 2
};


// Enum  Engine.AnimationKeyFormat
enum class AnimationKeyFormat : uint8_t
{
    AKF_ConstantKeyLerp                            = 0,
    AKF_VariableKeyLerp                            = 1,
    AKF_PerTrackCompression                        = 2,
    AKF_MAX                                        = 3
};


// Enum  Engine.EAnimAssetCurveFlags
enum class EAnimAssetCurveFlags : uint8_t
{
    AACF_NONE                                      = 0,
    AACF_DriveMorphTarget_DEPRECATED               = 1,
    AACF_DriveAttribute_DEPRECATED                 = 2,
    AACF_Editable                                  = 4,
    AACF_DriveMaterial_DEPRECATED                  = 8,
    AACF_Metadata                                  = 16,
    AACF_DriveTrack                                = 32,
    AACF_Disabled                                  = 64,
    AACF_MAX                                       = 65
};


// Enum  Engine.ERawCurveTrackTypes
enum class ERawCurveTrackTypes : uint8_t
{
    RCT_Float                                      = 0,
    RCT_Vector                                     = 1,
    RCT_Transform                                  = 2,
    RCT_MAX                                        = 3
};


// Enum  Engine.ERootMotionRootLock
enum class ERootMotionRootLock : uint8_t
{
    RefPose                                        = 0,
    AnimFirstFrame                                 = 1,
    Zero                                           = 2,
    ERootMotionRootLock_MAX                        = 3
};


// Enum  Engine.ERootMotionMode
enum class ERootMotionMode : uint8_t
{
    NoRootMotionExtraction                         = 0,
    IgnoreRootMotion                               = 1,
    RootMotionFromEverything                       = 2,
    RootMotionFromMontagesOnly                     = 3,
    ERootMotionMode_MAX                            = 4
};


// Enum  Engine.EAdditiveBasePoseType
enum class EAdditiveBasePoseType : uint8_t
{
    ABPT_None                                      = 0,
    ABPT_RefPose                                   = 1,
    ABPT_AnimScaled                                = 2,
    ABPT_AnimFrame                                 = 3,
    ABPT_LocalAnimFrame                            = 4,
    ABPT_MAX                                       = 5
};


// Enum  Engine.AnimationCompressionFormat
enum class AnimationCompressionFormat : uint8_t
{
    ACF_None                                       = 0,
    ACF_Float96NoW                                 = 1,
    ACF_Fixed48NoW                                 = 2,
    ACF_IntervalFixed32NoW                         = 3,
    ACF_Fixed32NoW                                 = 4,
    ACF_Float32NoW                                 = 5,
    ACF_Identity                                   = 6,
    ACF_MAX                                        = 7
};


// Enum  Engine.EAnimExecutionContextConversionResult
enum class EAnimExecutionContextConversionResult : uint8_t
{
    Succeeded                                      = 1,
    Failed                                         = 0,
    EAnimExecutionContextConversionResult_MAX      = 2
};


// Enum  Engine.EMontagePlayReturnType
enum class EMontagePlayReturnType : uint8_t
{
    MontageLength                                  = 0,
    Duration                                       = 1,
    EMontagePlayReturnType_MAX                     = 2
};


// Enum  Engine.EDrawDebugItemType
enum class EDrawDebugItemType : uint8_t
{
    DirectionalArrow                               = 0,
    Sphere                                         = 1,
    Line                                           = 2,
    OnScreenMessage                                = 3,
    CoordinateSystem                               = 4,
    Point                                          = 5,
    EDrawDebugItemType_MAX                         = 6
};


// Enum  Engine.EAnimLinkMethod
enum class EAnimLinkMethod : uint8_t
{
    Absolute                                       = 0,
    Relative                                       = 1,
    Proportional                                   = 2,
    EAnimLinkMethod_MAX                            = 3
};


// Enum  Engine.EAnimNotifyEventType
enum class EAnimNotifyEventType : uint8_t
{
    Begin                                          = 0,
    End                                            = 1,
    EAnimNotifyEventType_MAX                       = 2
};


// Enum  Engine.EMontageBlendMode
enum class EMontageBlendMode : uint8_t
{
    Standard                                       = 0,
    Inertialization                                = 1,
    EMontageBlendMode_MAX                          = 2
};


// Enum  Engine.EMontageSubStepResult
enum class EMontageSubStepResult : uint8_t
{
    Moved                                          = 0,
    NotMoved                                       = 1,
    InvalidSection                                 = 2,
    InvalidMontage                                 = 3,
    EMontageSubStepResult_MAX                      = 4
};


// Enum  Engine.EPinHidingMode
enum class EPinHidingMode : uint8_t
{
    NeverAsPin                                     = 0,
    PinHiddenByDefault                             = 1,
    PinShownByDefault                              = 2,
    AlwaysAsPin                                    = 3,
    EPinHidingMode_MAX                             = 4
};


// Enum  Engine.EAnimNodeDataFlags
enum class EAnimNodeDataFlags : uint8_t
{
    None                                           = 0,
    HasInitialUpdateFunction                       = 1,
    HasBecomeRelevantFunction                      = 2,
    HasUpdateFunction                              = 4,
    EAnimNodeDataFlags_MAX                         = 5
};


// Enum  Engine.EAnimNodeReferenceConversionResult
enum class EAnimNodeReferenceConversionResult : uint8_t
{
    Succeeded                                      = 1,
    Failed                                         = 0,
    EAnimNodeReferenceConversionResult_MAX         = 2
};


// Enum  Engine.EInertializationState
enum class EInertializationState : uint8_t
{
    Inactive                                       = 0,
    Pending                                        = 1,
    Active                                         = 2,
    EInertializationState_MAX                      = 3
};


// Enum  Engine.EInertializationBoneState
enum class EInertializationBoneState : uint8_t
{
    Invalid                                        = 0,
    Valid                                          = 1,
    Excluded                                       = 2,
    EInertializationBoneState_MAX                  = 3
};


// Enum  Engine.EInertializationSpace
enum class EInertializationSpace : uint8_t
{
    Default                                        = 0,
    WorldSpace                                     = 1,
    WorldRotation                                  = 2,
    EInertializationSpace_MAX                      = 3
};


// Enum  Engine.EEvaluatorDataSource
enum class EEvaluatorDataSource : uint8_t
{
    EDS_SourcePose                                 = 0,
    EDS_DestinationPose                            = 1,
    EDS_MAX                                        = 2
};


// Enum  Engine.EEvaluatorMode
enum class EEvaluatorMode : uint8_t
{
    EM_Standard                                    = 0,
    EM_Freeze                                      = 1,
    EM_DelayedFreeze                               = 2,
    EM_MAX                                         = 3
};


// Enum  Engine.AnimPhysTwistAxis
enum class AnimPhysTwistAxis : uint8_t
{
    AxisX                                          = 0,
    AxisY                                          = 1,
    AxisZ                                          = 2,
    AnimPhysTwistAxis_MAX                          = 3
};


// Enum  Engine.AnimPhysCollisionType
enum class AnimPhysCollisionType : uint8_t
{
    CoM                                            = 0,
    CustomSphere                                   = 1,
    InnerSphere                                    = 2,
    OuterSphere                                    = 3,
    AnimPhysCollisionType_MAX                      = 4
};


// Enum  Engine.ETypeAdvanceAnim
enum class ETypeAdvanceAnim : uint8_t
{
    ETAA_Default                                   = 0,
    ETAA_Finished                                  = 1,
    ETAA_Looped                                    = 2,
    ETAA_MAX                                       = 3
};


// Enum  Engine.ETransitionBlendMode
enum class ETransitionBlendMode : uint8_t
{
    TBM_Linear                                     = 0,
    TBM_Cubic                                      = 1,
    TBM_MAX                                        = 2
};


// Enum  Engine.ETransitionLogicType
enum class ETransitionLogicType : uint8_t
{
    TLT_StandardBlend                              = 0,
    TLT_Inertialization                            = 1,
    TLT_DynamicCrossfadeDuration                   = 2,
    TLT_Custom                                     = 3,
    TLT_MAX                                        = 4
};


// Enum  Engine.EBakedAnimationStateType
enum class EBakedAnimationStateType : uint8_t
{
    Default                                        = 0,
    Conduit                                        = 1,
    Transparent                                    = 2,
    EBakedAnimationStateType_MAX                   = 3
};


// Enum  Engine.EAnimPropertyAccessCallSite
enum class EAnimPropertyAccessCallSite : uint8_t
{
    WorkerThread_Unbatched                         = 0,
    WorkerThread_Batched_PreEventGraph             = 1,
    WorkerThread_Batched_PostEventGraph            = 2,
    GameThread_Batched_PreEventGraph               = 3,
    GameThread_Batched_PostEventGraph              = 4,
    EAnimPropertyAccessCallSite_MAX                = 5
};


// Enum  Engine.EBoneAxis
enum class EBoneAxis : uint8_t
{
    BA_X                                           = 0,
    BA_Y                                           = 1,
    BA_Z                                           = 2,
    BA_MAX                                         = 3
};


// Enum  Engine.EBoneControlSpace
enum class EBoneControlSpace : uint8_t
{
    BCS_WorldSpace                                 = 0,
    BCS_ComponentSpace                             = 1,
    BCS_ParentBoneSpace                            = 2,
    BCS_BoneSpace                                  = 3,
    BCS_MAX                                        = 4
};


// Enum  Engine.EBoneRotationSource
enum class EBoneRotationSource : uint8_t
{
    BRS_KeepComponentSpaceRotation                 = 0,
    BRS_KeepLocalSpaceRotation                     = 1,
    BRS_CopyFromTarget                             = 2,
    BRS_MAX                                        = 3
};


// Enum  Engine.EMontageNotifyTickType
enum class EMontageNotifyTickType : uint8_t
{
    Queued                                         = 0,
    BranchingPoint                                 = 1,
    EMontageNotifyTickType_MAX                     = 2
};


// Enum  Engine.ENotifyFilterType
enum class ENotifyFilterType : uint8_t
{
    NoFiltering                                    = 0,
    LOD                                            = 1,
    ENotifyFilterType_MAX                          = 2
};


// Enum  Engine.EAdditiveAnimationType
enum class EAdditiveAnimationType : uint8_t
{
    AAT_None                                       = 0,
    AAT_LocalSpaceBase                             = 1,
    AAT_RotationOffsetMeshSpace                    = 2,
    AAT_MAX                                        = 3
};


// Enum  Engine.ECurveBlendOption
enum class ECurveBlendOption : uint8_t
{
    Override                                       = 0,
    DoNotOverride                                  = 1,
    NormalizeByWeight                              = 2,
    BlendByWeight                                  = 3,
    UseBasePose                                    = 4,
    UseMaxValue                                    = 5,
    UseMinValue                                    = 6,
    ECurveBlendOption_MAX                          = 7
};


// Enum  Engine.EAnimInterpolationType
enum class EAnimInterpolationType : uint8_t
{
    Linear                                         = 0,
    Step                                           = 1,
    EAnimInterpolationType_MAX                     = 2
};


// Enum  Engine.EAxisOption
enum class EAxisOption : uint8_t
{
    X                                              = 0,
    Y                                              = 1,
    Z                                              = 2,
    X_Neg                                          = 3,
    Y_Neg                                          = 4,
    Z_Neg                                          = 5,
    Custom                                         = 6,
    EAxisOption_MAX                                = 7
};


// Enum  Engine.EComponentType
enum class EComponentType : uint8_t
{
    None                                           = 0,
    TranslationX                                   = 1,
    TranslationY                                   = 2,
    TranslationZ                                   = 3,
    RotationX                                      = 4,
    RotationY                                      = 5,
    RotationZ                                      = 6,
    Scale                                          = 7,
    ScaleX                                         = 8,
    ScaleY                                         = 9,
    ScaleZ                                         = 10,
    EComponentType_MAX                             = 11
};


// Enum  Engine.EPrimaryAssetCookRule
enum class EPrimaryAssetCookRule : uint8_t
{
    Unknown                                        = 0,
    NeverCook                                      = 1,
    ProductionNeverCook                            = 2,
    DevelopmentCook                                = 2,
    DevelopmentAlwaysProductionNeverCook           = 3,
    DevelopmentAlwaysCook                          = 3,
    DevelopmentAlwaysProductionUnknownCook         = 4,
    AlwaysCook                                     = 5,
    EPrimaryAssetCookRule_MAX                      = 6
};


// Enum  Engine.EAttenuationDistanceModel
enum class EAttenuationDistanceModel : uint8_t
{
    Linear                                         = 0,
    Logarithmic                                    = 1,
    Inverse                                        = 2,
    LogReverse                                     = 3,
    NaturalSound                                   = 4,
    Custom                                         = 5,
    EAttenuationDistanceModel_MAX                  = 6
};


// Enum  Engine.EAttenuationShape
enum class EAttenuationShape : uint8_t
{
    Sphere                                         = 0,
    Capsule                                        = 1,
    Box                                            = 2,
    Cone                                           = 3,
    EAttenuationShape_MAX                          = 4
};


// Enum  Engine.ENaturalSoundFalloffMode
enum class ENaturalSoundFalloffMode : uint8_t
{
    Continues                                      = 0,
    Silent                                         = 1,
    Hold                                           = 2,
    ENaturalSoundFalloffMode_MAX                   = 3
};


// Enum  Engine.EAudioBusChannels
enum class EAudioBusChannels : uint8_t
{
    Mono                                           = 0,
    Stereo                                         = 1,
    Quad                                           = 3,
    FivePointOne                                   = 5,
    SevenPointOne                                  = 7,
    EAudioBusChannels_MAX                          = 8
};


// Enum  Engine.EAudioFaderCurve
enum class EAudioFaderCurve : uint8_t
{
    Linear                                         = 0,
    Logarithmic                                    = 1,
    SCurve                                         = 2,
    Sin                                            = 3,
    Count                                          = 4,
    EAudioFaderCurve_MAX                           = 5
};


// Enum  Engine.EAudioOutputTarget
enum class EAudioOutputTarget : uint8_t
{
    Speaker                                        = 0,
    Controller                                     = 1,
    ControllerFallbackToSpeaker                    = 2,
    EAudioOutputTarget_MAX                         = 3
};


// Enum  Engine.EVoiceSampleRate
enum class EVoiceSampleRate : uint32_t
{
    Low16000Hz                                     = 16000,
    Normal24000Hz                                  = 24000,
    EVoiceSampleRate_MAX                           = 24001
};


// Enum  Engine.EPanningMethod
enum class EPanningMethod : uint8_t
{
    Linear                                         = 0,
    EqualPower                                     = 1,
    EPanningMethod_MAX                             = 2
};


// Enum  Engine.EMonoChannelUpmixMethod
enum class EMonoChannelUpmixMethod : uint8_t
{
    Linear                                         = 0,
    EqualPower                                     = 1,
    FullVolume                                     = 2,
    EMonoChannelUpmixMethod_MAX                    = 3
};


// Enum  Engine.EAudioVolumeLocationState
enum class EAudioVolumeLocationState : uint8_t
{
    InsideTheVolume                                = 0,
    OutsideTheVolume                               = 1,
    EAudioVolumeLocationState_MAX                  = 2
};


// Enum  Engine.EBlendableLocation
enum class EBlendableLocation : uint8_t
{
    BL_AfterTonemapping                            = 0,
    BL_BeforeTonemapping                           = 1,
    BL_BeforeTranslucency                          = 2,
    BL_ReplacingTonemapper                         = 3,
    BL_SSRInput                                    = 4,
    BL_MAX                                         = 5
};


// Enum  Engine.EBlendProfileMode
enum class EBlendProfileMode : uint8_t
{
    TimeFactor                                     = 0,
    WeightFactor                                   = 1,
    BlendMask                                      = 2,
    EBlendProfileMode_MAX                          = 3
};


// Enum  Engine.EBlendSpaceAxis
enum class EBlendSpaceAxis : uint8_t
{
    BSA_None                                       = 0,
    BSA_X                                          = 1,
    BSA_Y                                          = 2,
    BSA_MAX                                        = 3
};


// Enum  Engine.EPreferredTriangulationDirection
enum class EPreferredTriangulationDirection : uint8_t
{
    None                                           = 0,
    Tangential                                     = 1,
    Radial                                         = 2,
    EPreferredTriangulationDirection_MAX           = 3
};


// Enum  Engine.ENotifyTriggerMode
enum class ENotifyTriggerMode : uint8_t
{
    AllAnimations                                  = 0,
    HighestWeightedAnimation                       = 1,
    None                                           = 2,
    ENotifyTriggerMode_MAX                         = 3
};


// Enum  Engine.EBlueprintStatus
enum class EBlueprintStatus : uint8_t
{
    BS_Unknown                                     = 0,
    BS_Dirty                                       = 1,
    BS_Error                                       = 2,
    BS_UpToDate                                    = 3,
    BS_BeingCreated                                = 4,
    BS_UpToDateWithWarnings                        = 5,
    BS_MAX                                         = 6
};


// Enum  Engine.EBlueprintType
enum class EBlueprintType : uint8_t
{
    BPTYPE_Normal                                  = 0,
    BPTYPE_Const                                   = 1,
    BPTYPE_MacroLibrary                            = 2,
    BPTYPE_Interface                               = 3,
    BPTYPE_LevelScript                             = 4,
    BPTYPE_FunctionLibrary                         = 5,
    BPTYPE_MAX                                     = 6
};


// Enum  Engine.EBlueprintCompileMode
enum class EBlueprintCompileMode : uint8_t
{
    Default                                        = 0,
    Development                                    = 1,
    FinalRelease                                   = 2,
    EBlueprintCompileMode_MAX                      = 3
};


// Enum  Engine.EBlueprintNativizationFlag
enum class EBlueprintNativizationFlag : uint8_t
{
    Disabled                                       = 0,
    Dependency                                     = 1,
    ExplicitlyEnabled                              = 2,
    EBlueprintNativizationFlag_MAX                 = 3
};


// Enum  Engine.EDOFMode
enum class EDOFMode : uint8_t
{
    Default                                        = 0,
    SixDOF                                         = 1,
    YZPlane                                        = 2,
    XZPlane                                        = 3,
    XYPlane                                        = 4,
    CustomPlane                                    = 5,
    None                                           = 6,
    EDOFMode_MAX                                   = 7
};


// Enum  Engine.ECsgOper
enum class ECsgOper : uint8_t
{
    CSG_Active                                     = 0,
    CSG_Add                                        = 1,
    CSG_Subtract                                   = 2,
    CSG_Intersect                                  = 3,
    CSG_Deintersect                                = 4,
    CSG_None                                       = 5,
    CSG_MAX                                        = 6
};


// Enum  Engine.EBrushType
enum class EBrushType : uint8_t
{
    Brush_Default                                  = 0,
    Brush_Add                                      = 1,
    Brush_Subtract                                 = 2,
    Brush_MAX                                      = 3
};


// Enum  Engine.EInterfaceValidResult
enum class EInterfaceValidResult : uint8_t
{
    Valid                                          = 0,
    Invalid                                        = 1,
    EInterfaceValidResult_MAX                      = 2
};


// Enum  Engine.ECameraShakeUpdateResultFlags
enum class ECameraShakeUpdateResultFlags : uint8_t
{
    ApplyAsAbsolute                                = 1,
    SkipAutoScale                                  = 2,
    SkipAutoPlaySpace                              = 4,
    Default                                        = 0,
    ECameraShakeUpdateResultFlags_MAX              = 5
};


// Enum  Engine.ECameraShakeDurationType
enum class ECameraShakeDurationType : uint8_t
{
    Fixed                                          = 0,
    Infinite                                       = 1,
    Custom                                         = 2,
    ECameraShakeDurationType_MAX                   = 3
};


// Enum  Engine.ECameraShakeAttenuation
enum class ECameraShakeAttenuation : uint8_t
{
    Linear                                         = 0,
    Quadratic                                      = 1,
    ECameraShakeAttenuation_MAX                    = 2
};


// Enum  Engine.ECameraAlphaBlendMode
enum class ECameraAlphaBlendMode : uint8_t
{
    CABM_Linear                                    = 0,
    CABM_Cubic                                     = 1,
    CABM_MAX                                       = 2
};


// Enum  Engine.ECameraProjectionMode
enum class ECameraProjectionMode : uint8_t
{
    Perspective                                    = 0,
    Orthographic                                   = 1,
    ECameraProjectionMode_MAX                      = 2
};


// Enum  Engine.ECloudStorageDelegate
enum class ECloudStorageDelegate : uint8_t
{
    CSD_KeyValueReadComplete                       = 0,
    CSD_KeyValueWriteComplete                      = 1,
    CSD_ValueChanged                               = 2,
    CSD_DocumentQueryComplete                      = 3,
    CSD_DocumentReadComplete                       = 4,
    CSD_DocumentWriteComplete                      = 5,
    CSD_DocumentConflictDetected                   = 6,
    CSD_MAX                                        = 7
};


// Enum  Engine.EAngularDriveMode
enum class EAngularDriveMode : uint8_t
{
    SLERP                                          = 0,
    TwistAndSwing                                  = 1,
    EAngularDriveMode_MAX                          = 2
};


// Enum  Engine.ETransformCurveChannel
enum class ETransformCurveChannel : uint8_t
{
    Position                                       = 0,
    Rotation                                       = 1,
    Scale                                          = 2,
    Invalid                                        = 3,
    ETransformCurveChannel_MAX                     = 4
};


// Enum  Engine.EVectorCurveChannel
enum class EVectorCurveChannel : uint8_t
{
    X                                              = 0,
    Y                                              = 1,
    Z                                              = 2,
    Invalid                                        = 3,
    EVectorCurveChannel_MAX                        = 4
};


// Enum  Engine.ECurveTableMode
enum class ECurveTableMode : uint8_t
{
    Empty                                          = 0,
    SimpleCurves                                   = 1,
    RichCurves                                     = 2,
    ECurveTableMode_MAX                            = 3
};


// Enum  Engine.ECustomAttributeBlendType
enum class ECustomAttributeBlendType : uint8_t
{
    Override                                       = 0,
    Blend                                          = 1,
    ECustomAttributeBlendType_MAX                  = 2
};


// Enum  Engine.FDataDrivenCVarType
enum class FDataDrivenCVarType : uint8_t
{
    CVarFloat                                      = 0,
    CVarInt                                        = 1,
    CVarBool                                       = 2,
    FDataDrivenCVarType_MAX                        = 3
};


// Enum  Engine.EDataLayerState
enum class EDataLayerState : uint8_t
{
    Unloaded                                       = 0,
    Loaded                                         = 1,
    Activated                                      = 2,
    EDataLayerState_MAX                            = 3
};


// Enum  Engine.EEvaluateCurveTableResult
enum class EEvaluateCurveTableResult : uint8_t
{
    RowFound                                       = 0,
    RowNotFound                                    = 1,
    EEvaluateCurveTableResult_MAX                  = 2
};


// Enum  Engine.EGrammaticalGender
enum class EGrammaticalGender : uint8_t
{
    Neuter                                         = 0,
    Masculine                                      = 1,
    Feminine                                       = 2,
    Mixed                                          = 3,
    EGrammaticalGender_MAX                         = 4
};


// Enum  Engine.EGrammaticalNumber
enum class EGrammaticalNumber : uint8_t
{
    Singular                                       = 0,
    Plural                                         = 1,
    EGrammaticalNumber_MAX                         = 2
};


// Enum  Engine.DistributionParamMode
enum class DistributionParamMode : uint8_t
{
    DPM_Normal                                     = 0,
    DPM_Abs                                        = 1,
    DPM_Direct                                     = 2,
    DPM_MAX                                        = 3
};


// Enum  Engine.EDistributionVectorLockFlags
enum class EDistributionVectorLockFlags : uint8_t
{
    EDVLF_None                                     = 0,
    EDVLF_XY                                       = 1,
    EDVLF_XZ                                       = 2,
    EDVLF_YZ                                       = 3,
    EDVLF_XYZ                                      = 4,
    EDVLF_MAX                                      = 5
};


// Enum  Engine.EDistributionVectorMirrorFlags
enum class EDistributionVectorMirrorFlags : uint8_t
{
    EDVMF_Same                                     = 0,
    EDVMF_Different                                = 1,
    EDVMF_Mirror                                   = 2,
    EDVMF_MAX                                      = 3
};


// Enum  Engine.EEdGraphPinDirection
enum class EEdGraphPinDirection : uint8_t
{
    EGPD_Input                                     = 0,
    EGPD_Output                                    = 1,
    EGPD_MAX                                       = 2
};


// Enum  Engine.EPinContainerType
enum class EPinContainerType : uint8_t
{
    None                                           = 0,
    Array                                          = 1,
    Set                                            = 2,
    Map                                            = 3,
    EPinContainerType_MAX                          = 4
};


// Enum  Engine.ENodeTitleType
enum class ENodeTitleType : uint8_t
{
    FullTitle                                      = 0,
    ListView                                       = 1,
    EditableTitle                                  = 2,
    MenuTitle                                      = 3,
    MAX_TitleTypes                                 = 4,
    ENodeTitleType_MAX                             = 5
};


// Enum  Engine.ENodeAdvancedPins
enum class ENodeAdvancedPins : uint8_t
{
    NoPins                                         = 0,
    Shown                                          = 1,
    Hidden                                         = 2,
    ENodeAdvancedPins_MAX                          = 3
};


// Enum  Engine.ENodeEnabledState
enum class ENodeEnabledState : uint8_t
{
    Enabled                                        = 0,
    Disabled                                       = 1,
    DevelopmentOnly                                = 2,
    ENodeEnabledState_MAX                          = 3
};


// Enum  Engine.EBlueprintPinStyleType
enum class EBlueprintPinStyleType : uint8_t
{
    BPST_Original                                  = 0,
    BPST_VariantA                                  = 1,
    BPST_MAX                                       = 2
};


// Enum  Engine.EGraphType
enum class EGraphType : uint8_t
{
    GT_Function                                    = 0,
    GT_Ubergraph                                   = 1,
    GT_Macro                                       = 2,
    GT_Animation                                   = 3,
    GT_StateMachine                                = 4,
    GT_MAX                                         = 5
};


// Enum  Engine.ECanCreateConnectionResponse
enum class ECanCreateConnectionResponse : uint8_t
{
    CONNECT_RESPONSE_MAKE                          = 0,
    CONNECT_RESPONSE_DISALLOW                      = 1,
    CONNECT_RESPONSE_BREAK_OTHERS_A                = 2,
    CONNECT_RESPONSE_BREAK_OTHERS_B                = 3,
    CONNECT_RESPONSE_BREAK_OTHERS_AB               = 4,
    CONNECT_RESPONSE_MAKE_WITH_CONVERSION_NODE     = 5,
    CONNECT_RESPONSE_MAKE_WITH_PROMOTION           = 6,
    CONNECT_RESPONSE_MAX                           = 7
};


// Enum  Engine.EFullyLoadPackageType
enum class EFullyLoadPackageType : uint8_t
{
    FULLYLOAD_Map                                  = 0,
    FULLYLOAD_Game_PreLoadClass                    = 1,
    FULLYLOAD_Game_PostLoadClass                   = 2,
    FULLYLOAD_Always                               = 3,
    FULLYLOAD_Mutator                              = 4,
    FULLYLOAD_MAX                                  = 5
};


// Enum  Engine.ETransitionType
enum class ETransitionType : uint8_t
{
    None                                           = 0,
    Paused                                         = 1,
    Loading                                        = 2,
    Saving                                         = 3,
    Connecting                                     = 4,
    Precaching                                     = 5,
    WaitingToConnect                               = 6,
    MAX                                            = 7
};


// Enum  Engine.EMouseCaptureMode
enum class EMouseCaptureMode : uint8_t
{
    NoCapture                                      = 0,
    CapturePermanently                             = 1,
    CapturePermanently_IncludingInitialMouseDown   = 2,
    CaptureDuringMouseDown                         = 3,
    CaptureDuringRightMouseDown                    = 4,
    EMouseCaptureMode_MAX                          = 5
};


// Enum  Engine.ENetworkLagState
enum class ENetworkLagState : uint8_t
{
    NotLagging                                     = 0,
    Lagging                                        = 1,
    ENetworkLagState_MAX                           = 2
};


// Enum  Engine.EDemoPlayFailure
enum class EDemoPlayFailure : uint8_t
{
    Generic                                        = 0,
    DemoNotFound                                   = 1,
    Corrupt                                        = 2,
    InvalidVersion                                 = 3,
    InitBase                                       = 4,
    GameSpecificHeader                             = 5,
    ReplayStreamerInternal                         = 6,
    LoadMap                                        = 7,
    Serialization                                  = 8,
    EDemoPlayFailure_MAX                           = 9
};


// Enum  Engine.EViewModeIndex
enum class EViewModeIndex : uint8_t
{
    VMI_BrushWireframe                             = 0,
    VMI_Wireframe                                  = 1,
    VMI_Unlit                                      = 2,
    VMI_Lit                                        = 3,
    VMI_Lit_DetailLighting                         = 4,
    VMI_LightingOnly                               = 5,
    VMI_LightComplexity                            = 6,
    VMI_ShaderComplexity                           = 8,
    VMI_LightmapDensity                            = 9,
    VMI_LitLightmapDensity                         = 10,
    VMI_ReflectionOverride                         = 11,
    VMI_VisualizeBuffer                            = 12,
    VMI_StationaryLightOverlap                     = 14,
    VMI_CollisionPawn                              = 15,
    VMI_CollisionVisibility                        = 16,
    VMI_LODColoration                              = 18,
    VMI_QuadOverdraw                               = 19,
    VMI_PrimitiveDistanceAccuracy                  = 20,
    VMI_MeshUVDensityAccuracy                      = 21,
    VMI_ShaderComplexityWithQuadOverdraw           = 22,
    VMI_HLODColoration                             = 23,
    VMI_GroupLODColoration                         = 24,
    VMI_MaterialTextureScaleAccuracy               = 25,
    VMI_RequiredTextureResolution                  = 26,
    VMI_PathTracing                                = 27,
    VMI_RayTracingDebug                            = 28,
    VMI_VisualizeNanite                            = 29,
    VMI_VirtualTexturePendingMips                  = 30,
    VMI_VisualizeLumen                             = 31,
    VMI_VisualizeVirtualShadowMap                  = 32,
    VMI_Max                                        = 33,
    VMI_Unknown                                    = 255
};


// Enum  Engine.ECustomTimeStepSynchronizationState
enum class ECustomTimeStepSynchronizationState : uint8_t
{
    Closed                                         = 0,
    Error                                          = 1,
    Synchronized                                   = 2,
    Synchronizing                                  = 3,
    ECustomTimeStepSynchronizationState_MAX        = 4
};


// Enum  Engine.EAspectRatioAxisConstraint
enum class EAspectRatioAxisConstraint : uint8_t
{
    AspectRatio_MaintainYFOV                       = 0,
    AspectRatio_MaintainXFOV                       = 1,
    AspectRatio_MajorAxisFOV                       = 2,
    AspectRatio_MAX                                = 3
};


// Enum  Engine.ESceneDepthPriorityGroup
enum class ESceneDepthPriorityGroup : uint8_t
{
    SDPG_World                                     = 0,
    SDPG_Foreground                                = 1,
    SDPG_MAX                                       = 2
};


// Enum  Engine.EIndirectLightingCacheQuality
enum class EIndirectLightingCacheQuality : uint8_t
{
    ILCQ_Off                                       = 0,
    ILCQ_Point                                     = 1,
    ILCQ_Volume                                    = 2,
    ILCQ_MAX                                       = 3
};


// Enum  Engine.ELightmapType
enum class ELightmapType : uint8_t
{
    Default                                        = 0,
    ForceSurface                                   = 1,
    ForceVolumetric                                = 2,
    ELightmapType_MAX                              = 3
};


// Enum  Engine.EOcclusionCombineMode
enum class EOcclusionCombineMode : uint8_t
{
    OCM_Minimum                                    = 0,
    OCM_Multiply                                   = 1,
    OCM_MAX                                        = 2
};


// Enum  Engine.EBlendMode
enum class EBlendMode : uint8_t
{
    BLEND_Opaque                                   = 0,
    BLEND_Masked                                   = 1,
    BLEND_Translucent                              = 2,
    BLEND_Additive                                 = 3,
    BLEND_Modulate                                 = 4,
    BLEND_AlphaComposite                           = 5,
    BLEND_AlphaHoldout                             = 6,
    BLEND_ModulateRGBA                             = 7,
    BLEND_MAX                                      = 8
};


// Enum  Engine.EMaterialFloatPrecisionMode
enum class EMaterialFloatPrecisionMode : uint8_t
{
    MFPM_Default                                   = 0,
    MFPM_Full_MaterialExpressionOnly               = 1,
    MFPM_Full                                      = 2,
    MFPM_Half                                      = 3,
    MFPM_MAX                                       = 4
};


// Enum  Engine.ESamplerSourceMode
enum class ESamplerSourceMode : uint8_t
{
    SSM_FromTextureAsset                           = 0,
    SSM_Wrap_WorldGroupSettings                    = 1,
    SSM_Clamp_WorldGroupSettings                   = 2,
    SSM_MAX                                        = 3
};


// Enum  Engine.ETextureMipValueMode
enum class ETextureMipValueMode : uint8_t
{
    TMVM_None                                      = 0,
    TMVM_MipLevel                                  = 1,
    TMVM_MipBias                                   = 2,
    TMVM_Derivative                                = 3,
    TMVM_MAX                                       = 4
};


// Enum  Engine.ETranslucencyLightingMode
enum class ETranslucencyLightingMode : uint8_t
{
    TLM_VolumetricNonDirectional                   = 0,
    TLM_VolumetricDirectional                      = 1,
    TLM_VolumetricPerVertexNonDirectional          = 2,
    TLM_VolumetricPerVertexDirectional             = 3,
    TLM_Surface                                    = 4,
    TLM_SurfacePerPixelLighting                    = 5,
    TLM_MAX                                        = 6
};


// Enum  Engine.ERefractionMode
enum class ERefractionMode : uint8_t
{
    RM_IndexOfRefraction                           = 0,
    RM_PixelNormalOffset                           = 1,
    RM_MAX                                         = 2
};


// Enum  Engine.ETranslucentSortPolicy
enum class ETranslucentSortPolicy : uint8_t
{
    SortByDistance                                 = 0,
    SortByProjectedZ                               = 1,
    SortAlongAxis                                  = 2,
    ETranslucentSortPolicy_MAX                     = 3
};


// Enum  Engine.EDynamicGlobalIlluminationMethod
enum class EDynamicGlobalIlluminationMethod : uint8_t
{
    None                                           = 0,
    Lumen                                          = 1,
    ScreenSpace                                    = 2,
    RayTraced                                      = 3,
    Plugin                                         = 4,
    EDynamicGlobalIlluminationMethod_MAX           = 5
};


// Enum  Engine.EReflectionMethod
enum class EReflectionMethod : uint8_t
{
    None                                           = 0,
    Lumen                                          = 1,
    ScreenSpace                                    = 2,
    RayTraced                                      = 3,
    EReflectionMethod_MAX                          = 4
};


// Enum  Engine.EShadowMapMethod
enum class EShadowMapMethod : uint8_t
{
    ShadowMaps                                     = 0,
    VirtualShadowMaps                              = 1,
    EShadowMapMethod_MAX                           = 2
};


// Enum  Engine.ECastRayTracedShadow
enum class ECastRayTracedShadow : uint8_t
{
    Disabled                                       = 0,
    UseProjectSetting                              = 1,
    Enabled                                        = 2,
    ECastRayTracedShadow_MAX                       = 3
};


// Enum  Engine.ESceneCaptureSource
enum class ESceneCaptureSource : uint8_t
{
    SCS_SceneColorHDR                              = 0,
    SCS_SceneColorHDRNoAlpha                       = 1,
    SCS_FinalColorLDR                              = 2,
    SCS_SceneColorSceneDepth                       = 3,
    SCS_SceneDepth                                 = 4,
    SCS_DeviceDepth                                = 5,
    SCS_Normal                                     = 6,
    SCS_BaseColor                                  = 7,
    SCS_FinalColorHDR                              = 8,
    SCS_FinalToneCurveHDR                          = 9,
    SCS_MAX                                        = 10
};


// Enum  Engine.ESceneCaptureCompositeMode
enum class ESceneCaptureCompositeMode : uint8_t
{
    SCCM_Overwrite                                 = 0,
    SCCM_Additive                                  = 1,
    SCCM_Composite                                 = 2,
    SCCM_MAX                                       = 3
};


// Enum  Engine.EGBufferFormat
enum class EGBufferFormat : uint8_t
{
    Force8BitsPerChannel                           = 0,
    Default                                        = 1,
    HighPrecisionNormals                           = 3,
    Force16BitsPerChannel                          = 5,
    EGBufferFormat_MAX                             = 6
};


// Enum  Engine.ETrailWidthMode
enum class ETrailWidthMode : uint8_t
{
    ETrailWidthMode_FromCentre                     = 0,
    ETrailWidthMode_FromFirst                      = 1,
    ETrailWidthMode_FromSecond                     = 2,
    ETrailWidthMode_MAX                            = 3
};


// Enum  Engine.EParticleCollisionMode
enum class EParticleCollisionMode : uint8_t
{
    SceneDepth                                     = 0,
    DistanceField                                  = 1,
    EParticleCollisionMode_MAX                     = 2
};


// Enum  Engine.EMaterialShadingModel
enum class EMaterialShadingModel : uint8_t
{
    MSM_Unlit                                      = 0,
    MSM_DefaultLit                                 = 1,
    MSM_Subsurface                                 = 2,
    MSM_PreintegratedSkin                          = 3,
    MSM_ClearCoat                                  = 4,
    MSM_SubsurfaceProfile                          = 5,
    MSM_TwoSidedFoliage                            = 6,
    MSM_Hair                                       = 7,
    MSM_Cloth                                      = 8,
    MSM_Eye                                        = 9,
    MSM_SingleLayerWater                           = 10,
    MSM_ThinTranslucent                            = 11,
    MSM_Strata                                     = 12,
    MSM_NUM                                        = 13,
    MSM_FromMaterialExpression                     = 14,
    MSM_MAX                                        = 15
};


// Enum  Engine.EStrataShadingModel
enum class EStrataShadingModel : uint8_t
{
    SSM_Unlit                                      = 0,
    SSM_DefaultLit                                 = 1,
    SSM_SubsurfaceLit                              = 2,
    SSM_VolumetricFogCloud                         = 3,
    SSM_Hair                                       = 4,
    SSM_SingleLayerWater                           = 5,
    SSM_NUM                                        = 6
};


// Enum  Engine.EMaterialSamplerType
enum class EMaterialSamplerType : uint8_t
{
    SAMPLERTYPE_Color                              = 0,
    SAMPLERTYPE_Grayscale                          = 1,
    SAMPLERTYPE_Alpha                              = 2,
    SAMPLERTYPE_Normal                             = 3,
    SAMPLERTYPE_Masks                              = 4,
    SAMPLERTYPE_DistanceFieldFont                  = 5,
    SAMPLERTYPE_LinearColor                        = 6,
    SAMPLERTYPE_LinearGrayscale                    = 7,
    SAMPLERTYPE_Data                               = 8,
    SAMPLERTYPE_External                           = 9,
    SAMPLERTYPE_VirtualColor                       = 10,
    SAMPLERTYPE_VirtualGrayscale                   = 11,
    SAMPLERTYPE_VirtualAlpha                       = 12,
    SAMPLERTYPE_VirtualNormal                      = 13,
    SAMPLERTYPE_VirtualMasks                       = 14,
    SAMPLERTYPE_VirtualLinearColor                 = 15,
    SAMPLERTYPE_VirtualLinearGrayscale             = 16,
    SAMPLERTYPE_MAX                                = 17
};


// Enum  Engine.EMaterialStencilCompare
enum class EMaterialStencilCompare : uint8_t
{
    MSC_Less                                       = 0,
    MSC_LessEqual                                  = 1,
    MSC_Greater                                    = 2,
    MSC_GreaterEqual                               = 3,
    MSC_Equal                                      = 4,
    MSC_NotEqual                                   = 5,
    MSC_Never                                      = 6,
    MSC_Always                                     = 7,
    MSC_Count                                      = 8,
    MSC_MAX                                        = 9
};


// Enum  Engine.EMaterialShadingRate
enum class EMaterialShadingRate : uint8_t
{
    MSR_1x1                                        = 0,
    MSR_2x1                                        = 1,
    MSR_1x2                                        = 2,
    MSR_2x2                                        = 3,
    MSR_4x2                                        = 4,
    MSR_2x4                                        = 5,
    MSR_4x4                                        = 6,
    MSR_Count                                      = 7,
    MSR_MAX                                        = 8
};


// Enum  Engine.ELightingBuildQuality
enum class ELightingBuildQuality : uint8_t
{
    Quality_Preview                                = 0,
    Quality_Medium                                 = 1,
    Quality_High                                   = 2,
    Quality_Production                             = 3,
    Quality_MAX                                    = 4
};


// Enum  Engine.ENetworkSmoothingMode
enum class ENetworkSmoothingMode : uint8_t
{
    Disabled                                       = 0,
    Linear                                         = 1,
    Exponential                                    = 2,
    Replay                                         = 3,
    ENetworkSmoothingMode_MAX                      = 4
};


// Enum  Engine.EOverlapFilterOption
enum class EOverlapFilterOption : uint8_t
{
    OverlapFilter_All                              = 0,
    OverlapFilter_DynamicOnly                      = 1,
    OverlapFilter_StaticOnly                       = 2,
    OverlapFilter_MAX                              = 3
};


// Enum  Engine.ECollisionResponse
enum class ECollisionResponse : uint8_t
{
    ECR_Ignore                                     = 0,
    ECR_Overlap                                    = 1,
    ECR_Block                                      = 2,
    ECR_MAX                                        = 3
};


// Enum  Engine.EFilterInterpolationType
enum class EFilterInterpolationType : uint8_t
{
    BSIT_Average                                   = 0,
    BSIT_Linear                                    = 1,
    BSIT_Cubic                                     = 2,
    BSIT_EaseInOut                                 = 3,
    BSIT_ExponentialDecay                          = 4,
    BSIT_SpringDamper                              = 5,
    BSIT_MAX                                       = 6
};


// Enum  Engine.ETimelineSigType
enum class ETimelineSigType : uint8_t
{
    ETS_EventSignature                             = 0,
    ETS_FloatSignature                             = 1,
    ETS_VectorSignature                            = 2,
    ETS_LinearColorSignature                       = 3,
    ETS_InvalidSignature                           = 4,
    ETS_MAX                                        = 5
};


// Enum  Engine.ECollisionEnabled
enum class ECollisionEnabled : uint8_t
{
    NoCollision                                    = 0,
    QueryOnly                                      = 1,
    PhysicsOnly                                    = 2,
    QueryAndPhysics                                = 3,
    ECollisionEnabled_MAX                          = 4
};


// Enum  Engine.ELightMapPaddingType
enum class ELightMapPaddingType : uint8_t
{
    LMPT_NormalPadding                             = 0,
    LMPT_PrePadding                                = 1,
    LMPT_NoPadding                                 = 2,
    LMPT_MAX                                       = 3
};


// Enum  Engine.EShadowMapFlags
enum class EShadowMapFlags : uint8_t
{
    SMF_None                                       = 0,
    SMF_Streamed                                   = 1,
    SMF_MAX                                        = 2
};


// Enum  Engine.EUpdateRateShiftBucket
enum class EUpdateRateShiftBucket : uint8_t
{
    ShiftBucket0                                   = 0,
    ShiftBucket1                                   = 1,
    ShiftBucket2                                   = 2,
    ShiftBucket3                                   = 3,
    ShiftBucket4                                   = 4,
    ShiftBucket5                                   = 5,
    ShiftBucketMax                                 = 6,
    EUpdateRateShiftBucket_MAX                     = 7
};


// Enum  Engine.EAutoPossessAI
enum class EAutoPossessAI : uint8_t
{
    Disabled                                       = 0,
    PlacedInWorld                                  = 1,
    Spawned                                        = 2,
    PlacedInWorldOrSpawned                         = 3,
    EAutoPossessAI_MAX                             = 4
};


// Enum  Engine.EWalkableSlopeBehavior
enum class EWalkableSlopeBehavior : uint8_t
{
    WalkableSlope_Default                          = 0,
    WalkableSlope_Increase                         = 1,
    WalkableSlope_Decrease                         = 2,
    WalkableSlope_Unwalkable                       = 3,
    WalkableSlope_Max                              = 4
};


// Enum  Engine.EPhysicalMaterialMaskColor
enum class EPhysicalMaterialMaskColor : uint8_t
{
    Red                                            = 0,
    Green                                          = 1,
    Blue                                           = 2,
    Cyan                                           = 3,
    Magenta                                        = 4,
    Yellow                                         = 5,
    White                                          = 6,
    Black                                          = 7,
    MAX                                            = 8
};


// Enum  Engine.EComponentSocketType
enum class EComponentSocketType : uint8_t
{
    Invalid                                        = 0,
    Bone                                           = 1,
    Socket                                         = 2,
    EComponentSocketType_MAX                       = 3
};


// Enum  Engine.EMeshBufferAccess
enum class EMeshBufferAccess : uint8_t
{
    Default                                        = 0,
    ForceCPUAndGPU                                 = 1,
    EMeshBufferAccess_MAX                          = 2
};


// Enum  Engine.EPostCopyOperation
enum class EPostCopyOperation : uint8_t
{
    None                                           = 0,
    LogicalNegateBool                              = 1,
    EPostCopyOperation_MAX                         = 2
};


// Enum  Engine.EFontCacheType
enum class EFontCacheType : uint8_t
{
    Offline                                        = 0,
    Runtime                                        = 1,
    EFontCacheType_MAX                             = 2
};


// Enum  Engine.EFontImportCharacterSet
enum class EFontImportCharacterSet : uint8_t
{
    FontICS_Default                                = 0,
    FontICS_Ansi                                   = 1,
    FontICS_Symbol                                 = 2,
    FontICS_MAX                                    = 3
};


// Enum  Engine.EStandbyType
enum class EStandbyType : uint8_t
{
    STDBY_Rx                                       = 0,
    STDBY_Tx                                       = 1,
    STDBY_BadPing                                  = 2,
    STDBY_MAX                                      = 3
};


// Enum  Engine.ESuggestProjVelocityTraceOption
enum class ESuggestProjVelocityTraceOption : uint8_t
{
    DoNotTrace                                     = 0,
    TraceFullPath                                  = 1,
    OnlyTraceWhileAscending                        = 2,
    ESuggestProjVelocityTraceOption_MAX            = 3
};


// Enum  Engine.EWindowMode
enum class EWindowMode : uint8_t
{
    Fullscreen                                     = 0,
    WindowedFullscreen                             = 1,
    Windowed                                       = 2,
    EWindowMode_MAX                                = 3
};


// Enum  Engine.EHISMViewRelevanceType
enum class EHISMViewRelevanceType : uint8_t
{
    Grass                                          = 0,
    Foliage                                        = 1,
    HISM                                           = 2,
    EHISMViewRelevanceType_MAX                     = 3
};


// Enum  Engine.EHitProxyPriority
enum class EHitProxyPriority : uint8_t
{
    HPP_World                                      = 0,
    HPP_Wireframe                                  = 1,
    HPP_Foreground                                 = 2,
    HPP_UI                                         = 3,
    HPP_MAX                                        = 4
};


// Enum  Engine.EHLODBatchingPolicy
enum class EHLODBatchingPolicy : uint8_t
{
    None                                           = 0,
    MeshSection                                    = 1,
    Instancing                                     = 2,
    EHLODBatchingPolicy_MAX                        = 3
};


// Enum  Engine.EHLODLayerType
enum class EHLODLayerType : uint8_t
{
    Instancing                                     = 0,
    MeshMerge                                      = 1,
    MeshSimplify                                   = 2,
    MeshApproximate                                = 3,
    Custom                                         = 4,
    EHLODLayerType_MAX                             = 5
};


// Enum  Engine.EImportanceWeight
enum class EImportanceWeight : uint8_t
{
    Luminance                                      = 0,
    Red                                            = 1,
    Green                                          = 2,
    Blue                                           = 3,
    Alpha                                          = 4,
    EImportanceWeight_MAX                          = 5
};


// Enum  Engine.EAdManagerDelegate
enum class EAdManagerDelegate : uint8_t
{
    AMD_ClickedBanner                              = 0,
    AMD_UserClosedAd                               = 1,
    AMD_MAX                                        = 2
};


// Enum  Engine.EAnimAlphaInputType
enum class EAnimAlphaInputType : uint8_t
{
    Float                                          = 0,
    Bool                                           = 1,
    Curve                                          = 2,
    EAnimAlphaInputType_MAX                        = 3
};


// Enum  Engine.ETrackActiveCondition
enum class ETrackActiveCondition : uint8_t
{
    ETAC_Always                                    = 0,
    ETAC_GoreEnabled                               = 1,
    ETAC_GoreDisabled                              = 2,
    ETAC_MAX                                       = 3
};


// Enum  Engine.EInterpTrackMoveRotMode
enum class EInterpTrackMoveRotMode : uint8_t
{
    IMR_Keyframed                                  = 0,
    IMR_LookAtGroup                                = 1,
    IMR_Ignore                                     = 2,
    IMR_MAX                                        = 3
};


// Enum  Engine.EInterpMoveAxis
enum class EInterpMoveAxis : uint8_t
{
    AXIS_TranslationX                              = 0,
    AXIS_TranslationY                              = 1,
    AXIS_TranslationZ                              = 2,
    AXIS_RotationX                                 = 3,
    AXIS_RotationY                                 = 4,
    AXIS_RotationZ                                 = 5,
    AXIS_MAX                                       = 6
};


// Enum  Engine.ETrackToggleAction
enum class ETrackToggleAction : uint8_t
{
    ETTA_Off                                       = 0,
    ETTA_On                                        = 1,
    ETTA_Toggle                                    = 2,
    ETTA_Trigger                                   = 3,
    ETTA_MAX                                       = 4
};


// Enum  Engine.EVisibilityTrackAction
enum class EVisibilityTrackAction : uint8_t
{
    EVTA_Hide                                      = 0,
    EVTA_Show                                      = 1,
    EVTA_Toggle                                    = 2,
    EVTA_MAX                                       = 3
};


// Enum  Engine.EVisibilityTrackCondition
enum class EVisibilityTrackCondition : uint8_t
{
    EVTC_Always                                    = 0,
    EVTC_GoreEnabled                               = 1,
    EVTC_GoreDisabled                              = 2,
    EVTC_MAX                                       = 3
};


// Enum  Engine.ESlateGesture
enum class ESlateGesture : uint8_t
{
    None                                           = 0,
    Scroll                                         = 1,
    Magnify                                        = 2,
    Swipe                                          = 3,
    Rotate                                         = 4,
    LongPress                                      = 5,
    ESlateGesture_MAX                              = 6
};


// Enum  Engine.EMIDCreationFlags
enum class EMIDCreationFlags : uint8_t
{
    None                                           = 0,
    Transient                                      = 1,
    EMIDCreationFlags_MAX                          = 2
};


// Enum  Engine.EEasingFunc
enum class EEasingFunc : uint8_t
{
    Linear                                         = 0,
    Step                                           = 1,
    SinusoidalIn                                   = 2,
    SinusoidalOut                                  = 3,
    SinusoidalInOut                                = 4,
    EaseIn                                         = 5,
    EaseOut                                        = 6,
    EaseInOut                                      = 7,
    ExpoIn                                         = 8,
    ExpoOut                                        = 9,
    ExpoInOut                                      = 10,
    CircularIn                                     = 11,
    CircularOut                                    = 12,
    CircularInOut                                  = 13,
    EEasingFunc_MAX                                = 14
};


// Enum  Engine.ELerpInterpolationMode
enum class ELerpInterpolationMode : uint8_t
{
    QuatInterp                                     = 0,
    EulerInterp                                    = 1,
    DualQuatInterp                                 = 2,
    ELerpInterpolationMode_MAX                     = 3
};


// Enum  Engine.EMatrixColumns
enum class EMatrixColumns : uint8_t
{
    First                                          = 0,
    Second                                         = 1,
    Third                                          = 2,
    Fourth                                         = 3,
    EMatrixColumns_MAX                             = 4
};


// Enum  Engine.EScreenPercentageMode
enum class EScreenPercentageMode : uint8_t
{
    Manual                                         = 0,
    BasedOnDisplayResolution                       = 1,
    BasedOnDPIScale                                = 2,
    EScreenPercentageMode_MAX                      = 3
};


// Enum  Engine.ELevelInstanceRuntimeBehavior
enum class ELevelInstanceRuntimeBehavior : uint8_t
{
    None                                           = 0,
    Embedded_Deprecated                            = 1,
    Partitioned                                    = 2,
    LevelStreaming                                 = 3,
    ELevelInstanceRuntimeBehavior_MAX              = 4
};


// Enum  Engine.ELevelInstanceCreationType
enum class ELevelInstanceCreationType : uint8_t
{
    LevelInstance                                  = 0,
    PackedLevelActor                               = 1,
    ELevelInstanceCreationType_MAX                 = 2
};


// Enum  Engine.ELevelInstancePivotType
enum class ELevelInstancePivotType : uint8_t
{
    CenterMinZ                                     = 0,
    Center                                         = 1,
    Actor                                          = 2,
    WorldOrigin                                    = 3,
    ELevelInstancePivotType_MAX                    = 4
};


// Enum  Engine.EStreamingVolumeUsage
enum class EStreamingVolumeUsage : uint8_t
{
    SVB_Loading                                    = 0,
    SVB_LoadingAndVisibility                       = 1,
    SVB_VisibilityBlockingOnLoad                   = 2,
    SVB_BlockingOnLoad                             = 3,
    SVB_LoadingNotVisible                          = 4,
    SVB_MAX                                        = 5
};


// Enum  Engine.ESyncOption
enum class ESyncOption : uint8_t
{
    Drive                                          = 0,
    Passive                                        = 1,
    Disabled                                       = 2,
    ESyncOption_MAX                                = 3
};


// Enum  Engine.EDecalBlendMode
enum class EDecalBlendMode : uint8_t
{
    DBM_Translucent                                = 0,
    DBM_Stain                                      = 1,
    DBM_Normal                                     = 2,
    DBM_Emissive                                   = 3,
    DBM_DBuffer_ColorNormalRoughness               = 4,
    DBM_DBuffer_Color                              = 5,
    DBM_DBuffer_ColorNormal                        = 6,
    DBM_DBuffer_ColorRoughness                     = 7,
    DBM_DBuffer_Normal                             = 8,
    DBM_DBuffer_NormalRoughness                    = 9,
    DBM_DBuffer_Roughness                          = 10,
    DBM_DBuffer_Emissive                           = 11,
    DBM_DBuffer_AlphaComposite                     = 12,
    DBM_DBuffer_EmissiveAlphaComposite             = 13,
    DBM_Volumetric_DistanceFunction                = 14,
    DBM_AlphaComposite                             = 15,
    DBM_AmbientOcclusion                           = 16,
    DBM_MAX                                        = 17
};


// Enum  Engine.EMaterialDecalResponse
enum class EMaterialDecalResponse : uint8_t
{
    MDR_None                                       = 0,
    MDR_ColorNormalRoughness                       = 1,
    MDR_Color                                      = 2,
    MDR_ColorNormal                                = 3,
    MDR_ColorRoughness                             = 4,
    MDR_Normal                                     = 5,
    MDR_NormalRoughness                            = 6,
    MDR_Roughness                                  = 7,
    MDR_MAX                                        = 8
};


// Enum  Engine.EMaterialTranslucencyPass
enum class EMaterialTranslucencyPass : uint8_t
{
    MTP_BeforeDOF                                  = 0,
    MTP_AfterDOF                                   = 1,
    MTP_AfterMotionBlur                            = 2,
    MTP_MAX                                        = 3
};


// Enum  Engine.ETextureColorChannel
enum class ETextureColorChannel : uint8_t
{
    TCC_Red                                        = 0,
    TCC_Green                                      = 1,
    TCC_Blue                                       = 2,
    TCC_Alpha                                      = 3,
    TCC_MAX                                        = 4
};


// Enum  Engine.EMaterialAttributeBlend
enum class EMaterialAttributeBlend : uint8_t
{
    Blend                                          = 0,
    UseA                                           = 1,
    UseB                                           = 2,
    EMaterialAttributeBlend_MAX                    = 3
};


// Enum  Engine.EChannelMaskParameterColor
enum class EChannelMaskParameterColor : uint8_t
{
    Red                                            = 0,
    Green                                          = 1,
    Blue                                           = 2,
    Alpha                                          = 3,
    EChannelMaskParameterColor_MAX                 = 4
};


// Enum  Engine.EClampMode
enum class EClampMode : uint8_t
{
    CMODE_Clamp                                    = 0,
    CMODE_ClampMin                                 = 1,
    CMODE_ClampMax                                 = 2,
    CMODE_MAX                                      = 3
};


// Enum  Engine.ECustomMaterialOutputType
enum class ECustomMaterialOutputType : uint8_t
{
    CMOT_Float1                                    = 0,
    CMOT_Float2                                    = 1,
    CMOT_Float3                                    = 2,
    CMOT_Float4                                    = 3,
    CMOT_MaterialAttributes                        = 4,
    CMOT_MAX                                       = 5
};


// Enum  Engine.EDBufferTextureId
enum class EDBufferTextureId : uint8_t
{
    DBT_A                                          = 0,
    DBT_B                                          = 1,
    DBT_C                                          = 2,
    DBT_MAX                                        = 3
};


// Enum  Engine.EDepthOfFieldFunctionValue
enum class EDepthOfFieldFunctionValue : uint8_t
{
    TDOF_NearAndFarMask                            = 0,
    TDOF_NearMask                                  = 1,
    TDOF_FarMask                                   = 2,
    TDOF_CircleOfConfusionRadius                   = 3,
    TDOF_MAX                                       = 4
};


// Enum  Engine.EFunctionInputType
enum class EFunctionInputType : uint8_t
{
    FunctionInput_Scalar                           = 0,
    FunctionInput_Vector2                          = 1,
    FunctionInput_Vector3                          = 2,
    FunctionInput_Vector4                          = 3,
    FunctionInput_Texture2D                        = 4,
    FunctionInput_TextureCube                      = 5,
    FunctionInput_Texture2DArray                   = 6,
    FunctionInput_VolumeTexture                    = 7,
    FunctionInput_StaticBool                       = 8,
    FunctionInput_MaterialAttributes               = 9,
    FunctionInput_TextureExternal                  = 10,
    FunctionInput_MAX                              = 11
};


// Enum  Engine.ENoiseFunction
enum class ENoiseFunction : uint8_t
{
    NOISEFUNCTION_SimplexTex                       = 0,
    NOISEFUNCTION_GradientTex                      = 1,
    NOISEFUNCTION_GradientTex3D                    = 2,
    NOISEFUNCTION_GradientALU                      = 3,
    NOISEFUNCTION_ValueALU                         = 4,
    NOISEFUNCTION_VoronoiALU                       = 5,
    NOISEFUNCTION_MAX                              = 6
};


// Enum  Engine.ERuntimeVirtualTextureMipValueMode
enum class ERuntimeVirtualTextureMipValueMode : uint8_t
{
    RVTMVM_None                                    = 0,
    RVTMVM_MipLevel                                = 1,
    RVTMVM_MipBias                                 = 2,
    RVTMVM_RecalculateDerivatives                  = 3,
    RVTMVM_MAX                                     = 4
};


// Enum  Engine.ERuntimeVirtualTextureTextureAddressMode
enum class ERuntimeVirtualTextureTextureAddressMode : uint8_t
{
    RVTTA_Clamp                                    = 0,
    RVTTA_Wrap                                     = 1,
    RVTTA_MAX                                      = 2
};


// Enum  Engine.EMaterialSceneAttributeInputMode
enum class EMaterialSceneAttributeInputMode : uint8_t
{
    Coordinates                                    = 0,
    OffsetFraction                                 = 1,
    EMaterialSceneAttributeInputMode_MAX           = 2
};


// Enum  Engine.ESpeedTreeGeometryType
enum class ESpeedTreeGeometryType : uint8_t
{
    STG_Branch                                     = 0,
    STG_Frond                                      = 1,
    STG_Leaf                                       = 2,
    STG_FacingLeaf                                 = 3,
    STG_Billboard                                  = 4,
    STG_MAX                                        = 5
};


// Enum  Engine.ESpeedTreeWindType
enum class ESpeedTreeWindType : uint8_t
{
    STW_None                                       = 0,
    STW_Fastest                                    = 1,
    STW_Fast                                       = 2,
    STW_Better                                     = 3,
    STW_Best                                       = 4,
    STW_Palm                                       = 5,
    STW_BestPlus                                   = 6,
    STW_MAX                                        = 7
};


// Enum  Engine.ESpeedTreeLODType
enum class ESpeedTreeLODType : uint8_t
{
    STLOD_Pop                                      = 0,
    STLOD_Smooth                                   = 1,
    STLOD_MAX                                      = 2
};


// Enum  Engine.EMaterialExposedTextureProperty
enum class EMaterialExposedTextureProperty : uint8_t
{
    TMTM_TextureSize                               = 0,
    TMTM_TexelSize                                 = 1,
    TMTM_MAX                                       = 2
};


// Enum  Engine.EMaterialVectorCoordTransformSource
enum class EMaterialVectorCoordTransformSource : uint8_t
{
    TRANSFORMSOURCE_Tangent                        = 0,
    TRANSFORMSOURCE_Local                          = 1,
    TRANSFORMSOURCE_World                          = 2,
    TRANSFORMSOURCE_View                           = 3,
    TRANSFORMSOURCE_Camera                         = 4,
    TRANSFORMSOURCE_ParticleWorld                  = 5,
    TRANSFORMSOURCE_Instance                       = 6,
    TRANSFORMSOURCE_MAX                            = 7
};


// Enum  Engine.EMaterialVectorCoordTransform
enum class EMaterialVectorCoordTransform : uint8_t
{
    TRANSFORM_Tangent                              = 0,
    TRANSFORM_Local                                = 1,
    TRANSFORM_World                                = 2,
    TRANSFORM_View                                 = 3,
    TRANSFORM_Camera                               = 4,
    TRANSFORM_ParticleWorld                        = 5,
    TRANSFORM_Instance                             = 6,
    TRANSFORM_MAX                                  = 7
};


// Enum  Engine.EMaterialPositionTransformSource
enum class EMaterialPositionTransformSource : uint8_t
{
    TRANSFORMPOSSOURCE_Local                       = 0,
    TRANSFORMPOSSOURCE_World                       = 1,
    TRANSFORMPOSSOURCE_TranslatedWorld             = 2,
    TRANSFORMPOSSOURCE_View                        = 3,
    TRANSFORMPOSSOURCE_Camera                      = 4,
    TRANSFORMPOSSOURCE_Particle                    = 5,
    TRANSFORMPOSSOURCE_Instance                    = 6,
    TRANSFORMPOSSOURCE_MAX                         = 7
};


// Enum  Engine.EVectorNoiseFunction
enum class EVectorNoiseFunction : uint8_t
{
    VNF_CellnoiseALU                               = 0,
    VNF_VectorALU                                  = 1,
    VNF_GradientALU                                = 2,
    VNF_CurlALU                                    = 3,
    VNF_VoronoiALU                                 = 4,
    VNF_MAX                                        = 5
};


// Enum  Engine.EMaterialExposedViewProperty
enum class EMaterialExposedViewProperty : uint8_t
{
    MEVP_BufferSize                                = 0,
    MEVP_FieldOfView                               = 1,
    MEVP_TanHalfFieldOfView                        = 2,
    MEVP_ViewSize                                  = 3,
    MEVP_WorldSpaceViewPosition                    = 4,
    MEVP_WorldSpaceCameraPosition                  = 5,
    MEVP_ViewportOffset                            = 6,
    MEVP_TemporalSampleCount                       = 7,
    MEVP_TemporalSampleIndex                       = 8,
    MEVP_TemporalSampleOffset                      = 9,
    MEVP_RuntimeVirtualTextureOutputLevel          = 10,
    MEVP_RuntimeVirtualTextureOutputDerivative     = 11,
    MEVP_PreExposure                               = 12,
    MEVP_RuntimeVirtualTextureMaxLevel             = 13,
    MEVP_MAX                                       = 14
};


// Enum  Engine.EWorldPositionIncludedOffsets
enum class EWorldPositionIncludedOffsets : uint8_t
{
    WPT_Default                                    = 0,
    WPT_ExcludeAllShaderOffsets                    = 1,
    WPT_CameraRelative                             = 2,
    WPT_CameraRelativeNoOffsets                    = 3,
    WPT_MAX                                        = 4
};


// Enum  Engine.EMaterialFunctionUsage
enum class EMaterialFunctionUsage : uint8_t
{
    Default                                        = 0,
    MaterialLayer                                  = 1,
    MaterialLayerBlend                             = 2,
    EMaterialFunctionUsage_MAX                     = 3
};


// Enum  Engine.EMaterialUsage
enum class EMaterialUsage : uint8_t
{
    MATUSAGE_SkeletalMesh                          = 0,
    MATUSAGE_ParticleSprites                       = 1,
    MATUSAGE_BeamTrails                            = 2,
    MATUSAGE_MeshParticles                         = 3,
    MATUSAGE_StaticLighting                        = 4,
    MATUSAGE_MorphTargets                          = 5,
    MATUSAGE_SplineMesh                            = 6,
    MATUSAGE_InstancedStaticMeshes                 = 7,
    MATUSAGE_GeometryCollections                   = 8,
    MATUSAGE_Clothing                              = 9,
    MATUSAGE_NiagaraSprites                        = 10,
    MATUSAGE_NiagaraRibbons                        = 11,
    MATUSAGE_NiagaraMeshParticles                  = 12,
    MATUSAGE_GeometryCache                         = 13,
    MATUSAGE_Water                                 = 14,
    MATUSAGE_HairStrands                           = 15,
    MATUSAGE_LidarPointCloud                       = 16,
    MATUSAGE_VirtualHeightfieldMesh                = 17,
    MATUSAGE_Nanite                                = 18,
    MATUSAGE_CompositeMesh                         = 19,
    MATUSAGE_EmbarkClusterMesh                     = 20,
    MATUSAGE_MAX                                   = 21
};


// Enum  Engine.EMaterialParameterAssociation
enum class EMaterialParameterAssociation : uint8_t
{
    LayerParameter                                 = 0,
    BlendParameter                                 = 1,
    GlobalParameter                                = 2,
    EMaterialParameterAssociation_MAX              = 3
};


// Enum  Engine.EMaterialLayerLinkState
enum class EMaterialLayerLinkState : uint8_t
{
    Uninitialized                                  = 0,
    LinkedToParent                                 = 1,
    UnlinkedFromParent                             = 2,
    NotFromParent                                  = 3,
    EMaterialLayerLinkState_MAX                    = 4
};


// Enum  Engine.ETextureSizingType
enum class ETextureSizingType : uint8_t
{
    TextureSizingType_UseSingleTextureSize         = 0,
    TextureSizingType_UseAutomaticBiasedSizes      = 1,
    TextureSizingType_UseManualOverrideTextureSize = 2,
    TextureSizingType_UseSimplygonAutomaticSizing  = 3,
    TextureSizingType_AutomaticFromTexelDensity    = 4,
    TextureSizingType_AutomaticFromMeshScreenSize  = 5,
    TextureSizingType_AutomaticFromMeshDrawDistance = 6,
    TextureSizingType_MAX                          = 7
};


// Enum  Engine.EMaterialMergeType
enum class EMaterialMergeType : uint8_t
{
    MaterialMergeType_Default                      = 0,
    MaterialMergeType_Simplygon                    = 1,
    MaterialMergeType_MAX                          = 2
};


// Enum  Engine.ESceneTextureId
enum class ESceneTextureId : uint8_t
{
    PPI_SceneColor                                 = 0,
    PPI_SceneDepth                                 = 1,
    PPI_DiffuseColor                               = 2,
    PPI_SpecularColor                              = 3,
    PPI_SubsurfaceColor                            = 4,
    PPI_BaseColor                                  = 5,
    PPI_Specular                                   = 6,
    PPI_Metallic                                   = 7,
    PPI_WorldNormal                                = 8,
    PPI_SeparateTranslucency                       = 9,
    PPI_Opacity                                    = 10,
    PPI_Roughness                                  = 11,
    PPI_MaterialAO                                 = 12,
    PPI_CustomDepth                                = 13,
    PPI_PostProcessInput0                          = 14,
    PPI_PostProcessInput1                          = 15,
    PPI_PostProcessInput2                          = 16,
    PPI_PostProcessInput3                          = 17,
    PPI_PostProcessInput4                          = 18,
    PPI_PostProcessInput5                          = 19,
    PPI_PostProcessInput6                          = 20,
    PPI_DecalMask                                  = 21,
    PPI_ShadingModelColor                          = 22,
    PPI_ShadingModelID                             = 23,
    PPI_AmbientOcclusion                           = 24,
    PPI_CustomStencil                              = 25,
    PPI_StoredBaseColor                            = 26,
    PPI_StoredSpecular                             = 27,
    PPI_Velocity                                   = 28,
    PPI_WorldTangent                               = 29,
    PPI_Anisotropy                                 = 30,
    PPI_ForegroundStencilMask                      = 31,
    PPI_MAX                                        = 32
};


// Enum  Engine.EMaterialDomain
enum class EMaterialDomain : uint8_t
{
    MD_Surface                                     = 0,
    MD_DeferredDecal                               = 1,
    MD_LightFunction                               = 2,
    MD_Volume                                      = 3,
    MD_PostProcess                                 = 4,
    MD_UI                                          = 5,
    MD_RuntimeVirtualTexture                       = 6,
    MD_MAX                                         = 7
};


// Enum  Engine.EBillboardMode
enum class EBillboardMode : uint8_t
{
    None                                           = 0,
    RotateAroundUpVector                           = 1,
    AlignTowardsCamera                             = 2,
    EBillboardMode_MAX                             = 3
};


// Enum  Engine.EMeshFeatureImportance
enum class EMeshFeatureImportance : uint8_t
{
    Off                                            = 0,
    Lowest                                         = 1,
    Low                                            = 2,
    Normal                                         = 3,
    High                                           = 4,
    Highest                                        = 5,
    EMeshFeatureImportance_MAX                     = 6
};


// Enum  Engine.EStaticMeshReductionTerimationCriterion
enum class EStaticMeshReductionTerimationCriterion : uint8_t
{
    Triangles                                      = 0,
    Vertices                                       = 1,
    Any                                            = 2,
    EStaticMeshReductionTerimationCriterion_MAX    = 3
};


// Enum  Engine.ELandscapeCullingPrecision
enum class ELandscapeCullingPrecision : uint8_t
{
    High                                           = 0,
    Medium                                         = 1,
    Low                                            = 2,
    ELandscapeCullingPrecision_MAX                 = 3
};


// Enum  Engine.EProxyNormalComputationMethod
enum class EProxyNormalComputationMethod : uint8_t
{
    AngleWeighted                                  = 0,
    AreaWeighted                                   = 1,
    EqualWeighted                                  = 2,
    EProxyNormalComputationMethod_MAX              = 3
};


// Enum  Engine.EMeshLODSelectionType
enum class EMeshLODSelectionType : uint8_t
{
    AllLODs                                        = 0,
    SpecificLOD                                    = 1,
    CalculateLOD                                   = 2,
    LowestDetailLOD                                = 3,
    EMeshLODSelectionType_MAX                      = 4
};


// Enum  Engine.EMeshMergeType
enum class EMeshMergeType : uint8_t
{
    MeshMergeType_Default                          = 0,
    MeshMergeType_MergeActor                       = 1,
    MeshMergeType_MAX                              = 2
};


// Enum  Engine.EUVOutput
enum class EUVOutput : uint8_t
{
    DoNotOutputChannel                             = 0,
    OutputChannel                                  = 1,
    EUVOutput_MAX                                  = 2
};


// Enum  Engine.EMeshApproximationType
enum class EMeshApproximationType : uint8_t
{
    MeshAndMaterials                               = 0,
    MeshShapeOnly                                  = 1,
    EMeshApproximationType_MAX                     = 2
};


// Enum  Engine.EMeshApproximationBaseCappingType
enum class EMeshApproximationBaseCappingType : uint8_t
{
    NoBaseCapping                                  = 0,
    ConvexPolygon                                  = 1,
    ConvexSolid                                    = 2,
    EMeshApproximationBaseCappingType_MAX          = 3
};


// Enum  Engine.EOccludedGeometryFilteringPolicy
enum class EOccludedGeometryFilteringPolicy : uint8_t
{
    NoOcclusionFiltering                           = 0,
    VisibilityBasedFiltering                       = 1,
    EOccludedGeometryFilteringPolicy_MAX           = 2
};


// Enum  Engine.EMeshApproximationSimplificationPolicy
enum class EMeshApproximationSimplificationPolicy : uint8_t
{
    FixedTriangleCount                             = 0,
    TrianglesPerArea                               = 1,
    GeometricTolerance                             = 2,
    EMeshApproximationSimplificationPolicy_MAX     = 3
};


// Enum  Engine.EMeshApproximationGroundPlaneClippingPolicy
enum class EMeshApproximationGroundPlaneClippingPolicy : uint8_t
{
    NoGroundClipping                               = 0,
    DiscardWithZPlane                              = 1,
    CutWithZPlane                                  = 2,
    CutAndFillWithZPlane                           = 3,
    EMeshApproximationGroundPlaneClippingPolicy_MAX = 4
};


// Enum  Engine.EMeshApproximationUVGenerationPolicy
enum class EMeshApproximationUVGenerationPolicy : uint8_t
{
    PreferUVAtlas                                  = 0,
    PreferXAtlas                                   = 1,
    PreferPatchBuilder                             = 2,
    EMeshApproximationUVGenerationPolicy_MAX       = 3
};


// Enum  Engine.EVertexPaintAxis
enum class EVertexPaintAxis : uint8_t
{
    X                                              = 0,
    Y                                              = 1,
    Z                                              = 2,
    EVertexPaintAxis_MAX                           = 3
};


// Enum  Engine.EMicroTransactionDelegate
enum class EMicroTransactionDelegate : uint8_t
{
    MTD_PurchaseQueryComplete                      = 0,
    MTD_PurchaseComplete                           = 1,
    MTD_MAX                                        = 2
};


// Enum  Engine.EMicroTransactionResult
enum class EMicroTransactionResult : uint8_t
{
    MTR_Succeeded                                  = 0,
    MTR_Failed                                     = 1,
    MTR_Canceled                                   = 2,
    MTR_RestoredFromServer                         = 3,
    MTR_MAX                                        = 4
};


// Enum  Engine.EMirrorRowType
enum class EMirrorRowType : uint8_t
{
    Bone                                           = 0,
    AnimationNotify                                = 1,
    Curve                                          = 2,
    SyncMarker                                     = 3,
    Custom                                         = 4,
    EMirrorRowType_MAX                             = 5
};


// Enum  Engine.EMirrorFindReplaceMethod
enum class EMirrorFindReplaceMethod : uint8_t
{
    Prefix                                         = 0,
    Suffix                                         = 1,
    RegularExpression                              = 2,
    EMirrorFindReplaceMethod_MAX                   = 3
};


// Enum  Engine.ETrajectorySampleDomain
enum class ETrajectorySampleDomain : uint8_t
{
    None                                           = 0,
    Time                                           = 1,
    Distance                                       = 2,
    ETrajectorySampleDomain_MAX                    = 3
};


// Enum  Engine.FNavigationSystemRunMode
enum class FNavigationSystemRunMode : uint8_t
{
    InvalidMode                                    = 0,
    GameMode                                       = 1,
    EditorMode                                     = 2,
    SimulationMode                                 = 3,
    PIEMode                                        = 4,
    InferFromWorldMode                             = 5,
    FNavigationSystemRunMode_MAX                   = 6
};


// Enum  Engine.ENavigationOptionFlag
enum class ENavigationOptionFlag : uint8_t
{
    Default                                        = 0,
    Enable                                         = 1,
    Disable                                        = 2,
    MAX                                            = 3
};


// Enum  Engine.ENavDataGatheringMode
enum class ENavDataGatheringMode : uint8_t
{
    Default                                        = 0,
    Instant                                        = 1,
    Lazy                                           = 2,
    ENavDataGatheringMode_MAX                      = 3
};


// Enum  Engine.ENavDataGatheringModeConfig
enum class ENavDataGatheringModeConfig : uint8_t
{
    Invalid                                        = 0,
    Instant                                        = 1,
    Lazy                                           = 2,
    ENavDataGatheringModeConfig_MAX                = 3
};


// Enum  Engine.ENavPathEvent
enum class ENavPathEvent : uint8_t
{
    Cleared                                        = 0,
    NewPath                                        = 1,
    UpdatedDueToGoalMoved                          = 2,
    UpdatedDueToNavigationChanged                  = 3,
    Invalidated                                    = 4,
    RePathFailed                                   = 5,
    MetaPathUpdate                                 = 6,
    Custom                                         = 7,
    ENavPathEvent_MAX                              = 8
};


// Enum  Engine.ENavigationQueryResult
enum class ENavigationQueryResult : uint8_t
{
    Invalid                                        = 0,
    Error                                          = 1,
    Fail                                           = 2,
    Success                                        = 3,
    ENavigationQueryResult_MAX                     = 4
};


// Enum  Engine.ENavLinkDirection
enum class ENavLinkDirection : uint8_t
{
    BothWays                                       = 0,
    LeftToRight                                    = 1,
    RightToLeft                                    = 2,
    ENavLinkDirection_MAX                          = 3
};


// Enum  Engine.EParticleBurstMethod
enum class EParticleBurstMethod : uint8_t
{
    EPBM_Instant                                   = 0,
    EPBM_Interpolated                              = 1,
    EPBM_MAX                                       = 2
};


// Enum  Engine.EParticleSubUVInterpMethod
enum class EParticleSubUVInterpMethod : uint8_t
{
    PSUVIM_None                                    = 0,
    PSUVIM_Linear                                  = 1,
    PSUVIM_Linear_Blend                            = 2,
    PSUVIM_Random                                  = 3,
    PSUVIM_Random_Blend                            = 4,
    PSUVIM_MAX                                     = 5
};


// Enum  Engine.EEmitterRenderMode
enum class EEmitterRenderMode : uint8_t
{
    ERM_Normal                                     = 0,
    ERM_Point                                      = 1,
    ERM_Cross                                      = 2,
    ERM_LightsOnly                                 = 3,
    ERM_None                                       = 4,
    ERM_MAX                                        = 5
};


// Enum  Engine.EParticleDetailMode
enum class EParticleDetailMode : uint8_t
{
    PDM_Low                                        = 0,
    PDM_Medium                                     = 1,
    PDM_High                                       = 2,
    PDM_MAX                                        = 3
};


// Enum  Engine.EParticleSignificanceLevel
enum class EParticleSignificanceLevel : uint8_t
{
    Low                                            = 0,
    Medium                                         = 1,
    High                                           = 2,
    Critical                                       = 3,
    Num                                            = 4,
    EParticleSignificanceLevel_MAX                 = 5
};


// Enum  Engine.EParticleSystemInsignificanceReaction
enum class EParticleSystemInsignificanceReaction : uint8_t
{
    Auto                                           = 0,
    Complete                                       = 1,
    DisableTick                                    = 2,
    DisableTickAndKill                             = 3,
    Num                                            = 4,
    EParticleSystemInsignificanceReaction_MAX      = 5
};


// Enum  Engine.EModuleType
enum class EModuleType : uint8_t
{
    EPMT_General                                   = 0,
    EPMT_TypeData                                  = 1,
    EPMT_Beam                                      = 2,
    EPMT_Trail                                     = 3,
    EPMT_Spawn                                     = 4,
    EPMT_Required                                  = 5,
    EPMT_Event                                     = 6,
    EPMT_Light                                     = 7,
    EPMT_SubUV                                     = 8,
    EPMT_MAX                                       = 9
};


// Enum  Engine.EParticleSourceSelectionMethod
enum class EParticleSourceSelectionMethod : uint8_t
{
    EPSSM_Random                                   = 0,
    EPSSM_Sequential                               = 1,
    EPSSM_MAX                                      = 2
};


// Enum  Engine.EAttractorParticleSelectionMethod
enum class EAttractorParticleSelectionMethod : uint8_t
{
    EAPSM_Random                                   = 0,
    EAPSM_Sequential                               = 1,
    EAPSM_MAX                                      = 2
};


// Enum  Engine.Beam2SourceTargetMethod
enum class Beam2SourceTargetMethod : uint8_t
{
    PEB2STM_Default                                = 0,
    PEB2STM_UserSet                                = 1,
    PEB2STM_Emitter                                = 2,
    PEB2STM_Particle                               = 3,
    PEB2STM_Actor                                  = 4,
    PEB2STM_MAX                                    = 5
};


// Enum  Engine.Beam2SourceTargetTangentMethod
enum class Beam2SourceTargetTangentMethod : uint8_t
{
    PEB2STTM_Direct                                = 0,
    PEB2STTM_UserSet                               = 1,
    PEB2STTM_Distribution                          = 2,
    PEB2STTM_Emitter                               = 3,
    PEB2STTM_MAX                                   = 4
};


// Enum  Engine.BeamModifierType
enum class BeamModifierType : uint8_t
{
    PEB2MT_Source                                  = 0,
    PEB2MT_Target                                  = 1,
    PEB2MT_MAX                                     = 2
};


// Enum  Engine.EParticleCameraOffsetUpdateMethod
enum class EParticleCameraOffsetUpdateMethod : uint8_t
{
    EPCOUM_DirectSet                               = 0,
    EPCOUM_Additive                                = 1,
    EPCOUM_Scalar                                  = 2,
    EPCOUM_MAX                                     = 3
};


// Enum  Engine.EParticleCollisionComplete
enum class EParticleCollisionComplete : uint8_t
{
    EPCC_Kill                                      = 0,
    EPCC_Freeze                                    = 1,
    EPCC_HaltCollisions                            = 2,
    EPCC_FreezeTranslation                         = 3,
    EPCC_FreezeRotation                            = 4,
    EPCC_FreezeMovement                            = 5,
    EPCC_MAX                                       = 6
};


// Enum  Engine.EParticleCollisionResponse
enum class EParticleCollisionResponse : uint8_t
{
    Bounce                                         = 0,
    Stop                                           = 1,
    Kill                                           = 2,
    EParticleCollisionResponse_MAX                 = 3
};


// Enum  Engine.ELocationBoneSocketSource
enum class ELocationBoneSocketSource : uint8_t
{
    BONESOCKETSOURCE_Bones                         = 0,
    BONESOCKETSOURCE_Sockets                       = 1,
    BONESOCKETSOURCE_MAX                           = 2
};


// Enum  Engine.ELocationBoneSocketSelectionMethod
enum class ELocationBoneSocketSelectionMethod : uint8_t
{
    BONESOCKETSEL_Sequential                       = 0,
    BONESOCKETSEL_Random                           = 1,
    BONESOCKETSEL_MAX                              = 2
};


// Enum  Engine.ELocationEmitterSelectionMethod
enum class ELocationEmitterSelectionMethod : uint8_t
{
    ELESM_Random                                   = 0,
    ELESM_Sequential                               = 1,
    ELESM_MAX                                      = 2
};


// Enum  Engine.CylinderHeightAxis
enum class CylinderHeightAxis : uint8_t
{
    PMLPC_HEIGHTAXIS_X                             = 0,
    PMLPC_HEIGHTAXIS_Y                             = 1,
    PMLPC_HEIGHTAXIS_Z                             = 2,
    PMLPC_HEIGHTAXIS_MAX                           = 3
};


// Enum  Engine.ELocationSkelVertSurfaceSource
enum class ELocationSkelVertSurfaceSource : uint8_t
{
    VERTSURFACESOURCE_Vert                         = 0,
    VERTSURFACESOURCE_Surface                      = 1,
    VERTSURFACESOURCE_MAX                          = 2
};


// Enum  Engine.EOrbitChainMode
enum class EOrbitChainMode : uint8_t
{
    EOChainMode_Add                                = 0,
    EOChainMode_Scale                              = 1,
    EOChainMode_Link                               = 2,
    EOChainMode_MAX                                = 3
};


// Enum  Engine.EParticleAxisLock
enum class EParticleAxisLock : uint8_t
{
    EPAL_NONE                                      = 0,
    EPAL_X                                         = 1,
    EPAL_Y                                         = 2,
    EPAL_Z                                         = 3,
    EPAL_NEGATIVE_X                                = 4,
    EPAL_NEGATIVE_Y                                = 5,
    EPAL_NEGATIVE_Z                                = 6,
    EPAL_ROTATE_X                                  = 7,
    EPAL_ROTATE_Y                                  = 8,
    EPAL_ROTATE_Z                                  = 9,
    EPAL_MAX                                       = 10
};


// Enum  Engine.EEmitterDynamicParameterValue
enum class EEmitterDynamicParameterValue : uint8_t
{
    EDPV_UserSet                                   = 0,
    EDPV_AutoSet                                   = 1,
    EDPV_VelocityX                                 = 2,
    EDPV_VelocityY                                 = 3,
    EDPV_VelocityZ                                 = 4,
    EDPV_VelocityMag                               = 5,
    EDPV_MAX                                       = 6
};


// Enum  Engine.EParticleUVFlipMode
enum class EParticleUVFlipMode : uint8_t
{
    None                                           = 0,
    FlipUV                                         = 1,
    FlipUOnly                                      = 2,
    FlipVOnly                                      = 3,
    RandomFlipUV                                   = 4,
    RandomFlipUOnly                                = 5,
    RandomFlipVOnly                                = 6,
    RandomFlipUVIndependent                        = 7,
    EParticleUVFlipMode_MAX                        = 8
};


// Enum  Engine.EParticleSortMode
enum class EParticleSortMode : uint8_t
{
    PSORTMODE_None                                 = 0,
    PSORTMODE_ViewProjDepth                        = 1,
    PSORTMODE_DistanceToView                       = 2,
    PSORTMODE_Age_OldestFirst                      = 3,
    PSORTMODE_Age_NewestFirst                      = 4,
    PSORTMODE_MAX                                  = 5
};


// Enum  Engine.EEmitterNormalsMode
enum class EEmitterNormalsMode : uint8_t
{
    ENM_CameraFacing                               = 0,
    ENM_Spherical                                  = 1,
    ENM_Cylindrical                                = 2,
    ENM_MAX                                        = 3
};


// Enum  Engine.ETrail2SourceMethod
enum class ETrail2SourceMethod : uint8_t
{
    PET2SRCM_Default                               = 0,
    PET2SRCM_Particle                              = 1,
    PET2SRCM_Actor                                 = 2,
    PET2SRCM_MAX                                   = 3
};


// Enum  Engine.EBeam2Method
enum class EBeam2Method : uint8_t
{
    PEB2M_Distance                                 = 0,
    PEB2M_Target                                   = 1,
    PEB2M_Branch                                   = 2,
    PEB2M_MAX                                      = 3
};


// Enum  Engine.EBeamTaperMethod
enum class EBeamTaperMethod : uint8_t
{
    PEBTM_None                                     = 0,
    PEBTM_Full                                     = 1,
    PEBTM_Partial                                  = 2,
    PEBTM_MAX                                      = 3
};


// Enum  Engine.EMeshScreenAlignment
enum class EMeshScreenAlignment : uint8_t
{
    PSMA_MeshFaceCameraWithRoll                    = 0,
    PSMA_MeshFaceCameraWithSpin                    = 1,
    PSMA_MeshFaceCameraWithLockedAxis              = 2,
    PSMA_MAX                                       = 3
};


// Enum  Engine.EMeshCameraFacingUpAxis
enum class EMeshCameraFacingUpAxis : uint8_t
{
    CameraFacing_NoneUP                            = 0,
    CameraFacing_ZUp                               = 1,
    CameraFacing_NegativeZUp                       = 2,
    CameraFacing_YUp                               = 3,
    CameraFacing_NegativeYUp                       = 4,
    CameraFacing_MAX                               = 5
};


// Enum  Engine.EMeshCameraFacingOptions
enum class EMeshCameraFacingOptions : uint8_t
{
    XAxisFacing_NoUp                               = 0,
    XAxisFacing_ZUp                                = 1,
    XAxisFacing_NegativeZUp                        = 2,
    XAxisFacing_YUp                                = 3,
    XAxisFacing_NegativeYUp                        = 4,
    LockedAxis_ZAxisFacing                         = 5,
    LockedAxis_NegativeZAxisFacing                 = 6,
    LockedAxis_YAxisFacing                         = 7,
    LockedAxis_NegativeYAxisFacing                 = 8,
    VelocityAligned_ZAxisFacing                    = 9,
    VelocityAligned_NegativeZAxisFacing            = 10,
    VelocityAligned_YAxisFacing                    = 11,
    VelocityAligned_NegativeYAxisFacing            = 12,
    EMeshCameraFacingOptions_MAX                   = 13
};


// Enum  Engine.ETrailsRenderAxisOption
enum class ETrailsRenderAxisOption : uint8_t
{
    Trails_CameraUp                                = 0,
    Trails_SourceUp                                = 1,
    Trails_WorldUp                                 = 2,
    Trails_MAX                                     = 3
};


// Enum  Engine.EParticleScreenAlignment
enum class EParticleScreenAlignment : uint8_t
{
    PSA_FacingCameraPosition                       = 0,
    PSA_Square                                     = 1,
    PSA_Rectangle                                  = 2,
    PSA_Velocity                                   = 3,
    PSA_AwayFromCenter                             = 4,
    PSA_TypeSpecific                               = 5,
    PSA_FacingCameraDistanceBlend                  = 6,
    PSA_MAX                                        = 7
};


// Enum  Engine.EParticleSystemUpdateMode
enum class EParticleSystemUpdateMode : uint8_t
{
    EPSUM_RealTime                                 = 0,
    EPSUM_FixedTime                                = 1,
    EPSUM_MAX                                      = 2
};


// Enum  Engine.ParticleSystemLODMethod
enum class ParticleSystemLODMethod : uint8_t
{
    PARTICLESYSTEMLODMETHOD_Automatic              = 0,
    PARTICLESYSTEMLODMETHOD_DirectSet              = 1,
    PARTICLESYSTEMLODMETHOD_ActivateAutomatic      = 2,
    PARTICLESYSTEMLODMETHOD_MAX                    = 3
};


// Enum  Engine.EParticleSystemOcclusionBoundsMethod
enum class EParticleSystemOcclusionBoundsMethod : uint8_t
{
    EPSOBM_None                                    = 0,
    EPSOBM_ParticleBounds                          = 1,
    EPSOBM_CustomBounds                            = 2,
    EPSOBM_MAX                                     = 3
};


// Enum  Engine.EParticleSysParamType
enum class EParticleSysParamType : uint8_t
{
    PSPT_None                                      = 0,
    PSPT_Scalar                                    = 1,
    PSPT_ScalarRand                                = 2,
    PSPT_Vector                                    = 3,
    PSPT_VectorRand                                = 4,
    PSPT_Color                                     = 5,
    PSPT_Actor                                     = 6,
    PSPT_Material                                  = 7,
    PSPT_VectorUnitRand                            = 8,
    PSPT_MAX                                       = 9
};


// Enum  Engine.ParticleReplayState
enum class ParticleReplayState : uint8_t
{
    PRS_Disabled                                   = 0,
    PRS_Capturing                                  = 1,
    PRS_Replaying                                  = 2,
    PRS_MAX                                        = 3
};


// Enum  Engine.EParticleEventType
enum class EParticleEventType : uint8_t
{
    EPET_Any                                       = 0,
    EPET_Spawn                                     = 1,
    EPET_Death                                     = 2,
    EPET_Collision                                 = 3,
    EPET_Burst                                     = 4,
    EPET_Blueprint                                 = 5,
    EPET_MAX                                       = 6
};


// Enum  Engine.EPhysicsAssetSolverType
enum class EPhysicsAssetSolverType : uint8_t
{
    RBAN                                           = 0,
    World                                          = 1,
    EPhysicsAssetSolverType_MAX                    = 2
};


// Enum  Engine.ESettingsDOF
enum class ESettingsDOF : uint8_t
{
    Full3D                                         = 0,
    YZPlane                                        = 1,
    XZPlane                                        = 2,
    XYPlane                                        = 3,
    ESettingsDOF_MAX                               = 4
};


// Enum  Engine.ESettingsLockedAxis
enum class ESettingsLockedAxis : uint8_t
{
    None                                           = 0,
    X                                              = 1,
    Y                                              = 2,
    Z                                              = 3,
    Invalid                                        = 4,
    ESettingsLockedAxis_MAX                        = 5
};


// Enum  Engine.EVoiceBlockReasons
enum class EVoiceBlockReasons : uint8_t
{
    None                                           = 0,
    Muted                                          = 1,
    MutedBy                                        = 2,
    Gameplay                                       = 4,
    Blocked                                        = 8,
    BlockedBy                                      = 16,
    EVoiceBlockReasons_MAX                         = 17
};


// Enum  Engine.ECanBeCharacterBase
enum class ECanBeCharacterBase : uint8_t
{
    ECB_No                                         = 0,
    ECB_Yes                                        = 1,
    ECB_Owner                                      = 2,
    ECB_MAX                                        = 3
};


// Enum  Engine.EHasCustomNavigableGeometry
enum class EHasCustomNavigableGeometry : uint8_t
{
    No                                             = 0,
    Yes                                            = 1,
    EvenIfNotCollidable                            = 2,
    DontExport                                     = 3,
    EHasCustomNavigableGeometry_MAX                = 4
};


// Enum  Engine.ERendererStencilMask
enum class ERendererStencilMask : uint8_t
{
    ERSM_Default                                   = 0,
    ERSM                                           = 1,
    ERSM                                           = 2,
    ERSM                                           = 3,
    ERSM                                           = 4,
    ERSM                                           = 5,
    ERSM                                           = 6,
    ERSM                                           = 7,
    ERSM                                           = 8,
    ERSM                                           = 9,
    ERSM_MAX                                       = 10
};


// Enum  Engine.ERayTracingGroupCullingPriority
enum class ERayTracingGroupCullingPriority : uint8_t
{
    CP_0_NEVER_CULL                                = 0,
    CP                                             = 1,
    CP                                             = 2,
    CP                                             = 3,
    CP_4_DEFAULT                                   = 4,
    CP                                             = 5,
    CP                                             = 6,
    CP                                             = 7,
    CP_8_QUICKLY_CULL                              = 8,
    CP_MAX                                         = 9
};


// Enum  Engine.EPropertyAccessCopyBatch
enum class EPropertyAccessCopyBatch : uint8_t
{
    InternalUnbatched                              = 0,
    ExternalUnbatched                              = 1,
    InternalBatched                                = 2,
    ExternalBatched                                = 3,
    Count                                          = 4,
    EPropertyAccessCopyBatch_MAX                   = 5
};


// Enum  Engine.EPropertyAccessIndirectionType
enum class EPropertyAccessIndirectionType : uint8_t
{
    Offset                                         = 0,
    Object                                         = 1,
    Array                                          = 2,
    ScriptFunction                                 = 3,
    NativeFunction                                 = 4,
    EPropertyAccessIndirectionType_MAX             = 5
};


// Enum  Engine.EPropertyAccessObjectType
enum class EPropertyAccessObjectType : uint8_t
{
    None                                           = 0,
    Object                                         = 1,
    WeakObject                                     = 2,
    SoftObject                                     = 3,
    EPropertyAccessObjectType_MAX                  = 4
};


// Enum  Engine.EPropertyAccessCopyType
enum class EPropertyAccessCopyType : uint8_t
{
    None                                           = 0,
    Plain                                          = 1,
    Complex                                        = 2,
    Bool                                           = 3,
    Struct                                         = 4,
    Object                                         = 5,
    Name                                           = 6,
    Array                                          = 7,
    PromoteBoolToByte                              = 8,
    PromoteBoolToInt32                             = 9,
    PromoteBoolToInt64                             = 10,
    PromoteBoolToFloat                             = 11,
    PromoteBoolToDouble                            = 12,
    PromoteByteToInt32                             = 13,
    PromoteByteToInt64                             = 14,
    PromoteByteToFloat                             = 15,
    PromoteByteToDouble                            = 16,
    PromoteInt32ToInt64                            = 17,
    PromoteInt32ToFloat                            = 18,
    PromoteInt32ToDouble                           = 19,
    PromoteFloatToDouble                           = 20,
    DemoteDoubleToFloat                            = 21,
    PromoteArrayFloatToDouble                      = 22,
    DemoteArrayDoubleToFloat                       = 23,
    EPropertyAccessCopyType_MAX                    = 24
};


// Enum  Engine.EQuartzTimeSignatureQuantization
enum class EQuartzTimeSignatureQuantization : uint8_t
{
    HalfNote                                       = 0,
    QuarterNote                                    = 1,
    EighthNote                                     = 2,
    SixteenthNote                                  = 3,
    ThirtySecondNote                               = 4,
    Count                                          = 5,
    EQuartzTimeSignatureQuantization_MAX           = 6
};


// Enum  Engine.EQuartzDelegateType
enum class EQuartzDelegateType : uint8_t
{
    MetronomeTick                                  = 0,
    CommandEvent                                   = 1,
    Count                                          = 2,
    EQuartzDelegateType_MAX                        = 3
};


// Enum  Engine.EQuarztQuantizationReference
enum class EQuarztQuantizationReference : uint8_t
{
    BarRelative                                    = 0,
    TransportRelative                              = 1,
    CurrentTimeRelative                            = 2,
    Count                                          = 3,
    EQuarztQuantizationReference_MAX               = 4
};


// Enum  Engine.EQuartzCommandType
enum class EQuartzCommandType : uint8_t
{
    PlaySound                                      = 0,
    QueueSoundToPlay                               = 1,
    RetriggerSound                                 = 2,
    TickRateChange                                 = 3,
    TransportReset                                 = 4,
    StartOtherClock                                = 5,
    EQuartzCommandType_MAX                         = 6
};


// Enum  Engine.ERichCurveInterpMode
enum class ERichCurveInterpMode : uint8_t
{
    RCIM_Linear                                    = 0,
    RCIM_Constant                                  = 1,
    RCIM_Cubic                                     = 2,
    RCIM_None                                      = 3,
    RCIM_MAX                                       = 4
};


// Enum  Engine.ERichCurveExtrapolation
enum class ERichCurveExtrapolation : uint8_t
{
    RCCE_Cycle                                     = 0,
    RCCE_CycleWithOffset                           = 1,
    RCCE_Oscillate                                 = 2,
    RCCE_Linear                                    = 3,
    RCCE_Constant                                  = 4,
    RCCE_None                                      = 5,
    RCCE_MAX                                       = 6
};


// Enum  Engine.EReflectionSourceType
enum class EReflectionSourceType : uint8_t
{
    CapturedScene                                  = 0,
    SpecifiedCubemap                               = 1,
    EReflectionSourceType_MAX                      = 2
};


// Enum  Engine.EMobileReflectionCompression
enum class EMobileReflectionCompression : uint8_t
{
    Default                                        = 0,
    On                                             = 1,
    Off                                            = 2,
    EMobileReflectionCompression_MAX               = 3
};


// Enum  Engine.EClearSceneOptions
enum class EClearSceneOptions : uint8_t
{
    NoClear                                        = 0,
    HardwareClear                                  = 1,
    QuadAtMaxZ                                     = 2,
    EClearSceneOptions_MAX                         = 3
};


// Enum  Engine.ECompositingSampleCount
enum class ECompositingSampleCount : uint8_t
{
    One                                            = 1,
    Two                                            = 2,
    Four                                           = 4,
    Eight                                          = 8,
    ECompositingSampleCount_MAX                    = 9
};


// Enum  Engine.ECustomDepthStencil
enum class ECustomDepthStencil : uint8_t
{
    Disabled                                       = 0,
    Enabled                                        = 1,
    EnabledOnDemand                                = 2,
    EnabledWithStencil                             = 3,
    ECustomDepthStencil_MAX                        = 4
};


// Enum  Engine.EEarlyZPass
enum class EEarlyZPass : uint8_t
{
    None                                           = 0,
    OpaqueOnly                                     = 1,
    OpaqueAndMasked                                = 2,
    Auto                                           = 3,
    EEarlyZPass_MAX                                = 4
};


// Enum  Engine.EVelocityOutputPass
enum class EVelocityOutputPass : uint8_t
{
    DepthPass                                      = 0,
    BasePass                                       = 1,
    AfterBasePass                                  = 2,
    EVelocityOutputPass_MAX                        = 3
};


// Enum  Engine.EVertexDeformationOutputsVelocity
enum class EVertexDeformationOutputsVelocity : uint8_t
{
    Off                                            = 0,
    On                                             = 1,
    Auto                                           = 2,
    EVertexDeformationOutputsVelocity_MAX          = 3
};


// Enum  Engine.EAlphaChannelMode
enum class EAlphaChannelMode : uint8_t
{
    Disabled                                       = 0,
    LinearColorSpaceOnly                           = 1,
    AllowThroughTonemapper                         = 2,
    EAlphaChannelMode_MAX                          = 3
};


// Enum  Engine.EAutoExposureMethodUI
enum class EAutoExposureMethodUI : uint8_t
{
    AEM_Histogram                                  = 0,
    AEM_Basic                                      = 1,
    AEM_Manual                                     = 2,
    AEM_MAX                                        = 3
};


// Enum  Engine.EDefaultBackBufferPixelFormat
enum class EDefaultBackBufferPixelFormat : uint8_t
{
    DBBPF_B8G8R8A8                                 = 0,
    DBBPF_A16B16G16R16_DEPRECATED                  = 1,
    DBBPF_FloatRGB_DEPRECATED                      = 2,
    DBBPF_FloatRGBA                                = 3,
    DBBPF_A2B10G10R10                              = 4,
    DBBPF_MAX                                      = 5
};


// Enum  Engine.EFixedFoveationLevels
enum class EFixedFoveationLevels : uint8_t
{
    Disabled                                       = 0,
    Low                                            = 1,
    Medium                                         = 2,
    High                                           = 3,
    HighTop                                        = 4,
    EFixedFoveationLevels_MAX                      = 5
};


// Enum  Engine.EMobileAntiAliasingMethod
enum class EMobileAntiAliasingMethod : uint8_t
{
    None                                           = 0,
    FXAA                                           = 1,
    TemporalAA                                     = 2,
    MSAA                                           = 3,
    EMobileAntiAliasingMethod_MAX                  = 4
};


// Enum  Engine.EMobileFloatPrecisionMode
enum class EMobileFloatPrecisionMode : uint8_t
{
    Half                                           = 0,
    Full_MaterialExpressionOnly                    = 1,
    Full                                           = 2,
    EMobileFloatPrecisionMode_MAX                  = 3
};


// Enum  Engine.EShaderCompressionFormat
enum class EShaderCompressionFormat : uint8_t
{
    None                                           = 0,
    LZ4                                            = 1,
    Oodle                                          = 2,
    Zlib                                           = 3,
    EShaderCompressionFormat_MAX                   = 4
};


// Enum  Engine.ELumenSoftwareTracingMode
enum class ELumenSoftwareTracingMode : uint8_t
{
    DetailTracing                                  = 1,
    GlobalTracing                                  = 0,
    ELumenSoftwareTracingMode_MAX                  = 2
};


// Enum  Engine.ELumenRayLightingMode
enum class ELumenRayLightingMode : uint8_t
{
    SurfaceCache                                   = 0,
    HitLighting                                    = 2,
    ELumenRayLightingMode_MAX                      = 3
};


// Enum  Engine.EWorkingColorSpace
enum class EWorkingColorSpace : uint8_t
{
    sRGB                                           = 1,
    Rec2020                                        = 2,
    ACESAP0                                        = 3,
    ACESAP1                                        = 4,
    P3DCI                                          = 5,
    P3D65                                          = 6,
    Custom                                         = 7,
    EWorkingColorSpace_MAX                         = 8
};


// Enum  Engine.EReporterLineStyle
enum class EReporterLineStyle : uint8_t
{
    Line                                           = 0,
    Dash                                           = 1,
    EReporterLineStyle_MAX                         = 2
};


// Enum  Engine.EGraphAxisStyle
enum class EGraphAxisStyle : uint8_t
{
    Lines                                          = 0,
    Notches                                        = 1,
    Grid                                           = 2,
    EGraphAxisStyle_MAX                            = 3
};


// Enum  Engine.EGraphDataStyle
enum class EGraphDataStyle : uint8_t
{
    Lines                                          = 0,
    Filled                                         = 1,
    EGraphDataStyle_MAX                            = 2
};


// Enum  Engine.ELegendPosition
enum class ELegendPosition : uint8_t
{
    Outside                                        = 0,
    Inside                                         = 1,
    ELegendPosition_MAX                            = 2
};


// Enum  Engine.ReverbPreset
enum class ReverbPreset : uint8_t
{
    REVERB_Default                                 = 0,
    REVERB_Bathroom                                = 1,
    REVERB_StoneRoom                               = 2,
    REVERB_Auditorium                              = 3,
    REVERB_ConcertHall                             = 4,
    REVERB_Cave                                    = 5,
    REVERB_Hallway                                 = 6,
    REVERB_StoneCorridor                           = 7,
    REVERB_Alley                                   = 8,
    REVERB_Forest                                  = 9,
    REVERB_City                                    = 10,
    REVERB_Mountains                               = 11,
    REVERB_Quarry                                  = 12,
    REVERB_Plain                                   = 13,
    REVERB_ParkingLot                              = 14,
    REVERB_SewerPipe                               = 15,
    REVERB_Underwater                              = 16,
    Reverb_SmallRoom                               = 17,
    Reverb_MediumRoom                              = 18,
    REVERB_LargeRoom                               = 19,
    REVERB_MediumHall                              = 20,
    Reverb_LargeHall                               = 21,
    REVERB_Plate                                   = 22,
    REVERB_MAX                                     = 23,
    ReverbPreset_MAX                               = 24
};


// Enum  Engine.ERichCurveTangentMode
enum class ERichCurveTangentMode : uint8_t
{
    RCTM_Auto                                      = 0,
    RCTM_User                                      = 1,
    RCTM_Break                                     = 2,
    RCTM_None                                      = 3,
    RCTM_MAX                                       = 4
};


// Enum  Engine.ERichCurveTangentWeightMode
enum class ERichCurveTangentWeightMode : uint8_t
{
    RCTWM_WeightedNone                             = 0,
    RCTWM_WeightedArrive                           = 1,
    RCTWM_WeightedLeave                            = 2,
    RCTWM_WeightedBoth                             = 3,
    RCTWM_MAX                                      = 4
};


// Enum  Engine.ERichCurveCompressionFormat
enum class ERichCurveCompressionFormat : uint8_t
{
    RCCF_Empty                                     = 0,
    RCCF_Constant                                  = 1,
    RCCF_Linear                                    = 2,
    RCCF_Cubic                                     = 3,
    RCCF_Mixed                                     = 4,
    RCCF_Weighted                                  = 5,
    RCCF_MAX                                       = 6
};


// Enum  Engine.ERichCurveKeyTimeCompressionFormat
enum class ERichCurveKeyTimeCompressionFormat : uint8_t
{
    RCKTCF_uint16                                  = 0,
    RCKTCF_float32                                 = 1,
    RCKTCF_MAX                                     = 2
};


// Enum  Engine.EControlConstraint
enum class EControlConstraint : uint8_t
{
    Orientation                                    = 0,
    Translation                                    = 1,
    MAX                                            = 2
};


// Enum  Engine.EConstraintTransform
enum class EConstraintTransform : uint8_t
{
    Absolute                                       = 0,
    Relative                                       = 1,
    EConstraintTransform_MAX                       = 2
};


// Enum  Engine.ERootMotionSourceStatusFlags
enum class ERootMotionSourceStatusFlags : uint8_t
{
    Prepared                                       = 1,
    Finished                                       = 2,
    MarkedForRemoval                               = 4,
    ERootMotionSourceStatusFlags_MAX               = 5
};


// Enum  Engine.ERootMotionSourceSettingsFlags
enum class ERootMotionSourceSettingsFlags : uint8_t
{
    UseSensitiveLiftoffCheck                       = 1,
    DisablePartialEndTick                          = 2,
    IgnoreZAccumulate                              = 4,
    ERootMotionSourceSettingsFlags_MAX             = 5
};


// Enum  Engine.ERootMotionFinishVelocityMode
enum class ERootMotionFinishVelocityMode : uint8_t
{
    MaintainLastRootMotionVelocity                 = 0,
    SetVelocity                                    = 1,
    ClampVelocity                                  = 2,
    ERootMotionFinishVelocityMode_MAX              = 3
};


// Enum  Engine.ERuntimeVirtualTextureMaterialType
enum class ERuntimeVirtualTextureMaterialType : uint8_t
{
    BaseColor                                      = 0,
    BaseColor_Normal_DEPRECATED                    = 1,
    BaseColor_Normal_Roughness                     = 2,
    BaseColor_Normal_Specular                      = 3,
    BaseColor_Normal_Specular_YCoCg                = 4,
    BaseColor_Normal_Specular_Mask_YCoCg           = 5,
    WorldHeight                                    = 6,
    Count                                          = 7,
    ERuntimeVirtualTextureMaterialType_MAX         = 8
};


// Enum  Engine.ERuntimeVirtualTextureMainPassType
enum class ERuntimeVirtualTextureMainPassType : uint8_t
{
    Never                                          = 0,
    Exclusive                                      = 1,
    Always                                         = 2,
    ERuntimeVirtualTextureMainPassType_MAX         = 3
};


// Enum  Engine.EDepthOfFieldMethod
enum class EDepthOfFieldMethod : uint8_t
{
    DOFM_BokehDOF                                  = 0,
    DOFM_Gaussian                                  = 1,
    DOFM_CircleDOF                                 = 2,
    DOFM_MAX                                       = 3
};


// Enum  Engine.EAutoExposureMethod
enum class EAutoExposureMethod : uint8_t
{
    AEM_Histogram                                  = 0,
    AEM_Basic                                      = 1,
    AEM_Manual                                     = 2,
    AEM_MAX                                        = 3
};


// Enum  Engine.EBloomMethod
enum class EBloomMethod : uint8_t
{
    BM_SOG                                         = 0,
    BM_FFT                                         = 1,
    BM_MAX                                         = 2
};


// Enum  Engine.ETemperatureMethod
enum class ETemperatureMethod : uint8_t
{
    TEMP_WhiteBalance                              = 0,
    TEMP_ColorTemperature                          = 1,
    TEMP_MAX                                       = 2
};


// Enum  Engine.ELightUnits
enum class ELightUnits : uint8_t
{
    Unitless                                       = 0,
    Candelas                                       = 1,
    Lumens                                         = 2,
    ELightUnits_MAX                                = 3
};


// Enum  Engine.EReflectionsType
enum class EReflectionsType : uint8_t
{
    ScreenSpace                                    = 0,
    RayTracing                                     = 1,
    EReflectionsType_MAX                           = 2
};


// Enum  Engine.ELumenRayLightingModeOverride
enum class ELumenRayLightingModeOverride : uint8_t
{
    Default                                        = 0,
    SurfaceCache                                   = 1,
    HitLighting                                    = 2,
    ELumenRayLightingModeOverride_MAX              = 3
};


// Enum  Engine.ETranslucencyType
enum class ETranslucencyType : uint8_t
{
    Raster                                         = 0,
    RayTracing                                     = 1,
    ETranslucencyType_MAX                          = 2
};


// Enum  Engine.ERayTracingGlobalIlluminationType
enum class ERayTracingGlobalIlluminationType : uint8_t
{
    Disabled                                       = 0,
    BruteForce                                     = 1,
    FinalGather                                    = 2,
    ERayTracingGlobalIlluminationType_MAX          = 3
};


// Enum  Engine.EReflectedAndRefractedRayTracedShadows
enum class EReflectedAndRefractedRayTracedShadows : uint8_t
{
    Disabled                                       = 0,
    Hard_shadows                                   = 1,
    Area_shadows                                   = 2,
    EReflectedAndRefractedRayTracedShadows_MAX     = 3
};


// Enum  Engine.EMobilePlanarReflectionMode
enum class EMobilePlanarReflectionMode : uint8_t
{
    Usual                                          = 0,
    MobilePPRExclusive                             = 1,
    MobilePPR                                      = 2,
    EMobilePlanarReflectionMode_MAX                = 3
};


// Enum  Engine.EMobilePixelProjectedReflectionQuality
enum class EMobilePixelProjectedReflectionQuality : uint8_t
{
    Disabled                                       = 0,
    BestPerformance                                = 1,
    BetterQuality                                  = 2,
    BestQuality                                    = 3,
    EMobilePixelProjectedReflectionQuality_MAX     = 4
};


// Enum  Engine.ESceneCapturePrimitiveRenderMode
enum class ESceneCapturePrimitiveRenderMode : uint8_t
{
    PRM_LegacySceneCapture                         = 0,
    PRM_RenderScenePrimitives                      = 1,
    PRM_UseShowOnlyList                            = 2,
    PRM_MAX                                        = 3
};


// Enum  Engine.EMaterialProperty
enum class EMaterialProperty : uint8_t
{
    MP_EmissiveColor                               = 0,
    MP_Opacity                                     = 1,
    MP_OpacityMask                                 = 2,
    MP_DiffuseColor                                = 3,
    MP_SpecularColor                               = 4,
    MP_BaseColor                                   = 5,
    MP_Metallic                                    = 6,
    MP_Specular                                    = 7,
    MP_Roughness                                   = 8,
    MP_Anisotropy                                  = 9,
    MP_Normal                                      = 10,
    MP_Tangent                                     = 11,
    MP_WorldPositionOffset                         = 12,
    MP_WorldDisplacement_DEPRECATED                = 13,
    MP_TessellationMultiplier_DEPRECATED           = 14,
    MP_SubsurfaceColor                             = 15,
    MP_CustomData0                                 = 16,
    MP_CustomData1                                 = 17,
    MP_AmbientOcclusion                            = 18,
    MP_Refraction                                  = 19,
    MP_CustomizedUVs0                              = 20,
    MP_CustomizedUVs1                              = 21,
    MP_CustomizedUVs2                              = 22,
    MP_CustomizedUVs3                              = 23,
    MP_CustomizedUVs4                              = 24,
    MP_CustomizedUVs5                              = 25,
    MP_CustomizedUVs6                              = 26,
    MP_CustomizedUVs7                              = 27,
    MP_PixelDepthOffset                            = 28,
    MP_ShadingModel                                = 29,
    MP_FrontMaterial                               = 30,
    MP_MaterialAttributes                          = 31,
    MP_CustomOutput                                = 32,
    MP_MAX                                         = 33
};


// Enum  Engine.EAntiAliasingMethod
enum class EAntiAliasingMethod : uint8_t
{
    AAM_None                                       = 0,
    AAM_FXAA                                       = 1,
    AAM_TemporalAA                                 = 2,
    AAM_MSAA                                       = 3,
    AAM_TSR                                        = 4,
    AAM_MAX                                        = 5
};


// Enum  Engine.ESkeletalMeshAsyncProperties
enum class ESkeletalMeshAsyncProperties : uint32_t
{
    None                                           = 0,
    Materials                                      = 1,
    Skeleton                                       = 2,
    RefSkeleton                                    = 4,
    RetargetBasePose                               = 8,
    RefBasesInvMatrix                              = 16,
    MeshClothingAssets                             = 32,
    UseLegacyMeshDerivedDataKey                    = 64,
    HasActiveClothingAssets                        = 128,
    LODSettings                                    = 256,
    HasVertexColors                                = 512,
    VertexColorGuid                                = 1024,
    MorphTargets                                   = 2048,
    SkeletalMeshRenderData                         = 4096,
    MeshEditorDataObject                           = 8192,
    NeverStream                                    = 16384,
    OverrideLODStreamingSettings                   = 32768,
    SupportLODStreaming                            = 65536,
    MaxNumStreamedLODs                             = 131072,
    MaxNumOptionalLODs                             = 262144,
    ImportedModel                                  = 524288,
    LODInfo                                        = 1048576,
    SkinWeightProfiles                             = 2097152,
    CachedComposedRefPoseMatrices                  = 4194304,
    SamplingInfo                                   = 8388608,
    NodeMappingData                                = 16777216,
    ShadowPhysicsAsset                             = 33554432,
    SkelMirrorTable                                = 67108864,
    MinLod                                         = 134217728,
    DisableBelowMinLodStripping                    = 268435456,
    SkelMirrorAxis                                 = 536870912,
    SkelMirrorFlipAxis                             = 1073741824,
    DefaultAnimationRig                            = 2147483648,
    NegativeBoundsExtension                        = 0,
    PositiveBoundsExtension                        = 0,
    ExtendedBounds                                 = 0,
    HasBeenSimplified                              = 0,
    EnablePerPolyCollision                         = 0,
    BodySetup                                      = 0,
    MorphTargetIndexMap                            = 0,
    FloorOffset                                    = 0,
    ImportedBounds                                 = 0,
    PhysicsAsset                                   = 0,
    AssetImportData                                = 0,
    ThumbnailInfo                                  = 0,
    HasCustomDefaultEditorCamera                   = 0,
    DefaultEditorCameraLocation                    = 0,
    DefaultEditorCameraRotation                    = 0,
    RequiresLODScreenSizeConversion                = 0,
    PostProcessAnimBlueprint                       = 0,
    DefaultEditorCameraLookAt                      = 0,
    PreviewAttachedAssetContainer                  = 0,
    DefaultEditorCameraOrthoZoom                   = 0,
    RequiresLODHysteresisConversion                = 0,
    bSupportRayTracing                             = 0,
    RayTracingMinLOD                               = 0,
    ClothLODBiasMode                               = 0,
    All                                            = 4294967295,
    ESkeletalMeshAsyncProperties_MAX               = 1
};


// Enum  Engine.ESkinCacheUsage
enum class ESkinCacheUsage : uint8_t
{
    Auto                                           = 0,
    Disabled                                       = 255,
    Enabled                                        = 1,
    ESkinCacheUsage_MAX                            = 256
};


// Enum  Engine.ESkinCacheDefaultBehavior
enum class ESkinCacheDefaultBehavior : uint8_t
{
    Exclusive                                      = 0,
    Inclusive                                      = 1,
    ESkinCacheDefaultBehavior_MAX                  = 2
};


// Enum  Engine.EClothLODBiasMode
enum class EClothLODBiasMode : uint8_t
{
    MappingsToSameLOD                              = 0,
    MappingsToMinLOD                               = 1,
    MappingsToAnyLOD                               = 2,
    EClothLODBiasMode_MAX                          = 3
};


// Enum  Engine.EAnimCurveType
enum class EAnimCurveType : uint8_t
{
    AttributeCurve                                 = 0,
    MaterialCurve                                  = 1,
    MorphTargetCurve                               = 2,
    MaxAnimCurveType                               = 3,
    EAnimCurveType_MAX                             = 4
};


// Enum  Engine.ECustomBoneAttributeLookup
enum class ECustomBoneAttributeLookup : uint8_t
{
    BoneOnly                                       = 0,
    ImmediateParent                                = 1,
    ParentHierarchy                                = 2,
    ECustomBoneAttributeLookup_MAX                 = 3
};


// Enum  Engine.EKinematicBonesUpdateToPhysics
enum class EKinematicBonesUpdateToPhysics : uint8_t
{
    SkipSimulatingBones                            = 0,
    SkipAllBones                                   = 1,
    EKinematicBonesUpdateToPhysics_MAX             = 2
};


// Enum  Engine.EAnimationMode
enum class EAnimationMode : uint8_t
{
    AnimationBlueprint                             = 0,
    AnimationSingleNode                            = 1,
    AnimationCustomMode                            = 2,
    EAnimationMode_MAX                             = 3
};


// Enum  Engine.EPhysicsTransformUpdateMode
enum class EPhysicsTransformUpdateMode : uint8_t
{
    SimulationUpatesComponentTransform             = 0,
    ComponentTransformIsKinematic                  = 1,
    EPhysicsTransformUpdateMode_MAX                = 2
};


// Enum  Engine.ESkeletalMeshGeoImportVersions
enum class ESkeletalMeshGeoImportVersions : uint8_t
{
    Before_Versionning                             = 0,
    SkeletalMeshBuildRefactor                      = 1,
    VersionPlusOne                                 = 2,
    LatestVersion                                  = 1,
    ESkeletalMeshGeoImportVersions_MAX             = 3
};


// Enum  Engine.ESkeletalMeshSkinningImportVersions
enum class ESkeletalMeshSkinningImportVersions : uint8_t
{
    Before_Versionning                             = 0,
    SkeletalMeshBuildRefactor                      = 1,
    VersionPlusOne                                 = 2,
    LatestVersion                                  = 1,
    ESkeletalMeshSkinningImportVersions_MAX        = 3
};


// Enum  Engine.EBoneFilterActionOption
enum class EBoneFilterActionOption : uint8_t
{
    Remove                                         = 0,
    Keep                                           = 1,
    Invalid                                        = 2,
    EBoneFilterActionOption_MAX                    = 3
};


// Enum  Engine.SkeletalMeshTerminationCriterion
enum class SkeletalMeshTerminationCriterion : uint8_t
{
    SMTC_NumOfTriangles                            = 0,
    SMTC_NumOfVerts                                = 1,
    SMTC_TriangleOrVert                            = 2,
    SMTC_AbsNumOfTriangles                         = 3,
    SMTC_AbsNumOfVerts                             = 4,
    SMTC_AbsTriangleOrVert                         = 5,
    SMTC_MAX                                       = 6
};


// Enum  Engine.SkeletalMeshOptimizationType
enum class SkeletalMeshOptimizationType : uint8_t
{
    SMOT_NumOfTriangles                            = 0,
    SMOT_MaxDeviation                              = 1,
    SMOT_TriangleOrDeviation                       = 2,
    SMOT_MAX                                       = 3
};


// Enum  Engine.SkeletalMeshOptimizationImportance
enum class SkeletalMeshOptimizationImportance : uint8_t
{
    SMOI_Off                                       = 0,
    SMOI_Lowest                                    = 1,
    SMOI_Low                                       = 2,
    SMOI_Normal                                    = 3,
    SMOI_High                                      = 4,
    SMOI_Highest                                   = 5,
    SMOI_MAX                                       = 6
};


// Enum  Engine.EBoneTranslationRetargetingMode
enum class EBoneTranslationRetargetingMode : uint8_t
{
    Animation                                      = 0,
    Skeleton                                       = 1,
    AnimationScaled                                = 2,
    AnimationRelative                              = 3,
    OrientAndScale                                 = 4,
    EBoneTranslationRetargetingMode_MAX            = 5
};


// Enum  Engine.EBoneVisibilityStatus
enum class EBoneVisibilityStatus : uint8_t
{
    BVS_HiddenByParent                             = 0,
    BVS_Visible                                    = 1,
    BVS_ExplicitlyHidden                           = 2,
    BVS_MAX                                        = 3
};


// Enum  Engine.EPhysBodyOp
enum class EPhysBodyOp : uint8_t
{
    PBO_None                                       = 0,
    PBO_Term                                       = 1,
    PBO_MAX                                        = 2
};


// Enum  Engine.EVisibilityBasedAnimTickOption
enum class EVisibilityBasedAnimTickOption : uint8_t
{
    AlwaysTickPoseAndRefreshBones                  = 0,
    AlwaysTickPose                                 = 1,
    OnlyTickMontagesWhenNotRendered                = 2,
    OnlyTickPoseWhenRendered                       = 3,
    EVisibilityBasedAnimTickOption_MAX             = 4
};


// Enum  Engine.EBoneSpaces
enum class EBoneSpaces : uint8_t
{
    WorldSpace                                     = 0,
    ComponentSpace                                 = 1,
    EBoneSpaces_MAX                                = 2
};


// Enum  Engine.ESkyAtmosphereTransformMode
enum class ESkyAtmosphereTransformMode : uint8_t
{
    PlanetTopAtAbsoluteWorldOrigin                 = 0,
    PlanetTopAtComponentTransform                  = 1,
    PlanetCenterAtComponentTransform               = 2,
    ESkyAtmosphereTransformMode_MAX                = 3
};


// Enum  Engine.ESkyLightSourceType
enum class ESkyLightSourceType : uint8_t
{
    SLS_CapturedScene                              = 0,
    SLS_SpecifiedCubemap                           = 1,
    SLS_MAX                                        = 2
};


// Enum  Engine.ESoundDistanceCalc
enum class ESoundDistanceCalc : uint8_t
{
    SOUNDDISTANCE_Normal                           = 0,
    SOUNDDISTANCE_InfiniteXYPlane                  = 1,
    SOUNDDISTANCE_InfiniteXZPlane                  = 2,
    SOUNDDISTANCE_InfiniteYZPlane                  = 3,
    SOUNDDISTANCE_MAX                              = 4
};


// Enum  Engine.ESoundSpatializationAlgorithm
enum class ESoundSpatializationAlgorithm : uint8_t
{
    SPATIALIZATION_Default                         = 0,
    SPATIALIZATION_HRTF                            = 1,
    SPATIALIZATION_MAX                             = 2
};


// Enum  Engine.EAirAbsorptionMethod
enum class EAirAbsorptionMethod : uint8_t
{
    Linear                                         = 0,
    CustomCurve                                    = 1,
    EAirAbsorptionMethod_MAX                       = 2
};


// Enum  Engine.EReverbSendMethod
enum class EReverbSendMethod : uint8_t
{
    Linear                                         = 0,
    CustomCurve                                    = 1,
    Manual                                         = 2,
    EReverbSendMethod_MAX                          = 3
};


// Enum  Engine.ESubmixSendMethod
enum class ESubmixSendMethod : uint8_t
{
    Linear                                         = 0,
    CustomCurve                                    = 1,
    Manual                                         = 2,
    ESubmixSendMethod_MAX                          = 3
};


// Enum  Engine.EPriorityAttenuationMethod
enum class EPriorityAttenuationMethod : uint8_t
{
    Linear                                         = 0,
    CustomCurve                                    = 1,
    Manual                                         = 2,
    EPriorityAttenuationMethod_MAX                 = 3
};


// Enum  Engine.EVirtualizationMode
enum class EVirtualizationMode : uint8_t
{
    Disabled                                       = 0,
    PlayWhenSilent                                 = 1,
    Restart                                        = 2,
    EVirtualizationMode_MAX                        = 3
};


// Enum  Engine.EMaxConcurrentResolutionRule
enum class EMaxConcurrentResolutionRule : uint8_t
{
    PreventNew                                     = 0,
    StopOldest                                     = 1,
    StopFarthestThenPreventNew                     = 2,
    StopFarthestThenOldest                         = 3,
    StopLowestPriority                             = 4,
    StopQuietest                                   = 5,
    StopLowestPriorityThenPreventNew               = 6,
    Count                                          = 7,
    EMaxConcurrentResolutionRule_MAX               = 8
};


// Enum  Engine.EConcurrencyVolumeScaleMode
enum class EConcurrencyVolumeScaleMode : uint8_t
{
    Default                                        = 0,
    Distance                                       = 1,
    Priority                                       = 2,
    EConcurrencyVolumeScaleMode_MAX                = 3
};


// Enum  Engine.ESoundGroup
enum class ESoundGroup : uint8_t
{
    SOUNDGROUP_Default                             = 0,
    SOUNDGROUP_Effects                             = 1,
    SOUNDGROUP_UI                                  = 2,
    SOUNDGROUP_Music                               = 3,
    SOUNDGROUP_Voice                               = 4,
    SOUNDGROUP_GameSoundGroup1                     = 5,
    SOUNDGROUP_GameSoundGroup2                     = 6,
    SOUNDGROUP_GameSoundGroup3                     = 7,
    SOUNDGROUP_GameSoundGroup4                     = 8,
    SOUNDGROUP_GameSoundGroup5                     = 9,
    SOUNDGROUP_GameSoundGroup6                     = 10,
    SOUNDGROUP_GameSoundGroup7                     = 11,
    SOUNDGROUP_GameSoundGroup8                     = 12,
    SOUNDGROUP_GameSoundGroup9                     = 13,
    SOUNDGROUP_GameSoundGroup10                    = 14,
    SOUNDGROUP_GameSoundGroup11                    = 15,
    SOUNDGROUP_GameSoundGroup12                    = 16,
    SOUNDGROUP_GameSoundGroup13                    = 17,
    SOUNDGROUP_GameSoundGroup14                    = 18,
    SOUNDGROUP_GameSoundGroup15                    = 19,
    SOUNDGROUP_GameSoundGroup16                    = 20,
    SOUNDGROUP_GameSoundGroup17                    = 21,
    SOUNDGROUP_GameSoundGroup18                    = 22,
    SOUNDGROUP_GameSoundGroup19                    = 23,
    SOUNDGROUP_GameSoundGroup20                    = 24,
    SOUNDGROUP_MAX                                 = 25
};


// Enum  Engine.EModulationRouting
enum class EModulationRouting : uint8_t
{
    Disable                                        = 0,
    Inherit                                        = 1,
    Override                                       = 2,
    EModulationRouting_MAX                         = 3
};


// Enum  Engine.ModulationParamMode
enum class ModulationParamMode : uint8_t
{
    MPM_Normal                                     = 0,
    MPM_Abs                                        = 1,
    MPM_Direct                                     = 2,
    MPM_MAX                                        = 3
};


// Enum  Engine.ESourceBusChannels
enum class ESourceBusChannels : uint8_t
{
    Mono                                           = 0,
    Stereo                                         = 1,
    ESourceBusChannels_MAX                         = 2
};


// Enum  Engine.ESourceBusSendLevelControlMethod
enum class ESourceBusSendLevelControlMethod : uint8_t
{
    Linear                                         = 0,
    CustomCurve                                    = 1,
    Manual                                         = 2,
    ESourceBusSendLevelControlMethod_MAX           = 3
};


// Enum  Engine.EFFTSize
enum class EFFTSize : uint8_t
{
    DefaultSize                                    = 0,
    Min                                            = 1,
    Small                                          = 2,
    Medium                                         = 3,
    Large                                          = 4,
    VeryLarge                                      = 5,
    Max                                            = 6
};


// Enum  Engine.EFFTPeakInterpolationMethod
enum class EFFTPeakInterpolationMethod : uint8_t
{
    NearestNeighbor                                = 0,
    Linear                                         = 1,
    Quadratic                                      = 2,
    ConstantQ                                      = 3,
    EFFTPeakInterpolationMethod_MAX                = 4
};


// Enum  Engine.EFFTWindowType
enum class EFFTWindowType : uint8_t
{
    None                                           = 0,
    Hamming                                        = 1,
    Hann                                           = 2,
    Blackman                                       = 3,
    EFFTWindowType_MAX                             = 4
};


// Enum  Engine.EAudioSpectrumType
enum class EAudioSpectrumType : uint8_t
{
    MagnitudeSpectrum                              = 0,
    PowerSpectrum                                  = 1,
    Decibel                                        = 2,
    EAudioSpectrumType_MAX                         = 3
};


// Enum  Engine.EGainParamMode
enum class EGainParamMode : uint8_t
{
    Linear                                         = 0,
    Decibels                                       = 1,
    EGainParamMode_MAX                             = 2
};


// Enum  Engine.EAudioSpectrumBandPresetType
enum class EAudioSpectrumBandPresetType : uint8_t
{
    KickDrum                                       = 0,
    SnareDrum                                      = 1,
    Voice                                          = 2,
    Cymbals                                        = 3,
    EAudioSpectrumBandPresetType_MAX               = 4
};


// Enum  Engine.EAudioRecordingExportType
enum class EAudioRecordingExportType : uint8_t
{
    SoundWave                                      = 0,
    WavFile                                        = 1,
    EAudioRecordingExportType_MAX                  = 2
};


// Enum  Engine.ESendLevelControlMethod
enum class ESendLevelControlMethod : uint8_t
{
    Linear                                         = 0,
    CustomCurve                                    = 1,
    Manual                                         = 2,
    ESendLevelControlMethod_MAX                    = 3
};


// Enum  Engine.ESubmixSendStage
enum class ESubmixSendStage : uint8_t
{
    PostDistanceAttenuation                        = 0,
    PreDistanceAttenuation                         = 1,
    ESubmixSendStage_MAX                           = 2
};


// Enum  Engine.EDecompressionType
enum class EDecompressionType : uint8_t
{
    DTYPE_Setup                                    = 0,
    DTYPE_Invalid                                  = 1,
    DTYPE_Preview                                  = 2,
    DTYPE_Native                                   = 3,
    DTYPE_RealTime                                 = 4,
    DTYPE_Procedural                               = 5,
    DTYPE_Xenon                                    = 6,
    DTYPE_Streaming                                = 7,
    DTYPE_MAX                                      = 8
};


// Enum  Engine.ESoundWaveFFTSize
enum class ESoundWaveFFTSize : uint8_t
{
    VerySmall                                      = 0,
    Small                                          = 1,
    Medium                                         = 2,
    Large                                          = 3,
    VeryLarge                                      = 4,
    ESoundWaveFFTSize_MAX                          = 5
};


// Enum  Engine.ESoundAssetCompressionType
enum class ESoundAssetCompressionType : uint8_t
{
    BinkAudio                                      = 0,
    ADPCM                                          = 1,
    PCM                                            = 2,
    PlatformSpecific                               = 3,
    ESoundAssetCompressionType_MAX                 = 4
};


// Enum  Engine.ESoundWaveLoadingBehavior
enum class ESoundWaveLoadingBehavior : uint8_t
{
    Inherited                                      = 0,
    RetainOnLoad                                   = 1,
    PrimeOnLoad                                    = 2,
    LoadOnDemand                                   = 3,
    ForceInline                                    = 4,
    Uninitialized                                  = 255,
    ESoundWaveLoadingBehavior_MAX                  = 256
};


// Enum  Engine.ESplinePointType
enum class ESplinePointType : uint8_t
{
    Linear                                         = 0,
    Curve                                          = 1,
    Constant                                       = 2,
    CurveClamped                                   = 3,
    CurveCustomTangent                             = 4,
    ESplinePointType_MAX                           = 5
};


// Enum  Engine.ESplineCoordinateSpace
enum class ESplineCoordinateSpace : uint8_t
{
    Local                                          = 0,
    World                                          = 1,
    ESplineCoordinateSpace_MAX                     = 2
};


// Enum  Engine.ESplineMeshAxis
enum class ESplineMeshAxis : uint8_t
{
    X                                              = 0,
    Y                                              = 1,
    Z                                              = 2,
    ESplineMeshAxis_MAX                            = 3
};


// Enum  Engine.ENormalMode
enum class ENormalMode : uint8_t
{
    NM_PreserveSmoothingGroups                     = 0,
    NM_RecalculateNormals                          = 1,
    NM_RecalculateNormalsSmooth                    = 2,
    NM_RecalculateNormalsHard                      = 3,
    TEMP_BROKEN                                    = 4,
    ENormalMode_MAX                                = 5
};


// Enum  Engine.EImportanceLevel
enum class EImportanceLevel : uint8_t
{
    IL_Off                                         = 0,
    IL_Lowest                                      = 1,
    IL_Low                                         = 2,
    IL_Normal                                      = 3,
    IL_High                                        = 4,
    IL_Highest                                     = 5,
    TEMP_BROKEN2                                   = 6,
    EImportanceLevel_MAX                           = 7
};


// Enum  Engine.EOptimizationType
enum class EOptimizationType : uint8_t
{
    OT_NumOfTriangles                              = 0,
    OT_MaxDeviation                                = 1,
    OT_MAX                                         = 2
};


// Enum  Engine.EStereoLayerType
enum class EStereoLayerType : uint8_t
{
    SLT_WorldLocked                                = 0,
    SLT_TrackerLocked                              = 1,
    SLT_FaceLocked                                 = 2,
    SLT_MAX                                        = 3
};


// Enum  Engine.EStereoLayerShape
enum class EStereoLayerShape : uint8_t
{
    SLSH_QuadLayer                                 = 0,
    SLSH_CylinderLayer                             = 1,
    SLSH_CubemapLayer                              = 2,
    SLSH_EquirectLayer                             = 3,
    SLSH_MAX                                       = 4
};


// Enum  Engine.EChunkSeekTableMode
enum class EChunkSeekTableMode : uint8_t
{
    ConstantSamplesPerEntry                        = 0,
    VariableSamplesPerEntry                        = 1,
    EChunkSeekTableMode_MAX                        = 2
};


// Enum  Engine.ESubUVBoundingVertexCount
enum class ESubUVBoundingVertexCount : uint8_t
{
    BVC_FourVertices                               = 0,
    BVC_EightVertices                              = 1,
    BVC_MAX                                        = 2
};


// Enum  Engine.EOpacitySourceMode
enum class EOpacitySourceMode : uint8_t
{
    OSM_Alpha                                      = 0,
    OSM_ColorBrightness                            = 1,
    OSM_RedChannel                                 = 2,
    OSM_GreenChannel                               = 3,
    OSM_BlueChannel                                = 4,
    OSM_MAX                                        = 5
};


// Enum  Engine.EHorizTextAligment
enum class EHorizTextAligment : uint8_t
{
    EHTA_Left                                      = 0,
    EHTA_Center                                    = 1,
    EHTA_Right                                     = 2,
    EHTA_MAX                                       = 3
};


// Enum  Engine.EVerticalTextAligment
enum class EVerticalTextAligment : uint8_t
{
    EVRTA_TextTop                                  = 0,
    EVRTA_TextCenter                               = 1,
    EVRTA_TextBottom                               = 2,
    EVRTA_QuadTop                                  = 3,
    EVRTA_MAX                                      = 4
};


// Enum  Engine.TextureFilter
enum class TextureFilter : uint8_t
{
    TF_Nearest                                     = 0,
    TF_Bilinear                                    = 1,
    TF_Trilinear                                   = 2,
    TF_Default                                     = 3,
    TF_MAX                                         = 4
};


// Enum  Engine.TextureAddress
enum class TextureAddress : uint8_t
{
    TA_Wrap                                        = 0,
    TA_Clamp                                       = 1,
    TA_Mirror                                      = 2,
    TA_MAX                                         = 3
};


// Enum  Engine.ETextureMipCount
enum class ETextureMipCount : uint8_t
{
    TMC_ResidentMips                               = 0,
    TMC_AllMips                                    = 1,
    TMC_AllMipsBiased                              = 2,
    TMC_MAX                                        = 3
};


// Enum  Engine.ETextureSourceArtType
enum class ETextureSourceArtType : uint8_t
{
    TSAT_Uncompressed                              = 0,
    TSAT_PNGCompressed                             = 1,
    TSAT_DDSFile                                   = 2,
    TSAT_MAX                                       = 3
};


// Enum  Engine.ETextureCompressionQuality
enum class ETextureCompressionQuality : uint8_t
{
    TCQ_Default                                    = 0,
    TCQ_Lowest                                     = 1,
    TCQ_Low                                        = 2,
    TCQ_Medium                                     = 3,
    TCQ_High                                       = 4,
    TCQ_Highest                                    = 5,
    TCQ_MAX                                        = 6
};


// Enum  Engine.TextureGroup
enum class TextureGroup : uint8_t
{
    TEXTUREGROUP_World                             = 0,
    TEXTUREGROUP_WorldNormalMap                    = 1,
    TEXTUREGROUP_WorldSpecular                     = 2,
    TEXTUREGROUP_Character                         = 3,
    TEXTUREGROUP_CharacterNormalMap                = 4,
    TEXTUREGROUP_CharacterSpecular                 = 5,
    TEXTUREGROUP_Weapon                            = 6,
    TEXTUREGROUP_WeaponNormalMap                   = 7,
    TEXTUREGROUP_WeaponSpecular                    = 8,
    TEXTUREGROUP_Vehicle                           = 9,
    TEXTUREGROUP_VehicleNormalMap                  = 10,
    TEXTUREGROUP_VehicleSpecular                   = 11,
    TEXTUREGROUP_Cinematic                         = 12,
    TEXTUREGROUP_Effects                           = 13,
    TEXTUREGROUP_EffectsNotFiltered                = 14,
    TEXTUREGROUP_Skybox                            = 15,
    TEXTUREGROUP_UI                                = 16,
    TEXTUREGROUP_Lightmap                          = 17,
    TEXTUREGROUP_RenderTarget                      = 18,
    TEXTUREGROUP_MobileFlattened                   = 19,
    TEXTUREGROUP_ProcBuilding_Face                 = 20,
    TEXTUREGROUP_ProcBuilding_LightMap             = 21,
    TEXTUREGROUP_Shadowmap                         = 22,
    TEXTUREGROUP_ColorLookupTable                  = 23,
    TEXTUREGROUP_Terrain_Heightmap                 = 24,
    TEXTUREGROUP_Terrain_Weightmap                 = 25,
    TEXTUREGROUP_Bokeh                             = 26,
    TEXTUREGROUP_IESLightProfile                   = 27,
    TEXTUREGROUP_Pixels2D                          = 28,
    TEXTUREGROUP_HierarchicalLOD                   = 29,
    TEXTUREGROUP_Impostor                          = 30,
    TEXTUREGROUP_ImpostorNormalDepth               = 31,
    TEXTUREGROUP_8BitData                          = 32,
    TEXTUREGROUP_16BitData                         = 33,
    TEXTUREGROUP_Project01                         = 34,
    TEXTUREGROUP_Project02                         = 35,
    TEXTUREGROUP_Project03                         = 36,
    TEXTUREGROUP_Project04                         = 37,
    TEXTUREGROUP_Project05                         = 38,
    TEXTUREGROUP_Project06                         = 39,
    TEXTUREGROUP_Project07                         = 40,
    TEXTUREGROUP_Project08                         = 41,
    TEXTUREGROUP_Project09                         = 42,
    TEXTUREGROUP_Project10                         = 43,
    TEXTUREGROUP_Project11                         = 44,
    TEXTUREGROUP_Project12                         = 45,
    TEXTUREGROUP_Project13                         = 46,
    TEXTUREGROUP_Project14                         = 47,
    TEXTUREGROUP_Project15                         = 48,
    TEXTUREGROUP_Project16                         = 49,
    TEXTUREGROUP_MAX                               = 50
};


// Enum  Engine.TextureMipGenSettings
enum class TextureMipGenSettings : uint8_t
{
    TMGS_FromTextureGroup                          = 0,
    TMGS_SimpleAverage                             = 1,
    TMGS_Sharpen0                                  = 2,
    TMGS_Sharpen1                                  = 3,
    TMGS_Sharpen2                                  = 4,
    TMGS_Sharpen3                                  = 5,
    TMGS_Sharpen4                                  = 6,
    TMGS_Sharpen5                                  = 7,
    TMGS_Sharpen6                                  = 8,
    TMGS_Sharpen7                                  = 9,
    TMGS_Sharpen8                                  = 10,
    TMGS_Sharpen9                                  = 11,
    TMGS_Sharpen10                                 = 12,
    TMGS_NoMipmaps                                 = 13,
    TMGS_LeaveExistingMips                         = 14,
    TMGS_Blur1                                     = 15,
    TMGS_Blur2                                     = 16,
    TMGS_Blur3                                     = 17,
    TMGS_Blur4                                     = 18,
    TMGS_Blur5                                     = 19,
    TMGS_Unfiltered                                = 20,
    TMGS_Angular                                   = 21,
    TMGS_MAX                                       = 22
};


// Enum  Engine.ETexturePowerOfTwoSetting
enum class ETexturePowerOfTwoSetting : uint8_t
{
    None                                           = 0,
    PadToPowerOfTwo                                = 1,
    PadToSquarePowerOfTwo                          = 2,
    ETexturePowerOfTwoSetting_MAX                  = 3
};


// Enum  Engine.ETextureSamplerFilter
enum class ETextureSamplerFilter : uint8_t
{
    Point                                          = 0,
    Bilinear                                       = 1,
    Trilinear                                      = 2,
    AnisotropicPoint                               = 3,
    AnisotropicLinear                              = 4,
    ETextureSamplerFilter_MAX                      = 5
};


// Enum  Engine.ETextureMipLoadOptions
enum class ETextureMipLoadOptions : uint8_t
{
    Default                                        = 0,
    AllMips                                        = 1,
    OnlyFirstMip                                   = 2,
    ETextureMipLoadOptions_MAX                     = 3
};


// Enum  Engine.ETextureDownscaleOptions
enum class ETextureDownscaleOptions : uint8_t
{
    Default                                        = 0,
    Unfiltered                                     = 1,
    SimpleAverage                                  = 2,
    Sharpen0                                       = 3,
    Sharpen1                                       = 4,
    Sharpen2                                       = 5,
    Sharpen3                                       = 6,
    Sharpen4                                       = 7,
    Sharpen5                                       = 8,
    Sharpen6                                       = 9,
    Sharpen7                                       = 10,
    Sharpen8                                       = 11,
    Sharpen9                                       = 12,
    Sharpen10                                      = 13,
    ETextureDownscaleOptions_MAX                   = 14
};


// Enum  Engine.ETextureLossyCompressionAmount
enum class ETextureLossyCompressionAmount : uint8_t
{
    TLCA_Default                                   = 0,
    TLCA_None                                      = 1,
    TLCA_Lowest                                    = 2,
    TLCA_Low                                       = 3,
    TLCA_Medium                                    = 4,
    TLCA_High                                      = 5,
    TLCA_Highest                                   = 6,
    TLCA_MAX                                       = 7
};


// Enum  Engine.ECompositeTextureMode
enum class ECompositeTextureMode : uint8_t
{
    CTM_Disabled                                   = 0,
    CTM_NormalRoughnessToRed                       = 1,
    CTM_NormalRoughnessToGreen                     = 2,
    CTM_NormalRoughnessToBlue                      = 3,
    CTM_NormalRoughnessToAlpha                     = 4,
    CTM_MAX                                        = 5
};


// Enum  Engine.ETextureSourceCompressionFormat
enum class ETextureSourceCompressionFormat : uint8_t
{
    TSCF_None                                      = 0,
    TSCF_PNG                                       = 1,
    TSCF_JPEG                                      = 2,
    TSCF_MAX                                       = 3
};


// Enum  Engine.ETextureSourceFormat
enum class ETextureSourceFormat : uint8_t
{
    TSF_Invalid                                    = 0,
    TSF_G8                                         = 1,
    TSF_BGRA8                                      = 2,
    TSF_BGRE8                                      = 3,
    TSF_RGBA16                                     = 4,
    TSF_RGBA16F                                    = 5,
    TSF_RGBA8                                      = 6,
    TSF_RGBE8                                      = 7,
    TSF_G16                                        = 8,
    TSF_MAX                                        = 9
};


// Enum  Engine.TextureCompressionSettings
enum class TextureCompressionSettings : uint8_t
{
    TC_Default                                     = 0,
    TC_Normalmap                                   = 1,
    TC_Masks                                       = 2,
    TC_Grayscale                                   = 3,
    TC_Displacementmap                             = 4,
    TC_VectorDisplacementmap                       = 5,
    TC_HDR                                         = 6,
    TC_EditorIcon                                  = 7,
    TC_Alpha                                       = 8,
    TC_DistanceFieldFont                           = 9,
    TC_HDR_Compressed                              = 10,
    TC_BC7                                         = 11,
    TC_HalfFloat                                   = 12,
    TC_LQ                                          = 13,
    TC_EncodedReflectionCapture                    = 14,
    TC_MAX                                         = 15
};


// Enum  Engine.ETextureSourceEncoding
enum class ETextureSourceEncoding : uint8_t
{
    TSE_None                                       = 0,
    TSE_Linear                                     = 1,
    TSE_sRGB                                       = 2,
    TSE_ST2084                                     = 3,
    TSE_Gamma22                                    = 4,
    TSE_BT1886                                     = 5,
    TSE_Gamma26                                    = 6,
    TSE_Cineon                                     = 7,
    TSE_REDLog                                     = 8,
    TSE_REDLog3G10                                 = 9,
    TSE_SLog1                                      = 10,
    TSE_SLog2                                      = 11,
    TSE_SLog3                                      = 12,
    TSE_AlexaV3LogC                                = 13,
    TSE_CanonLog                                   = 14,
    TSE_ProTune                                    = 15,
    TSE_VLog                                       = 16,
    TSE_MAX                                        = 17
};


// Enum  Engine.ETextureColorSpace
enum class ETextureColorSpace : uint8_t
{
    TCS_None                                       = 0,
    TCS_sRGB                                       = 1,
    TCS_Rec2020                                    = 2,
    TCS_ACESAP0                                    = 3,
    TCS_ACESAP1                                    = 4,
    TCS_P3DCI                                      = 5,
    TCS_P3D65                                      = 6,
    TCS_REDWideGamut                               = 7,
    TCS_SonySGamut3                                = 8,
    TCS_SonySGamut3Cine                            = 9,
    TCS_AlexaWideGamut                             = 10,
    TCS_CanonCinemaGamut                           = 11,
    TCS_GoProProtuneNative                         = 12,
    TCS_PanasonicVGamut                            = 13,
    TCS_Custom                                     = 99,
    TCS_MAX                                        = 100
};


// Enum  Engine.ETextureChromaticAdaptationMethod
enum class ETextureChromaticAdaptationMethod : uint8_t
{
    TCAM_None                                      = 0,
    TCAM_Bradford                                  = 1,
    TCAM_CAT02                                     = 2,
    TCAM_MAX                                       = 3
};


// Enum  Engine.ETextureEncodeEffort
enum class ETextureEncodeEffort : uint8_t
{
    Default                                        = 0,
    Low                                            = 10,
    Normal                                         = 20,
    High                                           = 30,
    ETextureEncodeEffort_MAX                       = 31
};


// Enum  Engine.ETextureUniversalTiling
enum class ETextureUniversalTiling : uint8_t
{
    Disabled                                       = 0,
    Enabled_256KB                                  = 1,
    Enabled_64KB                                   = 2,
    ETextureUniversalTiling_MAX                    = 3
};


// Enum  Engine.ETextureEncodeSpeed
enum class ETextureEncodeSpeed : uint8_t
{
    Final                                          = 0,
    FinalIfAvailable                               = 1,
    Fast                                           = 2,
    ETextureEncodeSpeed_MAX                        = 3
};


// Enum  Engine.ETextureEncodeSpeedOverride
enum class ETextureEncodeSpeedOverride : uint8_t
{
    Disabled                                       = 255,
    Final                                          = 0,
    FinalIfAvailable                               = 1,
    Fast                                           = 2,
    ETextureEncodeSpeedOverride_MAX                = 256
};


// Enum  Engine.ETextureRenderTargetFormat
enum class ETextureRenderTargetFormat : uint8_t
{
    RTF_R8                                         = 0,
    RTF_RG8                                        = 1,
    RTF_RGBA8                                      = 2,
    RTF_RGBA8_SRGB                                 = 3,
    RTF_R16f                                       = 4,
    RTF_RG16f                                      = 5,
    RTF_RGBA16f                                    = 6,
    RTF_R32f                                       = 7,
    RTF_RG32f                                      = 8,
    RTF_RGBA32f                                    = 9,
    RTF_RGB10A2                                    = 10,
    RTF_MAX                                        = 11
};


// Enum  Engine.ETimecodeProviderSynchronizationState
enum class ETimecodeProviderSynchronizationState : uint8_t
{
    Closed                                         = 0,
    Error                                          = 1,
    Synchronized                                   = 2,
    Synchronizing                                  = 3,
    ETimecodeProviderSynchronizationState_MAX      = 4
};


// Enum  Engine.ETimelineLengthMode
enum class ETimelineLengthMode : uint8_t
{
    TL_TimelineLength                              = 0,
    TL_LastKeyFrame                                = 1,
    TL_MAX                                         = 2
};


// Enum  Engine.ETimelineDirection
enum class ETimelineDirection : uint8_t
{
    Forward                                        = 0,
    Backward                                       = 1,
    ETimelineDirection_MAX                         = 2
};


// Enum  Engine.ETimeStretchCurveMapping
enum class ETimeStretchCurveMapping : uint8_t
{
    T_Original                                     = 0,
    T_TargetMin                                    = 1,
    T_TargetMax                                    = 2,
    MAX                                            = 3
};


// Enum  Engine.ETwitterRequestMethod
enum class ETwitterRequestMethod : uint8_t
{
    TRM_Get                                        = 0,
    TRM_Post                                       = 1,
    TRM_Delete                                     = 2,
    TRM_MAX                                        = 3
};


// Enum  Engine.ETwitterIntegrationDelegate
enum class ETwitterIntegrationDelegate : uint8_t
{
    TID_AuthorizeComplete                          = 0,
    TID_TweetUIComplete                            = 1,
    TID_RequestComplete                            = 2,
    TID_MAX                                        = 3
};


// Enum  Engine.ETypedElementWorldType
enum class ETypedElementWorldType : uint8_t
{
    Game                                           = 0,
    Editor                                         = 1,
    ETypedElementWorldType_MAX                     = 2
};


// Enum  Engine.EUserDefinedStructureStatus
enum class EUserDefinedStructureStatus : uint8_t
{
    UDSS_UpToDate                                  = 0,
    UDSS_Dirty                                     = 1,
    UDSS_Error                                     = 2,
    UDSS_Duplicate                                 = 3,
    UDSS_MAX                                       = 4
};


// Enum  Engine.ERenderFocusRule
enum class ERenderFocusRule : uint8_t
{
    Always                                         = 0,
    NonPointer                                     = 1,
    NavigationOnly                                 = 2,
    Never                                          = 3,
    ERenderFocusRule_MAX                           = 4
};


// Enum  Engine.EUIScalingRule
enum class EUIScalingRule : uint8_t
{
    ShortestSide                                   = 0,
    LongestSide                                    = 1,
    Horizontal                                     = 2,
    Vertical                                       = 3,
    ScaleToFit                                     = 4,
    Custom                                         = 5,
    EUIScalingRule_MAX                             = 6
};


// Enum  Engine.EVectorFieldConstructionOp
enum class EVectorFieldConstructionOp : uint8_t
{
    VFCO_Extrude                                   = 0,
    VFCO_Revolve                                   = 1,
    VFCO_MAX                                       = 2
};


// Enum  Engine.EWindSourceType
enum class EWindSourceType : uint8_t
{
    Directional                                    = 0,
    Point                                          = 1,
    EWindSourceType_MAX                            = 2
};


// Enum  Engine.EWorldPartitionRuntimeCellState
enum class EWorldPartitionRuntimeCellState : uint8_t
{
    Unloaded                                       = 0,
    Loaded                                         = 1,
    Activated                                      = 2,
    EWorldPartitionRuntimeCellState_MAX            = 3
};


// Enum  Engine.EWorldPartitionStreamingPerformance
enum class EWorldPartitionStreamingPerformance : uint8_t
{
    Good                                           = 0,
    Slow                                           = 1,
    Critical                                       = 2,
    EWorldPartitionStreamingPerformance_MAX        = 3
};


// Enum  Engine.EStreamingSourceTargetState
enum class EStreamingSourceTargetState : uint8_t
{
    Loaded                                         = 0,
    Activated                                      = 1,
    EStreamingSourceTargetState_MAX                = 2
};


// Enum  Engine.EStreamingSourcePriority
enum class EStreamingSourcePriority : uint8_t
{
    Highest                                        = 0,
    High                                           = 64,
    Normal                                         = 128,
    Low                                            = 192,
    Lowest                                         = 255,
    Default                                        = 128,
    EStreamingSourcePriority_MAX                   = 256
};


// Enum  Engine.EPSCPoolMethod
enum class EPSCPoolMethod : uint8_t
{
    None                                           = 0,
    AutoRelease                                    = 1,
    ManualRelease                                  = 2,
    ManualRelease_OnComplete                       = 3,
    FreeInPool                                     = 4,
    EPSCPoolMethod_MAX                             = 5
};


// Enum  Engine.EVisibilityAggressiveness
enum class EVisibilityAggressiveness : uint8_t
{
    VIS_LeastAggressive                            = 0,
    VIS_ModeratelyAggressive                       = 1,
    VIS_MostAggressive                             = 2,
    VIS_Max                                        = 3
};


// Enum  Engine.EVolumeLightingMethod
enum class EVolumeLightingMethod : uint8_t
{
    VLM_VolumetricLightmap                         = 0,
    VLM_SparseVolumeLightingSamples                = 1,
    VLM_MAX                                        = 2
};


// Enum  ClothingSystemRuntimeCommon.EClothMassMode
enum class EClothMassMode : uint8_t
{
    UniformMass                                    = 0,
    TotalMass                                      = 1,
    Density                                        = 2,
    MaxClothMassMode                               = 3,
    EClothMassMode_MAX                             = 4
};


// Enum  ClothingSystemRuntimeCommon.EClothingWindMethod_Legacy
enum class EClothingWindMethod_Legacy : uint8_t
{
    Legacy                                         = 0,
    Accurate                                       = 1,
    EClothingWindMethod_MAX                        = 2
};


// Enum  ClothingSystemRuntimeCommon.EWeightMapTargetCommon
enum class EWeightMapTargetCommon : uint8_t
{
    None                                           = 0,
    MaxDistance                                    = 1,
    BackstopDistance                               = 2,
    BackstopRadius                                 = 3,
    AnimDriveStiffness                             = 4,
    AnimDriveDamping_DEPRECATED                    = 5,
    EWeightMapTargetCommon_MAX                     = 6
};


// Enum  ClothingSystemRuntimeNv.EClothingWindMethodNv
enum class EClothingWindMethodNv : uint8_t
{
    Legacy                                         = 0,
    Accurate                                       = 1,
    EClothingWindMethodNv_MAX                      = 2
};


// Enum  GameplayTasks.EGameplayTaskState
enum class EGameplayTaskState : uint8_t
{
    Uninitialized                                  = 0,
    AwaitingActivation                             = 1,
    Paused                                         = 2,
    Active                                         = 3,
    Finished                                       = 4,
    EGameplayTaskState_MAX                         = 5
};


// Enum  NavigationSystem.ERuntimeGenerationType
enum class ERuntimeGenerationType : uint8_t
{
    Static                                         = 0,
    DynamicModifiersOnly                           = 1,
    Dynamic                                        = 2,
    LegacyGeneration                               = 3,
    ERuntimeGenerationType_MAX                     = 4
};


// Enum  NavigationSystem.ENavCostDisplay
enum class ENavCostDisplay : uint8_t
{
    TotalCost                                      = 0,
    HeuristicOnly                                  = 1,
    RealCostOnly                                   = 2,
    ENavCostDisplay_MAX                            = 3
};


// Enum  NavigationSystem.ENavSystemOverridePolicy
enum class ENavSystemOverridePolicy : uint8_t
{
    Override                                       = 0,
    Append                                         = 1,
    Skip                                           = 2,
    ENavSystemOverridePolicy_MAX                   = 3
};


// Enum  NavigationSystem.ERecastPartitioning
enum class ERecastPartitioning : uint8_t
{
    Monotone                                       = 0,
    Watershed                                      = 1,
    ChunkyMonotone                                 = 2,
    ERecastPartitioning_MAX                        = 3
};


// Enum  AIModule.EAISenseNotifyType
enum class EAISenseNotifyType : uint8_t
{
    OnEveryPerception                              = 0,
    OnPerceptionChange                             = 1,
    EAISenseNotifyType_MAX                         = 2
};


// Enum  AIModule.EAITaskPriority
enum class EAITaskPriority : uint8_t
{
    Lowest                                         = 0,
    Low                                            = 64,
    AutonomousAI                                   = 127,
    High                                           = 192,
    Ultimate                                       = 254,
    EAITaskPriority_MAX                            = 255
};


// Enum  AIModule.EAIOptionFlag
enum class EAIOptionFlag : uint8_t
{
    Default                                        = 0,
    Enable                                         = 1,
    Disable                                        = 2,
    MAX                                            = 3
};


// Enum  AIModule.FAIDistanceType
enum class FAIDistanceType : uint8_t
{
    Distance3D                                     = 0,
    Distance2D                                     = 1,
    DistanceZ                                      = 2,
    MAX                                            = 3
};


// Enum  AIModule.EPawnActionAbortState
enum class EPawnActionAbortState : uint8_t
{
    NeverStarted                                   = 0,
    NotBeingAborted                                = 1,
    MarkPendingAbort                               = 2,
    LatentAbortInProgress                          = 3,
    AbortDone                                      = 4,
    MAX                                            = 5
};


// Enum  AIModule.EPawnActionResult
enum class EPawnActionResult : uint8_t
{
    NotStarted                                     = 0,
    InProgress                                     = 1,
    Success                                        = 2,
    Failed                                         = 3,
    Aborted                                        = 4,
    EPawnActionResult_MAX                          = 5
};


// Enum  AIModule.EPawnActionEventType
enum class EPawnActionEventType : uint8_t
{
    Invalid                                        = 0,
    FailedToStart                                  = 1,
    InstantAbort                                   = 2,
    FinishedAborting                               = 3,
    FinishedExecution                              = 4,
    Push                                           = 5,
    EPawnActionEventType_MAX                       = 6
};


// Enum  AIModule.EAIRequestPriority
enum class EAIRequestPriority : uint8_t
{
    SoftScript                                     = 0,
    Logic                                          = 1,
    HardScript                                     = 2,
    Reaction                                       = 3,
    Ultimate                                       = 4,
    MAX                                            = 5
};


// Enum  AIModule.EAILockSource
enum class EAILockSource : uint8_t
{
    Animation                                      = 0,
    Logic                                          = 1,
    Script                                         = 2,
    Gameplay                                       = 3,
    MAX                                            = 4
};


// Enum  AIModule.EGenericAICheck
enum class EGenericAICheck : uint8_t
{
    Less                                           = 0,
    LessOrEqual                                    = 1,
    Equal                                          = 2,
    NotEqual                                       = 3,
    GreaterOrEqual                                 = 4,
    Greater                                        = 5,
    IsTrue                                         = 6,
    MAX                                            = 7
};


// Enum  AIModule.EBTFlowAbortMode
enum class EBTFlowAbortMode : uint8_t
{
    None                                           = 0,
    LowerPriority                                  = 1,
    Self                                           = 2,
    Both                                           = 3,
    EBTFlowAbortMode_MAX                           = 4
};


// Enum  AIModule.EBasicKeyOperation
enum class EBasicKeyOperation : uint8_t
{
    Set                                            = 0,
    NotSet                                         = 1,
    EBasicKeyOperation_MAX                         = 2
};


// Enum  AIModule.EArithmeticKeyOperation
enum class EArithmeticKeyOperation : uint8_t
{
    Equal                                          = 0,
    NotEqual                                       = 1,
    Less                                           = 2,
    LessOrEqual                                    = 3,
    Greater                                        = 4,
    GreaterOrEqual                                 = 5,
    EArithmeticKeyOperation_MAX                    = 6
};


// Enum  AIModule.ETextKeyOperation
enum class ETextKeyOperation : uint8_t
{
    Equal                                          = 0,
    NotEqual                                       = 1,
    Contain                                        = 2,
    NotContain                                     = 3,
    ETextKeyOperation_MAX                          = 4
};


// Enum  AIModule.EBTChildIndex
enum class EBTChildIndex : uint8_t
{
    FirstNode                                      = 0,
    TaskNode                                       = 1,
    EBTChildIndex_MAX                              = 2
};


// Enum  AIModule.EBTDecoratorLogic
enum class EBTDecoratorLogic : uint8_t
{
    Invalid                                        = 0,
    Test                                           = 1,
    And                                            = 2,
    Or                                             = 3,
    Not                                            = 4,
    EBTDecoratorLogic_MAX                          = 5
};


// Enum  AIModule.EBTParallelMode
enum class EBTParallelMode : uint8_t
{
    AbortBackground                                = 0,
    WaitForBackground                              = 1,
    EBTParallelMode_MAX                            = 2
};


// Enum  AIModule.EBTBlackboardRestart
enum class EBTBlackboardRestart : uint8_t
{
    ValueChange                                    = 0,
    ResultChange                                   = 1,
    EBTBlackboardRestart_MAX                       = 2
};


// Enum  AIModule.EBlackBoardEntryComparison
enum class EBlackBoardEntryComparison : uint8_t
{
    Equal                                          = 0,
    NotEqual                                       = 1,
    EBlackBoardEntryComparison_MAX                 = 2
};


// Enum  AIModule.EPathExistanceQueryType
enum class EPathExistanceQueryType : uint8_t
{
    NavmeshRaycast2D                               = 0,
    HierarchicalQuery                              = 1,
    RegularPathFinding                             = 2,
    EPathExistanceQueryType_MAX                    = 3
};


// Enum  AIModule.EPointOnCircleSpacingMethod
enum class EPointOnCircleSpacingMethod : uint8_t
{
    BySpaceBetween                                 = 0,
    ByNumberOfPoints                               = 1,
    EPointOnCircleSpacingMethod_MAX                = 2
};


// Enum  AIModule.EEQSNormalizationType
enum class EEQSNormalizationType : uint8_t
{
    Absolute                                       = 0,
    RelativeToScores                               = 1,
    EEQSNormalizationType_MAX                      = 2
};


// Enum  AIModule.EEnvTestDistance
enum class EEnvTestDistance : uint8_t
{
    Distance3D                                     = 0,
    Distance2D                                     = 1,
    DistanceZ                                      = 2,
    DistanceAbsoluteZ                              = 3,
    EEnvTestDistance_MAX                           = 4
};


// Enum  AIModule.EEnvTestDot
enum class EEnvTestDot : uint8_t
{
    Dot3D                                          = 0,
    Dot2D                                          = 1,
    EEnvTestDot_MAX                                = 2
};


// Enum  AIModule.EEnvTestPathfinding
enum class EEnvTestPathfinding : uint8_t
{
    PathExist                                      = 0,
    PathCost                                       = 1,
    PathLength                                     = 2,
    EEnvTestPathfinding_MAX                        = 3
};


// Enum  AIModule.EEnvTestPurpose
enum class EEnvTestPurpose : uint8_t
{
    Filter                                         = 0,
    Score                                          = 1,
    FilterAndScore                                 = 2,
    EEnvTestPurpose_MAX                            = 3
};


// Enum  AIModule.EEnvTestFilterType
enum class EEnvTestFilterType : uint8_t
{
    Minimum                                        = 0,
    Maximum                                        = 1,
    Range                                          = 2,
    Match                                          = 3,
    EEnvTestFilterType_MAX                         = 4
};


// Enum  AIModule.EEnvTestScoreEquation
enum class EEnvTestScoreEquation : uint8_t
{
    Linear                                         = 0,
    Square                                         = 1,
    InverseLinear                                  = 2,
    SquareRoot                                     = 3,
    Constant                                       = 4,
    EEnvTestScoreEquation_MAX                      = 5
};


// Enum  AIModule.EEnvTestWeight
enum class EEnvTestWeight : uint8_t
{
    None                                           = 0,
    Square                                         = 1,
    Inverse                                        = 2,
    Unused                                         = 3,
    Constant                                       = 4,
    Skip                                           = 5,
    EEnvTestWeight_MAX                             = 6
};


// Enum  AIModule.EEnvTestCost
enum class EEnvTestCost : uint8_t
{
    Low                                            = 0,
    Medium                                         = 1,
    High                                           = 2,
    EEnvTestCost_MAX                               = 3
};


// Enum  AIModule.EEnvTestFilterOperator
enum class EEnvTestFilterOperator : uint8_t
{
    AllPass                                        = 0,
    AnyPass                                        = 1,
    EEnvTestFilterOperator_MAX                     = 2
};


// Enum  AIModule.EEnvTestScoreOperator
enum class EEnvTestScoreOperator : uint8_t
{
    AverageScore                                   = 0,
    MinScore                                       = 1,
    MaxScore                                       = 2,
    Multiply                                       = 3,
    EEnvTestScoreOperator_MAX                      = 4
};


// Enum  AIModule.EEnvQueryRunMode
enum class EEnvQueryRunMode : uint8_t
{
    SingleResult                                   = 0,
    RandomBest5Pct                                 = 1,
    RandomBest25Pct                                = 2,
    AllMatching                                    = 3,
    EEnvQueryRunMode_MAX                           = 4
};


// Enum  AIModule.EEnvQueryParam
enum class EEnvQueryParam : uint8_t
{
    Float                                          = 0,
    Int                                            = 1,
    Bool                                           = 2,
    EEnvQueryParam_MAX                             = 3
};


// Enum  AIModule.EAIParamType
enum class EAIParamType : uint8_t
{
    Float                                          = 0,
    Int                                            = 1,
    Bool                                           = 2,
    MAX                                            = 3
};


// Enum  AIModule.EEnvQueryTrace
enum class EEnvQueryTrace : uint8_t
{
    None                                           = 0,
    Navigation                                     = 1,
    GeometryByChannel                              = 2,
    GeometryByProfile                              = 3,
    NavigationOverLedges                           = 4,
    EEnvQueryTrace_MAX                             = 5
};


// Enum  AIModule.EEnvTraceShape
enum class EEnvTraceShape : uint8_t
{
    Line                                           = 0,
    Box                                            = 1,
    Sphere                                         = 2,
    Capsule                                        = 3,
    EEnvTraceShape_MAX                             = 4
};


// Enum  AIModule.EEnvOverlapShape
enum class EEnvOverlapShape : uint8_t
{
    Box                                            = 0,
    Sphere                                         = 1,
    Capsule                                        = 2,
    EEnvOverlapShape_MAX                           = 3
};


// Enum  AIModule.EEnvDirection
enum class EEnvDirection : uint8_t
{
    TwoPoints                                      = 0,
    Rotation                                       = 1,
    EEnvDirection_MAX                              = 2
};


// Enum  AIModule.EEnvQueryTestClamping
enum class EEnvQueryTestClamping : uint8_t
{
    None                                           = 0,
    SpecifiedValue                                 = 1,
    FilterThreshold                                = 2,
    EEnvQueryTestClamping_MAX                      = 3
};


// Enum  AIModule.EEnvQueryHightlightMode
enum class EEnvQueryHightlightMode : uint8_t
{
    All                                            = 0,
    Best5Pct                                       = 1,
    Best25Pct                                      = 2,
    EEnvQueryHightlightMode_MAX                    = 3
};


// Enum  AIModule.ETeamAttitude
enum class ETeamAttitude : uint8_t
{
    Friendly                                       = 0,
    Neutral                                        = 1,
    Hostile                                        = 2,
    ETeamAttitude_MAX                              = 3
};


// Enum  AIModule.EPathFollowingAction
enum class EPathFollowingAction : uint8_t
{
    Error                                          = 0,
    NoMove                                         = 1,
    DirectMove                                     = 2,
    PartialPath                                    = 3,
    PathToGoal                                     = 4,
    EPathFollowingAction_MAX                       = 5
};


// Enum  AIModule.EPawnSubActionTriggeringPolicy
enum class EPawnSubActionTriggeringPolicy : uint8_t
{
    CopyBeforeTriggering                           = 0,
    ReuseInstances                                 = 1,
    EPawnSubActionTriggeringPolicy_MAX             = 2
};


// Enum  AIModule.EPawnActionFailHandling
enum class EPawnActionFailHandling : uint8_t
{
    RequireSuccess                                 = 0,
    IgnoreFailure                                  = 1,
    EPawnActionFailHandling_MAX                    = 2
};


// Enum  AIModule.EPawnActionMoveMode
enum class EPawnActionMoveMode : uint8_t
{
    UsePathfinding                                 = 0,
    StraightLine                                   = 1,
    EPawnActionMoveMode_MAX                        = 2
};


// Enum  VectorVM.EVectorVMBaseTypes
enum class EVectorVMBaseTypes : uint8_t
{
    Float                                          = 0,
    Int                                            = 1,
    Bool                                           = 2,
    Num                                            = 3,
    EVectorVMBaseTypes_MAX                         = 4
};


// Enum  VectorVM.EVectorVMOperandLocation
enum class EVectorVMOperandLocation : uint8_t
{
    Register                                       = 0,
    Constant                                       = 1,
    Num                                            = 2,
    EVectorVMOperandLocation_MAX                   = 3
};


// Enum  VectorVM.EVectorVMOp
enum class EVectorVMOp : uint8_t
{
    done                                           = 0,
    add                                            = 1,
    sub                                            = 2,
    mul                                            = 3,
    div                                            = 4,
    mad                                            = 5,
    lerp                                           = 6,
    rcp                                            = 7,
    rsq                                            = 8,
    sqrt                                           = 9,
    neg                                            = 10,
    abs                                            = 11,
    exp                                            = 12,
    exp2                                           = 13,
    log                                            = 14,
    log2                                           = 15,
    sin                                            = 16,
    cos                                            = 17,
    tan                                            = 18,
    asin                                           = 19,
    acos                                           = 20,
    atan                                           = 21,
    atan2                                          = 22,
    ceil                                           = 23,
    floor                                          = 24,
    fmod                                           = 25,
    frac                                           = 26,
    trunc                                          = 27,
    clamp                                          = 28,
    min                                            = 29,
    max                                            = 30,
    pow                                            = 31,
    round                                          = 32,
    sign                                           = 33,
    step                                           = 34,
    random                                         = 35,
    noise                                          = 36,
    cmplt                                          = 37,
    cmple                                          = 38,
    cmpgt                                          = 39,
    cmpge                                          = 40,
    cmpeq                                          = 41,
    cmpneq                                         = 42,
    select                                         = 43,
    addi                                           = 44,
    subi                                           = 45,
    muli                                           = 46,
    divi                                           = 47,
    clampi                                         = 48,
    mini                                           = 49,
    maxi                                           = 50,
    absi                                           = 51,
    negi                                           = 52,
    signi                                          = 53,
    randomi                                        = 54,
    cmplti                                         = 55,
    cmplei                                         = 56,
    cmpgti                                         = 57,
    cmpgei                                         = 58,
    cmpeqi                                         = 59,
    cmpneqi                                        = 60,
    bit_and                                        = 61,
    bit_or                                         = 62,
    bit_xor                                        = 63,
    bit_not                                        = 64,
    bit_lshift                                     = 65,
    bit_rshift                                     = 66,
    logic_and                                      = 67,
    logic_or                                       = 68,
    logic_xor                                      = 69,
    logic_not                                      = 70,
    f2i                                            = 71,
    i2f                                            = 72,
    f2b                                            = 73,
    b2f                                            = 74,
    i2b                                            = 75,
    b2i                                            = 76,
    inputdata_float                                = 77,
    inputdata_int32                                = 78,
    inputdata_half                                 = 79,
    inputdata_noadvance_float                      = 80,
    inputdata_noadvance_int32                      = 81,
    inputdata_noadvance_half                       = 82,
    outputdata_float                               = 83,
    outputdata_int32                               = 84,
    outputdata_half                                = 85,
    acquireindex                                   = 86,
    external_func_call                             = 87,
    exec_index                                     = 88,
    noise2D                                        = 89,
    noise3D                                        = 90,
    enter_stat_scope                               = 91,
    exit_stat_scope                                = 92,
    update_id                                      = 93,
    acquire_id                                     = 94,
    NumOpcodes                                     = 95
};


// Enum  RigVM.ERigVMBreakpointAction
enum class ERigVMBreakpointAction : uint8_t
{
    None                                           = 0,
    Resume                                         = 1,
    StepOver                                       = 2,
    StepInto                                       = 3,
    StepOut                                        = 4,
    Max                                            = 5
};


// Enum  RigVM.ERigVMParameterType
enum class ERigVMParameterType : uint8_t
{
    Input                                          = 0,
    Output                                         = 1,
    Invalid                                        = 2,
    ERigVMParameterType_MAX                        = 3
};


// Enum  RigVM.ERigVMOpCode
enum class ERigVMOpCode : uint8_t
{
    Execute_0_Operands                             = 0,
    Execute_1_Operands                             = 1,
    Execute_2_Operands                             = 2,
    Execute_3_Operands                             = 3,
    Execute_4_Operands                             = 4,
    Execute_5_Operands                             = 5,
    Execute_6_Operands                             = 6,
    Execute_7_Operands                             = 7,
    Execute_8_Operands                             = 8,
    Execute_9_Operands                             = 9,
    Execute_10_Operands                            = 10,
    Execute_11_Operands                            = 11,
    Execute_12_Operands                            = 12,
    Execute_13_Operands                            = 13,
    Execute_14_Operands                            = 14,
    Execute_15_Operands                            = 15,
    Execute_16_Operands                            = 16,
    Execute_17_Operands                            = 17,
    Execute_18_Operands                            = 18,
    Execute_19_Operands                            = 19,
    Execute_20_Operands                            = 20,
    Execute_21_Operands                            = 21,
    Execute_22_Operands                            = 22,
    Execute_23_Operands                            = 23,
    Execute_24_Operands                            = 24,
    Execute_25_Operands                            = 25,
    Execute_26_Operands                            = 26,
    Execute_27_Operands                            = 27,
    Execute_28_Operands                            = 28,
    Execute_29_Operands                            = 29,
    Execute_30_Operands                            = 30,
    Execute_31_Operands                            = 31,
    Execute_32_Operands                            = 32,
    Execute_33_Operands                            = 33,
    Execute_34_Operands                            = 34,
    Execute_35_Operands                            = 35,
    Execute_36_Operands                            = 36,
    Execute_37_Operands                            = 37,
    Execute_38_Operands                            = 38,
    Execute_39_Operands                            = 39,
    Execute_40_Operands                            = 40,
    Execute_41_Operands                            = 41,
    Execute_42_Operands                            = 42,
    Execute_43_Operands                            = 43,
    Execute_44_Operands                            = 44,
    Execute_45_Operands                            = 45,
    Execute_46_Operands                            = 46,
    Execute_47_Operands                            = 47,
    Execute_48_Operands                            = 48,
    Execute_49_Operands                            = 49,
    Execute_50_Operands                            = 50,
    Execute_51_Operands                            = 51,
    Execute_52_Operands                            = 52,
    Execute_53_Operands                            = 53,
    Execute_54_Operands                            = 54,
    Execute_55_Operands                            = 55,
    Execute_56_Operands                            = 56,
    Execute_57_Operands                            = 57,
    Execute_58_Operands                            = 58,
    Execute_59_Operands                            = 59,
    Execute_60_Operands                            = 60,
    Execute_61_Operands                            = 61,
    Execute_62_Operands                            = 62,
    Execute_63_Operands                            = 63,
    Execute_64_Operands                            = 64,
    Zero                                           = 65,
    BoolFalse                                      = 66,
    BoolTrue                                       = 67,
    Copy                                           = 68,
    Increment                                      = 69,
    Decrement                                      = 70,
    Equals                                         = 71,
    NotEquals                                      = 72,
    JumpAbsolute                                   = 73,
    JumpForward                                    = 74,
    JumpBackward                                   = 75,
    JumpAbsoluteIf                                 = 76,
    JumpForwardIf                                  = 77,
    JumpBackwardIf                                 = 78,
    ChangeType                                     = 79,
    Exit                                           = 80,
    BeginBlock                                     = 81,
    EndBlock                                       = 82,
    ArrayReset                                     = 83,
    ArrayGetNum                                    = 84,
    ArraySetNum                                    = 85,
    ArrayGetAtIndex                                = 86,
    ArraySetAtIndex                                = 87,
    ArrayAdd                                       = 88,
    ArrayInsert                                    = 89,
    ArrayRemove                                    = 90,
    ArrayFind                                      = 91,
    ArrayAppend                                    = 92,
    ArrayClone                                     = 93,
    ArrayIterator                                  = 94,
    ArrayUnion                                     = 95,
    ArrayDifference                                = 96,
    ArrayIntersection                              = 97,
    ArrayReverse                                   = 98,
    Invalid                                        = 99,
    FirstArrayOpCode                               = 83,
    LastArrayOpCode                                = 98,
    ERigVMOpCode_MAX                               = 100
};


// Enum  RigVM.ERigVMCopyType
enum class ERigVMCopyType : uint8_t
{
    Default                                        = 0,
    FloatToDouble                                  = 1,
    DoubleToFloat                                  = 2,
    ERigVMCopyType_MAX                             = 3
};


// Enum  RigVM.ERigVMPinDirection
enum class ERigVMPinDirection : uint8_t
{
    Input                                          = 0,
    Output                                         = 1,
    IO                                             = 2,
    Visible                                        = 3,
    Hidden                                         = 4,
    Invalid                                        = 5,
    ERigVMPinDirection_MAX                         = 6
};


// Enum  RigVM.ERigVMMemoryType
enum class ERigVMMemoryType : uint8_t
{
    Work                                           = 0,
    Literal                                        = 1,
    External                                       = 2,
    Debug                                          = 3,
    Invalid                                        = 4,
    ERigVMMemoryType_MAX                           = 5
};


// Enum  RigVM.ERigVMRegisterType
enum class ERigVMRegisterType : uint8_t
{
    Plain                                          = 0,
    String                                         = 1,
    Name                                           = 2,
    Struct                                         = 3,
    Invalid                                        = 4,
    ERigVMRegisterType_MAX                         = 5
};


// Enum  ChaosSolverEngine.EClusterConnectionTypeEnum
enum class EClusterConnectionTypeEnum : uint8_t
{
    Chaos_PointImplicit                            = 0,
    Chaos_DelaunayTriangulation                    = 1,
    Chaos_MinimalSpanningSubsetDelaunayTriangulation = 2,
    Chaos_PointImplicitAugmentedWithMinimalDelaunay = 3,
    Chaos_None                                     = 4,
    Chaos_EClsuterCreationParameters_Max           = 5,
    Chaos_MAX                                      = 6
};


// Enum  GeometryCollectionEngine.EChaosBreakingSortMethod
enum class EChaosBreakingSortMethod : uint8_t
{
    SortNone                                       = 0,
    SortByHighestMass                              = 1,
    SortByHighestSpeed                             = 2,
    SortByNearestFirst                             = 3,
    Count                                          = 4,
    EChaosBreakingSortMethod_MAX                   = 5
};


// Enum  GeometryCollectionEngine.EChaosCollisionSortMethod
enum class EChaosCollisionSortMethod : uint8_t
{
    SortNone                                       = 0,
    SortByHighestMass                              = 1,
    SortByHighestSpeed                             = 2,
    SortByHighestImpulse                           = 3,
    SortByNearestFirst                             = 4,
    Count                                          = 5,
    EChaosCollisionSortMethod_MAX                  = 6
};


// Enum  GeometryCollectionEngine.EChaosRemovalSortMethod
enum class EChaosRemovalSortMethod : uint8_t
{
    SortNone                                       = 0,
    SortByHighestMass                              = 1,
    SortByNearestFirst                             = 2,
    Count                                          = 3,
    EChaosRemovalSortMethod_MAX                    = 4
};


// Enum  GeometryCollectionEngine.EChaosTrailingSortMethod
enum class EChaosTrailingSortMethod : uint8_t
{
    SortNone                                       = 0,
    SortByHighestMass                              = 1,
    SortByHighestSpeed                             = 2,
    SortByNearestFirst                             = 3,
    Count                                          = 4,
    EChaosTrailingSortMethod_MAX                   = 5
};


// Enum  GeometryCollectionEngine.EGeometryCollectionDebugDrawActorHideGeometry
enum class EGeometryCollectionDebugDrawActorHideGeometry : uint8_t
{
    HideNone                                       = 0,
    HideWithCollision                              = 1,
    HideSelected                                   = 2,
    HideWholeCollection                            = 3,
    HideAll                                        = 4,
    EGeometryCollectionDebugDrawActorHideGeometry_MAX = 5
};


// Enum  GeometryCollectionEngine.ECollectionAttributeEnum
enum class ECollectionAttributeEnum : uint8_t
{
    Chaos_Active                                   = 0,
    Chaos_DynamicState                             = 1,
    Chaos_CollisionGroup                           = 2,
    Chaos_Max                                      = 3
};


// Enum  GeometryCollectionEngine.ECollectionGroupEnum
enum class ECollectionGroupEnum : uint8_t
{
    Chaos_Traansform                               = 0,
    Chaos_Max                                      = 1
};


// UserDefinedEnum  Engine.Default__UserDefinedEnum
enum class Default__UserDefinedEnum : uint8_t
{
};


// UserDefinedEnum  Angelscript.ETrackComponentIdentificationType
enum class ETrackComponentIdentificationType : uint8_t
{
    Name                                           = 0,
    ComponentTag                                   = 1,
    ComponentPicker                                = 2,
    ETrackComponentIdentificationType_MAX          = 3
};


// UserDefinedEnum  Angelscript.EAudioVolumeType
enum class EAudioVolumeType : uint8_t
{
    Urban                                          = 0,
    UrbanAlley                                     = 1,
    UrbanAlleyTight                                = 2,
    Park                                           = 3,
    Field                                          = 4,
    EAudioVolumeType_MAX                           = 5
};


// UserDefinedEnum  Angelscript.ECameraStateLayerBlendMode
enum class ECameraStateLayerBlendMode : uint8_t
{
    Override                                       = 0,
    Additive                                       = 1,
    ECameraStateLayerBlendMode_MAX                 = 2
};


// UserDefinedEnum  Angelscript.EDispersionState
enum class EDispersionState : uint8_t
{
    Crouching                                      = 0,
    CrouchMoving                                   = 1,
    Standing                                       = 2,
    StandMoving                                    = 3,
    Sprinting                                      = 4,
    Uncontrollable                                 = 5,
    EDispersionState_MAX                           = 6
};


// UserDefinedEnum  Angelscript.EDispersionModifierMode
enum class EDispersionModifierMode : uint8_t
{
    Multiply                                       = 0,
    Add                                            = 1,
    Override                                       = 2,
    EDispersionModifierMode_MAX                    = 3
};


// UserDefinedEnum  Angelscript.EWinchDirection
enum class EWinchDirection : uint8_t
{
    Neutral                                        = 0,
    Retract                                        = 1,
    Detract                                        = 2,
    EWinchDirection_MAX                            = 3
};


// UserDefinedEnum  Angelscript.EBillboardColors
enum class EBillboardColors : uint8_t
{
    Yellow                                         = 0,
    Blue                                           = 1,
    Purple                                         = 2,
    EBillboardColors_MAX                           = 3
};


// UserDefinedEnum  Angelscript.ETeleportEffectType
enum class ETeleportEffectType : uint8_t
{
    Enter                                          = 0,
    Exit                                           = 1,
    ETeleportEffectType_MAX                        = 2
};


// UserDefinedEnum  Angelscript.EBreakWithActorWhen
enum class EBreakWithActorWhen : uint8_t
{
    AnyBreaks                                      = 0,
    AllBreaks                                      = 1,
    EBreakWithActorWhen_MAX                        = 2
};


// UserDefinedEnum  Angelscript.EZiplineTravelDirection
enum class EZiplineTravelDirection : uint8_t
{
    TowardsStart                                   = 0,
    TowardsEnd                                     = 1,
    EZiplineTravelDirection_MAX                    = 2
};


// UserDefinedEnum  Angelscript.EZiplineDetachReason
enum class EZiplineDetachReason : uint8_t
{
    ReachedEnd                                     = 0,
    PassengerRequestDrop                           = 1,
    PassengerRequestLaunch                         = 2,
    ForcedDetach                                   = 3,
    Death                                          = 4,
    EZiplineDetachReason_MAX                       = 5
};


// UserDefinedEnum  Angelscript.EZiplineActorMoveState
enum class EZiplineActorMoveState : uint8_t
{
    NotMoving                                      = 0,
    StartedMoving                                  = 1,
    Moving                                         = 2,
    StoppedMoving                                  = 3,
    EZiplineActorMoveState_MAX                     = 4
};


// UserDefinedEnum  Angelscript.ESpinDirection
enum class ESpinDirection : uint8_t
{
    Clockwise                                      = 0,
    Counterclockwise                               = 1,
    ESpinDirection_MAX                             = 2
};


// UserDefinedEnum  Angelscript.EButtonState
enum class EButtonState : uint8_t
{
    Enabled                                        = 0,
    Triggered                                      = 1,
    Disabled                                       = 2,
    EButtonState_MAX                               = 3
};


// UserDefinedEnum  Angelscript.EFlybyType
enum class EFlybyType : uint8_t
{
    None                                           = 0,
    Instant                                        = 1,
    Follow                                         = 2,
    EFlybyType_MAX                                 = 3
};


// UserDefinedEnum  Angelscript.EBallisticProjectileType
enum class EBallisticProjectileType : uint8_t
{
    Owning                                         = 0,
    Proxy                                          = 1,
    Num                                            = 2,
    EBallisticProjectileType_MAX                   = 3
};


// UserDefinedEnum  Angelscript.EPracticeTargetCharacterState
enum class EPracticeTargetCharacterState : uint8_t
{
    Disabled                                       = 0,
    Patrol                                         = 1,
    Alerted                                        = 2,
    Engaging                                       = 3,
    EPracticeTargetCharacterState_MAX              = 4
};


// UserDefinedEnum  Angelscript.EAudienceReaction
enum class EAudienceReaction : uint8_t
{
    Neutral                                        = 0,
    Positive                                       = 1,
    Negative                                       = 2,
    EAudienceReaction_MAX                          = 3
};


// UserDefinedEnum  Angelscript.EAudienceRactionEvent
enum class EAudienceRactionEvent : uint8_t
{
    None                                           = 0,
    Death                                          = 1,
    DBNO                                           = 2,
    Extraction                                     = 3,
    RoundStart                                     = 4,
    HustleMode                                     = 5,
    ExtractionStarted                              = 6,
    RoundEnding                                    = 7,
    EAudienceRactionEvent_MAX                      = 8
};


// UserDefinedEnum  Angelscript.EFlavorEventRelevancyFlags
enum class EFlavorEventRelevancyFlags : uint8_t
{
    None                                           = 0,
    Squad                                          = 1,
    Distance                                       = 2,
    Player                                         = 8,
    EFlavorEventRelevancyFlags_MAX                 = 9
};


// UserDefinedEnum  Angelscript.EFlavorEventRelevancyMode
enum class EFlavorEventRelevancyMode : uint8_t
{
    Any                                            = 0,
    All                                            = 1,
    EFlavorEventRelevancyMode_MAX                  = 2
};


// UserDefinedEnum  Angelscript.EAUSItemType
enum class EAUSItemType : uint8_t
{
    None                                           = 0,
    RangedWeapon                                   = 1,
    MeleeWeapon                                    = 2,
    DestructiveThrowable                           = 3,
    EAUSItemType_MAX                               = 4
};


// UserDefinedEnum  Angelscript.EAUSThreatType
enum class EAUSThreatType : uint8_t
{
    Pawn                                           = 0,
    Projectile                                     = 1,
    EAUSThreatType_MAX                             = 2
};


// UserDefinedEnum  Angelscript.ECameraFovType
enum class ECameraFovType : uint8_t
{
    Locomotion                                     = 0,
    Ability                                        = 1,
    ECameraFovType_MAX                             = 2
};


// UserDefinedEnum  Angelscript.EFovModifier
enum class EFovModifier : uint8_t
{
    Additive                                       = 0,
    Override                                       = 1,
    EFovModifier_MAX                               = 2
};


// UserDefinedEnum  Angelscript.EZoomModifier
enum class EZoomModifier : uint8_t
{
    Multiplier                                     = 0,
    Override                                       = 1,
    EZoomModifier_MAX                              = 2
};


// UserDefinedEnum  Angelscript.EViewTargetPerspective
enum class EViewTargetPerspective : uint8_t
{
    Unspecified                                    = 0,
    FirstPerson                                    = 1,
    ThirdPerson                                    = 2,
    EViewTargetPerspective_MAX                     = 3
};


// UserDefinedEnum  Angelscript.ECameraMagnetismState
enum class ECameraMagnetismState : uint8_t
{
    Idle                                           = 0,
    Acquried                                       = 1,
    ECameraMagnetismState_MAX                      = 2
};


// UserDefinedEnum  Angelscript.EZoomSnappingTriggerCooldownBehavior
enum class EZoomSnappingTriggerCooldownBehavior : uint8_t
{
    OnSuccessfulSnap                               = 0,
    OnZoom                                         = 1,
    EZoomSnappingTriggerCooldownBehavior_MAX       = 2
};


// UserDefinedEnum  Angelscript.EZoomSnappingState
enum class EZoomSnappingState : uint8_t
{
    ReadyToTryToSnapOnZoom                         = 0,
    Snapping                                       = 1,
    Cooldown                                       = 2,
    EZoomSnappingState_MAX                         = 3
};


// UserDefinedEnum  Angelscript.EArchetypeSize
enum class EArchetypeSize : uint8_t
{
    Light                                          = 0,
    Medium                                         = 1,
    Heavy                                          = 2,
    EArchetypeSize_MAX                             = 3
};


// UserDefinedEnum  Angelscript.EBodySlot
enum class EBodySlot : uint8_t
{
    Head                                           = 0,
    Headwear                                       = 1,
    BodyUpper                                      = 2,
    TorsoUpperLeft                                 = 3,
    BackLowerRight                                 = 4,
    Wrists                                         = 5,
    Hands                                          = 6,
    bandolier                                      = 7,
    BodyLower                                      = 8,
    Shoes                                          = 9,
    Facewear                                       = 10,
    Hair                                           = 11,
    Forehead                                       = 12,
    Calves                                         = 13,
    Eyes                                           = 14,
    BodyPaint                                      = 15,
    BackUpper                                      = 16,
    ShoulderLeft                                   = 17,
    Watch                                          = 18,
    Hood                                           = 19,
    MAX_BODYSLOTS                                  = 20,
    EBodySlot_MAX                                  = 21
};


// UserDefinedEnum  Angelscript.EBodyType
enum class EBodyType : uint8_t
{
    Feminine                                       = 0,
    Masculine                                      = 1,
    EBodyType_MAX                                  = 2
};


// UserDefinedEnum  Angelscript.ECharacterCustomizationVisibility
enum class ECharacterCustomizationVisibility : uint8_t
{
    Hidden                                         = 0,
    FirstPerson                                    = 1,
    ThirdPerson                                    = 2,
    ECharacterCustomizationVisibility_MAX          = 3
};


// UserDefinedEnum  Angelscript.ECustomizationMaterialBehavior
enum class ECustomizationMaterialBehavior : uint8_t
{
    OverrideParameters                             = 0,
    ReplaceMaterial                                = 1,
    ECustomizationMaterialBehavior_MAX             = 2
};


// UserDefinedEnum  Angelscript.EDebugCameraAttachmentMode
enum class EDebugCameraAttachmentMode : uint8_t
{
    Disabled                                       = 0,
    DetachedLookAt                                 = 1,
    Attached                                       = 2,
    DetachedStatic                                 = 3,
    EDebugCameraAttachmentMode_MAX                 = 4
};


// UserDefinedEnum  Angelscript.ECoinDeathStatus
enum class ECoinDeathStatus : uint8_t
{
    InProgress                                     = 0,
    Done                                           = 1,
    ECoinDeathStatus_MAX                           = 2
};


// UserDefinedEnum  Angelscript.EHealthComponentDebugVerbosity
enum class EHealthComponentDebugVerbosity : uint8_t
{
    None                                           = 0,
    Low                                            = 1,
    High                                           = 2,
    EHealthComponentDebugVerbosity_MAX             = 3
};


// UserDefinedEnum  Angelscript.EHealthComponentTrackingEvents
enum class EHealthComponentTrackingEvents : uint8_t
{
    None                                           = 0,
    AbsorbedDamage                                 = 1,
    DamageDone                                     = 2,
    EHealthComponentTrackingEvents_MAX             = 3
};


// UserDefinedEnum  Angelscript.EInstigatorActorOverride
enum class EInstigatorActorOverride : uint8_t
{
    None                                           = 0,
    Self                                           = 1,
    GameState                                      = 2,
    EInstigatorActorOverride_MAX                   = 3
};


// UserDefinedEnum  Angelscript.EInstigatorTeamIdOverride
enum class EInstigatorTeamIdOverride : uint8_t
{
    None                                           = 0,
    SquadComponent                                 = 1,
    Manual                                         = 2,
    EInstigatorTeamIdOverride_MAX                  = 3
};


// UserDefinedEnum  Angelscript.EInteractableSearchResults
enum class EInteractableSearchResults : uint8_t
{
    NoResult                                       = 0,
    Directly                                       = 1,
    Child                                          = 2,
    Owner                                          = 3,
    EInteractableSearchResults_MAX                 = 4
};


// UserDefinedEnum  Angelscript.EInteractableSearchModes
enum class EInteractableSearchModes : uint8_t
{
    DirectOrChild                                  = 0,
    Any                                            = 1,
    EInteractableSearchModes_MAX                   = 2
};


// UserDefinedEnum  Angelscript.EInteractionStatus
enum class EInteractionStatus : uint8_t
{
    Invalid                                        = 0,
    Occupied                                       = 1,
    Valid                                          = 2,
    EInteractionStatus_MAX                         = 3
};


// UserDefinedEnum  Angelscript.EInteractionInteractorSupport
enum class EInteractionInteractorSupport : uint8_t
{
    Single                                         = 0,
    Multiple                                       = 1,
    EInteractionInteractorSupport_MAX              = 2
};


// UserDefinedEnum  Angelscript.EInteractionTraceState
enum class EInteractionTraceState : uint8_t
{
    NoData                                         = 0,
    AwaitingTrace                                  = 1,
    Finished                                       = 2,
    EInteractionTraceState_MAX                     = 3
};


// UserDefinedEnum  Angelscript.EInteractorState
enum class EInteractorState : uint8_t
{
    None                                           = 0,
    Ongoing                                        = 1,
    Success                                        = 2,
    Failed                                         = 3,
    EInteractorState_MAX                           = 4
};


// UserDefinedEnum  Angelscript.EInteractionOutlineType
enum class EInteractionOutlineType : uint8_t
{
    Generic                                        = 0,
    Traversal                                      = 1,
    Damage                                         = 2,
    Power                                          = 3,
    Target                                         = 4,
    KillCam                                        = 5,
    EInteractionOutlineType_MAX                    = 6
};


// UserDefinedEnum  Angelscript.EDiscoverySpawnEffectDissolveType
enum class EDiscoverySpawnEffectDissolveType : uint8_t
{
    Spawn                                          = 0,
    Despawn                                        = 1,
    EDiscoverySpawnEffectDissolveType_MAX          = 2
};


// UserDefinedEnum  Angelscript.EDiscoverySpawnEffectDissolveMagnitude
enum class EDiscoverySpawnEffectDissolveMagnitude : uint8_t
{
    None                                           = 0,
    Full                                           = 1,
    Detail                                         = 2,
    EDiscoverySpawnEffectDissolveMagnitude_MAX     = 3
};


// UserDefinedEnum  Angelscript.ESurfaceBreakBehaviour
enum class ESurfaceBreakBehaviour : uint8_t
{
    None                                           = 0,
    Destroy                                        = 1,
    SimulatePhysics                                = 2,
    CustomCallback                                 = 3,
    ESurfaceBreakBehaviour_MAX                     = 4
};


// UserDefinedEnum  Angelscript.EDiscoveryWorldIconDistanceStrategy
enum class EDiscoveryWorldIconDistanceStrategy : uint8_t
{
    PawnToWorldIconOwner                           = 0,
    PawnToWorldIconComponent                       = 1,
    EDiscoveryWorldIconDistanceStrategy_MAX        = 2
};


// UserDefinedEnum  Angelscript.ELaunchTarget
enum class ELaunchTarget : uint8_t
{
    Character                                      = 0,
    Projectile                                     = 1,
    PhysicsActor                                   = 2,
    ELaunchTarget_MAX                              = 3
};


// UserDefinedEnum  Angelscript.EPlayerConnectionValidationState
enum class EPlayerConnectionValidationState : uint8_t
{
    NotStarted                                     = 0,
    ValidationRequested                            = 1,
    Validated                                      = 2,
    EPlayerConnectionValidationState_MAX           = 3
};


// UserDefinedEnum  Angelscript.EServerHealthStatus
enum class EServerHealthStatus : uint8_t
{
    Ok                                             = 0,
    Warning                                        = 1,
    Bad                                            = 2,
    EServerHealthStatus_MAX                        = 3
};


// UserDefinedEnum  Angelscript.EThermalHeatPresets
enum class EThermalHeatPresets : uint8_t
{
    Cold                                           = 0,
    LowHeat                                        = 1,
    MediumHeat                                     = 2,
    HighHeat                                       = 3,
    EThermalHeatPresets_MAX                        = 4
};


// UserDefinedEnum  Angelscript.EPlayerConnectionState
enum class EPlayerConnectionState : uint8_t
{
    Connecting                                     = 0,
    Connected                                      = 1,
    Disconnected                                   = 2,
    Abandoned                                      = 3,
    Departed                                       = 4,
    EPlayerConnectionState_MAX                     = 5
};


// UserDefinedEnum  Angelscript.EContestantPackManagerUpdatedPack
enum class EContestantPackManagerUpdatedPack : uint8_t
{
    Preview                                        = 0,
    Edited                                         = 1,
    Selected                                       = 2,
    EContestantPackManagerUpdatedPack_MAX          = 3
};


// UserDefinedEnum  Angelscript.EContestantPackSelectionMode
enum class EContestantPackSelectionMode : uint8_t
{
    AllowPackChanges                               = 0,
    AllowPackLoadoutChanges                        = 1,
    Both                                           = 2,
    None                                           = 3,
    AllowAnything_DisableValidation                = 4,
    EContestantPackSelectionMode_MAX               = 5
};


// UserDefinedEnum  Angelscript.EDeckSlotType
enum class EDeckSlotType : uint8_t
{
    Loadout                                        = 0,
    Reserve                                        = 1,
    Collection                                     = 2,
    EDeckSlotType_MAX                              = 3
};


// UserDefinedEnum  Angelscript.EStructuralDamageType
enum class EStructuralDamageType : uint8_t
{
    PointDamage                                    = 0,
    RadialDamage                                   = 1,
    FireDamage                                     = 2,
    IntegrityFailure                               = 3,
    EStructuralDamageType_MAX                      = 4
};


// UserDefinedEnum  Angelscript.EElevatorDoorDirection
enum class EElevatorDoorDirection : uint8_t
{
    Front                                          = 0,
    Back                                           = 1,
    Both                                           = 2,
    EElevatorDoorDirection_MAX                     = 3
};


// UserDefinedEnum  Angelscript.EElevatorDoorsMovementState
enum class EElevatorDoorsMovementState : uint8_t
{
    Opening                                        = 0,
    Opnened                                        = 1,
    Closing                                        = 2,
    Closed                                         = 3,
    EElevatorDoorsMovementState_MAX                = 4
};


// UserDefinedEnum  Angelscript.EElectronicsState
enum class EElectronicsState : uint8_t
{
    None                                           = 0,
    Off                                            = 1,
    Disabled                                       = 2,
    Active                                         = 3,
    Triggered                                      = 4,
    EElectronicsState_MAX                          = 5
};


// UserDefinedEnum  Angelscript.EEnvironmentalConditionType
enum class EEnvironmentalConditionType : uint8_t
{
    Morning                                        = 0,
    Afternoon                                      = 1,
    Evening                                        = 2,
    Night                                          = 3,
    Fog                                            = 4,
    Storm                                          = 5,
    EEnvironmentalConditionType_MAX                = 6
};


// UserDefinedEnum  Angelscript.EEnvironmentalConditionSeason
enum class EEnvironmentalConditionSeason : uint8_t
{
    Default                                        = 0,
    Winter                                         = 1,
    Spring                                         = 2,
    Summer                                         = 3,
    Autumn                                         = 4,
    EEnvironmentalConditionSeason_MAX              = 5
};


// UserDefinedEnum  Angelscript.EFXRain
enum class EFXRain : uint8_t
{
    None                                           = 0,
    LightRain                                      = 1,
    HeavyRain                                      = 2,
    StormRain                                      = 3,
    EFXRain_MAX                                    = 4
};


// UserDefinedEnum  Angelscript.EGameStateTagLibrary
enum class EGameStateTagLibrary : uint8_t
{
    Gameplay                                       = 0,
    Frontend                                       = 1,
    EGameStateTagLibrary_MAX                       = 2
};


// UserDefinedEnum  Angelscript.EDiscoveryGameModePawnlessPlayerHandleMethod
enum class EDiscoveryGameModePawnlessPlayerHandleMethod : uint8_t
{
    DoNothing                                      = 0,
    SpawnAsCharacter                               = 1,
    SpawnAsSpectator                               = 2,
    EDiscoveryGameModePawnlessPlayerHandleMethod_MAX = 3
};


// UserDefinedEnum  Angelscript.EDiscoveryMapPools
enum class EDiscoveryMapPools : uint8_t
{
    PublicMapsOnly                                 = 0,
    AllMaps                                        = 1,
    EDiscoveryMapPools_MAX                         = 2
};


// UserDefinedEnum  Angelscript.EIdleActivityStatus
enum class EIdleActivityStatus : uint8_t
{
    Inactive                                       = 0,
    AbilityActivated                               = 1,
    IsInteracting                                  = 2,
    MovementInput                                  = 3,
    LookInput                                      = 4,
    EIdleActivityStatus_MAX                        = 5
};


// UserDefinedEnum  Angelscript.ERandomPlacementMethod
enum class ERandomPlacementMethod : uint8_t
{
    ByChance                                       = 0,
    ByRate                                         = 1,
    ByExactCount                                   = 2,
    ERandomPlacementMethod_MAX                     = 3
};


// UserDefinedEnum  Angelscript.ESpawnLocationDistributionMethod
enum class ESpawnLocationDistributionMethod : uint8_t
{
    None                                           = 0,
    Even                                           = 1,
    ESpawnLocationDistributionMethod_MAX           = 2
};


// UserDefinedEnum  Angelscript.EAttackDefendSubRoundEndReasons
enum class EAttackDefendSubRoundEndReasons : uint8_t
{
    Invalid                                        = 0,
    Attacker_Steal                                 = 1,
    Defender_KillAttackers                         = 2,
    Defender_Timeout                               = 3,
    Attacker_Extraction                            = 4,
    Attacker_KillDefenders                         = 5,
    Defender_Steal                                 = 6,
    EAttackDefendSubRoundEndReasons_MAX            = 7
};


// UserDefinedEnum  Angelscript.EAttackDefendTeamSides
enum class EAttackDefendTeamSides : uint8_t
{
    Attacking                                      = 0,
    Defending                                      = 1,
    EAttackDefendTeamSides_MAX                     = 2
};


// UserDefinedEnum  Angelscript.EAttackDefendRoundState
enum class EAttackDefendRoundState : uint8_t
{
    Normal                                         = 0,
    MatchPoint                                     = 1,
    TieBreaker                                     = 2,
    EAttackDefendRoundState_MAX                    = 3
};


// UserDefinedEnum  Angelscript.EVaultSpawnSetting
enum class EVaultSpawnSetting : uint8_t
{
    SpawnInPairs                                   = 0,
    SpawnIndividually                              = 1,
    EVaultSpawnSetting_MAX                         = 2
};


// UserDefinedEnum  Angelscript.ESaucerMovementMode
enum class ESaucerMovementMode : uint8_t
{
    None                                           = 0,
    Stalk                                          = 1,
    Loiter                                         = 2,
    Boost                                          = 3,
    ESaucerMovementMode_MAX                        = 4
};


// UserDefinedEnum  Angelscript.ESaucerAttackMode
enum class ESaucerAttackMode : uint8_t
{
    Move                                           = 0,
    LaserAttack                                    = 1,
    TractorBeam                                    = 2,
    ESaucerAttackMode_MAX                          = 3
};


// UserDefinedEnum  Angelscript.EFlyingSaucerPathType
enum class EFlyingSaucerPathType : uint8_t
{
    Flyover                                        = 0,
    Orbit                                          = 1,
    EFlyingSaucerPathType_MAX                      = 2
};


// UserDefinedEnum  Angelscript.EPlayerInitStepLoadoutDataState
enum class EPlayerInitStepLoadoutDataState : uint8_t
{
    Init                                           = 0,
    LoadingPack                                    = 1,
    PackLoaded                                     = 2,
    EPlayerInitStepLoadoutDataState_MAX            = 3
};


// UserDefinedEnum  Angelscript.EObjectiveState
enum class EObjectiveState : uint8_t
{
    Primary                                        = 0,
    Active                                         = 1,
    Inactive                                       = 2,
    EObjectiveState_MAX                            = 3
};


// UserDefinedEnum  Angelscript.EObjectiveTimerType
enum class EObjectiveTimerType : uint8_t
{
    Elapsed                                        = 0,
    Remaining                                      = 1,
    EObjectiveTimerType_MAX                        = 2
};


// UserDefinedEnum  Angelscript.ETicketVisualType
enum class ETicketVisualType : uint8_t
{
    Text                                           = 0,
    Number                                         = 1,
    Icon                                           = 2,
    ETicketVisualType_MAX                          = 3
};


// UserDefinedEnum  Angelscript.ETransferPointInsertionDirection
enum class ETransferPointInsertionDirection : uint8_t
{
    Forward                                        = 0,
    Right                                          = 1,
    Backward                                       = 2,
    Left                                           = 3,
    ETransferPointInsertionDirection_MAX           = 4
};


// UserDefinedEnum  Angelscript.ERestartContext
enum class ERestartContext : uint8_t
{
    SquadInitial                                   = 0,
    SoloRestart                                    = 1,
    SquadRestart                                   = 2,
    ERestartContext_MAX                            = 3
};


// UserDefinedEnum  Angelscript.ESpawnValidationResult
enum class ESpawnValidationResult : uint8_t
{
    IsValid                                        = 0,
    TooSoon                                        = 1,
    Overlapped                                     = 2,
    ESpawnValidationResult_MAX                     = 3
};


// UserDefinedEnum  Angelscript.EGroupValidationResult
enum class EGroupValidationResult : uint8_t
{
    Success                                        = 0,
    UnderCapacity                                  = 1,
    FailedOverlaps                                 = 2,
    EGroupValidationResult_MAX                     = 3
};


// UserDefinedEnum  Angelscript.ECashoutRespawnCollisionResult
enum class ECashoutRespawnCollisionResult : uint8_t
{
    Ok                                             = 0,
    OverlapPlayer                                  = 1,
    OverlapObjective                               = 2,
    ECashoutRespawnCollisionResult_MAX             = 3
};


// UserDefinedEnum  Angelscript.ECashoutRespawnStrategyObjectiveTargetType
enum class ECashoutRespawnStrategyObjectiveTargetType : uint8_t
{
    Extraction                                     = 0,
    Vault                                          = 1,
    CashBox                                        = 2,
    ECashoutRespawnStrategyObjectiveTargetType_MAX = 3
};


// UserDefinedEnum  Angelscript.ETutorialLevelTransitionState
enum class ETutorialLevelTransitionState : uint8_t
{
    FadeIn                                         = 0,
    FadeOut                                        = 1,
    None                                           = 2,
    ETutorialLevelTransitionState_MAX              = 3
};


// UserDefinedEnum  Angelscript.ESpectatorMode
enum class ESpectatorMode : uint8_t
{
    FreeFlying                                     = 0,
    PlayerFollow                                   = 1,
    NotSpectating                                  = 2,
    Static                                         = 3,
    KillCam                                        = 4,
    ESpectatorMode_MAX                             = 5
};


// UserDefinedEnum  Angelscript.EDeathReasons
enum class EDeathReasons : uint8_t
{
    KilledByEnemyPlayer                            = 0,
    KilledByFriendlyPlayer                         = 1,
    KilledSelf                                     = 2,
    KilledByEnvironment                            = 3,
    EDeathReasons_MAX                              = 4
};


// UserDefinedEnum  Angelscript.ERespawnType
enum class ERespawnType : uint8_t
{
    Default                                        = 0,
    PlayerTimer                                    = 1,
    RespawnMarker                                  = 2,
    SquadTimer                                     = 3,
    RollingTimer                                   = 4,
    ERespawnType_MAX                               = 5
};


// UserDefinedEnum  Angelscript.EScoreNotificationType
enum class EScoreNotificationType : uint8_t
{
    None                                           = 0,
    Immediate                                      = 1,
    Delayed                                        = 2,
    EScoreNotificationType_MAX                     = 3
};


// UserDefinedEnum  Angelscript.ETournamentMatchMetadataSummary
enum class ETournamentMatchMetadataSummary : uint8_t
{
    MatchUneventful                                = 0,
    MatchViolent                                   = 1,
    MatchQuiet                                     = 2,
    MatchClutch                                    = 3,
    MatchClearWinner                               = 4,
    MatchClearLoser                                = 5,
    MatchPeacefulQualification                     = 6,
    ETournamentMatchMetadataSummary_MAX            = 7
};


// UserDefinedEnum  Angelscript.ETournamentMatchResult
enum class ETournamentMatchResult : uint8_t
{
    Pending                                        = 0,
    Eliminated                                     = 1,
    Qualified                                      = 2,
    FinalsWinner                                   = 3,
    ETournamentMatchResult_MAX                     = 4
};


// UserDefinedEnum  Angelscript.ETournamentStatusTierType
enum class ETournamentStatusTierType : uint8_t
{
    Qualifiers                                     = 0,
    Pending                                        = 1,
    Current                                        = 2,
    Finished                                       = 3,
    ETournamentStatusTierType_MAX                  = 4
};


// UserDefinedEnum  Angelscript.ETournamentMatchStatus
enum class ETournamentMatchStatus : uint8_t
{
    InProgress                                     = 0,
    Finished                                       = 1,
    OverTime                                       = 2,
    ETournamentMatchStatus_MAX                     = 3
};


// UserDefinedEnum  Angelscript.ETugOfWarTeam
enum class ETugOfWarTeam : uint8_t
{
    None                                           = 0,
    TeamA                                          = 1,
    TeamB                                          = 2,
    BothTeams                                      = 3,
    ETugOfWarTeam_MAX                              = 4
};


// UserDefinedEnum  Angelscript.ETugOfWarCartForceBody
enum class ETugOfWarCartForceBody : uint8_t
{
    Box                                            = 0,
    Cylinder                                       = 1,
    CylinderBoxXY                                  = 2,
    ETugOfWarCartForceBody_MAX                     = 3
};


// UserDefinedEnum  Angelscript.ETugOfWarCartAngularForceAxis
enum class ETugOfWarCartAngularForceAxis : uint8_t
{
    Pitch                                          = 0,
    Yaw                                            = 1,
    Roll                                           = 2,
    ETugOfWarCartAngularForceAxis_MAX              = 3
};


// UserDefinedEnum  Angelscript.EAmortizedRespawnRequestType
enum class EAmortizedRespawnRequestType : uint8_t
{
    Normal                                         = 0,
    PlayerStart                                    = 1,
    Transform                                      = 2,
    EAmortizedRespawnRequestType_MAX               = 3
};


// UserDefinedEnum  Angelscript.EAnnouncementType
enum class EAnnouncementType : uint8_t
{
    Normal                                         = 0,
    Important                                      = 1,
    Commentator                                    = 2,
    EAnnouncementType_MAX                          = 3
};


// UserDefinedEnum  Angelscript.EWalkingState
enum class EWalkingState : uint8_t
{
    Running                                        = 0,
    Sprinting                                      = 1,
    Crouching                                      = 2,
    EWalkingState_MAX                              = 3
};


// UserDefinedEnum  Angelscript.EInteractAbilityModes
enum class EInteractAbilityModes : uint8_t
{
    NotSpecified                                   = 0,
    Interaction                                    = 1,
    GravityGun                                     = 2,
    EInteractAbilityModes_MAX                      = 3
};


// UserDefinedEnum  Angelscript.EReloadGravityGloveBehaviour
enum class EReloadGravityGloveBehaviour : uint8_t
{
    Prioritize_Pick_Up                             = 0,
    Prioritize_Reload                              = 1,
    Prioritize_MAX                                 = 2
};


// UserDefinedEnum  Angelscript.EReloadLoopState
enum class EReloadLoopState : uint8_t
{
    None                                           = 0,
    State1                                         = 1,
    State2                                         = 2,
    EReloadLoopState_MAX                           = 3
};


// UserDefinedEnum  Angelscript.ESingleBulletReloadState
enum class ESingleBulletReloadState : uint8_t
{
    Intro                                          = 0,
    Loop                                           = 1,
    Outro                                          = 2,
    Complete                                       = 3,
    Restock1                                       = 4,
    Restock2                                       = 5,
    Cancel                                         = 6,
    ESingleBulletReloadState_MAX                   = 7
};


// UserDefinedEnum  Angelscript.EAttackIntent
enum class EAttackIntent : uint8_t
{
    Positive                                       = 0,
    Negative                                       = 1,
    EAttackIntent_MAX                              = 2
};


// UserDefinedEnum  Angelscript.EDamageApplicationType
enum class EDamageApplicationType : uint8_t
{
    Point                                          = 0,
    Radial                                         = 1,
    EDamageApplicationType_MAX                     = 2
};


// UserDefinedEnum  Angelscript.EDamageSeverity
enum class EDamageSeverity : uint8_t
{
    Normal                                         = 0,
    Critical                                       = 1,
    EDamageSeverity_MAX                            = 2
};


// UserDefinedEnum  Angelscript.EDiscoveryDamageType
enum class EDiscoveryDamageType : uint8_t
{
    Normal                                         = 0,
    Piercing                                       = 1,
    Fire                                           = 2,
    Explosive                                      = 3,
    EDiscoveryDamageType_MAX                       = 4
};


// UserDefinedEnum  Angelscript.EActionWheelType
enum class EActionWheelType : uint8_t
{
    EmoteWheel                                     = 1,
    ExpressionWheel                                = 2,
    Undefined                                      = 3,
    EActionWheelType_MAX                           = 4
};


// UserDefinedEnum  Angelscript.EActionWheelCategory
enum class EActionWheelCategory : uint8_t
{
    Undefined                                      = 0,
    Emote                                          = 1,
    Spray                                          = 2,
    Emoticon                                       = 3,
    CharacterSoundEffect                           = 4,
    HandGesture                                    = 5,
    EActionWheelCategory_MAX                       = 6
};


// UserDefinedEnum  Angelscript.EOwningPawnMode
enum class EOwningPawnMode : uint8_t
{
    Character                                      = 0,
    Freefly                                        = 1,
    EOwningPawnMode_MAX                            = 2
};


// UserDefinedEnum  Angelscript.EPredictionCatchupState
enum class EPredictionCatchupState : uint8_t
{
    IsPredicting                                   = 0,
    StoppedPredictingWaitingForServerCatchup       = 1,
    NotPredicting                                  = 2,
    EPredictionCatchupState_MAX                    = 3
};


// UserDefinedEnum  Angelscript.EPoseCategory
enum class EPoseCategory : uint8_t
{
    Intro                                          = 0,
    Victory                                        = 1,
    EPoseCategory_MAX                              = 2
};


// UserDefinedEnum  Angelscript.ESlideCancelReason
enum class ESlideCancelReason : uint8_t
{
    FellOffLedge                                   = 0,
    LostMomentum                                   = 1,
    ValidationFailed                               = 2,
    ESlideCancelReason_MAX                         = 3
};


// UserDefinedEnum  Angelscript.ELadderLocationIndicator
enum class ELadderLocationIndicator : uint8_t
{
    InRange                                        = 0,
    Above                                          = 1,
    Under                                          = 2,
    ELadderLocationIndicator_MAX                   = 3
};


// UserDefinedEnum  Angelscript.ELadderAttachmentMode
enum class ELadderAttachmentMode : uint8_t
{
    AllSegmentsAttached                            = 0,
    TopAndBottomAttached                           = 1,
    TopAttached                                    = 2,
    ELadderAttachmentMode_MAX                      = 3
};


// UserDefinedEnum  Angelscript.EClimbingState
enum class EClimbingState : uint8_t
{
    NotClimbing                                    = 0,
    Attaching                                      = 1,
    Climbing                                       = 2,
    TopDetaching                                   = 3,
    EClimbingState_MAX                             = 4
};


// UserDefinedEnum  Angelscript.ELadderDetachVariations
enum class ELadderDetachVariations : uint8_t
{
    ReachedTop                                     = 0,
    ReachedBottom                                  = 1,
    JumpedOff                                      = 2,
    LetGo                                          = 3,
    ELadderDetachVariations_MAX                    = 4
};


// UserDefinedEnum  Angelscript.EDoorState
enum class EDoorState : uint8_t
{
    Closed                                         = 0,
    Open                                           = 1,
    OpenBashed                                     = 2,
    Detached                                       = 3,
    EDoorState_MAX                                 = 4
};


// UserDefinedEnum  Angelscript.EActorSpawnLocationPriority
enum class EActorSpawnLocationPriority : uint8_t
{
    Normal                                         = 0,
    Prioritize                                     = 1,
    DEBUG_Always                                   = 2,
    EActorSpawnLocationPriority_MAX                = 3
};


// UserDefinedEnum  Angelscript.EGravityGunDropType
enum class EGravityGunDropType : uint8_t
{
    Launch                                         = 0,
    Drop                                           = 1,
    EGravityGunDropType_MAX                        = 2
};


// UserDefinedEnum  Angelscript.EPickupableCollisionProfile
enum class EPickupableCollisionProfile : uint8_t
{
    Default                                        = 0,
    BeingGrabbed                                   = 1,
    EPickupableCollisionProfile_MAX                = 2
};


// UserDefinedEnum  Angelscript.ESquadIntroType
enum class ESquadIntroType : uint8_t
{
    None                                           = 0,
    PlayerSquadIntro                               = 1,
    OtherSquadsIntro                               = 2,
    Countdown                                      = 3,
    PlayerSquadOutro                               = 4,
    OtherSquadsOutro                               = 5,
    TournamentWinner                               = 6,
    PackSelection                                  = 7,
    Drafting                                       = 8,
    Tunnel                                         = 9,
    PlayerSquadIntroWalk                           = 10,
    PlayerSquadIntroRage                           = 11,
    TournamentStatus                               = 12,
    CasualWinner                                   = 13,
    MapIntro                                       = 14,
    Intermission                                   = 15,
    ESquadIntroType_MAX                            = 16
};


// UserDefinedEnum  Angelscript.EHandsConstraintType
enum class EHandsConstraintType : uint8_t
{
    None                                           = 0,
    HandsToRoot                                    = 1,
    RootToLeftHandMagToRightHand                   = 2,
    MagToLeftHandRootToRightHand                   = 3,
    EHandsConstraintType_MAX                       = 4
};


// UserDefinedEnum  Angelscript.EDiscoveryItemType
enum class EDiscoveryItemType : uint8_t
{
    Weapon                                         = 0,
    Gadget                                         = 1,
    Skill                                          = 2,
    QuickMelee                                     = 3,
    EDiscoveryItemType_MAX                         = 4
};


// UserDefinedEnum  Angelscript.EItemGivenEquippedState
enum class EItemGivenEquippedState : uint8_t
{
    None                                           = 0,
    Given                                          = 1,
    Equipped                                       = 2,
    EItemGivenEquippedState_MAX                    = 3
};


// UserDefinedEnum  Angelscript.EItemAmmoType
enum class EItemAmmoType : uint8_t
{
    None                                           = 0,
    OnlyClip                                       = 1,
    OnlyReserve                                    = 2,
    BothClipAndReserve                             = 3,
    EItemAmmoType_MAX                              = 4
};


// UserDefinedEnum  Angelscript.EItemComponentTickConfig
enum class EItemComponentTickConfig : uint8_t
{
    IgnoreTickConfig                               = 0,
    Off                                            = 1,
    EquippedOwningClientOnly                       = 2,
    EquippedServerOnly                             = 3,
    EquippedServerAndOwningClientOnly              = 4,
    EquippedClientsOnly                            = 5,
    GivenAndEquippedServerOnly                     = 6,
    GivenAndEquippedServerAndOwningClients         = 7,
    EItemComponentTickConfig_MAX                   = 8
};


// UserDefinedEnum  Angelscript.ECosmeticEventType
enum class ECosmeticEventType : uint8_t
{
    Local                                          = 0,
    Predicted                                      = 1,
    Server                                         = 2,
    ECosmeticEventType_MAX                         = 3
};


// UserDefinedEnum  Angelscript.EDefibrillatorState
enum class EDefibrillatorState : uint8_t
{
    Uncharged                                      = 0,
    Charging                                       = 1,
    Charged                                        = 2,
    EDefibrillatorState_MAX                        = 3
};


// UserDefinedEnum  Angelscript.EDematerializeAction
enum class EDematerializeAction : uint8_t
{
    Dematerialize                                  = 0,
    Rematerialize                                  = 1,
    EDematerializeAction_MAX                       = 2
};


// UserDefinedEnum  Angelscript.EItemMeleeSwingValidationResponse
enum class EItemMeleeSwingValidationResponse : uint8_t
{
    Validated                                      = 0,
    Queued                                         = 1,
    Failed                                         = 2,
    Failed_CouldntFindValidationForSwingId         = 3,
    Failed_TooManyHits                             = 4,
    EItemMeleeSwingValidationResponse_MAX          = 5
};


// UserDefinedEnum  Angelscript.EItemMeleeSwingPerHitValidationResponse
enum class EItemMeleeSwingPerHitValidationResponse : uint8_t
{
    Valid                                          = 0,
    Failed                                         = 1,
    Failed_HitNonExistingActor                     = 2,
    Failed_HitSamePawn                             = 3,
    Failed_HitTooManyPawns                         = 4,
    EItemMeleeSwingPerHitValidationResponse_MAX    = 5
};


// UserDefinedEnum  Angelscript.EMeleeHitType
enum class EMeleeHitType : uint8_t
{
    ActorHit                                       = 0,
    PawnHit                                        = 1,
    StaticMeshHit                                  = 2,
    EnvironmentalHit                               = 3,
    OnlyImpact                                     = 4,
    Invalid                                        = 5,
    EMeleeHitType_MAX                              = 6
};


// UserDefinedEnum  Angelscript.EPropDisguiseState
enum class EPropDisguiseState : uint8_t
{
    None                                           = 0,
    Activating                                     = 1,
    Disguised                                      = 2,
    EPropDisguiseState_MAX                         = 3
};


// UserDefinedEnum  Angelscript.EWeaponActionState
enum class EWeaponActionState : uint8_t
{
    Idle                                           = 0,
    MinDelay                                       = 1,
    MinDelayFinished                               = 2,
    ActiveAction                                   = 3,
    EWeaponActionState_MAX                         = 4
};


// UserDefinedEnum  Angelscript.EDispersionLocomotion
enum class EDispersionLocomotion : uint8_t
{
    Crouching                                      = 0,
    CrouchMoving                                   = 1,
    Standing                                       = 2,
    StandMoving                                    = 3,
    Sprinting                                      = 4,
    Uncontrollable                                 = 5,
    Max                                            = 6,
    EDispersionLocomotion_MAX                      = 7
};


// UserDefinedEnum  Angelscript.EFiringPropertiesType
enum class EFiringPropertiesType : uint8_t
{
    Primary                                        = 0,
    Secondary                                      = 1,
    EFiringPropertiesType_MAX                      = 2
};


// UserDefinedEnum  Angelscript.EWeaponEffectStyleContext
enum class EWeaponEffectStyleContext : uint8_t
{
    Gameplay                                       = 0,
    FrontendItem                                   = 1,
    FrontendCharacter                              = 2,
    EWeaponEffectStyleContext_MAX                  = 3
};


// UserDefinedEnum  Angelscript.EAttachedItemEffectStatsType
enum class EAttachedItemEffectStatsType : uint8_t
{
    None                                           = 0,
    Eliminations                                   = 1,
    EAttachedItemEffectStatsType_MAX               = 2
};


// UserDefinedEnum  Angelscript.EAttachItemEffectStatsPersistence
enum class EAttachItemEffectStatsPersistence : uint8_t
{
    Round                                          = 0,
    Tournament                                     = 1,
    EAttachItemEffectStatsPersistence_MAX          = 2
};


// UserDefinedEnum  Angelscript.EWeaponEffectPrinterState
enum class EWeaponEffectPrinterState : uint8_t
{
    Empty                                          = 0,
    Printing                                       = 1,
    Printed                                        = 2,
    Ejecting                                       = 3,
    EWeaponEffectPrinterState_MAX                  = 4
};


// UserDefinedEnum  Angelscript.EMeleeCharge_FailToReachMinChargePolicy
enum class EMeleeCharge_FailToReachMinChargePolicy : uint8_t
{
    Cancel                                         = 0,
    ForceToMin                                     = 1,
    EMeleeCharge_MAX                               = 2
};


// UserDefinedEnum  Angelscript.EMeleeCharge_FullChargeReachedPolicy
enum class EMeleeCharge_FullChargeReachedPolicy : uint8_t
{
    Swing                                          = 0,
    Cancel                                         = 1,
    EMeleeCharge_MAX                               = 2
};


// UserDefinedEnum  Angelscript.EMeleeLineOfSightPolicy
enum class EMeleeLineOfSightPolicy : uint8_t
{
    None                                           = 0,
    RayToHit                                       = 1,
    IsActorOccluded                                = 2,
    EMeleeLineOfSightPolicy_MAX                    = 3
};


// UserDefinedEnum  Angelscript.ETurretState
enum class ETurretState : uint8_t
{
    Disabled                                       = 0,
    Patrol                                         = 1,
    Alerted                                        = 2,
    Engaging                                       = 3,
    ETurretState_MAX                               = 4
};


// UserDefinedEnum  Angelscript.EProjectileValidationResult
enum class EProjectileValidationResult : uint8_t
{
    NotRequired                                    = 0,
    Failed                                         = 1,
    FailButAllowRetry                              = 2,
    Success                                        = 3,
    EProjectileValidationResult_MAX                = 4
};


// UserDefinedEnum  Angelscript.ERiotShieldCoverState
enum class ERiotShieldCoverState : uint8_t
{
    Idle                                           = 0,
    Covering                                       = 1,
    ERiotShieldCoverState_MAX                      = 2
};


// UserDefinedEnum  Angelscript.ERiotShieldActiveState
enum class ERiotShieldActiveState : uint8_t
{
    Active                                         = 0,
    NotActive                                      = 1,
    ERiotShieldActiveState_MAX                     = 2
};


// UserDefinedEnum  Angelscript.EThrowType
enum class EThrowType : uint8_t
{
    Overhand                                       = 0,
    Underhand                                      = 1,
    EThrowType_MAX                                 = 2
};


// UserDefinedEnum  Angelscript.EGooRotationMode
enum class EGooRotationMode : uint8_t
{
    Zero                                           = 0,
    UseImpactNormalForYaw                          = 1,
    UseSurfaceNormal                               = 2,
    EGooRotationMode_MAX                           = 3
};


// UserDefinedEnum  Angelscript.EGooMode
enum class EGooMode : uint8_t
{
    Normal                                         = 0,
    WallsAndPlatforms                              = 1,
    SmartWalls                                     = 2,
    EGooMode_MAX                                   = 3
};


// UserDefinedEnum  Angelscript.EGooSeedState
enum class EGooSeedState : uint8_t
{
    Init                                           = 0,
    FoundWalls                                     = 1,
    BuildingWalls                                  = 2,
    RandomGrow                                     = 3,
    EGooSeedState_MAX                              = 4
};


// UserDefinedEnum  Angelscript.EGooWallsAndPlatformsSeedState
enum class EGooWallsAndPlatformsSeedState : uint8_t
{
    Init                                           = 0,
    BuildingWall                                   = 1,
    BuildingPlatform                               = 2,
    EGooWallsAndPlatformsSeedState_MAX             = 3
};


// UserDefinedEnum  Angelscript.EFireMode
enum class EFireMode : uint8_t
{
    Single                                         = 0,
    Auto                                           = 1,
    None                                           = 2,
    Burst                                          = 3,
    Charge                                         = 4,
    EFireMode_MAX                                  = 5
};


// UserDefinedEnum  Angelscript.EWeaponAudioMode
enum class EWeaponAudioMode : uint8_t
{
    None                                           = 0,
    Component                                      = 1,
    Continuous                                     = 2,
    EWeaponAudioMode_MAX                           = 3
};


// UserDefinedEnum  Angelscript.EBurstType
enum class EBurstType : uint8_t
{
    FireRate                                       = 0,
    Sequences                                      = 1,
    EBurstType_MAX                                 = 2
};


// UserDefinedEnum  Angelscript.EProjectilePredictionState
enum class EProjectilePredictionState : uint8_t
{
    NotReady                                       = 0,
    Predicting                                     = 1,
    Done                                           = 2,
    EProjectilePredictionState_MAX                 = 3
};


// UserDefinedEnum  Angelscript.EPresentationStagePreviewState
enum class EPresentationStagePreviewState : uint8_t
{
    None                                           = 0,
    Customization                                  = 1,
    Item                                           = 2,
    EmoteOrPose                                    = 3,
    EPresentationStagePreviewState_MAX             = 4
};


// UserDefinedEnum  Angelscript.EPresentationStageScreenEvent
enum class EPresentationStageScreenEvent : uint8_t
{
    Neutral                                        = 0,
    FinalsLogo                                     = 1,
    CharacterCustomization                         = 2,
    DeckBuilding                                   = 3,
    PlayerSquadIntro                               = 4,
    OtherSquadsIntro                               = 5,
    Countdown                                      = 6,
    PlayerSquadOutro                               = 7,
    OtherSquadsOutro                               = 8,
    PackSelection                                  = 9,
    Drafting                                       = 10,
    TournamentWinner                               = 11,
    RewardFlow                                     = 12,
    CharacterCustomizationBandolier                = 13,
    CharacterCustomizationBodyType                 = 14,
    CharacterCustomizationClavicle                 = 15,
    CharacterCustomizationFace                     = 16,
    CharacterCustomizationHands                    = 17,
    CharacterCustomizationHeadwear                 = 18,
    CharacterCustomizationLowerBody                = 19,
    CharacterCustomizationLumbar                   = 20,
    CharacterCustomizationPoses                    = 21,
    CharacterCustomizationShoes                    = 22,
    CharacterCustomizationUpperBody                = 23,
    CharacterCustomizationWrist                    = 24,
    BattlePass                                     = 25,
    Backstage                                      = 26,
    ItemDetail                                     = 27,
    Tunnel                                         = 28,
    Store                                          = 29,
    Play                                           = 30,
    Leagues                                        = 31,
    Career                                         = 32,
    Contracts                                      = 33,
    RewardUnlocked                                 = 34,
    TournamentIntro                                = 35,
    CasualWinner                                   = 36,
    Collection                                     = 37,
    Circuit                                        = 38,
    CircuitItemDetails                             = 39,
    EPresentationStageScreenEvent_MAX              = 40
};


// UserDefinedEnum  Angelscript.ETournamentSequenceState
enum class ETournamentSequenceState : uint8_t
{
    None                                           = 0,
    WaitingData                                    = 1,
    Intro                                          = 2,
    StartOutroSequence                             = 3,
    WaitingForMatchesFinishedOutro                 = 4,
    ExecuteOutroSequence                           = 5,
    FinishingOutro                                 = 6,
    Finished                                       = 7,
    ETournamentSequenceState_MAX                   = 8
};


// UserDefinedEnum  Angelscript.ETournamentFlowState
enum class ETournamentFlowState : uint8_t
{
    None                                           = 0,
    PreQualifier                                   = 1,
    PostQualifier                                  = 2,
    PreQuarterFinal                                = 3,
    PostQuarterFinal                               = 4,
    PostSemiFinal                                  = 5,
    ETournamentFlowState_MAX                       = 6
};


// UserDefinedEnum  Angelscript.ETournamentTeamState
enum class ETournamentTeamState : uint8_t
{
    UnInitialized                                  = 0,
    NotActive                                      = 1,
    ShowTeam                                       = 2,
    Eliminate                                      = 3,
    ETournamentTeamState_MAX                       = 4
};


// UserDefinedEnum  Angelscript.EDiscoverySpectateMode
enum class EDiscoverySpectateMode : uint8_t
{
    Freefly                                        = 0,
    Follow                                         = 1,
    EDiscoverySpectateMode_MAX                     = 2
};


// UserDefinedEnum  Angelscript.EDiscoverySpectateRotation
enum class EDiscoverySpectateRotation : uint8_t
{
    Forward                                        = 0,
    Backwards                                      = 1,
    EDiscoverySpectateRotation_MAX                 = 2
};


// UserDefinedEnum  Angelscript.EGamepadInputResponseCurve
enum class EGamepadInputResponseCurve : uint8_t
{
    Exponential                                    = 0,
    Linear                                         = 1,
    Sinusoidal                                     = 2,
    EGamepadInputResponseCurve_MAX                 = 3
};


// UserDefinedEnum  Angelscript.ENextValidSlotDirection
enum class ENextValidSlotDirection : uint8_t
{
    Higher                                         = 0,
    Lower                                          = 1,
    ENextValidSlotDirection_MAX                    = 2
};


// UserDefinedEnum  Angelscript.EDiscoveryItemCategory
enum class EDiscoveryItemCategory : uint8_t
{
    None                                           = 0,
    RangedWeapon                                   = 1,
    MeleeWeapon                                    = 2,
    Offensive                                      = 3,
    Defensive                                      = 4,
    Utility                                        = 5,
    Skill                                          = 6,
    EDiscoveryItemCategory_MAX                     = 7
};


// UserDefinedEnum  Angelscript.EInventorySlot
enum class EInventorySlot : uint8_t
{
    Slot                                           = 0,
    Slot                                           = 1,
    Slot                                           = 2,
    Slot                                           = 3,
    Slot_Skill                                     = 4,
    Slot_Unarmed                                   = 5,
    Slot_QuickMelee                                = 6,
    NUM_Slots                                      = 7,
    EInventorySlot_MAX                             = 8
};


// UserDefinedEnum  Angelscript.EItemEquipmentState
enum class EItemEquipmentState : uint8_t
{
    Equipped                                       = 0,
    Equipping                                      = 1,
    Unequipping                                    = 2,
    Unequipped                                     = 3,
    EItemEquipmentState_MAX                        = 4
};


// UserDefinedEnum  Angelscript.ETargetHitType
enum class ETargetHitType : uint8_t
{
    None                                           = 0,
    EnemyPawn                                      = 1,
    EnemyPawnDowned                                = 2,
    EnemyPawnKilled                                = 3,
    FriendlyPawn                                   = 4,
    Object                                         = 5,
    ETargetHitType_MAX                             = 6
};


// UserDefinedEnum  Angelscript.EHitType
enum class EHitType : uint8_t
{
    None                                           = 0,
    Object                                         = 1,
    Pawn                                           = 2,
    EHitType_MAX                                   = 3
};


// UserDefinedEnum  Angelscript.EHitBodyPart
enum class EHitBodyPart : uint8_t
{
    Body                                           = 0,
    Head                                           = 1,
    EHitBodyPart_MAX                               = 2
};


// UserDefinedEnum  Angelscript.EHitAlliance
enum class EHitAlliance : uint8_t
{
    None                                           = 0,
    Friendly                                       = 1,
    Enemy                                          = 2,
    EHitAlliance_MAX                               = 3
};


// UserDefinedEnum  Angelscript.EItemRarity
enum class EItemRarity : uint8_t
{
    Common                                         = 0,
    Rare                                           = 1,
    Epic                                           = 2,
    Legendary                                      = 3,
    EItemRarity_MAX                                = 4
};


// UserDefinedEnum  Angelscript.ECharmCompanionState
enum class ECharmCompanionState : uint8_t
{
    None                                           = 0,
    Idle                                           = 1,
    Shooting                                       = 2,
    StoppedShooting                                = 3,
    Burning                                        = 4,
    Happy                                          = 5,
    Respawned                                      = 6,
    Recovering                                     = 7,
    Dead                                           = 8,
    ECharmCompanionState_MAX                       = 9
};


// UserDefinedEnum  Angelscript.ELedgeGrabShouldEnableResult
enum class ELedgeGrabShouldEnableResult : uint8_t
{
    StartedHoldingJumpThisFrame                    = 0,
    LostGroundAndHoldingJump                       = 1,
    DontEnable                                     = 2,
    ELedgeGrabShouldEnableResult_MAX               = 3
};


// UserDefinedEnum  Angelscript.ELedgeGrabTaskStatus
enum class ELedgeGrabTaskStatus : uint8_t
{
    Enabled                                        = 0,
    StoppedHoldingJump                             = 1,
    LandedOnGround                                 = 2,
    TriggeredLedgeGrab                             = 3,
    TriggeredVault                                 = 4,
    Disabled                                       = 5,
    ELedgeGrabTaskStatus_MAX                       = 6
};


// UserDefinedEnum  Angelscript.EBucketType
enum class EBucketType : uint8_t
{
    Unknown                                        = 0,
    CareerXP                                       = 1,
    GameplayItemXP                                 = 2,
    BattlepassLevel                                = 3,
    EBucketType_MAX                                = 4
};


// UserDefinedEnum  Angelscript.EPersistenceRewardType
enum class EPersistenceRewardType : uint8_t
{
    Unknown                                        = 0,
    Currency                                       = 1,
    EPersistenceRewardType_MAX                     = 2
};


// UserDefinedEnum  Angelscript.EPlayerInitStepPersistenceStatus
enum class EPlayerInitStepPersistenceStatus : uint8_t
{
    FetchInventory                                 = 0,
    AwaitInventory                                 = 1,
    InitPersistence                                = 2,
    EPlayerInitStepPersistenceStatus_MAX           = 3
};


// UserDefinedEnum  Angelscript.ECircuitStageLockReason
enum class ECircuitStageLockReason : uint8_t
{
    None                                           = 0,
    NotStarted                                     = 1,
    CircuitElapsed                                 = 2,
    RemainingContracts                             = 3,
    ECircuitStageLockReason_MAX                    = 4
};


// UserDefinedEnum  Angelscript.EOnlineConfigurationBucketType
enum class EOnlineConfigurationBucketType : uint8_t
{
    Career                                         = 0,
    BattlePass                                     = 1,
    Item                                           = 2,
    EOnlineConfigurationBucketType_MAX             = 3
};


// UserDefinedEnum  Angelscript.EPersistenceInventorySetup
enum class EPersistenceInventorySetup : uint8_t
{
    None                                           = 0,
    Real                                           = 1,
    Fake                                           = 2,
    EPersistenceInventorySetup_MAX                 = 3
};


// UserDefinedEnum  Angelscript.EQuestTrackingVerbosityOptions
enum class EQuestTrackingVerbosityOptions : uint8_t
{
    All                                            = 0,
    None                                           = 1,
    Tracked                                        = 2,
    EQuestTrackingVerbosityOptions_MAX             = 3
};


// UserDefinedEnum  Angelscript.EThingOrigin
enum class EThingOrigin : uint8_t
{
    DirectPurchase                                 = 0,
    BattlePass                                     = 1,
    ItemProgression                                = 2,
    Quest                                          = 3,
    Store                                          = 4,
    VerifyEmailReward                              = 5,
    CareerProgression                              = 6,
    SpecialOffer                                   = 7,
    Unknown                                        = 8,
    EThingOrigin_MAX                               = 9
};


// UserDefinedEnum  Angelscript.EChargeAndSlamSelection
enum class EChargeAndSlamSelection : uint8_t
{
    Charge                                         = 0,
    Slam                                           = 1,
    EChargeAndSlamSelection_MAX                    = 2
};


// UserDefinedEnum  Angelscript.ETurnDirection
enum class ETurnDirection : uint8_t
{
    Right                                          = 0,
    Left                                           = 1,
    ETurnDirection_MAX                             = 2
};


// UserDefinedEnum  Angelscript.ESteeringSmoothnessBranch
enum class ESteeringSmoothnessBranch : uint8_t
{
    IsOnLadder                                     = 0,
    IsInAir                                        = 1,
    IsInFirstPersonView                            = 2,
    IsDrasticTurning                               = 3,
    IsStillOrTurning                               = 4,
    IsInRootWarp                                   = 5,
    IsInSprintingSpam                              = 6,
    IsSprinting                                    = 7,
    Default                                        = 8,
    ESteeringSmoothnessBranch_MAX                  = 9
};


// UserDefinedEnum  Angelscript.EStickyAngleBranch
enum class EStickyAngleBranch : uint8_t
{
    IsInFirstPersonView                            = 0,
    IsMoving                                       = 1,
    IsStill                                        = 2,
    InRootWarp                                     = 3,
    OnLadder                                       = 4,
    Emote                                          = 5,
    Default                                        = 6,
    EStickyAngleBranch_MAX                         = 7
};


// UserDefinedEnum  Angelscript.ESteeringInfoBranch
enum class ESteeringInfoBranch : uint8_t
{
    Sprint                                         = 0,
    InAir                                          = 1,
    OnLadder                                       = 2,
    InVault                                        = 3,
    Default                                        = 4,
    ESteeringInfoBranch_MAX                        = 5
};


// UserDefinedEnum  Angelscript.ECharacterSize
enum class ECharacterSize : uint8_t
{
    Small                                          = 0,
    Medium                                         = 1,
    Large                                          = 2,
    ECharacterSize_MAX                             = 3
};


// UserDefinedEnum  Angelscript.EPlayerAnimEvent
enum class EPlayerAnimEvent : uint8_t
{
    UsedItem                                       = 0,
    ThrewCarriable                                 = 1,
    QuickMelee                                     = 2,
    Dash                                           = 3,
    DoorBash                                       = 4,
    ThrewGrappleHook                               = 5,
    EPlayerAnimEvent_MAX                           = 6
};


// UserDefinedEnum  Angelscript.EPresentationPlayerAnimEvent
enum class EPresentationPlayerAnimEvent : uint8_t
{
    ChangedContestantPack                          = 0,
    PreviewedCustomization                         = 1,
    EquippedCustomization                          = 2,
    ChangedPose                                    = 3,
    ChangedAttitude                                = 4,
    ChangedEmote                                   = 5,
    TriggeredEmoticon                              = 6,
    EPresentationPlayerAnimEvent_MAX               = 7
};


// UserDefinedEnum  Angelscript.EStrideWarpBranch
enum class EStrideWarpBranch : uint8_t
{
    None                                           = 0,
    Walk                                           = 1,
    Run                                            = 2,
    Sprint                                         = 3,
    CrouchWalk                                     = 4,
    EStrideWarpBranch_MAX                          = 5
};


// UserDefinedEnum  Angelscript.EHandOverrideBlendMask
enum class EHandOverrideBlendMask : uint8_t
{
    Nothing                                        = 0,
    BothHandsAndWeaponParts                        = 1,
    LeftHandAndWeaponParts                         = 2,
    RightHandAndWeaponParts                        = 3,
    WeaponPartsOnly                                = 4,
    BothHandsAndWeapon                             = 5,
    EHandOverrideBlendMask_MAX                     = 6
};


// UserDefinedEnum  Angelscript.ESprayPlayerNameSource
enum class ESprayPlayerNameSource : uint8_t
{
    OwningPlayer                                   = 0,
    LastKilled                                     = 1,
    ESprayPlayerNameSource_MAX                     = 2
};


// UserDefinedEnum  Angelscript.ERootMotionType
enum class ERootMotionType : uint8_t
{
    VaultOnto                                      = 0,
    VaultOver                                      = 1,
    LedgeGrab                                      = 2,
    ERootMotionType_MAX                            = 3
};


// UserDefinedEnum  Angelscript.EDiscoveryCustomTraceChannels
enum class EDiscoveryCustomTraceChannels : uint8_t
{
    Pingable                                       = 1,
    AIVisibility                                   = 2,
    ContextualActionCandidate                      = 3,
    AudioObstruction                               = 4,
    RadialBlock                                    = 5,
    Vaultable                                      = 6,
    GravityGloveOverlap                            = 7,
    ImpreciseGun                                   = 8,
    EDiscoveryCustomTraceChannels_MAX              = 9
};


// UserDefinedEnum  Angelscript.ERadialWheelInput
enum class ERadialWheelInput : uint8_t
{
    LeftStick                                      = 0,
    RightStick                                     = 1,
    ERadialWheelInput_MAX                          = 2
};


// UserDefinedEnum  Angelscript.EUAtomSystemItemStatsRowStyle
enum class EUAtomSystemItemStatsRowStyle : uint8_t
{
    ProgressBar                                    = 0,
    Text                                           = 1,
    EUAtomSystemItemStatsRowStyle_MAX              = 2
};


// UserDefinedEnum  Angelscript.EState
enum class EState : uint8_t
{
    Idle                                           = 0,
    Locked                                         = 1,
    Active                                         = 2,
    Hover                                          = 3,
    Hint                                           = 4,
    HintLocked                                     = 5,
    HudInventory                                   = 6,
    EState_MAX                                     = 7
};


// UserDefinedEnum  Angelscript.EColor
enum class EColor : uint8_t
{
    Primary                                        = 0,
    Secondary                                      = 1,
    Neutral                                        = 2,
    EColor_MAX                                     = 3
};


// UserDefinedEnum  Angelscript.EStyle
enum class EStyle : uint8_t
{
    Unassigned                                     = 0,
    Key                                            = 1,
    Icon                                           = 2,
    ExplicitlyUnbound                              = 3,
    EStyle_MAX                                     = 4
};


// UserDefinedEnum  Angelscript.EHintStyle
enum class EHintStyle : uint8_t
{
    Header                                         = 0,
    Simple                                         = 1,
    EHintStyle_MAX                                 = 2
};


// UserDefinedEnum  Angelscript.EFormattingStyle
enum class EFormattingStyle : uint8_t
{
    PlainNumbers                                   = 0,
    Percentage                                     = 1,
    Custom                                         = 2,
    EFormattingStyle_MAX                           = 3
};


// UserDefinedEnum  Angelscript.EAtomSystemOptionUpdateValue
enum class EAtomSystemOptionUpdateValue : uint32_t
{
    Next                                           = 1,
    Previous                                       = 4294967295,
    EAtomSystemOptionUpdateValue_MAX               = 2
};


// UserDefinedEnum  Angelscript.EAtomSystemPaginationMarkerType
enum class EAtomSystemPaginationMarkerType : uint8_t
{
    Regular                                        = 0,
    Sponsor                                        = 1,
    EAtomSystemPaginationMarkerType_MAX            = 2
};


// UserDefinedEnum  Angelscript.EPlayerProfileVoipStatus
enum class EPlayerProfileVoipStatus : uint8_t
{
    Talking                                        = 0,
    Silent                                         = 1,
    Muted                                          = 2,
    EPlayerProfileVoipStatus_MAX                   = 3
};


// UserDefinedEnum  Angelscript.EAtomSystemSurveySentinment
enum class EAtomSystemSurveySentinment : uint8_t
{
    None                                           = 0,
    Positive                                       = 1,
    Negative                                       = 2,
    EAtomSystemSurveySentinment_MAX                = 3
};


// UserDefinedEnum  Angelscript.EAtomSystemTileItemState
enum class EAtomSystemTileItemState : uint8_t
{
    Default                                        = 0,
    Locked                                         = 1,
    Equipped                                       = 2,
    LockedOffer                                    = 3,
    UnlockedOffer                                  = 4,
    Owned                                          = 5,
    LockedOfferAlt                                 = 6,
    UnlockedOfferAlt                               = 7,
    OwnedAlt                                       = 8,
    UnlockedShowCheckmark                          = 9,
    EAtomSystemTileItemState_MAX                   = 10
};


// UserDefinedEnum  Angelscript.EVOIPStatusIcon
enum class EVOIPStatusIcon : uint8_t
{
    UnInitialized                                  = 0,
    Disabled                                       = 1,
    Muted                                          = 2,
    Idle                                           = 3,
    SpeakingPhaseA                                 = 4,
    SpeakingPhaseB                                 = 5,
    EVOIPStatusIcon_MAX                            = 6
};


// UserDefinedEnum  Angelscript.EAccountScreenStage
enum class EAccountScreenStage : uint8_t
{
    CreateAccount                                  = 0,
    UpdateAccount                                  = 1,
    UpdateEmail                                    = 2,
    EAccountScreenStage_MAX                        = 3
};


// UserDefinedEnum  Angelscript.EExitReasonType
enum class EExitReasonType : uint8_t
{
    NetworkConnectionLost                          = 0,
    PendingConnectionFailed                        = 1,
    ServerKick                                     = 2,
    ConnectionTimeout                              = 3,
    Logout                                         = 4,
    OutdatedClient                                 = 5,
    AccountBanned                                  = 6,
    ServerPlayerInit_CriticalFailure               = 7,
    ServerPlayerInit_Connection_PlayerTimedOut     = 8,
    ServerPlayerInit_AssignSquad_OSS               = 9,
    ServerPlayerInit_AssignSquad_Timeout           = 10,
    ServerPlayerInit_GameMode_InvalidPlayer        = 11,
    ServerPlayerInit_GameMode_LevelUnavailable     = 12,
    ServerPlayerInit_Inventory_NoOSS               = 13,
    ServerPlayerInit_Inventory_Invalid             = 14,
    ServerPlayerInit_Inventory_MissingPack         = 15,
    ServerPlayerInit_Inventory_ForbiddenPack       = 16,
    ServerPlayerInit_Persistence_NoInventory       = 17,
    ServerPlayerInit_Persistence_NoItemRanks       = 18,
    ServerPlayerInit_Persistence_OSSTimeout        = 19,
    ServerPlayerInit_Persistence_TooManyFailedAttempts = 20,
    ServerKick_AntiCheat_Invalid                   = 21,
    ServerKick_AntiCheat_InternalError             = 22,
    ServerKick_AntiCheat_InvalidMessage            = 23,
    ServerKick_AntiCheat_AuthenticationFailed      = 24,
    ServerKick_AntiCheat_NullClient                = 25,
    ServerKick_AntiCheat_HeartbeatTimeout          = 26,
    ServerKick_AntiCheat_ClientViolation           = 27,
    ServerKick_AntiCheat_BackendViolation          = 28,
    ServerKick_AntiCheat_TemporaryCooldown         = 29,
    ServerKick_AntiCheat_TemporaryBanned           = 30,
    ServerKick_AntiCheat_PermanentBanned           = 31,
    EmptyReserved0                                 = 32,
    EmptyReserved1                                 = 33,
    EmptyReserved2                                 = 34,
    EmptyReserved3                                 = 35,
    EmptyReserved4                                 = 36,
    ServerGameplay_InactivityKick                  = 37,
    ServerGameplay_PlayerNotAllowedKick            = 38,
    EExitReasonType_MAX                            = 39
};


// UserDefinedEnum  Angelscript.ELoginFailureReason
enum class ELoginFailureReason : uint8_t
{
    GenericFailure                                 = 0,
    AccountSuspended                               = 1,
    CountryBlocked                                 = 2,
    ELoginFailureReason_MAX                        = 3
};


// UserDefinedEnum  Angelscript.EServiceType
enum class EServiceType : uint8_t
{
    None                                           = 0,
    Party                                          = 1,
    PlatformFriends                                = 2,
    Friends                                        = 3,
    PlatformBlockedUsers                           = 4,
    BlockedUsers                                   = 5,
    Manifest                                       = 6,
    Inventory                                      = 7,
    RoundStats                                     = 8,
    RankRewards                                    = 9,
    Ranks                                          = 10,
    BattlePass                                     = 11,
    SurveySettings                                 = 12,
    Build                                          = 13,
    Store                                          = 14,
    Purchase                                       = 15,
    Scenarios                                      = 16,
    Announcements                                  = 17,
    PersistentPlayerKeys                           = 18,
    Achievements                                   = 19,
    MatchmakingTimeEstimates                       = 20,
    OnlineGameSettings                             = 21,
    Gifts                                          = 22,
    RecentPlayers                                  = 23,
    QuestDescription                               = 24,
    LeagueRank                                     = 25,
    EServiceType_MAX                               = 26
};


// UserDefinedEnum  Angelscript.ESyncResult
enum class ESyncResult : uint8_t
{
    Success                                        = 0,
    ManifestNotFound                               = 1,
    ManifestFailedToDownload                       = 2,
    ServiceSyncFailed                              = 3,
    ServiceSyncFailedTimeout                       = 4,
    ESyncResult_MAX                                = 5
};


// UserDefinedEnum  Angelscript.ECreateAccountModalClosedResult
enum class ECreateAccountModalClosedResult : uint8_t
{
    Back                                           = 0,
    Success                                        = 1,
    Failure                                        = 2,
    ECreateAccountModalClosedResult_MAX            = 3
};


// UserDefinedEnum  Angelscript.ELinkAccountModalClosedResult
enum class ELinkAccountModalClosedResult : uint8_t
{
    Back                                           = 0,
    Success                                        = 1,
    Failure                                        = 2,
    FailureUserSuspended                           = 3,
    ELinkAccountModalClosedResult_MAX              = 4
};


// UserDefinedEnum  Angelscript.ESignInModalClosedResult
enum class ESignInModalClosedResult : uint8_t
{
    CreateAccount                                  = 0,
    SignIn                                         = 1,
    ESignInModalClosedResult_MAX                   = 2
};


// UserDefinedEnum  Angelscript.EUpdateAccountModalClosedResult
enum class EUpdateAccountModalClosedResult : uint8_t
{
    Success                                        = 0,
    Failure                                        = 1,
    EUpdateAccountModalClosedResult_MAX            = 2
};


// UserDefinedEnum  Angelscript.EUpdateEmailModalClosedResult
enum class EUpdateEmailModalClosedResult : uint8_t
{
    Skipped                                        = 0,
    Success                                        = 1,
    Failure                                        = 2,
    EUpdateEmailModalClosedResult_MAX              = 3
};


// UserDefinedEnum  Angelscript.EUpdateEmailModalState
enum class EUpdateEmailModalState : uint8_t
{
    Idle                                           = 0,
    Sent                                           = 1,
    EUpdateEmailModalState_MAX                     = 2
};


// UserDefinedEnum  Angelscript.ECommunicationUIActionType
enum class ECommunicationUIActionType : uint8_t
{
    Ping                                           = 0,
    Emote                                          = 1,
    Expression                                     = 2,
    ECommunicationUIActionType_MAX                 = 3
};


// UserDefinedEnum  Angelscript.EUIBackendError
enum class EUIBackendError : uint8_t
{
    InventoryModel_Mutate                          = 0,
    AccountCreation_Failure                        = 1,
    AccountLinking_AccountSuspended                = 2,
    AccountLinking_Failure                         = 3,
    AccountUpdate_Failure                          = 4,
    EmailUpdate_Failure                            = 5,
    ManifestFailure                                = 6,
    Matchmaking_Suspended                          = 7,
    Matchmaking_LatencyTooHigh                     = 8,
    Battlepass_UnlockRewardError                   = 9,
    ItemUnlock_Failure                             = 10,
    Store_LoadError                                = 11,
    Store_UIError                                  = 12,
    Login_GenericFailure                           = 13,
    CrossPlay_Invalid                              = 14,
    EUIBackendError_MAX                            = 15
};


// UserDefinedEnum  Angelscript.EEventLogPingRulesetResult
enum class EEventLogPingRulesetResult : uint8_t
{
    ERROR_UNKNOWN                                  = 0,
    ERROR_INVALID_RULESET                          = 1,
    ERROR_INCORRECT_FORMATTABLE_STRING_SETUP       = 2,
    ERROR_UNABLE_TO_RESOLVE_TEXT_PARAMETER         = 3,
    DONT_SHOW_EVENT_LOG_MESSAGE                    = 4,
    Success                                        = 5,
    EEventLogPingRulesetResult_MAX                 = 6
};


// UserDefinedEnum  Angelscript.EEventLogRowType
enum class EEventLogRowType : uint8_t
{
    Reported                                       = 0,
    Blocked                                        = 1,
    VoiceChatJoin                                  = 2,
    VoiceChatLeave                                 = 3,
    Ping                                           = 4,
    PingReply                                      = 5,
    PartyJoin                                      = 6,
    PartyInvitationSent                            = 7,
    PartyInvitationDeclined                        = 8,
    SanctionTournamentAbandon                      = 9,
    PressKeyToJoinVoiceChat                        = 10,
    PlayerConnected                                = 11,
    PlayerDisconnected                             = 12,
    PlayerReconnected                              = 13,
    PlayerAbandoned                                = 14,
    PlayerKicked                                   = 15,
    FriendRequestReceived                          = 16,
    FriendRequestSent                              = 17,
    FriendRequestAccepted                          = 18,
    FriendRequestDeclined                          = 19,
    JoinPartyCompleted                             = 20,
    PartyMemberLeft                                = 21,
    InactivityKickWarning                          = 22,
    FriendIsNowOnline                              = 23,
    QuestProgress                                  = 24,
    QuestCompleted                                 = 25,
    KickedFromLobby                                = 26,
    EEventLogRowType_MAX                           = 27
};


// UserDefinedEnum  Angelscript.EEventLogSpamCheckPolicy
enum class EEventLogSpamCheckPolicy : uint8_t
{
    None                                           = 0,
    PreventDuplicatesInTheEnd                      = 1,
    EEventLogSpamCheckPolicy_MAX                   = 2
};


// UserDefinedEnum  Angelscript.EDiscoveryCharacterCaptureType
enum class EDiscoveryCharacterCaptureType : uint8_t
{
    Icon                                           = 0,
    PlayerCard                                     = 1,
    EDiscoveryCharacterCaptureType_MAX             = 2
};


// UserDefinedEnum  Angelscript.EAttachMethod
enum class EAttachMethod : uint8_t
{
    PointConstraint                                = 0,
    OrientConstraint                               = 1,
    ParentConstraint                               = 2,
    EAttachMethod_MAX                              = 3
};


// UserDefinedEnum  Angelscript.EFrontendItemActorPivotMode
enum class EFrontendItemActorPivotMode : uint8_t
{
    ItemPivot                                      = 0,
    CharmSocket                                    = 1,
    StickerSlot                                    = 2,
    None                                           = 3,
    EFrontendItemActorPivotMode_MAX                = 4
};


// UserDefinedEnum  Angelscript.EFocusGuardGroup
enum class EFocusGuardGroup : uint8_t
{
    A                                              = 0,
    B                                              = 1,
    None                                           = 2,
    EFocusGuardGroup_MAX                           = 3
};


// UserDefinedEnum  Angelscript.ERichPresenceStatus
enum class ERichPresenceStatus : uint8_t
{
    None                                           = 0,
    Status_MainMenu                                = 1,
    Status_Playing                                 = 2,
    ERichPresenceStatus_MAX                        = 3
};


// UserDefinedEnum  Angelscript.EItemProgressionFilter
enum class EItemProgressionFilter : uint8_t
{
    Owned                                          = 1,
    NotOwned                                       = 2,
    EItemProgressionFilter_MAX                     = 3
};


// UserDefinedEnum  Angelscript.ESortableItemProgressionSortingKey
enum class ESortableItemProgressionSortingKey : uint8_t
{
    RelativeProgression                            = 0,
    AbsoluteProgression                            = 1,
    ESortableItemProgressionSortingKey_MAX         = 2
};


// UserDefinedEnum  Angelscript.ESortableItemProgressionSortingOrder
enum class ESortableItemProgressionSortingOrder : uint8_t
{
    Ascending                                      = 0,
    Descending                                     = 1,
    ESortableItemProgressionSortingOrder_MAX       = 2
};


// UserDefinedEnum  Angelscript.EMatchMakingNotificationState
enum class EMatchMakingNotificationState : uint8_t
{
    Maximized                                      = 0,
    GameFound                                      = 1,
    Joining                                        = 2,
    EMatchMakingNotificationState_MAX              = 3
};


// UserDefinedEnum  Angelscript.EPushNotificationType
enum class EPushNotificationType : uint8_t
{
    Generic                                        = 0,
    PartyInvite                                    = 1,
    EPushNotificationType_MAX                      = 2
};


// UserDefinedEnum  Angelscript.EBattlepassUnlockRewardNotificationClosedReason
enum class EBattlepassUnlockRewardNotificationClosedReason : uint8_t
{
    Closed                                         = 0,
    Completed                                      = 1,
    Error                                          = 2,
    EBattlepassUnlockRewardNotificationClosedReason_MAX = 3
};


// UserDefinedEnum  Angelscript.EBattlepassRewardStyle
enum class EBattlepassRewardStyle : uint8_t
{
    Default                                        = 0,
    Highlighted                                    = 1,
    EBattlepassRewardStyle_MAX                     = 2
};


// UserDefinedEnum  Angelscript.EBattlepassCategory
enum class EBattlepassCategory : uint8_t
{
    Default                                        = 0,
    Premium                                        = 1,
    EBattlepassCategory_MAX                        = 2
};


// UserDefinedEnum  Angelscript.ECollectionItemUnlockRewardScreenDestination
enum class ECollectionItemUnlockRewardScreenDestination : uint8_t
{
    Back                                           = 0,
    Overview                                       = 1,
    OverviewFromCollection                         = 2,
    ECollectionItemUnlockRewardScreenDestination_MAX = 3
};


// UserDefinedEnum  Angelscript.ECollectionQuerySortingKey
enum class ECollectionQuerySortingKey : uint8_t
{
    Name                                           = 0,
    Unlocked                                       = 1,
    ECollectionQuerySortingKey_MAX                 = 2
};


// UserDefinedEnum  Angelscript.ECollectionQuerySortingOrder
enum class ECollectionQuerySortingOrder : uint8_t
{
    Ascending                                      = 0,
    Descending                                     = 1,
    ECollectionQuerySortingOrder_MAX               = 2
};


// UserDefinedEnum  Angelscript.ECollectionQueryFilterCategory
enum class ECollectionQueryFilterCategory : uint8_t
{
    None                                           = 0,
    Weapon                                         = 1,
    Gadget                                         = 2,
    Specialization                                 = 4,
    Light                                          = 8,
    Medium                                         = 16,
    Heavy                                          = 32,
    All                                            = 63,
    ECollectionQueryFilterCategory_MAX             = 64
};


// UserDefinedEnum  Angelscript.ECollectionQueryFilterValue
enum class ECollectionQueryFilterValue : uint8_t
{
    TRUE                                           = 0,
    FALSE                                          = 1,
    Both                                           = 2,
    ECollectionQueryFilterValue_MAX                = 3
};


// UserDefinedEnum  Angelscript.EPrivateMatchPlayerState
enum class EPrivateMatchPlayerState : uint8_t
{
    NotInLobby                                     = 0,
    Owner                                          = 1,
    OwnerGameInProgress                            = 2,
    OwnerGameStarted                               = 3,
    Player                                         = 4,
    PlayerGameInProgress                           = 5,
    PlayerGameStarted                              = 6,
    EPrivateMatchPlayerState_MAX                   = 7
};


// UserDefinedEnum  Angelscript.EPrivateMatchAction
enum class EPrivateMatchAction : uint8_t
{
    Back                                           = 0,
    RequestFocus                                   = 1,
    CreateLobby                                    = 2,
    CreateLobbyRequest                             = 3,
    CrossplayChanged                               = 4,
    JoinLobby                                      = 5,
    JoinLobbyRequest                               = 6,
    LeaveLobby                                     = 7,
    LeaveLobbyRequest                              = 8,
    LobbyChanged                                   = 9,
    GameInProgress                                 = 10,
    SelectGameMode                                 = 11,
    StartEarly                                     = 12,
    ViewTutorial                                   = 13,
    SelectMap                                      = 14,
    ClickPlayer                                    = 15,
    ExcludeLobbyLeader                             = 16,
    EPrivateMatchAction_MAX                        = 17
};


// UserDefinedEnum  Angelscript.EPrivateMatchErrorState
enum class EPrivateMatchErrorState : uint8_t
{
    CrossplayDisabled                              = 0,
    CrossplayEnabled                               = 1,
    InvalidCode                                    = 2,
    LobbyFull                                      = 3,
    MatchInProgress                                = 4,
    SomethingWrong                                 = 5,
    WaitingForPartyLeader                          = 6,
    UserRestriction                                = 7,
    UserBlocked                                    = 8,
    PartyRestriction                               = 9,
    PartyTooBig                                    = 10,
    EPrivateMatchErrorState_MAX                    = 11
};


// UserDefinedEnum  Angelscript.EPrivateMatchNotificationState
enum class EPrivateMatchNotificationState : uint8_t
{
    Maximized                                      = 0,
    GameFound                                      = 1,
    Joining                                        = 2,
    EPrivateMatchNotificationState_MAX             = 3
};


// UserDefinedEnum  Angelscript.ELeaguePlacementProgressState
enum class ELeaguePlacementProgressState : uint8_t
{
    NotPlayed                                      = 0,
    Loss                                           = 1,
    Win                                            = 2,
    ELeaguePlacementProgressState_MAX              = 3
};


// UserDefinedEnum  Angelscript.ELeagueRewardTileState
enum class ELeagueRewardTileState : uint8_t
{
    Current                                        = 0,
    Unlocked                                       = 1,
    Locked                                         = 2,
    ELeagueRewardTileState_MAX                     = 3
};


// UserDefinedEnum  Angelscript.EContestantHoverState
enum class EContestantHoverState : uint8_t
{
    Unkown                                         = 0,
    ShowDelay                                      = 1,
    Visible                                        = 2,
    HideDelay                                      = 3,
    EContestantHoverState_MAX                      = 4
};


// UserDefinedEnum  Angelscript.EBodytypeOverlayType
enum class EBodytypeOverlayType : uint8_t
{
    Title                                          = 0,
    ItemTitle                                      = 1,
    Clear                                          = 2,
    EBodytypeOverlayType_MAX                       = 3
};


// UserDefinedEnum  Angelscript.EProgressionItemType
enum class EProgressionItemType : uint8_t
{
    CustomizationItem                              = 0,
    WeaponSkin                                     = 1,
    Currency                                       = 2,
    InventoryItem                                  = 3,
    Archetype                                      = 4,
    Charm                                          = 5,
    Sticker                                        = 6,
    CharacterExpressionItem                        = 7,
    Unknown                                        = 8,
    EProgressionItemType_MAX                       = 9
};


// UserDefinedEnum  Angelscript.ERewardFlowState
enum class ERewardFlowState : uint8_t
{
    ShowEventContracts                             = 0,
    ShowEventContractRewards                       = 1,
    ShowItemAcquisitionPromotion                   = 2,
    ShowQuestXPGained                              = 3,
    ShowRoundXPGained                              = 4,
    ShowRankProgress                               = 5,
    CountCareerXPGained                            = 6,
    CountBPXPGained                                = 7,
    ShowItemProgressionPromotion                   = 8,
    ShowItemAcquisitionProgress                    = 9,
    CountIAXPGained                                = 10,
    ShowCareerRewards                              = 11,
    ShowBPRewards                                  = 12,
    ShowRandomRewards                              = 13,
    ShowLeagueRewards                              = 14,
    ShowArchetypeRewards                           = 15,
    ShowItemProgressionRewards                     = 16,
    ShowCircuitRewards                             = 17,
    ShowOverview                                   = 18,
    Finished                                       = 19,
    ERewardFlowState_MAX                           = 20
};


// UserDefinedEnum  Angelscript.ESpecialEvents
enum class ESpecialEvents : uint8_t
{
    Halloween                                      = 0,
    Christmas                                      = 1,
    ESpecialEvents_MAX                             = 2
};


// UserDefinedEnum  Angelscript.EStoreOfferIconVariant
enum class EStoreOfferIconVariant : uint8_t
{
    Small                                          = 0,
    Large                                          = 1,
    EStoreOfferIconVariant_MAX                     = 2
};


// UserDefinedEnum  Angelscript.EStoreOfferVideoRoundness
enum class EStoreOfferVideoRoundness : uint8_t
{
    AllCornersRound                                = 0,
    TopCornersRound                                = 1,
    EStoreOfferVideoRoundness_MAX                  = 2
};


// UserDefinedEnum  Angelscript.EStorePurchaseNotificationClosedReason
enum class EStorePurchaseNotificationClosedReason : uint8_t
{
    Closed                                         = 0,
    Completed                                      = 1,
    Error                                          = 2,
    EStorePurchaseNotificationClosedReason_MAX     = 3
};


// UserDefinedEnum  Angelscript.EStorePurchaseState
enum class EStorePurchaseState : uint8_t
{
    Idle                                           = 0,
    Prevented                                      = 1,
    Processing                                     = 2,
    Succeeded                                      = 3,
    Failed                                         = 4,
    EStorePurchaseState_MAX                        = 5
};


// UserDefinedEnum  Angelscript.EUIStoreGetFocusableReason
enum class EUIStoreGetFocusableReason : uint8_t
{
    Generic                                        = 0,
    PurchaseNotificationClosed                     = 1,
    EUIStoreGetFocusableReason_MAX                 = 2
};


// UserDefinedEnum  Angelscript.EStoreOfferEquipType
enum class EStoreOfferEquipType : uint8_t
{
    Animation                                      = 0,
    BodyType                                       = 1,
    Charm                                          = 2,
    CustomizationItem                              = 3,
    Emote                                          = 4,
    Emoticon                                       = 5,
    Gesture                                        = 6,
    Outfit                                         = 7,
    SoundEffect                                    = 8,
    Spray                                          = 9,
    Sticker                                        = 10,
    WeaponSkin                                     = 11,
    Unknown                                        = 12,
    EStoreOfferEquipType_MAX                       = 13
};


// UserDefinedEnum  Angelscript.EPlayerInfoType
enum class EPlayerInfoType : uint8_t
{
    Self                                           = 0,
    Friend                                         = 1,
    PartyMember                                    = 2,
    TeamMember                                     = 3,
    OtherPlayer                                    = 4,
    FriendRequest                                  = 5,
    SentFriendRequest                              = 6,
    PartyInvite                                    = 7,
    RecentPlayer                                   = 8,
    BlockedPlayer                                  = 9,
    LobbyMember                                    = 10,
    EPlayerInfoType_MAX                            = 11
};


// UserDefinedEnum  Angelscript.EPlayerWidgetActivity
enum class EPlayerWidgetActivity : uint8_t
{
    Hidden                                         = 0,
    OnlineState                                    = 1,
    LastSeen                                       = 2,
    RequestedFriendship                            = 3,
    PendingFriendship                              = 4,
    RichPresence                                   = 5,
    EPlayerWidgetActivity_MAX                      = 6
};


// UserDefinedEnum  Angelscript.ESocialQuickActionState
enum class ESocialQuickActionState : uint8_t
{
    Visible                                        = 0,
    Disabled                                       = 1,
    Hidden                                         = 2,
    ESocialQuickActionState_MAX                    = 3
};


// UserDefinedEnum  Angelscript.ESortablePlayerProfileSortMode
enum class ESortablePlayerProfileSortMode : uint8_t
{
    ByDisplayName                                  = 0,
    ByLastSeen                                     = 1,
    ESortablePlayerProfileSortMode_MAX             = 2
};


// UserDefinedEnum  Angelscript.ESortableFriendSortMode
enum class ESortableFriendSortMode : uint8_t
{
    ByDisplayName                                  = 0,
    ByRichPresence                                 = 1,
    ESortableFriendSortMode_MAX                    = 2
};


// UserDefinedEnum  Angelscript.ESortablePartyInvitationSortMode
enum class ESortablePartyInvitationSortMode : uint8_t
{
    ByDisplayName                                  = 0,
    ByTimeStamp                                    = 1,
    ESortablePartyInvitationSortMode_MAX           = 2
};


// UserDefinedEnum  Angelscript.EEndOfRoundResult
enum class EEndOfRoundResult : uint8_t
{
    None                                           = 0,
    Winner                                         = 1,
    TournamentWinner                               = 2,
    Qualified                                      = 3,
    KnockedOut                                     = 4,
    PlacementSecond                                = 5,
    PlacementThird                                 = 6,
    PlacementFourth                                = 7,
    EEndOfRoundResult_MAX                          = 8
};


// UserDefinedEnum  Angelscript.EKillCamDeathReason
enum class EKillCamDeathReason : uint8_t
{
    Eliminated                                     = 0,
    Suicide                                        = 1,
    Hazard                                         = 2,
    AFK                                            = 3,
    EKillCamDeathReason_MAX                        = 4
};


// UserDefinedEnum  Angelscript.EItemMenuType
enum class EItemMenuType : uint8_t
{
    Item                                           = 0,
    Skin                                           = 1,
    Charm                                          = 2,
    WeaponSticker                                  = 3,
    WeaponAnimation                                = 4,
    Spray                                          = 5,
    Emoticon                                       = 6,
    CharacterSoundEffect                           = 7,
    HandGesture                                    = 8,
    CharacterOutfit                                = 9,
    CharacterCustomizationItem                     = 10,
    EItemMenuType_MAX                              = 11
};


// UserDefinedEnum  Angelscript.EDraftingOverlayState
enum class EDraftingOverlayState : uint8_t
{
    Hidden                                         = 0,
    Closed                                         = 1,
    Open                                           = 2,
    InCollection                                   = 3,
    EDraftingOverlayState_MAX                      = 4
};


// UserDefinedEnum  Angelscript.ECrossHairADSVisibility
enum class ECrossHairADSVisibility : uint8_t
{
    IgnoreAimDownScope                             = 0,
    OnlyVisibleWhenAimDownScope                    = 1,
    NotVisibleWhenAimDownScope                     = 2,
    ECrossHairADSVisibility_MAX                    = 3
};


// UserDefinedEnum  Angelscript.ETagFilteredCrossHairMaterialMode
enum class ETagFilteredCrossHairMaterialMode : uint8_t
{
    Raw                                            = 0,
    ThinCircleRadial                               = 1,
    Cross                                          = 2,
    Dot                                            = 3,
    ETagFilteredCrossHairMaterialMode_MAX          = 4
};


// UserDefinedEnum  Angelscript.ECashoutTabBoardPlayerState
enum class ECashoutTabBoardPlayerState : uint8_t
{
    Connected                                      = 0,
    Disconnected                                   = 1,
    Abandoned                                      = 2,
    ECashoutTabBoardPlayerState_MAX                = 3
};


// UserDefinedEnum  Angelscript.EHintShaderState
enum class EHintShaderState : uint8_t
{
    Attention                                      = 0,
    Attach                                         = 1,
    Enemy                                          = 2,
    None                                           = 3,
    EHintShaderState_MAX                           = 4
};


// UserDefinedEnum  Angelscript.ECashBoxCarrier
enum class ECashBoxCarrier : uint8_t
{
    None                                           = 0,
    Friendly                                       = 1,
    Enemy                                          = 2,
    ECashBoxCarrier_MAX                            = 3
};


// UserDefinedEnum  Angelscript.ECharacterMode
enum class ECharacterMode : uint8_t
{
    Letter                                         = 0,
    Number                                         = 1,
    InsigniaLow                                    = 2,
    InsigniaHigh                                   = 3,
    Icon                                           = 4,
    ECharacterMode_MAX                             = 5
};


// UserDefinedEnum  Angelscript.EWorldIconProjectionArea
enum class EWorldIconProjectionArea : uint8_t
{
    CrosshairZone                                  = 0,
    FocusZone                                      = 1,
    OnScreen                                       = 2,
    AtEdge                                         = 3,
    EWorldIconProjectionArea_MAX                   = 4
};


// UserDefinedEnum  Angelscript.EHitMarkerMaterialType
enum class EHitMarkerMaterialType : uint8_t
{
    ECrosshair                                     = 0,
    ECrosshairDashed                               = 1,
    ECutDiamond                                    = 2,
    ECircle                                        = 3,
    ECircleInwardDashes                            = 4,
    EHitMarkerMaterialType_MAX                     = 5
};


// UserDefinedEnum  Angelscript.EHUDHitMarkerType
enum class EHUDHitMarkerType : uint8_t
{
    None                                           = 0,
    Object                                         = 1,
    Friendly                                       = 2,
    EnemyHit                                       = 3,
    EnemyHeadshotHit                               = 4,
    EnemyDowned                                    = 5,
    EnemyKilled                                    = 6,
    EHUDHitMarkerType_MAX                          = 7
};


// UserDefinedEnum  Angelscript.EInstigatorTrackingStrategy
enum class EInstigatorTrackingStrategy : uint8_t
{
    None                                           = 0,
    CharacterAlive                                 = 1,
    ValidActor                                     = 2,
    EInstigatorTrackingStrategy_MAX                = 3
};


// UserDefinedEnum  Angelscript.EReadyButtonState
enum class EReadyButtonState : uint8_t
{
    PressReady                                     = 0,
    WaitingForOthers                               = 1,
    Countdown                                      = 2,
    EReadyButtonState_MAX                          = 3
};


// UserDefinedEnum  Angelscript.EShareResultButtonState
enum class EShareResultButtonState : uint8_t
{
    ShareResult                                    = 0,
    ResultCopyed                                   = 1,
    EShareResultButtonState_MAX                    = 2
};


// UserDefinedEnum  Angelscript.ESquadListDisplayMode
enum class ESquadListDisplayMode : uint8_t
{
    EveryoneButSelf                                = 0,
    Filtered                                       = 1,
    ESquadListDisplayMode_MAX                      = 2
};


// UserDefinedEnum  Angelscript.EKillLogInteraction
enum class EKillLogInteraction : uint8_t
{
    Kill                                           = 0,
    Revive                                         = 1,
    EKillLogInteraction_MAX                        = 2
};


// UserDefinedEnum  Angelscript.EKillLogDisplayMode
enum class EKillLogDisplayMode : uint8_t
{
    SquadRelevant                                  = 0,
    All                                            = 1,
    EKillLogDisplayMode_MAX                        = 2
};


// UserDefinedEnum  Angelscript.ECurrencyType
enum class ECurrencyType : uint8_t
{
    Unknown                                        = 0,
    Soft                                           = 1,
    Hard                                           = 2,
    ItemAcquisition                                = 3,
    ECurrencyType_MAX                              = 4
};


// UserDefinedEnum  Angelscript.EEventType
enum class EEventType : uint8_t
{
    TypeA                                          = 0,
    TypeB                                          = 1,
    TypeC                                          = 2,
    EEventType_MAX                                 = 3
};


// UserDefinedEnum  Angelscript.EGameModeCategory
enum class EGameModeCategory : uint8_t
{
    Quickplay                                      = 0,
    Tournament                                     = 1,
    Practice                                       = 2,
    Event                                          = 3,
    EGameModeCategory_MAX                          = 4
};


// UserDefinedEnum  Angelscript.EItemStatDisplay
enum class EItemStatDisplay : uint8_t
{
    BarDisplay                                     = 0,
    NumberDisplay                                  = 1,
    TextDisplay                                    = 2,
    EItemStatDisplay_MAX                           = 3
};


// UserDefinedEnum  Angelscript.EDamageLogPresentation
enum class EDamageLogPresentation : uint8_t
{
    Count                                          = 0,
    Duration                                       = 1,
    EDamageLogPresentation_MAX                     = 2
};


// UserDefinedEnum  Angelscript.EStoreOfferRarity
enum class EStoreOfferRarity : uint8_t
{
    Inherit                                        = 0,
    Common                                         = 1,
    Rare                                           = 2,
    Epic                                           = 3,
    Legendary                                      = 4,
    EStoreOfferRarity_MAX                          = 5
};


// UserDefinedEnum  Angelscript.EGamepadbindingInputModalMode
enum class EGamepadbindingInputModalMode : uint8_t
{
    Off                                            = 0,
    DetectKey                                      = 1,
    Confirm                                        = 2,
    EGamepadbindingInputModalMode_MAX              = 3
};


// UserDefinedEnum  Angelscript.EIconLocation
enum class EIconLocation : uint8_t
{
    Left                                           = 0,
    Right                                          = 1,
    EIconLocation_MAX                              = 2
};


// UserDefinedEnum  Angelscript.EUIExtrasPageLinkType
enum class EUIExtrasPageLinkType : uint8_t
{
    TermsOfService                                 = 0,
    PrivacyPolicy                                  = 1,
    StandardLink                                   = 2,
    EUIExtrasPageLinkType_MAX                      = 3
};


// UserDefinedEnum  Angelscript.ETeamAffiliation
enum class ETeamAffiliation : uint8_t
{
    Friend                                         = 0,
    Enemy                                          = 1,
    Neutral                                        = 2,
    ETeamAffiliation_MAX                           = 3
};


// UserDefinedEnum  Angelscript.EDecalRotation
enum class EDecalRotation : uint8_t
{
    None                                           = 0,
    Random                                         = 1,
    ByVelocity                                     = 2,
    EDecalRotation_MAX                             = 3
};


// UserDefinedEnum  Angelscript.ELoopingEffectType
enum class ELoopingEffectType : uint8_t
{
    Niagara                                        = 0,
    Mesh                                           = 1,
    ELoopingEffectType_MAX                         = 2
};


// UserDefinedEnum  Angelscript.EInteractionAnimationType
enum class EInteractionAnimationType : uint8_t
{
    Attachment                                     = 0,
    Loop                                           = 1,
    Detachment                                     = 2,
    EInteractionAnimationType_MAX                  = 3
};


// UserDefinedEnum  Angelscript.EInteractionValidationType
enum class EInteractionValidationType : uint8_t
{
    SideRight                                      = 0,
    SideLeft                                       = 1,
    Above                                          = 2,
    Below                                          = 3,
    EInteractionValidationType_MAX                 = 4
};


// UserDefinedEnum  Angelscript.EAttachmentAlignmentType
enum class EAttachmentAlignmentType : uint8_t
{
    None                                           = 0,
    LookAtMatrixComponentUp                        = 1,
    ComponentAlignment                             = 2,
    EAttachmentAlignmentType_MAX                   = 3
};


// UserDefinedEnum  Angelscript.EInteractionAction
enum class EInteractionAction : uint8_t
{
    InteractInitiated                              = 0,
    InteractHoldRelease                            = 1,
    InteractStopped                                = 2,
    EInteractionAction_MAX                         = 3
};


// UserDefinedEnum  Angelscript.EInteractionPromptSpatialType
enum class EInteractionPromptSpatialType : uint8_t
{
    Auto                                           = 0,
    BoundingBoxCenter                              = 1,
    ComponentLocation                              = 2,
    ActorOrigo                                     = 3,
    ProjectClosestPointToPlayer                    = 4,
    ClosestChildPosition                           = 5,
    Custom                                         = 6,
    ProjectClosestPointToPlayerZeroZY              = 7,
    EInteractionPromptSpatialType_MAX              = 8
};


// UserDefinedEnum  Angelscript.EInteractionValidationResult
enum class EInteractionValidationResult : uint8_t
{
    Success                                        = 0,
    Blocked                                        = 1,
    Fail                                           = 2,
    EInteractionValidationResult_MAX               = 3
};


// UserDefinedEnum  Angelscript.ETypeOfVault
enum class ETypeOfVault : uint8_t
{
    SmallVaultOnto                                 = 0,
    SmallVaultOver                                 = 1,
    VaultOnto                                      = 2,
    VaultOver                                      = 3,
    LedgeGrab                                      = 4,
    ETypeOfVault_MAX                               = 5
};


// UserDefinedEnum  Angelscript.EUIAttachStrategy
enum class EUIAttachStrategy : uint8_t
{
    AttachToViewport                               = 0,
    AttachToScreenWidget                           = 1,
    EUIAttachStrategy_MAX                          = 2
};


// UserDefinedEnum  Angelscript.EUINavigationStateTransitionState
enum class EUINavigationStateTransitionState : uint8_t
{
    StateInactive                                  = 0,
    TransitionIn                                   = 1,
    StateActive                                    = 2,
    TransitionOut                                  = 3,
    EUINavigationStateTransitionState_MAX          = 4
};


// UserDefinedEnum  Angelscript.ESocketAttachmentSnapMethod
enum class ESocketAttachmentSnapMethod : uint8_t
{
    NoSnap                                         = 0,
    SnapToGeometry                                 = 1,
    SnapToNearestSocket                            = 2,
    ESocketAttachmentSnapMethod_MAX                = 3
};


// UserDefinedEnum  Angelscript.EBallisticProjectileImpactCondition
enum class EBallisticProjectileImpactCondition : uint8_t
{
    DestroyOnImpact                                = 0,
    EBallisticProjectileImpactCondition_MAX        = 1
};


// UserDefinedEnum  Angelscript.ECyclicTransformMovementType
enum class ECyclicTransformMovementType : uint8_t
{
    RotateAroundAxis                               = 0,
    ECyclicTransformMovementType_MAX               = 1
};


// UserDefinedEnum  Angelscript.ECyclicTransformSpeedControlType
enum class ECyclicTransformSpeedControlType : uint8_t
{
    None                                           = 0,
    ScaleWithHealth                                = 1,
    ScaleWithHealthInversed                        = 2,
    ECyclicTransformSpeedControlType_MAX           = 3
};


// UserDefinedEnum  Angelscript.EHitDirection
enum class EHitDirection : uint8_t
{
    Front                                          = 0,
    Behind                                         = 1,
    Left                                           = 2,
    Right                                          = 3,
    Any                                            = 4,
    EHitDirection_MAX                              = 5
};


// UserDefinedEnum  Angelscript.EMoveDirection
enum class EMoveDirection : uint8_t
{
    None                                           = 0,
    Forward                                        = 1,
    Backward                                       = 2,
    Left                                           = 3,
    Right                                          = 4,
    Any                                            = 5,
    EMoveDirection_MAX                             = 6
};


// UserDefinedEnum  Angelscript.EBodyLocation
enum class EBodyLocation : uint8_t
{
    _DoNotUse_                                     = 0,
    Head                                           = 1,
    ChestOrBack                                    = 2,
    StomachOrLowerBack                             = 3,
    LeftArm                                        = 4,
    RightArm                                       = 5,
    LeftLeg                                        = 6,
    RightLeg                                       = 7,
    AnyBodyPart                                    = 8,
    EBodyLocation_MAX                              = 9
};


// UserDefinedEnum  Angelscript.EDeathAssetCriteras
enum class EDeathAssetCriteras : uint8_t
{
    Default                                        = 0,
    DisplayAll                                     = 1,
    Stance                                         = 2,
    LocoMode                                       = 3,
    MoveDirection                                  = 4,
    BodyLocation                                   = 5,
    HitDirection                                   = 6,
    WeaponTag                                      = 7,
    DamageType                                     = 8,
    MinDamage                                      = 9,
    EDeathAssetCriteras_MAX                        = 10
};


// UserDefinedEnum  Angelscript.EDrasticTurnStatus
enum class EDrasticTurnStatus : uint8_t
{
    NotActive                                      = 0,
    Active                                         = 1,
    Verifying                                      = 2,
    BecameActiveThisFrame                          = 3,
    StoppedVerifyingThisFrame                      = 4,
    StartedVerifyingThisFrame                      = 5,
    AbortedThisFrame                               = 6,
    EDrasticTurnStatus_MAX                         = 7
};


// UserDefinedEnum  Angelscript.EDrasticTurnTriggerType
enum class EDrasticTurnTriggerType : uint8_t
{
    None                                           = 0,
    TriggeredByAcceleration                        = 1,
    TriggeredBySpinning                            = 2,
    EDrasticTurnTriggerType_MAX                    = 3
};


// UserDefinedEnum  Angelscript.ESlopeBlendMode
enum class ESlopeBlendMode : uint8_t
{
    Blend                                          = 0,
    Absolute                                       = 1,
    ESlopeBlendMode_MAX                            = 2
};


// UserDefinedEnum  Angelscript.ESlopeTravelDirection
enum class ESlopeTravelDirection : uint8_t
{
    _DoNotUse_                                     = 0,
    Default                                        = 1,
    StandingStill                                  = 2,
    MovingUphill                                   = 3,
    MovingDownhill                                 = 4,
    MovingPerpendicular                            = 5,
    ESlopeTravelDirection_MAX                      = 6
};


// UserDefinedEnum  Angelscript.EThirdPersonLeanContext
enum class EThirdPersonLeanContext : uint8_t
{
    Spam                                           = 0,
    Start                                          = 1,
    Stop                                           = 2,
    DrasticTurn                                    = 3,
    Default                                        = 4,
    Crouch                                         = 5,
    ADS                                            = 6,
    Sprint                                         = 7,
    EThirdPersonLeanContext_MAX                    = 8
};


// UserDefinedEnum  Angelscript.ESpawnPropCleanupBehavior
enum class ESpawnPropCleanupBehavior : uint8_t
{
    DestroyOnNotifyEnd                             = 0,
    DetachAndPhysicallySimulateOnEnd               = 1,
    ESpawnPropCleanupBehavior_MAX                  = 2
};


// UserDefinedEnum  Angelscript.EAmbienceLocationType
enum class EAmbienceLocationType : uint8_t
{
    Default                                        = 0,
    Parameter                                      = 1,
    Material                                       = 2,
    Num_ENTRIES                                    = 3,
    EAmbienceLocationType_MAX                      = 4
};


// UserDefinedEnum  Angelscript.EParameterNiagaraMappingType
enum class EParameterNiagaraMappingType : uint8_t
{
    FloatValue                                     = 0,
    Location                                       = 1,
    Direction                                      = 2,
    IntValue                                       = 3,
    BoolValue                                      = 4,
    Num_ENTRIES                                    = 5,
    EParameterNiagaraMappingType_MAX               = 6
};


// UserDefinedEnum  Angelscript.ERelevancyParameterType
enum class ERelevancyParameterType : uint8_t
{
    Parameter                                      = 0,
    Material                                       = 1,
    ERelevancyParameterType_MAX                    = 2
};


// UserDefinedEnum  Angelscript.EParameterAccumulationType
enum class EParameterAccumulationType : uint8_t
{
    Multiply                                       = 0,
    Max                                            = 1,
    Min                                            = 2,
    Add                                            = 3,
    Subtract                                       = 4,
    EParameterAccumulationType_MAX                 = 5
};


// UserDefinedEnum  Angelscript.EAudioOutputMode
enum class EAudioOutputMode : uint8_t
{
    Default                                        = 0,
    Stereo                                         = 1,
    EAudioOutputMode_MAX                           = 2
};


// UserDefinedEnum  Angelscript.EOwnerAffiliation
enum class EOwnerAffiliation : uint8_t
{
    LocalPlayer                                    = 0,
    Friendly                                       = 1,
    Enemy                                          = 2,
    Neutral                                        = 3,
    EOwnerAffiliation_MAX                          = 4
};


// UserDefinedEnum  Angelscript.EDialogueSMTagFilterMode
enum class EDialogueSMTagFilterMode : uint8_t
{
    All                                            = 0,
    Any                                            = 1,
    None                                           = 2,
    EDialogueSMTagFilterMode_MAX                   = 3
};


// UserDefinedEnum  Angelscript.EDialogueSMValueFilterMode
enum class EDialogueSMValueFilterMode : uint8_t
{
    Less                                           = 0,
    LessEquals                                     = 1,
    Equals                                         = 2,
    GreaterEquals                                  = 3,
    Greater                                        = 4,
    EDialogueSMValueFilterMode_MAX                 = 5
};


// UserDefinedEnum  Angelscript.EDialogueSMDistanceReference
enum class EDialogueSMDistanceReference : uint8_t
{
    Listener                                       = 0,
    LocalPlayer                                    = 1,
    Instigator                                     = 2,
    ReferenceLocation                              = 3,
    Object                                         = 4,
    EDialogueSMDistanceReference_MAX               = 5
};


// UserDefinedEnum  Angelscript.EDialogueCooldownScope
enum class EDialogueCooldownScope : uint8_t
{
    Global                                         = 0,
    GlobalInstigator                               = 1,
    Local                                          = 2,
    LocalInstigator                                = 3,
    EDialogueCooldownScope_MAX                     = 4
};


// UserDefinedEnum  Angelscript.EDialogueContentType
enum class EDialogueContentType : uint8_t
{
    Main                                           = 0,
    Extra                                          = 1,
    Backfill                                       = 2,
    EDialogueContentType_MAX                       = 3
};


// UserDefinedEnum  Angelscript.EDialogueSMEventDistanceReference
enum class EDialogueSMEventDistanceReference : uint8_t
{
    Instigator                                     = 0,
    ReferenceLocation                              = 1,
    EDialogueSMEventDistanceReference_MAX          = 2
};


// UserDefinedEnum  Angelscript.EDialogueSMQueueState
enum class EDialogueSMQueueState : uint8_t
{
    Active                                         = 0,
    Muted                                          = 1,
    Disabled                                       = 2,
    EDialogueSMQueueState_MAX                      = 3
};


// UserDefinedEnum  Angelscript.EDialogueLocationProperty
enum class EDialogueLocationProperty : uint8_t
{
    None                                           = 0,
    North                                          = 1,
    NorthEast                                      = 2,
    East                                           = 3,
    SouthEast                                      = 4,
    South                                          = 5,
    SouthWest                                      = 6,
    West                                           = 7,
    NorthWest                                      = 8,
    Left                                           = 9,
    Right                                          = 10,
    Behind                                         = 11,
    Down                                           = 12,
    Up                                             = 13,
    Close                                          = 14,
    Far                                            = 15,
    Indoor                                         = 16,
    Outdoor                                        = 17,
    PointOfInterest                                = 18,
    EDialogueLocationProperty_MAX                  = 19
};


// UserDefinedEnum  Angelscript.EDialogueActorProperty
enum class EDialogueActorProperty : uint8_t
{
    None                                           = 0,
    Alerted                                        = 1,
    Dangerous                                      = 2,
    LowHealth                                      = 3,
    Friendly                                       = 4,
    EDialogueActorProperty_MAX                     = 5
};


// UserDefinedEnum  Angelscript.EDialogueLogLevel
enum class EDialogueLogLevel : uint8_t
{
    Verbose                                        = 0,
    Log                                            = 1,
    Warning                                        = 2,
    Error                                          = 3,
    EDialogueLogLevel_MAX                          = 4
};


// UserDefinedEnum  Angelscript.EDialogueQueueAction
enum class EDialogueQueueAction : uint8_t
{
    Disable                                        = 0,
    Activate                                       = 1,
    Kill                                           = 2,
    Clear                                          = 3,
    EDialogueQueueAction_MAX                       = 4
};


// UserDefinedEnum  Angelscript.EPhoneme
enum class EPhoneme : uint8_t
{
    AA                                             = 0,
    AE                                             = 1,
    AH                                             = 2,
    AO                                             = 3,
    AW                                             = 4,
    AY                                             = 5,
    B                                              = 6,
    CH                                             = 7,
    D                                              = 8,
    DH                                             = 9,
    EH                                             = 10,
    ER                                             = 11,
    EY                                             = 12,
    F                                              = 13,
    G                                              = 14,
    HH                                             = 15,
    IH                                             = 16,
    IY                                             = 17,
    JH                                             = 18,
    K                                              = 19,
    L                                              = 20,
    M                                              = 21,
    N                                              = 22,
    NG                                             = 23,
    OW                                             = 24,
    OY                                             = 25,
    P                                              = 26,
    R                                              = 27,
    S                                              = 28,
    SH                                             = 29,
    T                                              = 30,
    TH                                             = 31,
    UH                                             = 32,
    UW                                             = 33,
    V                                              = 34,
    W                                              = 35,
    Y                                              = 36,
    Z                                              = 37,
    ZH                                             = 38,
    EPhoneme_MAX                                   = 39
};


// UserDefinedEnum  Angelscript.EMusicParameter
enum class EMusicParameter : uint8_t
{
    None                                           = 0,
    NearestBossDistance                            = 1,
    LocalPlayerIndooriness                         = 2,
    FinalBossDistance                              = 3,
    Mercy                                          = 4,
    InCombat                                       = 5,
    SquadIntroTime                                 = 6,
    TimeLeftOfRound                                = 7,
    EndProximity                                   = 8,
    IsFinalTier                                    = 9,
    Count                                          = 10,
    EMusicParameter_MAX                            = 11
};


// UserDefinedEnum  Angelscript.EMusicParameterAccumulationMode
enum class EMusicParameterAccumulationMode : uint8_t
{
    None                                           = 0,
    Max                                            = 1,
    Min                                            = 2,
    Add                                            = 3,
    Multiply                                       = 4,
    EMusicParameterAccumulationMode_MAX            = 5
};


// UserDefinedEnum  Angelscript.EOptionalMusicType
enum class EOptionalMusicType : uint8_t
{
    AddOrReplaceEvent                              = 0,
    SubTagReplaceSounds                            = 1,
    ReplaceSounds                                  = 2,
    EOptionalMusicType_MAX                         = 3
};


// UserDefinedEnum  Angelscript.EFootStepType
enum class EFootStepType : uint8_t
{
    Still                                          = 0,
    Walk                                           = 1,
    Run                                            = 2,
    Sprint                                         = 3,
    Land                                           = 4,
    EFootStepType_MAX                              = 5
};


// UserDefinedEnum  Angelscript.EAudioFloatInterpolationType
enum class EAudioFloatInterpolationType : uint8_t
{
    MinJerk                                        = 0,
    Lerp                                           = 1,
    ConstantRate                                   = 2,
    FInterp                                        = 3,
    EAudioFloatInterpolationType_MAX               = 4
};


// UserDefinedEnum  Angelscript.EBuildingSetupComponentCustomVersion
enum class EBuildingSetupComponentCustomVersion : uint8_t
{
    BeforeCustomVersionWasAdded                    = 0,
    HierarchicalRebuildSupport                     = 1,
    VersionPlusOne                                 = 2,
    LatestVersion                                  = 1,
    EBuildingSetupComponentCustomVersion_MAX       = 3
};


// UserDefinedEnum  Angelscript.ECameraModifierOperation
enum class ECameraModifierOperation : uint8_t
{
    Override                                       = 0,
    Multiply                                       = 1,
    Add                                            = 2,
    None                                           = 3,
    ECameraModifierOperation_MAX                   = 4
};


// UserDefinedEnum  Angelscript.ECameraProperty
enum class ECameraProperty : uint8_t
{
    None                                           = 0,
    LagSpeed                                       = 1,
    ArmLenght                                      = 2,
    RightSideOffset                                = 3,
    HeightOffset                                   = 4,
    FieldOfView                                    = 5,
    VerticalSmoothess                              = 6,
    HorizontalSmoothness                           = 7,
    FirstPerson                                    = 8,
    ForwardOffset                                  = 9,
    MAX_NUM                                        = 10,
    ECameraProperty_MAX                            = 11
};


// UserDefinedEnum  Angelscript.EDebugCameraModifierMode
enum class EDebugCameraModifierMode : uint8_t
{
    Attached                                       = 0,
    DetachedStatic                                 = 1,
    DetachedLookAt                                 = 2,
    EDebugCameraModifierMode_MAX                   = 3
};


// UserDefinedEnum  Angelscript.EEmbarkTimeOfDayOperationType
enum class EEmbarkTimeOfDayOperationType : uint8_t
{
    DoNotOverride                                  = 0,
    OverrideAndFreeze                              = 1,
    OverrideAndContinue                            = 2,
    EEmbarkTimeOfDayOperationType_MAX              = 3
};


// UserDefinedEnum  Angelscript.ECodingStandardEnum
enum class ECodingStandardEnum : uint8_t
{
    ECodingStandardEnum_MAX                        = 0
};


// UserDefinedEnum  Angelscript.ETimeOfDayForcingMode
enum class ETimeOfDayForcingMode : uint8_t
{
    DoNotForce                                     = 0,
    ForceTimeAndFreeze                             = 1,
    ForceTimeAndAdvance                            = 2,
    ETimeOfDayForcingMode_MAX                      = 3
};


// UserDefinedEnum  Angelscript.EFeatherInputType
enum class EFeatherInputType : uint8_t
{
    GameOnly                                       = 0,
    GameAndUI                                      = 1,
    UIOnly                                         = 2,
    EFeatherInputType_MAX                          = 3
};


// UserDefinedEnum  Angelscript.ESortDirection
enum class ESortDirection : uint8_t
{
    Ascending                                      = 0,
    Descending                                     = 1,
    ESortDirection_MAX                             = 2
};


// UserDefinedEnum  Angelscript.EFeatherWindowTransformState
enum class EFeatherWindowTransformState : uint8_t
{
    NotBeingTransformed                            = 0,
    IsBeingMoved                                   = 1,
    IsBeingResized                                 = 2,
    EFeatherWindowTransformState_MAX               = 3
};


// UserDefinedEnum  Angelscript.EActorFlags_BP
enum class EActorFlags_BP : uint8_t
{
    Eviction                                       = 0,
    DespawnByRange                                 = 1,
    EActorFlags_MAX                                = 2
};


// UserDefinedEnum  Angelscript.EActorFlags
enum class EActorFlags : uint8_t
{
    Eviction                                       = 1,
    DespawnByRange                                 = 2,
    Default                                        = 3,
    EActorFlags_MAX                                = 4
};


// UserDefinedEnum  Angelscript.ESquadSortingType
enum class ESquadSortingType : uint8_t
{
    FillSquadFirst                                 = 0,
    BalanceSquadsFirst                             = 1,
    ESquadSortingType_MAX                          = 2
};


// UserDefinedEnum  Angelscript.EInitStepTriggerType
enum class EInitStepTriggerType : uint8_t
{
    Event                                          = 0,
    Poll                                           = 1,
    EInitStepTriggerType_MAX                       = 2
};


// UserDefinedEnum  Angelscript.EGameServerCompositeInitResult
enum class EGameServerCompositeInitResult : uint8_t
{
    NotYetReady                                    = 0,
    Success                                        = 1,
    Skip                                           = 2,
    CriticalFailure                                = 3,
    EGameServerCompositeInitResult_MAX             = 4
};


// UserDefinedEnum  Angelscript.EGameServerInitResult
enum class EGameServerInitResult : uint8_t
{
    NotYetReady                                    = 0,
    Success                                        = 1,
    CriticalFailure                                = 2,
    EGameServerInitResult_MAX                      = 3
};


// UserDefinedEnum  Angelscript.EGameServerInitStepOnlineTweakablesState
enum class EGameServerInitStepOnlineTweakablesState : uint8_t
{
    SyncTweakables                                 = 0,
    WaitingForTweakables                           = 1,
    Max                                            = 2,
    EGameServerInitStepOnlineTweakablesState_MAX   = 3
};


// UserDefinedEnum  Angelscript.EGameServerInitStepQueryVoiceChannelState
enum class EGameServerInitStepQueryVoiceChannelState : uint8_t
{
    ParseSquads                                    = 0,
    QueryVoiceChannels                             = 1,
    PendingVoiceChannels                           = 2,
    Max                                            = 3,
    EGameServerInitStepQueryVoiceChannelState_MAX  = 4
};


// UserDefinedEnum  Angelscript.EPlayerInitResultType
enum class EPlayerInitResultType : uint8_t
{
    NotYetReady                                    = 0,
    Success                                        = 1,
    CriticalFailure                                = 2,
    EPlayerInitResultType_MAX                      = 3
};


// UserDefinedEnum  Angelscript.EPlayerInitStatus
enum class EPlayerInitStatus : uint8_t
{
    NotYetStarted                                  = 0,
    InProgress                                     = 1,
    EPlayerInitStatus_MAX                          = 2
};


// UserDefinedEnum  Angelscript.EPlayerInitStepQueryVoiceChannelState
enum class EPlayerInitStepQueryVoiceChannelState : uint8_t
{
    QueryVoiceChannel                              = 0,
    PendingVoiceChannel                            = 1,
    ReplicateVoiceChannel                          = 2,
    EPlayerInitStepQueryVoiceChannelState_MAX      = 3
};


// UserDefinedEnum  Angelscript.EGraphResult
enum class EGraphResult : uint8_t
{
    Unknown                                        = 0,
    Win                                            = 1,
    Defeat                                         = 2,
    EGraphResult_MAX                               = 3
};


// UserDefinedEnum  Angelscript.EAttachmentAnimation
enum class EAttachmentAnimation : uint8_t
{
    None                                           = 0,
    Zipline                                        = 1,
    Hoverbike                                      = 2,
    GenericVehicle                                 = 3,
    Ladder                                         = 4,
    EAttachmentAnimation_MAX                       = 5
};


// UserDefinedEnum  Angelscript.EDestructionProxyBind
enum class EDestructionProxyBind : uint8_t
{
    BindOwnerDestroyed                             = 1,
    BindPartBroken                                 = 2,
    BindConstructableOnDead                        = 4,
    BindAll                                        = 255,
    EDestructionProxyBind_MAX                      = 256
};


// UserDefinedEnum  Angelscript.EAutobotEnvironment
enum class EAutobotEnvironment : uint8_t
{
    IntegrationTest                                = 0,
    Ingame                                         = 1,
    EAutobotEnvironment_MAX                        = 2
};


// UserDefinedEnum  Angelscript.EMoveToCompletionReason
enum class EMoveToCompletionReason : uint8_t
{
    Overriden                                      = 0,
    FoundNoPath                                    = 1,
    Successfull                                    = 2,
    GotStuck                                       = 3,
    EMoveToCompletionReason_MAX                    = 4
};


// UserDefinedEnum  Angelscript.EMoveToPathingStrategy
enum class EMoveToPathingStrategy : uint8_t
{
    DoNotPath                                      = 0,
    TryPathElseMoveWithout                         = 1,
    FailIfNoPathFound                              = 2,
    EMoveToPathingStrategy_MAX                     = 3
};


// UserDefinedEnum  Angelscript.EAimOrigin
enum class EAimOrigin : uint8_t
{
    ActorLocation                                  = 0,
    ShootLocation                                  = 1,
    ThrowLocation                                  = 2,
    EAimOrigin_MAX                                 = 3
};


// UserDefinedEnum  Angelscript.EAutobotStateTransitionMethod
enum class EAutobotStateTransitionMethod : uint8_t
{
    Replace                                        = 0,
    ReplaceSameElsePush                            = 1,
    Push                                           = 2,
    EAutobotStateTransitionMethod_MAX              = 3
};


// UserDefinedEnum  Angelscript.EAutobotUtilityResponseCurveType
enum class EAutobotUtilityResponseCurveType : uint8_t
{
    ExponentialPolynominal                         = 0,
    Logistic                                       = 1,
    Heaviside                                      = 2,
    EAutobotUtilityResponseCurveType_MAX           = 3
};


// UserDefinedEnum  Angelscript.EAutobotUtilityActionGroupType
enum class EAutobotUtilityActionGroupType : uint8_t
{
    Group0                                         = 0,
    Group1                                         = 1,
    Group2                                         = 2,
    Group3                                         = 3,
    EAutobotUtilityActionGroupType_MAX             = 4
};


// UserDefinedEnum  Angelscript.EAutobotUtilitySystemTargetType
enum class EAutobotUtilitySystemTargetType : uint8_t
{
    Invalid                                        = 0,
    Actor                                          = 1,
    Object                                         = 2,
    Shape                                          = 3,
    AutobotTarget                                  = 4,
    Vector                                         = 5,
    EAutobotUtilitySystemTargetType_MAX            = 6
};


// UserDefinedEnum  Angelscript.EAutobotUtilityResult
enum class EAutobotUtilityResult : uint8_t
{
    Success                                        = 0,
    Failure                                        = 1,
    EAutobotUtilityResult_MAX                      = 2
};


// UserDefinedEnum  Angelscript.EAutobotUtilityActionStatus
enum class EAutobotUtilityActionStatus : uint8_t
{
    NotActive                                      = 0,
    InProgress                                     = 1,
    Failed                                         = 2,
    Succeeded                                      = 3,
    EAutobotUtilityActionStatus_MAX                = 4
};


// UserDefinedEnum  Angelscript.EButtonModifier
enum class EButtonModifier : uint8_t
{
    None                                           = 0,
    Hold                                           = 1,
    Drag                                           = 2,
    EButtonModifier_MAX                            = 3
};


// UserDefinedEnum  Angelscript.EContextActionAvailability
enum class EContextActionAvailability : uint8_t
{
    Available                                      = 0,
    Unavailable                                    = 1,
    Blocked                                        = 2,
    EContextActionAvailability_MAX                 = 3
};


// UserDefinedEnum  Angelscript.EContextActionUsageMode
enum class EContextActionUsageMode : uint8_t
{
    None                                           = 0,
    Progress                                       = 1,
    Hold                                           = 2,
    EContextActionUsageMode_MAX                    = 3
};


// UserDefinedEnum  Angelscript.EContextActionComparison
enum class EContextActionComparison : uint8_t
{
    None                                           = 0,
    Upgrade                                        = 1,
    Downgrade                                      = 2,
    EContextActionComparison_MAX                   = 3
};


// UserDefinedEnum  Angelscript.EGyroActiveMode
enum class EGyroActiveMode : uint8_t
{
    Always_On                                      = 0,
    Only_In_Zoom                                   = 1,
    Never_In_Zoom                                  = 2,
    EGyroActiveMode_MAX                            = 3
};


// UserDefinedEnum  Angelscript.EGyroVerticalSensitivityMode
enum class EGyroVerticalSensitivityMode : uint8_t
{
    Ratio                                          = 0,
    Absolute                                       = 1,
    EGyroVerticalSensitivityMode_MAX               = 2
};


// UserDefinedEnum  Angelscript.EGyroLocalInputRotationTarget
enum class EGyroLocalInputRotationTarget : uint8_t
{
    None                                           = 0,
    Pitch                                          = 1,
    Yaw                                            = 2,
    EGyroLocalInputRotationTarget_MAX              = 3
};


// UserDefinedEnum  Angelscript.EGyroOrientation
enum class EGyroOrientation : uint8_t
{
    Local                                          = 0,
    Player                                         = 1,
    World                                          = 2,
    EGyroOrientation_MAX                           = 3
};


// UserDefinedEnum  Angelscript.EGyroStickEffect
enum class EGyroStickEffect : uint8_t
{
    Always_On                                      = 0,
    Disable_Gyro                                   = 1,
    Scale_Gyro                                     = 2,
    EGyroStickEffect_MAX                           = 3
};


// UserDefinedEnum  Angelscript.EInputActionPressedBehavior
enum class EInputActionPressedBehavior : uint8_t
{
    ActivateAbility                                = 0,
    ActivateAbilityOnHold                          = 1,
    SendGameplayEventToActor                       = 2,
    ToggleAbility                                  = 3,
    ToggleAbilityWithCancelTag                     = 4,
    None                                           = 5,
    EInputActionPressedBehavior_MAX                = 6
};


// UserDefinedEnum  Angelscript.EInputActionReleaseBehavior
enum class EInputActionReleaseBehavior : uint8_t
{
    None                                           = 0,
    CancelAbility                                  = 1,
    EndAbility                                     = 2,
    ActivateCancelGameplayTag                      = 3,
    EInputActionReleaseBehavior_MAX                = 4
};


// UserDefinedEnum  Angelscript.EInputPressedActionBufferType
enum class EInputPressedActionBufferType : uint8_t
{
    None                                           = 0,
    TryTriggerWithBufferTime                       = 1,
    AlwaysRetriggerOnHold                          = 2,
    AlwaysRetriggerOnHold_RetriggerBufferTimeOnRelease = 3,
    RetriggerOnHoldUntilSuccess                    = 4,
    EInputPressedActionBufferType_MAX              = 5
};


// UserDefinedEnum  Angelscript.EInputReleasedActionBufferType
enum class EInputReleasedActionBufferType : uint8_t
{
    None                                           = 0,
    TryTriggerWithBufferTime                       = 1,
    TryTriggerWhenActiveWithBufferTime             = 2,
    EInputReleasedActionBufferType_MAX             = 3
};


// UserDefinedEnum  Angelscript.EInputTagAbilitySetting
enum class EInputTagAbilitySetting : uint8_t
{
    Hold                                           = 0,
    Toggle                                         = 1,
    EInputTagAbilitySetting_MAX                    = 2
};


// UserDefinedEnum  Angelscript.EInputType
enum class EInputType : uint8_t
{
    Keyboard                                       = 0,
    KeyBoardAndMouse                               = 1,
    Gamepad                                        = 2,
    All                                            = 3,
    EInputType_MAX                                 = 4
};


// UserDefinedEnum  Angelscript.EInputDirection
enum class EInputDirection : uint8_t
{
    None                                           = 0,
    Forward                                        = 1,
    Backward                                       = 2,
    Left                                           = 3,
    Right                                          = 4,
    ForwardLeft                                    = 5,
    ForwardRight                                   = 6,
    BackwardLeft                                   = 7,
    BackwardRight                                  = 8,
    EInputDirection_MAX                            = 9
};


// UserDefinedEnum  Angelscript.ECharacterAxis
enum class ECharacterAxis : uint8_t
{
    MoveForward                                    = 0,
    MoveRight                                      = 1,
    TurnRate                                       = 2,
    Turn                                           = 3,
    LookUpRate                                     = 4,
    LookUp                                         = 5,
    ECharacterAxis_MAX                             = 6
};


// UserDefinedEnum  Angelscript.EPlayerAction
enum class EPlayerAction : uint8_t
{
    Click                                          = 0,
    SelectMenu                                     = 1,
    EPlayerAction_MAX                              = 2
};


// UserDefinedEnum  Angelscript.EItemAvailability
enum class EItemAvailability : uint8_t
{
    Available                                      = 0,
    Unavailable                                    = 1,
    EItemAvailability_MAX                          = 2
};


// UserDefinedEnum  Angelscript.EBattlepassType
enum class EBattlepassType : uint8_t
{
    Default                                        = 0,
    Premium                                        = 1,
    LevelPurchase                                  = 2,
    EBattlepassType_MAX                            = 3
};


// UserDefinedEnum  Angelscript.ETraversalToolUser
enum class ETraversalToolUser : uint8_t
{
    Self                                           = 0,
    Ally                                           = 1,
    ETraversalToolUser_MAX                         = 2
};


// UserDefinedEnum  Angelscript.EQuestEventListenerType
enum class EQuestEventListenerType : uint8_t
{
    Unknown                                        = 0,
    EnemyKillOrAssist                              = 1,
    EnemyKilled                                    = 2,
    EnemyKilledWhoIsStealingObjective              = 3,
    EnemyKilledWhoIsCarryingTicket                 = 4,
    EnemyKilledWhoIsLastInSquad                    = 5,
    EnemyKilledWithMeleeWeapon                     = 6,
    EnemyKilledWithQuickMelee                      = 7,
    EnemyKilledWithLastRoundInMagazine             = 8,
    DamageEnemy                                    = 9,
    DamageEnemyWithArchetype                       = 10,
    DamageEnemyWithRangedWeapons                   = 11,
    DamageEnemyWithMeleeWeapons                    = 12,
    DamageEnemyWithGrenades                        = 13,
    DamageEnemyWithMines                           = 14,
    DamageEnemyWithGadgets                         = 15,
    DamageEnemyWhileSliding                        = 16,
    DamageEnemyWithGas                             = 17,
    DamageEnemyWithFire                            = 18,
    DamageEnemyWithImpact                          = 19,
    DamageEnemyInBackWhileCloaking                 = 20,
    DamageEnemyObject                              = 21,
    DamageBuilding                                 = 22,
    DestroyLadder                                  = 23,
    DestroyBuildingPiece                           = 24,
    DestroyEnemyZipline                            = 25,
    DestroyEnemyObject                             = 26,
    AbsorbDamage                                   = 27,
    InvisibilityDuration                           = 28,
    TraversalToolUse                               = 29,
    RestoreHealth                                  = 30,
    RevivePlayer                                   = 31,
    DetectOpponent                                 = 32,
    UseAllDashChargedWithoutTouchingGround         = 33,
    ObjectiveSteal                                 = 34,
    ObjectiveOpenVault                             = 35,
    ObjectiveTransferCashBox                       = 36,
    ObjectivePerformCashOut                        = 37,
    ObjectiveCashMoneyInRound                      = 38,
    ObjectivePing                                  = 39,
    RoundPlay                                      = 40,
    RoundPlayWithArchetype                         = 41,
    CasualRoundPlay                                = 42,
    RoundPlayWithoutElimination                    = 43,
    RoundWin                                       = 44,
    CasualRoundWin                                 = 45,
    RoundWinWithoutElimination                     = 46,
    BankIt_RoundPlayed                             = 47,
    BankIt_RoundWin                                = 48,
    Heist_RoundPlayed                              = 49,
    SoloBankIt_RoundPlayed                         = 50,
    TournamentWon                                  = 51,
    TournamentWonInRow                             = 52,
    DailyQuestCompleted                            = 53,
    WeeklyQuestCompleted                           = 54,
    DisabledPlayer                                 = 55,
    HealthRegen                                    = 56,
    TournamentFinalReached                         = 57,
    TournamentRoundQualified                       = 58,
    TeamScoreGained                                = 59,
    DamageEnemyWithQuickMelee                      = 60,
    OvertimeStartedByTeam                          = 61,
    ExplosiveMineActivated                         = 62,
    UsedTraversalTool                              = 63,
    DisableGadget                                  = 64,
    ObjectiveCashExtraction                        = 65,
    ScriptedQuest                                  = 66,
    Locked                                         = 67,
    FinishedTutorial                               = 68,
    EQuestEventListenerType_MAX                    = 69
};


// UserDefinedEnum  Angelscript.EQuestCadence
enum class EQuestCadence : uint8_t
{
    Unknown                                        = 0,
    Daily                                          = 1,
    Weekly                                         = 2,
    Seasonal                                       = 3,
    Event                                          = 4,
    Permanent                                      = 5,
    EQuestCadence_MAX                              = 6
};


// UserDefinedEnum  Angelscript.EQuestCategory
enum class EQuestCategory : uint8_t
{
    Easy                                           = 0,
    Hard                                           = 1,
    Bonus                                          = 2,
    Recurring                                      = 3,
    Medium                                         = 4,
    Locked                                         = 5,
    EQuestCategory_MAX                             = 6
};


// UserDefinedEnum  Angelscript.EDescriptionArgumentType
enum class EDescriptionArgumentType : uint8_t
{
    Text                                           = 0,
    Number                                         = 1,
    InGameProgressRequired                         = 2,
    RequiredProgresses                             = 3,
    Condition                                      = 4,
    EDescriptionArgumentType_MAX                   = 5
};


// UserDefinedEnum  Angelscript.EQuestCategoryDataAssociationType
enum class EQuestCategoryDataAssociationType : uint8_t
{
    None                                           = 0,
    Milestones                                     = 1,
    GameMode                                       = 2,
    DeckBuilding                                   = 3,
    Offense                                        = 4,
    Defense                                        = 5,
    Dynamism                                       = 6,
    Teamplay                                       = 7,
    EasterEgg                                      = 8,
    Weapons                                        = 9,
    Gadgets                                        = 10,
    Specialization                                 = 11,
    Locked                                         = 12,
    EQuestCategoryDataAssociationType_MAX          = 13
};


// UserDefinedEnum  Angelscript.EForceChange
enum class EForceChange : uint8_t
{
    Instant                                        = 0,
    ConstantBegin                                  = 1,
    ConstantEnd                                    = 2,
    EForceChange_MAX                               = 3
};


// UserDefinedEnum  Angelscript.EForceCollectorInstigatorTrackingEvents
enum class EForceCollectorInstigatorTrackingEvents : uint8_t
{
    StartedTracking                                = 0,
    StoppedTracking                                = 1,
    EForceCollectorInstigatorTrackingEvents_MAX    = 2
};


// UserDefinedEnum  Angelscript.EForceMagnitude
enum class EForceMagnitude : uint8_t
{
    VerySmall                                      = 0,
    Small                                          = 1,
    Medium                                         = 2,
    Heavy                                          = 3,
    VeryHeavy                                      = 4,
    Custom                                         = 5,
    None                                           = 6,
    NUM_FORCEMAGNITUDES                            = 7,
    EForceMagnitude_MAX                            = 8
};


// UserDefinedEnum  Angelscript.EObjectHistoryResult
enum class EObjectHistoryResult : uint8_t
{
    Fail_ObjectNotTracked                          = 0,
    Fail_NoStateAvailable                          = 1,
    Success_BestEffortState                        = 2,
    Success_LerpableState                          = 3,
    Success_PreciseState                           = 4,
    EObjectHistoryResult_MAX                       = 5
};


// UserDefinedEnum  Angelscript.EPingIntent
enum class EPingIntent : uint8_t
{
    DefaultPing                                    = 0,
    AutoPing                                       = 1,
    RemovedPing                                    = 2,
    AcceptPing                                     = 3,
    RejectPing                                     = 4,
    RefreshPing                                    = 5,
    WillHealPing                                   = 6,
    AttackPing                                     = 7,
    DefendPing                                     = 8,
    AmmoPing                                       = 9,
    ThanksPing                                     = 10,
    ItemPing                                       = 11,
    NeedHealPing                                   = 12,
    LocationPing                                   = 13,
    DirectionPing                                  = 14,
    ObjectivePing                                  = 15,
    Warning                                        = 16,
    None                                           = 17,
    Hype                                           = 18,
    RequestHelp                                    = 19,
    RequestGroupUp                                 = 20,
    Joining                                        = 21,
    NotJoining                                     = 22,
    Okay                                           = 23,
    Hello                                          = 24,
    Pin                                            = 25,
    AudioHeardPing                                 = 26,
    SomeonesBeenHerePing                           = 27,
    RegroupPing                                    = 28,
    WatchingPing                                   = 29,
    LootingPing                                    = 30,
    AvoidPing                                      = 31,
    EPingIntent_MAX                                = 32
};


// UserDefinedEnum  Angelscript.EHoverDescriptionCategory
enum class EHoverDescriptionCategory : uint8_t
{
    Auto                                           = 0,
    Enemy                                          = 1,
    Loot                                           = 2,
    Player                                         = 3,
    Vehicle                                        = 4,
    Unknown                                        = 5,
    Item                                           = 6,
    Location                                       = 7,
    PointOfInterest                                = 8,
    CraftingStation                                = 9,
    Traversal                                      = 10,
    EHoverDescriptionCategory_MAX                  = 11
};


// UserDefinedEnum  Angelscript.ERootMotionAnimMatchingType
enum class ERootMotionAnimMatchingType : uint8_t
{
    None                                           = 0,
    VaultDistanceMatching                          = 1,
    ERootMotionAnimMatchingType_MAX                = 2
};


// UserDefinedEnum  Angelscript.EForceApplicationObjectTypeHelper
enum class EForceApplicationObjectTypeHelper : uint8_t
{
    PlayersOnly                                    = 0,
    Physics                                        = 1,
    PhysicsAndPlayer                               = 2,
    EForceApplicationObjectTypeHelper_MAX          = 3
};


// UserDefinedEnum  Angelscript.ESubsystemDomain
enum class ESubsystemDomain : uint8_t
{
    Undefined                                      = 0,
    Pings                                          = 1,
    Emotes                                         = 2,
    Quickslot                                      = 3,
    ItemUpgrading                                  = 4,
    Expressions                                    = 5,
    Communications                                 = 6,
    ESubsystemDomain_MAX                           = 7
};


// UserDefinedEnum  Angelscript.ECustomTraceChannels
enum class ECustomTraceChannels : uint8_t
{
    AIVisibility                                   = 2,
    ContextualActionCandidate                      = 3,
    ECustomTraceChannels_MAX                       = 4
};


// UserDefinedEnum  Angelscript.ELocoMode
enum class ELocoMode : uint8_t
{
    Still                                          = 0,
    Walking                                        = 1,
    Running                                        = 2,
    Sprinting                                      = 3,
    ELocoMode_MAX                                  = 4
};


// UserDefinedEnum  Angelscript.ECharacterStance
enum class ECharacterStance : uint8_t
{
    Stand                                          = 0,
    Crouch                                         = 1,
    DBNO                                           = 2,
    Slide                                          = 3,
    InAir                                          = 4,
    Ladder                                         = 5,
    Uncontrolled                                   = 6,
    ECharacterStance_MAX                           = 7
};


// UserDefinedEnum  Angelscript.EPostForcedMovementAction
enum class EPostForcedMovementAction : uint8_t
{
    None                                           = 0,
    ResetToWorld                                   = 1,
    AutoVault                                      = 2,
    EPostForcedMovementAction_MAX                  = 3
};


// UserDefinedEnum  Angelscript.EBackendGameTransformationErrorCode
enum class EBackendGameTransformationErrorCode : uint8_t
{
    Default                                        = 0,
    BackendInvalidData                             = 1,
    GameMissingSupport                             = 2,
    GameMissingUIMetaData                          = 3,
    EBackendGameTransformationErrorCode_MAX        = 4
};


// UserDefinedEnum  Angelscript.EBackendGameTransformationDetailedInfo
enum class EBackendGameTransformationDetailedInfo : uint8_t
{
    PersistenceRewardNotSupported                  = 0,
    GameMissingUIMetaData                          = 1,
    GameMissingCharacterAssembly                   = 2,
    GameMissingItemData                            = 3,
    GameMissingTalentDataAsset                     = 4,
    GameMissingPCC                                 = 5,
    LoadoutItemMissing                             = 6,
    StoreOfferMissingCostItem                      = 7,
    StoreOfferMultipleCostItems                    = 8,
    StoreOfferMissingProduct                       = 9,
    StoreOfferMissingUIMetaData                    = 10,
    StoreOfferInvalidCurrencyId                    = 11,
    StoreOfferInvalidItemId                        = 12,
    StoreOfferNoItems                              = 13,
    StoreOfferMultipleWeaponSkins                  = 14,
    StoreOfferCustomizationAndWeaponSkins          = 15,
    StoreViewMissingUIMetaData                     = 16,
    StoreViewLayoutMissingUIMetaData               = 17,
    StoreViewInvalidAssetId                        = 18,
    StoreViewMissingLayouts                        = 19,
    StoreViewMissingOffers                         = 20,
    StoreViewLayoutInvalidAssetId                  = 21,
    StoreViewLayoutMissingOffers                   = 22,
    EBackendGameTransformationDetailedInfo_MAX     = 23
};


// UserDefinedEnum  Angelscript.ECountingMethod
enum class ECountingMethod : uint8_t
{
    Countable                                      = 0,
    MassCountable                                  = 1,
    Uncountable                                    = 2,
    ECountingMethod_MAX                            = 3
};


// UserDefinedEnum  Angelscript.EDevelopmentAvailability
enum class EDevelopmentAvailability : uint8_t
{
    EditorOnly                                     = 0,
    DeveloperOnly                                  = 1,
    UserFacing                                     = 2,
    EDevelopmentAvailability_MAX                   = 3
};


// UserDefinedEnum  Angelscript.EEmbarkSkyType
enum class EEmbarkSkyType : uint8_t
{
    Day                                            = 0,
    Night                                          = 1,
    None                                           = 2,
    EEmbarkSkyType_MAX                             = 3
};


// UserDefinedEnum  Angelscript.EDrivenSplineSnapMethod
enum class EDrivenSplineSnapMethod : uint8_t
{
    None                                           = 0,
    SnapToActor                                    = 1,
    SnapToSocket                                   = 2,
    EDrivenSplineSnapMethod_MAX                    = 3
};


// UserDefinedEnum  Angelscript.ESplineSnapToGroundMethod
enum class ESplineSnapToGroundMethod : uint8_t
{
    NoSnap                                         = 0,
    SnapAllButStartAndEnd                          = 1,
    SnapAllPoints                                  = 2,
    ESplineSnapToGroundMethod_MAX                  = 3
};


// UserDefinedEnum  Angelscript.ESquadStatus
enum class ESquadStatus : uint8_t
{
    Alive                                          = 0,
    Defeated                                       = 1,
    ESquadStatus_MAX                               = 2
};


// UserDefinedEnum  Angelscript.EActorToCheckMode
enum class EActorToCheckMode : uint8_t
{
    ActorRef                                       = 0,
    FindActor                                      = 1,
    EActorToCheckMode_MAX                          = 2
};


// UserDefinedEnum  Angelscript.EEmbarkScrollBarType
enum class EEmbarkScrollBarType : uint8_t
{
    Background                                     = 0,
    Foreground                                     = 1,
    BottomShadow                                   = 2,
    LeftShadow                                     = 3,
    RightShadow                                    = 4,
    TopShadow                                      = 5,
    EEmbarkScrollBarType_MAX                       = 6
};


// UserDefinedEnum  Angelscript.EUIColorblindMode
enum class EUIColorblindMode : uint8_t
{
    Default                                        = 0,
    Deutranopia                                    = 1,
    Tritanopia                                     = 2,
    Protanopia                                     = 3,
    EUIColorblindMode_MAX                          = 4
};


// UserDefinedEnum  Angelscript.EOutlineDrawMode
enum class EOutlineDrawMode : uint8_t
{
    Disabled                                       = 0,
    Visible                                        = 1,
    Always                                         = 2,
    Obstructed                                     = 3,
    EOutlineDrawMode_MAX                           = 4
};


// UserDefinedEnum  Angelscript.EOutlineGroup
enum class EOutlineGroup : uint8_t
{
    Disabled                                       = 0,
    Highlighted                                    = 1,
    RarityCommon                                   = 2,
    RarityRare                                     = 3,
    RarityEpic                                     = 4,
    RarityLegendary                                = 5,
    EnemyCore                                      = 6,
    Outpost                                        = 7,
    Player                                         = 8,
    Critical                                       = 9,
    LocalPlayer                                    = 10,
    Sonar                                          = 11,
    SonarEnemy                                     = 12,
    NUM_GROUPS                                     = 13,
    EOutlineGroup_MAX                              = 14
};


// UserDefinedEnum  Angelscript.EPartyStatus
enum class EPartyStatus : uint8_t
{
    None                                           = 0,
    Member                                         = 1,
    Leader                                         = 2,
    EPartyStatus_MAX                               = 3
};


// UserDefinedEnum  Angelscript.EEdgeDrawStyle
enum class EEdgeDrawStyle : uint8_t
{
    BRACKETY                                       = 0,
    SOLID_BORDER                                   = 1,
    EEdgeDrawStyle_MAX                             = 2
};


// UserDefinedEnum  Angelscript.EGamepadPreset
enum class EGamepadPreset : uint8_t
{
    GadgetRadial                                   = 0,
    EquipModifier                                  = 1,
    DPadCycling                                    = 2,
    DPadEquipping                                  = 3,
    EGamepadPreset_MAX                             = 4
};


// UserDefinedEnum  Angelscript.EUIEmbarkInputActionNavigation
enum class EUIEmbarkInputActionNavigation : uint8_t
{
    Select                                         = 0,
    Inspect                                        = 1,
    Back                                           = 2,
    Edit                                           = 3,
    View                                           = 4,
    Left                                           = 5,
    Right                                          = 6,
    TabLeft                                        = 7,
    TabRight                                       = 8,
    SpecialLeft                                    = 9,
    SpecialRight                                   = 10,
    Open                                           = 11,
    Details                                        = 12,
    TriggerLeft                                    = 13,
    TriggerRight                                   = 14,
    Skip                                           = 15,
    Scoreboard                                     = 16,
    Tab                                            = 17,
    EUIEmbarkInputActionNavigation_MAX             = 18
};


// UserDefinedEnum  Angelscript.ECommonNavigationStrategy
enum class ECommonNavigationStrategy : uint8_t
{
    Push                                           = 0,
    Override                                       = 1,
    Unique                                         = 2,
    Toggle                                         = 3,
    Clear                                          = 4,
    Skip                                           = 5,
    ECommonNavigationStrategy_MAX                  = 6
};


// UserDefinedEnum  Angelscript.ENavigationStrategy
enum class ENavigationStrategy : uint8_t
{
    Push                                           = 0,
    Unique                                         = 1,
    Override                                       = 2,
    OverrideIgnoreRoot                             = 3,
    Skip                                           = 4,
    Clear                                          = 5,
    Back                                           = 6,
    ENavigationStrategy_MAX                        = 7
};


// UserDefinedEnum  Angelscript.EEmbarkPaginatedScrollBoxNavigationDirection
enum class EEmbarkPaginatedScrollBoxNavigationDirection : uint8_t
{
    Direct                                         = 0,
    FromNext                                       = 1,
    FromPrevious                                   = 2,
    EEmbarkPaginatedScrollBoxNavigationDirection_MAX = 3
};


// UserDefinedEnum  Angelscript.ESubtitleSize
enum class ESubtitleSize : uint8_t
{
    Small                                          = 0,
    Medium                                         = 1,
    Large                                          = 2,
    ESubtitleSize_MAX                              = 3
};


// UserDefinedEnum  Angelscript.ETwoPaneLayoutEdgeSnapMode
enum class ETwoPaneLayoutEdgeSnapMode : uint8_t
{
    NoEdgeSnap                                     = 0,
    SnapToLeftSide                                 = 1,
    SnapToRightSide                                = 2,
    SnapToBothSides                                = 3,
    ETwoPaneLayoutEdgeSnapMode_MAX                 = 4
};


// UserDefinedEnum  Angelscript.EDialogResponse
enum class EDialogResponse : uint8_t
{
    None                                           = 0,
    Ok                                             = 1,
    Cancel                                         = 2,
    EDialogResponse_MAX                            = 3
};


// UserDefinedEnum  Angelscript.EStagedEnableState
enum class EStagedEnableState : uint8_t
{
    Enabled                                        = 0,
    EnabledThisFrame                               = 1,
    Disabled                                       = 2,
    DisabledThisFrame                              = 3,
    EStagedEnableState_MAX                         = 4
};


// UserDefinedEnum  Angelscript.EGroundTraceDebugMode
enum class EGroundTraceDebugMode : uint8_t
{
    None                                           = 0,
    Normal                                         = 1,
    ExtraLong                                      = 2,
    EGroundTraceDebugMode_MAX                      = 3
};


// UserDefinedEnum  Angelscript.EPlatformType
enum class EPlatformType : uint8_t
{
    PC                                             = 0,
    Xbox                                           = 1,
    Playstation                                    = 2,
    EPlatformType_MAX                              = 3
};


// UserDefinedEnum  Angelscript.ECollisionQueryType
enum class ECollisionQueryType : uint8_t
{
    TraceType                                      = 0,
    ObjectTypes                                    = 1,
    Profile                                        = 2,
    ECollisionQueryType_MAX                        = 3
};


// UserDefinedEnum  Angelscript.EVoiceChatChannelOption
enum class EVoiceChatChannelOption : uint8_t
{
    Party                                          = 0,
    Squad                                          = 1,
    EVoiceChatChannelOption_MAX                    = 2
};


// UserDefinedEnum  Angelscript.EVoiceChatPrivacyOption
enum class EVoiceChatPrivacyOption : uint8_t
{
    All                                            = 0,
    FRIENDS_ONLY                                   = 1,
    EVoiceChatPrivacyOption_MAX                    = 2
};


// UserDefinedEnum  Angelscript.EVoicePlayerState
enum class EVoicePlayerState : uint8_t
{
    NOT_IN_CHANNEL                                 = 0,
    Muted                                          = 1,
    Silent                                         = 2,
    Talking                                        = 3,
    Blocked                                        = 4,
    EVoicePlayerState_MAX                          = 5
};


// UserDefinedEnum  Angelscript.EVoiceModPreset
enum class EVoiceModPreset : uint8_t
{
    TwoByOne                                       = 0,
    EightBit                                       = 1,
    Baby                                           = 2,
    Banana                                         = 3,
    Bonny                                          = 4,
    Boomer                                         = 5,
    Bot                                            = 6,
    Calitune                                       = 7,
    CartoonMan                                     = 8,
    CartoonWoman                                   = 9,
    Cathedral                                      = 10,
    Central                                        = 11,
    CheapMic                                       = 12,
    Chipmunk                                       = 13,
    Clean                                          = 14,
    Crazy                                          = 15,
    CustomPitch                                    = 16,
    Cute                                           = 17,
    Dark                                           = 18,
    DarkAngel                                      = 19,
    Deep                                           = 20,
    Double                                         = 21,
    Drone                                          = 22,
    Echo                                           = 23,
    Engine                                         = 24,
    Evil                                           = 25,
    Evolver                                        = 26,
    Fan                                            = 27,
    Genius                                         = 28,
    Hamsters                                       = 29,
    Helium                                         = 30,
    NTune                                          = 31,
    NoFX                                           = 32,
    Octaver                                        = 33,
    Ogre                                           = 34,
    Orbital                                        = 35,
    PoliceBot                                      = 36,
    Ruby                                           = 37,
    SecondLife                                     = 38,
    SpeechJammer                                   = 39,
    Stranger                                       = 40,
    Telephone                                      = 41,
    TrapTune                                       = 42,
    VeryDisco                                      = 43,
    Vibrato                                        = 44,
    VoiceEnhancer                                  = 45,
    Vr                                             = 46,
    WahWah                                         = 47,
    EVoiceModPreset_MAX                            = 48
};


