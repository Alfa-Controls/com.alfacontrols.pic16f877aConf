// get/set #NAME# aliases
#define #NAME#_TRIS                 TRIS#PORT#bits.TRIS#PORT##BIT#
#define #NAME#_PORT                 PORT#PORT#bits.R#PORT##BIT#
#define #NAME#_SetHigh()            do { PORT#PORT#bits.PORT#PORT##BIT# = 1; } while(0)
#define #NAME#_SetLow()             do { PORT#PORT#bits.PORT#PORT##BIT# = 0; } while(0)
#define #NAME#_Toggle()             do { PORT#PORT#bits.PORT#PORT##BIT# = ~PORT#PORT#bits.PORT#PORT##BIT#; } while(0)
#define #NAME#_GetValue()           PORT#PORT#bits.R#PORT##BIT#
#define #NAME#_SetDigitalInput()    do { TRIS#PORT#bits.TRIS#PORT##BIT# = 1; } while(0)
#define #NAME#_SetDigitalOutput()   do { TRIS#PORT#bits.TRIS#PORT##BIT# = 0; } while(0)