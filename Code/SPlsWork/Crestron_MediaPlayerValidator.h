namespace Crestron.MediaPlayerValidator;
        // class declarations
         class MediaPlayerValidator;
         class IPInfo;
         class DirectConnectInfo;
     class MediaPlayerValidator 
    {
        // class delegates

        // class events

        // class functions
        STRING_FUNCTION GenerateDirectConnectMessage ( STRING version , STRING tag , STRING source , STRING ip );
        STRING_FUNCTION ToString ();
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();

        // class variables
        INTEGER __class_id__;

        // class properties
    };

     class IPInfo 
    {
        // class delegates

        // class events

        // class functions
        STRING_FUNCTION ToString ();
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();

        // class variables
        STRING ip[][];

        // class properties
    };

     class DirectConnectInfo 
    {
        // class delegates

        // class events

        // class functions
        STRING_FUNCTION ToString ();
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();

        // class variables
        STRING ver[];
        STRING tag[];
        STRING src[];
        STRING ip[][];

        // class properties
    };

