using System;
using System.Collections;
using System.Collections.Generic;
using System.Text;
using System.Threading;
using System.Linq;
using Crestron;
using Crestron.Logos.SplusLibrary;
using Crestron.Logos.SplusObjects;
using Crestron.SimplSharp;

namespace CrestronModule_COMPARE___COMMAND_QUEUE
{
    public class CrestronModuleClass_COMPARE___COMMAND_QUEUE : SplusObject
    {
        static CCriticalSection g_criticalSection = new CCriticalSection();
        
        
        
        
        
        
        
        Crestron.Logos.SplusObjects.DigitalInput SEND;
        Crestron.Logos.SplusObjects.DigitalInput COMPARE;
        Crestron.Logos.SplusObjects.AnalogInput REQUESTED;
        Crestron.Logos.SplusObjects.AnalogInput CURRENT;
        Crestron.Logos.SplusObjects.DigitalOutput COMMAND_TO_SEND;
        Crestron.Logos.SplusObjects.DigitalOutput SEND_NEXT;
        Crestron.Logos.SplusObjects.AnalogOutput SEND_VALUE;
        Crestron.Logos.SplusObjects.AnalogOutput CLEAR_CURRENT;
        Crestron.Logos.SplusObjects.AnalogOutput CLEAR_REQUESTED;
        ushort ICOUNT = 0;
        ushort ISEND = 0;
        object SEND_OnPush_0 ( Object __EventInfo__ )
        
            { 
            Crestron.Logos.SplusObjects.SignalEventArgs __SignalEventArg__ = (Crestron.Logos.SplusObjects.SignalEventArgs)__EventInfo__;
            try
            {
                SplusExecutionContext __context__ = SplusThreadStartCode(__SignalEventArg__);
                
                __context__.SourceCodeLine = 115;
                if ( Functions.TestForTrue  ( ( Functions.BoolToInt (ISEND == 1))  ) ) 
                    { 
                    __context__.SourceCodeLine = 117;
                    if ( Functions.TestForTrue  ( ( Functions.BoolToInt (COMPARE  .Value == 1))  ) ) 
                        { 
                        __context__.SourceCodeLine = 119;
                        ISEND = (ushort) ( 2 ) ; 
                        } 
                    
                    else 
                        { 
                        __context__.SourceCodeLine = 123;
                        ISEND = (ushort) ( 0 ) ; 
                        __context__.SourceCodeLine = 124;
                        ICOUNT = (ushort) ( 0 ) ; 
                        __context__.SourceCodeLine = 125;
                        COMMAND_TO_SEND  .Value = (ushort) ( 0 ) ; 
                        } 
                    
                    __context__.SourceCodeLine = 127;
                    SEND_VALUE  .Value = (ushort) ( REQUESTED  .UshortValue ) ; 
                    __context__.SourceCodeLine = 128;
                    Functions.ProcessLogic ( ) ; 
                    __context__.SourceCodeLine = 129;
                    SEND_VALUE  .Value = (ushort) ( 9999 ) ; 
                    } 
                
                else 
                    {
                    __context__.SourceCodeLine = 131;
                    if ( Functions.TestForTrue  ( ( Functions.BoolToInt (ISEND == 2))  ) ) 
                        { 
                        __context__.SourceCodeLine = 133;
                        if ( Functions.TestForTrue  ( ( Functions.BoolToInt (COMPARE  .Value == 1))  ) ) 
                            { 
                            __context__.SourceCodeLine = 135;
                            ISEND = (ushort) ( 1 ) ; 
                            __context__.SourceCodeLine = 136;
                            ICOUNT = (ushort) ( (ICOUNT + 1) ) ; 
                            __context__.SourceCodeLine = 137;
                            SEND_VALUE  .Value = (ushort) ( 999 ) ; 
                            __context__.SourceCodeLine = 138;
                            Functions.ProcessLogic ( ) ; 
                            __context__.SourceCodeLine = 139;
                            SEND_VALUE  .Value = (ushort) ( 9999 ) ; 
                            } 
                        
                        else 
                            { 
                            __context__.SourceCodeLine = 143;
                            ISEND = (ushort) ( 0 ) ; 
                            __context__.SourceCodeLine = 144;
                            ICOUNT = (ushort) ( 0 ) ; 
                            __context__.SourceCodeLine = 145;
                            SEND_NEXT  .Value = (ushort) ( 1 ) ; 
                            __context__.SourceCodeLine = 146;
                            Functions.ProcessLogic ( ) ; 
                            __context__.SourceCodeLine = 147;
                            SEND_NEXT  .Value = (ushort) ( 0 ) ; 
                            __context__.SourceCodeLine = 148;
                            COMMAND_TO_SEND  .Value = (ushort) ( 0 ) ; 
                            } 
                        
                        } 
                    
                    else 
                        { 
                        __context__.SourceCodeLine = 153;
                        SEND_NEXT  .Value = (ushort) ( 1 ) ; 
                        __context__.SourceCodeLine = 154;
                        Functions.ProcessLogic ( ) ; 
                        __context__.SourceCodeLine = 155;
                        SEND_NEXT  .Value = (ushort) ( 0 ) ; 
                        __context__.SourceCodeLine = 156;
                        COMMAND_TO_SEND  .Value = (ushort) ( 0 ) ; 
                        } 
                    
                    }
                
                __context__.SourceCodeLine = 158;
                if ( Functions.TestForTrue  ( ( Functions.BoolToInt ( ICOUNT > 5 ))  ) ) 
                    { 
                    __context__.SourceCodeLine = 160;
                    ISEND = (ushort) ( 0 ) ; 
                    __context__.SourceCodeLine = 161;
                    ICOUNT = (ushort) ( 0 ) ; 
                    __context__.SourceCodeLine = 162;
                    COMMAND_TO_SEND  .Value = (ushort) ( 0 ) ; 
                    __context__.SourceCodeLine = 163;
                    CLEAR_REQUESTED  .Value = (ushort) ( 9999 ) ; 
                    } 
                
                
                
            }
            catch(Exception e) { ObjectCatchHandler(e); }
            finally { ObjectFinallyHandler( __SignalEventArg__ ); }
            return this;
            
        }
        
    object REQUESTED_OnChange_1 ( Object __EventInfo__ )
    
        { 
        Crestron.Logos.SplusObjects.SignalEventArgs __SignalEventArg__ = (Crestron.Logos.SplusObjects.SignalEventArgs)__EventInfo__;
        try
        {
            SplusExecutionContext __context__ = SplusThreadStartCode(__SignalEventArg__);
            
            __context__.SourceCodeLine = 179;
            if ( Functions.TestForTrue  ( ( Functions.BoolToInt ( (Functions.TestForTrue ( Functions.BoolToInt (REQUESTED  .UshortValue != CURRENT  .UshortValue) ) && Functions.TestForTrue ( Functions.BoolToInt (REQUESTED  .UshortValue != 9999) )) ))  ) ) 
                { 
                __context__.SourceCodeLine = 181;
                COMMAND_TO_SEND  .Value = (ushort) ( 1 ) ; 
                __context__.SourceCodeLine = 182;
                CLEAR_CURRENT  .Value = (ushort) ( 9999 ) ; 
                __context__.SourceCodeLine = 185;
                ISEND = (ushort) ( 1 ) ; 
                __context__.SourceCodeLine = 187;
                ICOUNT = (ushort) ( 0 ) ; 
                } 
            
            
            
        }
        catch(Exception e) { ObjectCatchHandler(e); }
        finally { ObjectFinallyHandler( __SignalEventArg__ ); }
        return this;
        
    }
    
object CURRENT_OnChange_2 ( Object __EventInfo__ )

    { 
    Crestron.Logos.SplusObjects.SignalEventArgs __SignalEventArg__ = (Crestron.Logos.SplusObjects.SignalEventArgs)__EventInfo__;
    try
    {
        SplusExecutionContext __context__ = SplusThreadStartCode(__SignalEventArg__);
        
        __context__.SourceCodeLine = 198;
        Functions.Delay (  (int) ( 1 ) ) ; 
        __context__.SourceCodeLine = 201;
        if ( Functions.TestForTrue  ( ( Functions.BoolToInt (CURRENT  .UshortValue == REQUESTED  .UshortValue))  ) ) 
            { 
            __context__.SourceCodeLine = 203;
            ISEND = (ushort) ( 0 ) ; 
            __context__.SourceCodeLine = 204;
            ICOUNT = (ushort) ( 0 ) ; 
            __context__.SourceCodeLine = 205;
            COMMAND_TO_SEND  .Value = (ushort) ( 0 ) ; 
            __context__.SourceCodeLine = 206;
            CLEAR_REQUESTED  .Value = (ushort) ( 9999 ) ; 
            } 
        
        
        
    }
    catch(Exception e) { ObjectCatchHandler(e); }
    finally { ObjectFinallyHandler( __SignalEventArg__ ); }
    return this;
    
}

public override object FunctionMain (  object __obj__ ) 
    { 
    try
    {
        SplusExecutionContext __context__ = SplusFunctionMainStartCode();
        
        __context__.SourceCodeLine = 216;
        ICOUNT = (ushort) ( 0 ) ; 
        __context__.SourceCodeLine = 217;
        ISEND = (ushort) ( 0 ) ; 
        __context__.SourceCodeLine = 218;
        COMMAND_TO_SEND  .Value = (ushort) ( 0 ) ; 
        
        
    }
    catch(Exception e) { ObjectCatchHandler(e); }
    finally { ObjectFinallyHandler(); }
    return __obj__;
    }
    

public override void LogosSplusInitialize()
{
    _SplusNVRAM = new SplusNVRAM( this );
    
    SEND = new Crestron.Logos.SplusObjects.DigitalInput( SEND__DigitalInput__, this );
    m_DigitalInputList.Add( SEND__DigitalInput__, SEND );
    
    COMPARE = new Crestron.Logos.SplusObjects.DigitalInput( COMPARE__DigitalInput__, this );
    m_DigitalInputList.Add( COMPARE__DigitalInput__, COMPARE );
    
    COMMAND_TO_SEND = new Crestron.Logos.SplusObjects.DigitalOutput( COMMAND_TO_SEND__DigitalOutput__, this );
    m_DigitalOutputList.Add( COMMAND_TO_SEND__DigitalOutput__, COMMAND_TO_SEND );
    
    SEND_NEXT = new Crestron.Logos.SplusObjects.DigitalOutput( SEND_NEXT__DigitalOutput__, this );
    m_DigitalOutputList.Add( SEND_NEXT__DigitalOutput__, SEND_NEXT );
    
    REQUESTED = new Crestron.Logos.SplusObjects.AnalogInput( REQUESTED__AnalogSerialInput__, this );
    m_AnalogInputList.Add( REQUESTED__AnalogSerialInput__, REQUESTED );
    
    CURRENT = new Crestron.Logos.SplusObjects.AnalogInput( CURRENT__AnalogSerialInput__, this );
    m_AnalogInputList.Add( CURRENT__AnalogSerialInput__, CURRENT );
    
    SEND_VALUE = new Crestron.Logos.SplusObjects.AnalogOutput( SEND_VALUE__AnalogSerialOutput__, this );
    m_AnalogOutputList.Add( SEND_VALUE__AnalogSerialOutput__, SEND_VALUE );
    
    CLEAR_CURRENT = new Crestron.Logos.SplusObjects.AnalogOutput( CLEAR_CURRENT__AnalogSerialOutput__, this );
    m_AnalogOutputList.Add( CLEAR_CURRENT__AnalogSerialOutput__, CLEAR_CURRENT );
    
    CLEAR_REQUESTED = new Crestron.Logos.SplusObjects.AnalogOutput( CLEAR_REQUESTED__AnalogSerialOutput__, this );
    m_AnalogOutputList.Add( CLEAR_REQUESTED__AnalogSerialOutput__, CLEAR_REQUESTED );
    
    
    SEND.OnDigitalPush.Add( new InputChangeHandlerWrapper( SEND_OnPush_0, false ) );
    REQUESTED.OnAnalogChange.Add( new InputChangeHandlerWrapper( REQUESTED_OnChange_1, false ) );
    CURRENT.OnAnalogChange.Add( new InputChangeHandlerWrapper( CURRENT_OnChange_2, false ) );
    
    _SplusNVRAM.PopulateCustomAttributeList( true );
    
    NVRAM = _SplusNVRAM;
    
}

public override void LogosSimplSharpInitialize()
{
    
    
}

public CrestronModuleClass_COMPARE___COMMAND_QUEUE ( string InstanceName, string ReferenceID, Crestron.Logos.SplusObjects.CrestronStringEncoding nEncodingType ) : base( InstanceName, ReferenceID, nEncodingType ) {}




const uint SEND__DigitalInput__ = 0;
const uint COMPARE__DigitalInput__ = 1;
const uint REQUESTED__AnalogSerialInput__ = 0;
const uint CURRENT__AnalogSerialInput__ = 1;
const uint COMMAND_TO_SEND__DigitalOutput__ = 0;
const uint SEND_NEXT__DigitalOutput__ = 1;
const uint SEND_VALUE__AnalogSerialOutput__ = 0;
const uint CLEAR_CURRENT__AnalogSerialOutput__ = 1;
const uint CLEAR_REQUESTED__AnalogSerialOutput__ = 2;

[SplusStructAttribute(-1, true, false)]
public class SplusNVRAM : SplusStructureBase
{

    public SplusNVRAM( SplusObject __caller__ ) : base( __caller__ ) {}
    
    
}

SplusNVRAM _SplusNVRAM = null;

public class __CEvent__ : CEvent
{
    public __CEvent__() {}
    public void Close() { base.Close(); }
    public int Reset() { return base.Reset() ? 1 : 0; }
    public int Set() { return base.Set() ? 1 : 0; }
    public int Wait( int timeOutInMs ) { return base.Wait( timeOutInMs ) ? 1 : 0; }
}
public class __CMutex__ : CMutex
{
    public __CMutex__() {}
    public void Close() { base.Close(); }
    public void ReleaseMutex() { base.ReleaseMutex(); }
    public int WaitForMutex() { return base.WaitForMutex() ? 1 : 0; }
}
 public int IsNull( object obj ){ return (obj == null) ? 1 : 0; }
}


}
