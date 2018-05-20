namespace Crestron.CRPC;
        // class declarations
         class CrpcConstants;
         class CrpcServiceConstants;
         class JsonRpc2Errors;
         class JSONRPC;
         class CrpcRegisterEvent;
         class CrpcDeregisterEvent;
         class CrpcEvent;
         class Register;
         class Method;
         class Property;
         class GetObjects;
         class GetMembers;
         class CrpcSerializationFormat;
         class CrpcSerializationFormatInfo;
         class JSONRPCMethod;
         class JSONRPCMethodWithNamedParameters;
         class JSONRPCMethodWithPositionalParameters;
         class JSONRPCEventParams;
         class CrpcJsonException;
    static class CrpcConstants 
    {
        // class delegates

        // class events

        // class functions
        STRING_FUNCTION ToString ();
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();

        // class variables
        INTEGER __class_id__;

        // class properties
    };

    static class CrpcServiceConstants 
    {
        // class delegates

        // class events

        // class functions
        STRING_FUNCTION ToString ();
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();

        // class variables
        static SIGNED_LONG_INTEGER MAX_PACKET_SIZE;
        static STRING CRPC_VERSION[];
        static STRING CRPC_RESERVED_OBJECT_NAME[];
        static STRING CRPC_FORMAT_JSON[];
        static STRING CRPC_FORMAT_BSON[];
        static STRING CRPC_EVENT_OBJECTDIRCHANGED[];
        static STRING CRPC_EVENT_OBJECTS_ADDED[];
        static STRING CRPC_EVENT_OBJECTS_REMOVED[];
        static STRING CRPC_SERVICE_OBJECT_NAME[];

        // class properties
    };

    static class JsonRpc2Errors 
    {
        // class delegates

        // class events

        // class functions
        STRING_FUNCTION ToString ();
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();

        // class variables
        static SIGNED_LONG_INTEGER PARSE_ERROR;
        static SIGNED_LONG_INTEGER INVALID_REQUEST;
        static SIGNED_LONG_INTEGER METHOD_NOT_FOUND;
        static SIGNED_LONG_INTEGER INVALID_PARAMS;
        static SIGNED_LONG_INTEGER INTERNAL_ERROR;
        static SIGNED_LONG_INTEGER IMPL_SERVER_ERROR_START;
        static SIGNED_LONG_INTEGER IMPL_SERVER_PROPERTY_NOT_AVAILABLE;
        static SIGNED_LONG_INTEGER IMPL_SERVER_OBJECT_NOT_FOUND;
        static SIGNED_LONG_INTEGER IMPL_SERVER_ERROR_END;

        // class properties
    };

    static class JSONRPC 
    {
        // class delegates

        // class events

        // class functions
        STRING_FUNCTION ToString ();
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();

        // class variables
        static STRING JSONRPC_VERSION[];
        static STRING JSONRPC_ID[];
        static STRING JSONRPC_RESULT[];
        static STRING JSONRPC_ERROR[];
        static STRING JSONRPC_PARAMS[];
        static STRING JSONRPC_PARAMETERS[];

        // class properties
    };

    static class CrpcRegisterEvent 
    {
        // class delegates

        // class events

        // class functions
        STRING_FUNCTION ToString ();
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();

        // class variables
        static STRING JSONRPC_REGISTEREVENT[];
        static STRING JSONRPC_REGISTEREVENT_PARAM_EVENT[];
        static STRING JSONRPC_REGISTEREVENT_PARAM_HANDLE[];
        static STRING JSONRPC_EVENT_PARAMS[];

        // class properties
    };

    static class CrpcDeregisterEvent 
    {
        // class delegates

        // class events

        // class functions
        STRING_FUNCTION ToString ();
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();

        // class variables
        static STRING JSONRPC_DEREGISTEREVENT[];
        static STRING JSONRPC_DEREGISTEREVENT_PARAM_EVENT[];
        static STRING JSONRPC_DEREGISTEREVENT_PARAM_HANDLE[];
        static STRING JSONRPC_EVENT_PARAMS[];

        // class properties
    };

    static class CrpcEvent 
    {
        // class delegates

        // class events

        // class functions
        STRING_FUNCTION ToString ();
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();

        // class variables
        static STRING JSONRPC_EVENT[];
        static STRING JSONRPC_EVENT_PARAM_EVENT[];
        static STRING JSONRPC_EVENT_PARAM_HANDLE[];
        static STRING JSONRPC_EVENT_PARAMS[];
        static STRING JSONRPC_EVENT_PARAMETERS[];

        // class properties
    };

    static class Register 
    {
        // class delegates

        // class events

        // class functions
        STRING_FUNCTION ToString ();
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();

        // class variables
        static STRING JSONRPC_REGISTER[];
        static STRING JSONRPC_REGISTER_VER[];
        static STRING JSONRPC_REGISTER_NAME[];
        static STRING JSONRPC_REGISTER_UUID[];
        static STRING JSONRPC_REGISTER_CONNECTIONS[];
        static STRING JSONRPC_REGISTER_MAXPACKETSIZE[];
        static STRING JSONRPC_REGISTER_ENCODING[];
        static STRING JSONRPC_REGISTER_FORMAT[];
        static STRING JSONRPC_REGISTER_FORMATS[];

        // class properties
    };

    static class Method 
    {
        // class delegates

        // class events

        // class functions
        STRING_FUNCTION ToString ();
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();

        // class variables
        static STRING JSONRPC_METHOD[];

        // class properties
    };

    static class Property 
    {
        // class delegates

        // class events

        // class functions
        STRING_FUNCTION ToString ();
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();

        // class variables
        static STRING JSONRPC_PROPERTY_GET[];
        static STRING JSONRPC_PROPERTY_SET[];
        static STRING JSONRPC_PROPERTY_NAME[];
        static STRING JSONRPC_PROPERTY_VALUE[];

        // class properties
    };

    static class GetObjects 
    {
        // class delegates

        // class events

        // class functions
        STRING_FUNCTION ToString ();
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();

        // class variables
        static STRING JSONRPC_GETOBJECTS[];
        static STRING JSONRPC_GETOBJECTS_CATEGORY[];
        static STRING JSONRPC_GETOBJECTS_INSTANCENAME[];
        static STRING JSONRPC_GETOBJECTS_INTERFACES[];
        static STRING JSONRPC_GETOBJECTS_UUID[];
        static STRING JSONRPC_GETOBJECTS_NAME[];

        // class properties
    };

    static class GetMembers 
    {
        // class delegates

        // class events

        // class functions
        STRING_FUNCTION ToString ();
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();

        // class variables
        static STRING JSONRPC_GETMEMBERS[];
        static STRING JSONRPC_GETMEMBERS_OBJECT[];
        static STRING JSONRPC_GETMEMBERS_ACCESS[];

        // class properties
    };

    static class CrpcSerializationFormat // enum
    {
        static SIGNED_LONG_INTEGER Unknown;
        static SIGNED_LONG_INTEGER JSON;
        static SIGNED_LONG_INTEGER BSON;
    };

    static class CrpcSerializationFormatInfo 
    {
        // class delegates

        // class events

        // class functions
        static STRING_FUNCTION GetFormatNameValue ( CrpcSerializationFormat f );
        STRING_FUNCTION ToString ();
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();

        // class variables
        INTEGER __class_id__;

        // class properties
    };

     class JSONRPCMethod 
    {
        // class delegates

        // class events

        // class functions
        STRING_FUNCTION ToString ();
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();

        // class variables
        STRING JSONRPC[];

        // class properties
        STRING Method[];
        SIGNED_LONG_INTEGER ID;
    };

namespace Crestron.CRPC.CrpcClient;
        // class declarations
         class CallbackObject;
         class DspCrosspoint;
         class ParameterTriplet;
         class ParameterTripletKey;
         class EqualityComparer;
         class FeedbackType;
         class FeedbackDesignation;
         class ConnectionManager;
         class CrpcDeviceObject;
         class CrpcSessionRegistrationParameters;
         class MethodExecutionCompletedEventArgs;
         class NotificationReceivedEventArgs;
         class CrpcSession;
         class CrpcObjectsResultsContainer;
         class CrpDevicecObjects;
         class CrpcDeviceObjectInfo;
         class ConnectCompletedEventArgs;
         class GetObjectsCompletedEventArgs;
         class GetMembersCompletedEventArgs;
         class GetPropertyCompletedEventArgs;
         class CrpcDeviceObjectFactory;
         class CrpcDeviceObjectInterfaceFactory;
         class CrpcRegisterResponse;
         class JSONRPCError;
         class JSONRPCResponse;
         class CRPCEventInfo;
         class PendingMessageHolder;
         class CrpcResponseReceivedEventArgs;
         class CrpcEventReceivedEventArgs;
         class CrpcMessenger;
         class CrpcDSJ_v1_0;
           class ParameterChangedReceivedEventArgs;
           class GetParameterStatusCompletedEventArgs;
     class CallbackObject 
    {
        // class delegates

        // class events

        // class functions
        STRING_FUNCTION ToString ();
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();

        // class variables
        Crestron.CRPC.CrpcClient.DspCrosspoint Type;

        // class properties
    };

     class DspCrosspoint 
    {
        // class delegates

        // class events

        // class functions
        FUNCTION Initialize ( INTEGER ipIDValue );
        FUNCTION DisableEntry ( ParameterTriplet parameterTriplet );
        FUNCTION EnableEntry ( ParameterTriplet parameterTriplet );
        FUNCTION CreateDigitalEntry ( INTEGER objType , LONG_INTEGER index , LONG_INTEGER objInst , INTEGER joinNumber , STRING friendlyName );
        STRING_FUNCTION ToString ();
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();

        // class variables
        Crestron.CRPC.CrpcClient.ConnectionManager connectionManager;
        Crestron.CRPC.CrpcClient.CrpcDSJ_v1_0 _crpcDsj;

        // class properties
    };

     class ParameterTriplet 
    {
        // class delegates

        // class events

        // class functions
        STRING_FUNCTION ToString ();
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();

        // class variables
        LONG_INTEGER objInst;
        INTEGER objType;
        LONG_INTEGER index;
        STRING friendlyName[];
        INTEGER multiplier;

        // class properties
    };

     class EqualityComparer 
    {
        // class delegates

        // class events

        // class functions
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ( ParameterTripletKey triplet );
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
    };

    static class FeedbackType // enum
    {
        static SIGNED_LONG_INTEGER Analog;
        static SIGNED_LONG_INTEGER Digital;
    };

    static class FeedbackDesignation // enum
    {
        static SIGNED_LONG_INTEGER Local;
        static SIGNED_LONG_INTEGER CallbackObject;
    };

     class CrpcSession 
    {
        // class delegates
        delegate FUNCTION DSPErrorMessage ( SIMPLSHARPSTRING errorMessage );

        // class events
        EventHandler ParameterChangedReceived ( CrpcSession sender, ParameterChangedReceivedEventArgs e );
        EventHandler GetParameterStatusReceived ( CrpcSession sender, GetParameterStatusCompletedEventArgs e );
        EventHandler SubscriptionCompleted2 ( CrpcSession sender, EventArgs e );
        EventHandler GetObjectsCompleted ( CrpcSession sender, GetObjectsCompletedEventArgs e );
        EventHandler MethodExecutionCompleted ( CrpcSession sender, MethodExecutionCompletedEventArgs e );
        EventHandler NotificationReceived ( CrpcSession sender, NotificationReceivedEventArgs e );

        // class functions
        FUNCTION Initialize ( INTEGER ipIdValue );
        FUNCTION InitializeComplete ();
        FUNCTION AddToSubcriptionCompletedEvent ( CrpcDSJ_v1_0 crpcDsj );
        FUNCTION AddParameterToDsjLookup ( ParameterTriplet parameterTriplet , CrpcDSJ_v1_0 crpcDsj );
        FUNCTION AddSetParameterToDsjLookup ( ParameterTriplet parameterTriplet , CrpcDSJ_v1_0 crpcDsj );
        FUNCTION GetParameterStatusResponseReceived ( ParameterTriplet triplet );
        FUNCTION CRPCMessageHandler ( STRING crpcMsg );
        FUNCTION RegisterTest ();
        FUNCTION Start ( LONG_INTEGER ipID );
        FUNCTION Connect ();
        FUNCTION SendString ( STRING crpcMsg );
        FUNCTION DisableHandleCIP ();
        FUNCTION EnableHandleCIP ();
        FUNCTION GetObjectsAsyncTrigger ();
        FUNCTION HandleCipPacket ();
        FUNCTION Dispose ();
        STRING_FUNCTION ToString ();
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();

        // class variables
        Crestron.CRPC.CrpcClient.CrpcMessenger _crpcMessenger;
        INTEGER InitializeCompleted;
        SIGNED_LONG_INTEGER crpcRandomNum;

        // class properties
        DelegateProperty DSPErrorMessage ErrorMessage;
        STRING Name[];
    };

     class CrpcObjectsResultsContainer 
    {
        // class delegates

        // class events

        // class functions
        STRING_FUNCTION ToString ();
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();

        // class variables
        Crestron.CRPC.CrpcClient.CrpDevicecObjects ObjectsContainer;

        // class properties
    };

     class CrpDevicecObjects 
    {
        // class delegates

        // class events

        // class functions
        STRING_FUNCTION ToString ();
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();

        // class variables
        Crestron.CRPC.CrpcClient.CrpcDeviceObjectInfo Objects[];

        // class properties
    };

     class CrpcDeviceObjectInfo 
    {
        // class delegates

        // class events

        // class functions
        STRING_FUNCTION ToString ();
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();

        // class variables
        STRING Category[];
        STRING Name[];
        STRING InstanceName[];
        STRING SupportedInterfaces[][];

        // class properties
    };

     class CrpcDeviceObjectFactory 
    {
        // class delegates

        // class events

        // class functions
        STRING_FUNCTION ToString ();
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();

        // class variables
        INTEGER __class_id__;

        // class properties
    };

     class CrpcDeviceObjectInterfaceFactory 
    {
        // class delegates

        // class events

        // class functions
        STRING_FUNCTION ToString ();
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();

        // class variables
        INTEGER __class_id__;

        // class properties
    };

     class CrpcRegisterResponse 
    {
        // class delegates

        // class events

        // class functions
        STRING_FUNCTION ToString ();
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();

        // class variables
        STRING version[];
        STRING name[];
        LONG_INTEGER maxPacketSize;
        STRING encoding[];
        STRING format[];

        // class properties
    };

     class JSONRPCError 
    {
        // class delegates

        // class events

        // class functions
        STRING_FUNCTION ToString ();
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();

        // class variables
        SIGNED_LONG_INTEGER Code;
        STRING Message[];

        // class properties
    };

     class JSONRPCResponse 
    {
        // class delegates

        // class events

        // class functions
        STRING_FUNCTION ToString ();
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();

        // class variables
        STRING Version[];
        Crestron.CRPC.CrpcClient.JSONRPCError Error;
        SIGNED_LONG_INTEGER ID;

        // class properties
    };

     class CRPCEventInfo 
    {
        // class delegates

        // class events

        // class functions
        STRING_FUNCTION ToString ();
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();

        // class variables
        STRING EventName[];
        STRING Tag[];

        // class properties
    };

     class CrpcMessenger 
    {
        // class delegates
        delegate FUNCTION SendPacket ( STRING crpcMsg );
        delegate FUNCTION SendString2 ( STRING crpcMsg );

        // class events
        EventHandler CrpcResponseReceived ( CrpcMessenger sender, CrpcResponseReceivedEventArgs e );
        EventHandler CrpcEventReceived ( CrpcMessenger sender, CrpcEventReceivedEventArgs e );

        // class functions
        FUNCTION Shutdown ();
        FUNCTION ClearPendingMessages ();
        STRING_FUNCTION ToString ();
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();

        // class variables
        static SIGNED_LONG_INTEGER ENCODING;

        // class properties
        DelegateProperty SendPacket SendCRPCPacket;
        DelegateProperty SendString2 SendCRPCString;
        CrpcSerializationFormat SerializationFormat;
    };

     class CrpcDSJ_v1_0 
    {
        // class delegates
        delegate FUNCTION DSPInitializeComplete ( );
        delegate FUNCTION DSPErrorMessage ( SIMPLSHARPSTRING errorMessage );
        delegate FUNCTION FeedbackCallback ( INTEGER value , INTEGER join );

        // class events

        // class functions
        FUNCTION Initialize ( STRING ipid );
        FUNCTION GetParameterStatusResponseReceived ( ParameterTriplet triplet );
        FUNCTION CreateDigitalEntry ( INTEGER objType , LONG_INTEGER index , LONG_INTEGER objInst , INTEGER joinNumber , STRING friendlyName );
        FUNCTION CreateAnalogEntry ( INTEGER objType , LONG_INTEGER index , LONG_INTEGER objInst , INTEGER joinNumber , STRING friendlyName , STRING minValue , STRING maxValue , STRING resolution , INTEGER multiplier );
        FUNCTION DigPress ( INTEGER join , INTEGER value );
        FUNCTION AinChange ( INTEGER join , INTEGER value );
        FUNCTION DigGet ( INTEGER join );
        FUNCTION AnGet ( INTEGER join );
        FUNCTION TestParams1 ();
        FUNCTION TestParams2 ();
        STRING_FUNCTION ToString ();
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();

        // class variables
        Crestron.CRPC.CrpcClient.DspCrosspoint _dspCrosspoint;
        INTEGER DsjInitializationIsComplete;

        // class properties
        DelegateProperty DSPInitializeComplete InitializeComplete;
        DelegateProperty DSPErrorMessage ErrorMessage;
        DelegateProperty FeedbackCallback DigFeedbackCallback;
        DelegateProperty FeedbackCallback AnFeedbackCallback;
    };

namespace Crestron.CRPC.CrpcClient.DeviceProxy.DSP;
        // class declarations
         class OnDeserializeAttribute;
         class DspObject;
         class StructureNames;
         class BinaryStructTypeInfo;
         class BinaryType;
         class BinaryTypeMember;
         class DspObjectTypeChangedEventArgs;
         class DspIOFriendlyNameChangedEventArgs;
         class DspIoObject;
         class DSPOBJ_PARAM;
         class DspParameterSettingMembers;
         class DspParameterSetting;
         class DspParameterSettingExtension;
         class DspParamterExtension;
         class DspParameter;
         class Notification;
         class NotificationInfo;
     class OnDeserializeAttribute 
    {
        // class delegates

        // class events

        // class functions
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
    };

    static class StructureNames 
    {
        // class delegates

        // class events

        // class functions
        STRING_FUNCTION ToString ();
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();

        // class variables
        static STRING IODEFINITION_HEADER_NAME[];
        static STRING VUDATAMAP_HEADER_NAME[];
        static STRING VUDATAMAP_TRIPLET_NAME[];
        static STRING VUDATAMAP_TRIPLET_OBJINST_MEMBER_NAME[];
        static STRING VUDATAMAP_TRIPLET_PARAMIDX_MEMBER_NAME[];

        // class properties
    };

     class DSPOBJ_PARAM 
    {
        // class delegates

        // class events

        // class functions
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        LONG_INTEGER objInst;
        INTEGER objType;
        LONG_INTEGER index;
        static STRING BINARY_STRUCTURE_NAME[];
        static STRING BINARY_STRUCTURE_MEMBER_NAME_OBJ_INST[];
        static STRING BINARY_STRUCTURE_MEMBER_NAME_OBJ_TYPE[];
        static STRING BINARY_STRUCTURE_MEMBER_NAME_IDX[];
        static STRING BINARY_STRUCTURE_MEMBER_NAME_VALUE[];

        // class properties
    };

     class DspParameterSettingMembers 
    {
        // class delegates

        // class events

        // class functions
        STRING_FUNCTION ToString ();
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();

        // class variables
        static STRING BINARY_STRUCT_NAME[];
        static STRING MEMBER_NAME_OBJINST[];
        static STRING MEMBER_NAME_OBJTYPE[];
        static STRING MEMBER_NAME_IDX[];
        static STRING MEMBER_NAME_VALUE[];
        static STRING MEMBER_NAME_RAMPT[];
        static SIGNED_LONG_INTEGER NUM_MEMBERS;

        // class properties
    };

    static class DspParameterSettingExtension 
    {
        // class delegates

        // class events

        // class functions
        STRING_FUNCTION ToString ();
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();

        // class variables
        INTEGER __class_id__;

        // class properties
    };

    static class DspParamterExtension 
    {
        // class delegates

        // class events

        // class functions
        STRING_FUNCTION ToString ();
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();

        // class variables
        INTEGER __class_id__;

        // class properties
    };

    static class Notification // enum
    {
        static SIGNED_LONG_INTEGER ParameterChanged;
        static SIGNED_LONG_INTEGER PresetChanged;
        static SIGNED_LONG_INTEGER VUMeterLevelsChanged;
        static SIGNED_LONG_INTEGER StereoCouplingsChanged;
        static SIGNED_LONG_INTEGER IOFriendlyNameChanged;
        static SIGNED_LONG_INTEGER VUMapChanged;
        static SIGNED_LONG_INTEGER SpectrumLevelsChanged;
        static SIGNED_LONG_INTEGER ObjectTypeChanged;
        static SIGNED_LONG_INTEGER ProjectParamLoadStateUpdated;
        static SIGNED_LONG_INTEGER BridgeChannelsChanged;
    };

    static class NotificationInfo 
    {
        // class delegates

        // class events

        // class functions
        static STRING_FUNCTION GetNotificationName ( Notification n );
        STRING_FUNCTION ToString ();
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();

        // class variables
        static STRING UNKNOWN[];
        static STRING PARAMETER_CHANGED[];
        static STRING PRESET_CHANGED[];
        static STRING VU_METER_LEVELS_CHANGED[];
        static STRING STEREO_COUPLINGS_CHANGED[];
        static STRING IO_FRIENDLY_NAME_CHANGED[];
        static STRING VU_MAP_CHANGED[];
        static STRING SPECTRUM_DATA_CHANGED[];
        static STRING OBJECT_TYPE_CHANGED[];
        static STRING PROJECT_PARAMLOADSTATE_UPDATED[];
        static STRING BRIDGE_COUPLINGS_CHANGED[];

        // class properties
    };

namespace DSPXMLdBParser;
        // class declarations
         class MainXMLParser;
           class CVersion;

namespace Crestron.CRPC.CrpcClient.DeviceProxy;
        // class declarations
         class AmpDeviceInstance;
         class DeviceInterfaceType;
         class DeviceInterfaceInfo;
         class GetAllCompletedEventArgs;
         class GetVUDataMapCompletedEventArgs;
         class GetParameterCompletedEventArgs;
         class GetParameterStatusCompletedEventArgs;
         class GetPresetListCompletedEventArgs;
         class GetPresetCompletedEventArgs;
         class GetMetaDataFileCompletedEventArgs;
         class GetDspPropertyCompletedEventArgs;
         class GetStereoCoupledChannelsCompletedEventArgs;
         class GetBridgeCoupledChannelsCompletedEventArgs;
         class VUMeterLevelsUpdatedEventArgs;
         class SpectrumDataUpdatedEventArgs;
         class DspParameterChangedEventArgs;
         class DspStereoCouplingChangeType;
         class DspStereoCouplingsChangedEventArgs;
         class DspBridgeCouplingsChangedEventArgs;
         class DspPresetChangeType;
         class PresetChangedEventArgs;
         class ParameterChangedReceivedEventArgs;
         class ProjectParamLoadUpdateArgs;
         class PresetRenamedEventArgs;
         class StereoCoupleInfo;
         class BridgeCoupleInfo;
         class DspDeviceInstance;
     class AmpDeviceInstance 
    {
        // class delegates

        // class events
        EventHandler GetMembersCompleted ( AmpDeviceInstance sender, GetMembersCompletedEventArgs e );
        EventHandler GetPropertyCompleted ( AmpDeviceInstance sender, GetPropertyCompletedEventArgs e );
        EventHandler GetAllCompleted ( AmpDeviceInstance sender, GetAllCompletedEventArgs e );
        EventHandler GetParameterCompleted ( AmpDeviceInstance sender, GetParameterCompletedEventArgs e );
        EventHandler GetParameterStatusCompleted ( AmpDeviceInstance sender, GetParameterStatusCompletedEventArgs e );
        EventHandler GetVUDataMapCompleted ( AmpDeviceInstance sender, GetVUDataMapCompletedEventArgs e );
        EventHandler GetToolMetaDataFileCompleted ( AmpDeviceInstance sender, GetMetaDataFileCompletedEventArgs e );
        EventHandler GetPresetListCompleted ( AmpDeviceInstance sender, GetPresetListCompletedEventArgs e );
        EventHandler GetPresetCompleted ( AmpDeviceInstance sender, GetPresetCompletedEventArgs e );
        EventHandler GetDspPropertyCompleted ( AmpDeviceInstance sender, GetDspPropertyCompletedEventArgs e );
        EventHandler GetStereoCoupledChannelsCompleted ( AmpDeviceInstance sender, GetStereoCoupledChannelsCompletedEventArgs e );
        EventHandler GetBridgeCoupledChannelsCompleted ( AmpDeviceInstance sender, GetBridgeCoupledChannelsCompletedEventArgs e );
        EventHandler SpectrumDataUpdated ( AmpDeviceInstance sender, SpectrumDataUpdatedEventArgs e );
        EventHandler VUMeterLevelsUpdated ( AmpDeviceInstance sender, VUMeterLevelsUpdatedEventArgs e );
        EventHandler DspParameterChanged ( AmpDeviceInstance sender, DspParameterChangedEventArgs e );
        EventHandler DspStereoCouplingsChanged ( AmpDeviceInstance sender, DspStereoCouplingsChangedEventArgs e );
        EventHandler IOFriendlyNameChanged ( AmpDeviceInstance sender, DspIOFriendlyNameChangedEventArgs e );
        EventHandler PresetCreated ( AmpDeviceInstance sender, PresetChangedEventArgs e );
        EventHandler PresetRemoved ( AmpDeviceInstance sender, PresetChangedEventArgs e );
        EventHandler PresetSet ( AmpDeviceInstance sender, PresetChangedEventArgs e );
        EventHandler PresetRenamed ( AmpDeviceInstance sender, PresetRenamedEventArgs e );
        EventHandler ProjectParamLoadUpdatedState ( AmpDeviceInstance sender, ProjectParamLoadUpdateArgs e );
        EventHandler DspBridgeCouplingsChanged ( AmpDeviceInstance sender, DspBridgeCouplingsChangedEventArgs e );
        EventHandler ParameterChangedReceived ( AmpDeviceInstance sender, ParameterChangedReceivedEventArgs e );

        // class functions
        FUNCTION SetCrpcSession ( CrpcSession crpcSession );
        FUNCTION SetCRPCClient ( DspCrosspoint dspCrpcClient );
        STRING_FUNCTION ToString ();
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();

        // class variables
        STRING METHOD_NAME_GET_ALL[];
        STRING METHOD_NAME_GET_VU_DATA_MAP[];
        STRING METHOD_NAME_GET_PARAM[];
        STRING METHOD_NAME_SET_PARAM[];
        STRING METHOD_NAME_GET_TOOL_METADATA[];
        STRING METHOD_NAME_GET_PARAMS[];
        STRING METHOD_NAME_SET_PARAMS[];
        STRING METHOD_NAME_CREATE_PRESET[];
        STRING METHOD_NAME_GET_PRESET_LIST[];
        STRING METHOD_NAME_GET_PRESET[];
        STRING METHOD_NAME_SET_PRESET[];
        STRING METHOD_NAME_RENAME_PRESET[];
        STRING METHOD_NAME_REMOVE_PRESET[];

        // class properties
        DeviceInterfaceType CrpcDeviceInterfaceType;
    };

    static class DeviceInterfaceType // enum
    {
        static LONG_INTEGER IUnknown;
        static LONG_INTEGER IDspDevice;
        static LONG_INTEGER IPOTS;
        static LONG_INTEGER ISIP;
        static LONG_INTEGER ISIPConfig;
        static LONG_INTEGER IAmpDevice;
    };

    static class DeviceInterfaceInfo 
    {
        // class delegates

        // class events

        // class functions
        static STRING_FUNCTION DeviceInterfaceName ( DeviceInterfaceType t );
        STRING_FUNCTION ToString ();
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();

        // class variables
        static STRING IPOTS[];
        static STRING IDspDevice[];
        static STRING IUnknown[];
        static STRING ISIP[];
        static STRING ISIPConfig[];
        static STRING IAmpDevice[];

        // class properties
    };

    static class DspStereoCouplingChangeType // enum
    {
        static SIGNED_LONG_INTEGER unknown;
        static SIGNED_LONG_INTEGER coupled;
        static SIGNED_LONG_INTEGER decoupled;
        static SIGNED_LONG_INTEGER decoupled_all;
    };

    static class DspPresetChangeType // enum
    {
        static SIGNED_LONG_INTEGER unknown;
        static SIGNED_LONG_INTEGER created;
        static SIGNED_LONG_INTEGER set;
        static SIGNED_LONG_INTEGER removed;
        static SIGNED_LONG_INTEGER renamed;
    };

namespace DSPXMLdBParser.SupportClasses;
        // class declarations
         class ReadElementEntry;
         class ReadElementType;
         class Base_ReadElement;
         class CastableValue;
         class NativeTypes;
         class Base_ReadElement_WithMembers;
         class MemberBase;
         class ReadElement_Struct;
         class Member;
         class ReadElement_Enumeration;
         class Enum;
         class ReadElement_TypeDef;
         class ReadElement_DspObject;
         class Param;
         class ParamType;
         class ReadElement_DspEQObject;
         class FilterPosition;
         class ReadElement_DspObjectFamily;
         class Member;
         class ReadElement_Device;
         class IOChannel;
         class PositionInfo;
         class CVersion;
    static class ReadElementType // enum
    {
        static SIGNED_LONG_INTEGER Structure;
        static SIGNED_LONG_INTEGER Enumeration;
        static SIGNED_LONG_INTEGER TypeDefinition;
        static SIGNED_LONG_INTEGER DSPObject;
        static SIGNED_LONG_INTEGER FilterObject;
        static SIGNED_LONG_INTEGER DSPEQObject;
        static SIGNED_LONG_INTEGER DSPObjectFamily;
        static SIGNED_LONG_INTEGER Device;
    };

    static class NativeTypes // enum
    {
        static SIGNED_LONG_INTEGER Unknown;
        static SIGNED_LONG_INTEGER NTByte;
        static SIGNED_LONG_INTEGER NTUint32;
        static SIGNED_LONG_INTEGER NTUint16;
        static SIGNED_LONG_INTEGER NTChar;
        static SIGNED_LONG_INTEGER NTUChar;
        static SIGNED_LONG_INTEGER NTFloat;
        static SIGNED_LONG_INTEGER NTBool;
    };

    static class ParamType // enum
    {
        static SIGNED_LONG_INTEGER Param_Bool;
        static SIGNED_LONG_INTEGER Param_Float;
        static SIGNED_LONG_INTEGER Param_Enumeration;
        static SIGNED_LONG_INTEGER Param_Count;
        static SIGNED_LONG_INTEGER Param_Bool_Coord;
        static SIGNED_LONG_INTEGER Param_Float_Coord;
        static SIGNED_LONG_INTEGER Param_Enumeration_Coord;
    };

