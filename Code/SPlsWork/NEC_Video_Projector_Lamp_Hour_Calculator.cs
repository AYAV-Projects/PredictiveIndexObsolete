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

namespace CrestronModule_NEC_VIDEO_PROJECTOR_LAMP_HOUR_CALCULATOR
{
    public class CrestronModuleClass_NEC_VIDEO_PROJECTOR_LAMP_HOUR_CALCULATOR : SplusObject
    {
        static CCriticalSection g_criticalSection = new CCriticalSection();
        
        Crestron.Logos.SplusObjects.AnalogInput LAMP_HOUR_DATA1;
        Crestron.Logos.SplusObjects.AnalogInput LAMP_HOUR_DATA2;
        Crestron.Logos.SplusObjects.AnalogInput LAMP_HOUR_DATA3;
        Crestron.Logos.SplusObjects.AnalogInput LAMP_HOUR_DATA4;
        Crestron.Logos.SplusObjects.AnalogInput LAMP_HOUR_DATA5;
        Crestron.Logos.SplusObjects.AnalogInput LAMP_HOUR_DATA6;
        Crestron.Logos.SplusObjects.AnalogInput LAMP_HOUR_DATA7;
        Crestron.Logos.SplusObjects.AnalogInput LAMP_HOUR_DATA8;
        Crestron.Logos.SplusObjects.AnalogOutput LAMP_HOUR;
        ushort SECOND_GROUP1_HI = 0;
        ushort SECOND_GROUP1_LOW = 0;
        ushort SECOND_GROUP2_HI = 0;
        ushort SECOND_GROUP2_LOW = 0;
        ushort TOTAL_GROUP1 = 0;
        ushort TOTAL_GROUP2 = 0;
        ushort SECOND_GROUP1_LOW_MOD = 0;
        ushort SECOND_GROUP2_LOW_MOD = 0;
        object LAMP_HOUR_DATA8_OnChange_0 ( Object __EventInfo__ )
        
            { 
            Crestron.Logos.SplusObjects.SignalEventArgs __SignalEventArg__ = (Crestron.Logos.SplusObjects.SignalEventArgs)__EventInfo__;
            try
            {
                SplusExecutionContext __context__ = SplusThreadStartCode(__SignalEventArg__);
                
                __context__.SourceCodeLine = 21;
                SECOND_GROUP1_HI = (ushort) ( ((LAMP_HOUR_DATA4  .UshortValue * 256) + LAMP_HOUR_DATA3  .UshortValue) ) ; 
                __context__.SourceCodeLine = 22;
                SECOND_GROUP1_LOW = (ushort) ( ((LAMP_HOUR_DATA2  .UshortValue * 256) + LAMP_HOUR_DATA1  .UshortValue) ) ; 
                __context__.SourceCodeLine = 23;
                SECOND_GROUP2_HI = (ushort) ( ((LAMP_HOUR_DATA8  .UshortValue * 256) + LAMP_HOUR_DATA7  .UshortValue) ) ; 
                __context__.SourceCodeLine = 24;
                SECOND_GROUP2_LOW = (ushort) ( ((LAMP_HOUR_DATA6  .UshortValue * 256) + LAMP_HOUR_DATA5  .UshortValue) ) ; 
                __context__.SourceCodeLine = 27;
                TOTAL_GROUP1 = (ushort) ( (((Mod( SECOND_GROUP1_HI , 3600 ) * 182) / 10) + (SECOND_GROUP1_LOW / 3600)) ) ; 
                __context__.SourceCodeLine = 28;
                TOTAL_GROUP2 = (ushort) ( (((Mod( SECOND_GROUP2_HI , 3600 ) * 182) / 10) + (SECOND_GROUP2_LOW / 3600)) ) ; 
                __context__.SourceCodeLine = 30;
                SECOND_GROUP1_LOW_MOD = (ushort) ( (SECOND_GROUP1_LOW - (Divide( SECOND_GROUP1_LOW , 3600 ) * 3600)) ) ; 
                __context__.SourceCodeLine = 31;
                SECOND_GROUP2_LOW_MOD = (ushort) ( (SECOND_GROUP2_LOW - (Divide( SECOND_GROUP2_LOW , 3600 ) * 3600)) ) ; 
                __context__.SourceCodeLine = 32;
                if ( Functions.TestForTrue  ( ( Functions.BoolToInt ( (SECOND_GROUP1_LOW_MOD + SECOND_GROUP2_LOW_MOD) > 3600 ))  ) ) 
                    { 
                    __context__.SourceCodeLine = 34;
                    LAMP_HOUR  .Value = (ushort) ( ((TOTAL_GROUP1 + TOTAL_GROUP2) + 1) ) ; 
                    } 
                
                else 
                    { 
                    __context__.SourceCodeLine = 38;
                    LAMP_HOUR  .Value = (ushort) ( (TOTAL_GROUP1 + TOTAL_GROUP2) ) ; 
                    } 
                
                
                
            }
            catch(Exception e) { ObjectCatchHandler(e); }
            finally { ObjectFinallyHandler( __SignalEventArg__ ); }
            return this;
            
        }
        
    
    public override void LogosSplusInitialize()
    {
        _SplusNVRAM = new SplusNVRAM( this );
        
        LAMP_HOUR_DATA1 = new Crestron.Logos.SplusObjects.AnalogInput( LAMP_HOUR_DATA1__AnalogSerialInput__, this );
        m_AnalogInputList.Add( LAMP_HOUR_DATA1__AnalogSerialInput__, LAMP_HOUR_DATA1 );
        
        LAMP_HOUR_DATA2 = new Crestron.Logos.SplusObjects.AnalogInput( LAMP_HOUR_DATA2__AnalogSerialInput__, this );
        m_AnalogInputList.Add( LAMP_HOUR_DATA2__AnalogSerialInput__, LAMP_HOUR_DATA2 );
        
        LAMP_HOUR_DATA3 = new Crestron.Logos.SplusObjects.AnalogInput( LAMP_HOUR_DATA3__AnalogSerialInput__, this );
        m_AnalogInputList.Add( LAMP_HOUR_DATA3__AnalogSerialInput__, LAMP_HOUR_DATA3 );
        
        LAMP_HOUR_DATA4 = new Crestron.Logos.SplusObjects.AnalogInput( LAMP_HOUR_DATA4__AnalogSerialInput__, this );
        m_AnalogInputList.Add( LAMP_HOUR_DATA4__AnalogSerialInput__, LAMP_HOUR_DATA4 );
        
        LAMP_HOUR_DATA5 = new Crestron.Logos.SplusObjects.AnalogInput( LAMP_HOUR_DATA5__AnalogSerialInput__, this );
        m_AnalogInputList.Add( LAMP_HOUR_DATA5__AnalogSerialInput__, LAMP_HOUR_DATA5 );
        
        LAMP_HOUR_DATA6 = new Crestron.Logos.SplusObjects.AnalogInput( LAMP_HOUR_DATA6__AnalogSerialInput__, this );
        m_AnalogInputList.Add( LAMP_HOUR_DATA6__AnalogSerialInput__, LAMP_HOUR_DATA6 );
        
        LAMP_HOUR_DATA7 = new Crestron.Logos.SplusObjects.AnalogInput( LAMP_HOUR_DATA7__AnalogSerialInput__, this );
        m_AnalogInputList.Add( LAMP_HOUR_DATA7__AnalogSerialInput__, LAMP_HOUR_DATA7 );
        
        LAMP_HOUR_DATA8 = new Crestron.Logos.SplusObjects.AnalogInput( LAMP_HOUR_DATA8__AnalogSerialInput__, this );
        m_AnalogInputList.Add( LAMP_HOUR_DATA8__AnalogSerialInput__, LAMP_HOUR_DATA8 );
        
        LAMP_HOUR = new Crestron.Logos.SplusObjects.AnalogOutput( LAMP_HOUR__AnalogSerialOutput__, this );
        m_AnalogOutputList.Add( LAMP_HOUR__AnalogSerialOutput__, LAMP_HOUR );
        
        
        LAMP_HOUR_DATA8.OnAnalogChange.Add( new InputChangeHandlerWrapper( LAMP_HOUR_DATA8_OnChange_0, false ) );
        LAMP_HOUR_DATA4.OnAnalogChange.Add( new InputChangeHandlerWrapper( LAMP_HOUR_DATA8_OnChange_0, false ) );
        
        _SplusNVRAM.PopulateCustomAttributeList( true );
        
        NVRAM = _SplusNVRAM;
        
    }
    
    public override void LogosSimplSharpInitialize()
    {
        
        
    }
    
    public CrestronModuleClass_NEC_VIDEO_PROJECTOR_LAMP_HOUR_CALCULATOR ( string InstanceName, string ReferenceID, Crestron.Logos.SplusObjects.CrestronStringEncoding nEncodingType ) : base( InstanceName, ReferenceID, nEncodingType ) {}
    
    
    
    
    const uint LAMP_HOUR_DATA1__AnalogSerialInput__ = 0;
    const uint LAMP_HOUR_DATA2__AnalogSerialInput__ = 1;
    const uint LAMP_HOUR_DATA3__AnalogSerialInput__ = 2;
    const uint LAMP_HOUR_DATA4__AnalogSerialInput__ = 3;
    const uint LAMP_HOUR_DATA5__AnalogSerialInput__ = 4;
    const uint LAMP_HOUR_DATA6__AnalogSerialInput__ = 5;
    const uint LAMP_HOUR_DATA7__AnalogSerialInput__ = 6;
    const uint LAMP_HOUR_DATA8__AnalogSerialInput__ = 7;
    const uint LAMP_HOUR__AnalogSerialOutput__ = 0;
    
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
