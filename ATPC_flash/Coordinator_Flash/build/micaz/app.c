#define nx_struct struct
#define nx_union union
#define dbg(mode, format, ...) ((void)0)
#define dbg_clear(mode, format, ...) ((void)0)
#define dbg_active(mode) 0
# 152 "/usr/lib/gcc/avr/4.1.2/include/stddef.h" 3
typedef int ptrdiff_t;
#line 214
typedef unsigned int size_t;
#line 326
typedef int wchar_t;
# 8 "/usr/lib/ncc/deputy_nodeputy.h"
struct __nesc_attr_nonnull {
}  ;
#line 9
struct __nesc_attr_bnd {
#line 9
  void *lo, *hi;
}  ;
#line 10
struct __nesc_attr_bnd_nok {
#line 10
  void *lo, *hi;
}  ;
#line 11
struct __nesc_attr_count {
#line 11
  int n;
}  ;
#line 12
struct __nesc_attr_count_nok {
#line 12
  int n;
}  ;
#line 13
struct __nesc_attr_one {
}  ;
#line 14
struct __nesc_attr_one_nok {
}  ;
#line 15
struct __nesc_attr_dmemset {
#line 15
  int a1, a2, a3;
}  ;
#line 16
struct __nesc_attr_dmemcpy {
#line 16
  int a1, a2, a3;
}  ;
#line 17
struct __nesc_attr_nts {
}  ;
# 121 "/usr/lib/gcc/avr/4.1.2/../../../../avr/include/stdint.h" 3
typedef int int8_t __attribute((__mode__(__QI__))) ;
typedef unsigned int uint8_t __attribute((__mode__(__QI__))) ;
typedef int int16_t __attribute((__mode__(__HI__))) ;
typedef unsigned int uint16_t __attribute((__mode__(__HI__))) ;
typedef int int32_t __attribute((__mode__(__SI__))) ;
typedef unsigned int uint32_t __attribute((__mode__(__SI__))) ;

typedef int int64_t __attribute((__mode__(__DI__))) ;
typedef unsigned int uint64_t __attribute((__mode__(__DI__))) ;
#line 142
typedef int16_t intptr_t;




typedef uint16_t uintptr_t;
#line 159
typedef int8_t int_least8_t;




typedef uint8_t uint_least8_t;




typedef int16_t int_least16_t;




typedef uint16_t uint_least16_t;




typedef int32_t int_least32_t;




typedef uint32_t uint_least32_t;







typedef int64_t int_least64_t;






typedef uint64_t uint_least64_t;
#line 213
typedef int8_t int_fast8_t;




typedef uint8_t uint_fast8_t;




typedef int16_t int_fast16_t;




typedef uint16_t uint_fast16_t;




typedef int32_t int_fast32_t;




typedef uint32_t uint_fast32_t;







typedef int64_t int_fast64_t;






typedef uint64_t uint_fast64_t;
#line 273
typedef int64_t intmax_t;




typedef uint64_t uintmax_t;
# 77 "/usr/lib/gcc/avr/4.1.2/../../../../avr/include/inttypes.h" 3
typedef int32_t int_farptr_t;



typedef uint32_t uint_farptr_t;
# 235 "/usr/lib/ncc/nesc_nx.h"
static __inline uint8_t __nesc_ntoh_uint8(const void * source)  ;




static __inline uint8_t __nesc_hton_uint8(void * target, uint8_t value)  ;





static __inline uint8_t __nesc_ntoh_leuint8(const void * source)  ;




static __inline uint8_t __nesc_hton_leuint8(void * target, uint8_t value)  ;





static __inline int8_t __nesc_ntoh_int8(const void * source)  ;
#line 257
static __inline int8_t __nesc_hton_int8(void * target, int8_t value)  ;






static __inline uint16_t __nesc_ntoh_uint16(const void * source)  ;




static __inline uint16_t __nesc_hton_uint16(void * target, uint16_t value)  ;






static __inline uint16_t __nesc_ntoh_leuint16(const void * source)  ;




static __inline uint16_t __nesc_hton_leuint16(void * target, uint16_t value)  ;
#line 294
static __inline uint32_t __nesc_ntoh_uint32(const void * source)  ;






static __inline uint32_t __nesc_hton_uint32(void * target, uint32_t value)  ;
#line 385
typedef struct { unsigned char data[1]; } __attribute__((packed)) nx_int8_t;typedef int8_t __nesc_nxbase_nx_int8_t  ;
typedef struct { unsigned char data[2]; } __attribute__((packed)) nx_int16_t;typedef int16_t __nesc_nxbase_nx_int16_t  ;
typedef struct { unsigned char data[4]; } __attribute__((packed)) nx_int32_t;typedef int32_t __nesc_nxbase_nx_int32_t  ;
typedef struct { unsigned char data[8]; } __attribute__((packed)) nx_int64_t;typedef int64_t __nesc_nxbase_nx_int64_t  ;
typedef struct { unsigned char data[1]; } __attribute__((packed)) nx_uint8_t;typedef uint8_t __nesc_nxbase_nx_uint8_t  ;
typedef struct { unsigned char data[2]; } __attribute__((packed)) nx_uint16_t;typedef uint16_t __nesc_nxbase_nx_uint16_t  ;
typedef struct { unsigned char data[4]; } __attribute__((packed)) nx_uint32_t;typedef uint32_t __nesc_nxbase_nx_uint32_t  ;
typedef struct { unsigned char data[8]; } __attribute__((packed)) nx_uint64_t;typedef uint64_t __nesc_nxbase_nx_uint64_t  ;


typedef struct { unsigned char data[1]; } __attribute__((packed)) nxle_int8_t;typedef int8_t __nesc_nxbase_nxle_int8_t  ;
typedef struct { unsigned char data[2]; } __attribute__((packed)) nxle_int16_t;typedef int16_t __nesc_nxbase_nxle_int16_t  ;
typedef struct { unsigned char data[4]; } __attribute__((packed)) nxle_int32_t;typedef int32_t __nesc_nxbase_nxle_int32_t  ;
typedef struct { unsigned char data[8]; } __attribute__((packed)) nxle_int64_t;typedef int64_t __nesc_nxbase_nxle_int64_t  ;
typedef struct { unsigned char data[1]; } __attribute__((packed)) nxle_uint8_t;typedef uint8_t __nesc_nxbase_nxle_uint8_t  ;
typedef struct { unsigned char data[2]; } __attribute__((packed)) nxle_uint16_t;typedef uint16_t __nesc_nxbase_nxle_uint16_t  ;
typedef struct { unsigned char data[4]; } __attribute__((packed)) nxle_uint32_t;typedef uint32_t __nesc_nxbase_nxle_uint32_t  ;
typedef struct { unsigned char data[8]; } __attribute__((packed)) nxle_uint64_t;typedef uint64_t __nesc_nxbase_nxle_uint64_t  ;
# 116 "/usr/lib/gcc/avr/4.1.2/../../../../avr/include/string.h" 3
extern void *memset(void *arg_0x7f290c70, int arg_0x7f290dc8, size_t arg_0x7f282010);
# 71 "/usr/lib/gcc/avr/4.1.2/../../../../avr/include/stdlib.h" 3
#line 68
typedef struct __nesc_unnamed4242 {
  int quot;
  int rem;
} div_t;





#line 74
typedef struct __nesc_unnamed4243 {
  long quot;
  long rem;
} ldiv_t;


typedef int (*__compar_fn_t)(const void *arg_0x7f222660, const void *arg_0x7f2227f8);
# 23 "/cygdrive/c/Dropbox/tinyos-2.x/tos/system/tos.h"
typedef uint8_t bool;
enum __nesc_unnamed4244 {
#line 24
  FALSE = 0, TRUE = 1
};
typedef nx_int8_t nx_bool;
uint16_t TOS_NODE_ID = 1;






struct __nesc_attr_atmostonce {
};
#line 35
struct __nesc_attr_atleastonce {
};
#line 36
struct __nesc_attr_exactlyonce {
};
# 40 "/cygdrive/c/Dropbox/tinyos-2.x/tos/types/TinyError.h"
enum __nesc_unnamed4245 {
  SUCCESS = 0, 
  FAIL = 1, 
  ESIZE = 2, 
  ECANCEL = 3, 
  EOFF = 4, 
  EBUSY = 5, 
  EINVAL = 6, 
  ERETRY = 7, 
  ERESERVE = 8, 
  EALREADY = 9, 
  ENOMEM = 10, 
  ENOACK = 11, 
  ELAST = 11
};

typedef uint8_t error_t  ;

static inline error_t ecombine(error_t r1, error_t r2)  ;
# 57 "/usr/lib/gcc/avr/4.1.2/../../../../avr/include/avr/fuse.h" 3
#line 52
typedef struct __nesc_unnamed4246 {

  unsigned char low;
  unsigned char high;
  unsigned char extended;
} __fuse_t;
# 210 "/usr/lib/gcc/avr/4.1.2/../../../../avr/include/avr/pgmspace.h" 3
typedef void prog_void __attribute((__progmem__)) ;
typedef char prog_char __attribute((__progmem__)) ;
typedef unsigned char prog_uchar __attribute((__progmem__)) ;

typedef int8_t prog_int8_t __attribute((__progmem__)) ;
typedef uint8_t prog_uint8_t __attribute((__progmem__)) ;
typedef int16_t prog_int16_t __attribute((__progmem__)) ;
typedef uint16_t prog_uint16_t __attribute((__progmem__)) ;
typedef int32_t prog_int32_t __attribute((__progmem__)) ;
typedef uint32_t prog_uint32_t __attribute((__progmem__)) ;

typedef int64_t prog_int64_t __attribute((__progmem__)) ;
typedef uint64_t prog_uint64_t __attribute((__progmem__)) ;
# 25 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/atm128const.h"
typedef uint8_t const_uint8_t __attribute((__progmem__)) ;
typedef uint16_t const_uint16_t __attribute((__progmem__)) ;
typedef uint32_t const_uint32_t __attribute((__progmem__)) ;
typedef int8_t const_int8_t __attribute((__progmem__)) ;
typedef int16_t const_int16_t __attribute((__progmem__)) ;
typedef int32_t const_int32_t __attribute((__progmem__)) ;
# 82 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/atm128hardware.h"
static __inline void __nesc_enable_interrupt()  ;



static __inline void __nesc_disable_interrupt()  ;




typedef uint8_t __nesc_atomic_t;
__nesc_atomic_t __nesc_atomic_start(void );
void __nesc_atomic_end(__nesc_atomic_t original_SREG);









#line 102
__inline __nesc_atomic_t 
__nesc_atomic_start(void )   ;









#line 112
__inline void 
__nesc_atomic_end(__nesc_atomic_t original_SREG)   ;







typedef uint8_t mcu_power_t  ;


enum __nesc_unnamed4247 {
  ATM128_POWER_IDLE = 0, 
  ATM128_POWER_ADC_NR = 1, 
  ATM128_POWER_EXT_STANDBY = 2, 
  ATM128_POWER_SAVE = 3, 
  ATM128_POWER_STANDBY = 4, 
  ATM128_POWER_DOWN = 5
};


static inline mcu_power_t mcombine(mcu_power_t m1, mcu_power_t m2)  ;
# 34 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/adc/Atm128Adc.h"
enum __nesc_unnamed4248 {
  ATM128_ADC_VREF_OFF = 0, 
  ATM128_ADC_VREF_AVCC = 1, 
  ATM128_ADC_VREF_RSVD, 
  ATM128_ADC_VREF_2_56 = 3
};


enum __nesc_unnamed4249 {
  ATM128_ADC_RIGHT_ADJUST = 0, 
  ATM128_ADC_LEFT_ADJUST = 1
};



enum __nesc_unnamed4250 {
  ATM128_ADC_SNGL_ADC0 = 0, 
  ATM128_ADC_SNGL_ADC1, 
  ATM128_ADC_SNGL_ADC2, 
  ATM128_ADC_SNGL_ADC3, 
  ATM128_ADC_SNGL_ADC4, 
  ATM128_ADC_SNGL_ADC5, 
  ATM128_ADC_SNGL_ADC6, 
  ATM128_ADC_SNGL_ADC7, 
  ATM128_ADC_DIFF_ADC00_10x, 
  ATM128_ADC_DIFF_ADC10_10x, 
  ATM128_ADC_DIFF_ADC00_200x, 
  ATM128_ADC_DIFF_ADC10_200x, 
  ATM128_ADC_DIFF_ADC22_10x, 
  ATM128_ADC_DIFF_ADC32_10x, 
  ATM128_ADC_DIFF_ADC22_200x, 
  ATM128_ADC_DIFF_ADC32_200x, 
  ATM128_ADC_DIFF_ADC01_1x, 
  ATM128_ADC_DIFF_ADC11_1x, 
  ATM128_ADC_DIFF_ADC21_1x, 
  ATM128_ADC_DIFF_ADC31_1x, 
  ATM128_ADC_DIFF_ADC41_1x, 
  ATM128_ADC_DIFF_ADC51_1x, 
  ATM128_ADC_DIFF_ADC61_1x, 
  ATM128_ADC_DIFF_ADC71_1x, 
  ATM128_ADC_DIFF_ADC02_1x, 
  ATM128_ADC_DIFF_ADC12_1x, 
  ATM128_ADC_DIFF_ADC22_1x, 
  ATM128_ADC_DIFF_ADC32_1x, 
  ATM128_ADC_DIFF_ADC42_1x, 
  ATM128_ADC_DIFF_ADC52_1x, 
  ATM128_ADC_SNGL_1_23, 
  ATM128_ADC_SNGL_GND
};







#line 85
typedef struct __nesc_unnamed4251 {

  uint8_t mux : 5;
  uint8_t adlar : 1;
  uint8_t refs : 2;
} Atm128Admux_t;




enum __nesc_unnamed4252 {
  ATM128_ADC_PRESCALE_2 = 0, 
  ATM128_ADC_PRESCALE_2b, 
  ATM128_ADC_PRESCALE_4, 
  ATM128_ADC_PRESCALE_8, 
  ATM128_ADC_PRESCALE_16, 
  ATM128_ADC_PRESCALE_32, 
  ATM128_ADC_PRESCALE_64, 
  ATM128_ADC_PRESCALE_128, 



  ATM128_ADC_PRESCALE
};


enum __nesc_unnamed4253 {
  ATM128_ADC_ENABLE_OFF = 0, 
  ATM128_ADC_ENABLE_ON
};


enum __nesc_unnamed4254 {
  ATM128_ADC_START_CONVERSION_OFF = 0, 
  ATM128_ADC_START_CONVERSION_ON
};


enum __nesc_unnamed4255 {
  ATM128_ADC_FREE_RUNNING_OFF = 0, 
  ATM128_ADC_FREE_RUNNING_ON
};


enum __nesc_unnamed4256 {
  ATM128_ADC_INT_FLAG_OFF = 0, 
  ATM128_ADC_INT_FLAG_ON
};


enum __nesc_unnamed4257 {
  ATM128_ADC_INT_ENABLE_OFF = 0, 
  ATM128_ADC_INT_ENABLE_ON
};










#line 141
typedef struct __nesc_unnamed4258 {

  uint8_t adps : 3;
  uint8_t adie : 1;
  uint8_t adif : 1;
  uint8_t adfr : 1;
  uint8_t adsc : 1;
  uint8_t aden : 1;
} Atm128Adcsra_t;

typedef uint8_t Atm128_ADCH_t;
typedef uint8_t Atm128_ADCL_t;
# 29 "/cygdrive/c/Dropbox/tinyos-2.x/tos/lib/timer/Timer.h"
typedef struct __nesc_unnamed4259 {
#line 29
  int notUsed;
} 
#line 29
TMilli;
typedef struct __nesc_unnamed4260 {
#line 30
  int notUsed;
} 
#line 30
T32khz;
typedef struct __nesc_unnamed4261 {
#line 31
  int notUsed;
} 
#line 31
TMicro;
# 43 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/timer/Atm128Timer.h"
enum __nesc_unnamed4262 {
  ATM128_CLK8_OFF = 0x0, 
  ATM128_CLK8_NORMAL = 0x1, 
  ATM128_CLK8_DIVIDE_8 = 0x2, 
  ATM128_CLK8_DIVIDE_32 = 0x3, 
  ATM128_CLK8_DIVIDE_64 = 0x4, 
  ATM128_CLK8_DIVIDE_128 = 0x5, 
  ATM128_CLK8_DIVIDE_256 = 0x6, 
  ATM128_CLK8_DIVIDE_1024 = 0x7
};

enum __nesc_unnamed4263 {
  ATM128_CLK16_OFF = 0x0, 
  ATM128_CLK16_NORMAL = 0x1, 
  ATM128_CLK16_DIVIDE_8 = 0x2, 
  ATM128_CLK16_DIVIDE_64 = 0x3, 
  ATM128_CLK16_DIVIDE_256 = 0x4, 
  ATM128_CLK16_DIVIDE_1024 = 0x5, 
  ATM128_CLK16_EXTERNAL_FALL = 0x6, 
  ATM128_CLK16_EXTERNAL_RISE = 0x7
};


enum __nesc_unnamed4264 {
  AVR_CLOCK_OFF = 0, 
  AVR_CLOCK_ON = 1, 
  AVR_CLOCK_DIVIDE_8 = 2
};


enum __nesc_unnamed4265 {
  ATM128_WAVE8_NORMAL = 0, 
  ATM128_WAVE8_PWM, 
  ATM128_WAVE8_CTC, 
  ATM128_WAVE8_PWM_FAST
};


enum __nesc_unnamed4266 {
  ATM128_COMPARE_OFF = 0, 
  ATM128_COMPARE_TOGGLE, 
  ATM128_COMPARE_CLEAR, 
  ATM128_COMPARE_SET
};
#line 99
#line 89
typedef union __nesc_unnamed4267 {

  uint8_t flat;
  struct __nesc_unnamed4268 {
    uint8_t cs : 3;
    uint8_t wgm1 : 1;
    uint8_t com : 2;
    uint8_t wgm0 : 1;
    uint8_t foc : 1;
  } bits;
} Atm128TimerControl_t;

typedef Atm128TimerControl_t Atm128_TCCR0_t;
typedef uint8_t Atm128_TCNT0_t;
typedef uint8_t Atm128_OCR0_t;

typedef Atm128TimerControl_t Atm128_TCCR2_t;
typedef uint8_t Atm128_TCNT2_t;
typedef uint8_t Atm128_OCR2_t;
#line 121
#line 111
typedef union __nesc_unnamed4269 {

  uint8_t flat;
  struct __nesc_unnamed4270 {
    uint8_t tcr0ub : 1;
    uint8_t ocr0ub : 1;
    uint8_t tcn0ub : 1;
    uint8_t as0 : 1;
    uint8_t rsvd : 4;
  } bits;
} Atm128Assr_t;
#line 137
#line 124
typedef union __nesc_unnamed4271 {

  uint8_t flat;
  struct __nesc_unnamed4272 {
    uint8_t toie0 : 1;
    uint8_t ocie0 : 1;
    uint8_t toie1 : 1;
    uint8_t ocie1b : 1;
    uint8_t ocie1a : 1;
    uint8_t ticie1 : 1;
    uint8_t toie2 : 1;
    uint8_t ocie2 : 1;
  } bits;
} Atm128_TIMSK_t;
#line 154
#line 141
typedef union __nesc_unnamed4273 {

  uint8_t flat;
  struct __nesc_unnamed4274 {
    uint8_t tov0 : 1;
    uint8_t ocf0 : 1;
    uint8_t tov1 : 1;
    uint8_t ocf1b : 1;
    uint8_t ocf1a : 1;
    uint8_t icf1 : 1;
    uint8_t tov2 : 1;
    uint8_t ocf2 : 1;
  } bits;
} Atm128_TIFR_t;
#line 169
#line 158
typedef union __nesc_unnamed4275 {

  uint8_t flat;
  struct __nesc_unnamed4276 {
    uint8_t psr321 : 1;
    uint8_t psr0 : 1;
    uint8_t pud : 1;
    uint8_t acme : 1;
    uint8_t rsvd : 3;
    uint8_t tsm : 1;
  } bits;
} Atm128_SFIOR_t;






enum __nesc_unnamed4277 {
  ATM128_TIMER_COMPARE_NORMAL = 0, 
  ATM128_TIMER_COMPARE_TOGGLE, 
  ATM128_TIMER_COMPARE_CLEAR, 
  ATM128_TIMER_COMPARE_SET
};
#line 193
#line 184
typedef union __nesc_unnamed4278 {

  uint8_t flat;
  struct __nesc_unnamed4279 {
    uint8_t wgm10 : 2;
    uint8_t comC : 2;
    uint8_t comB : 2;
    uint8_t comA : 2;
  } bits;
} Atm128TimerCtrlCompare_t;


typedef Atm128TimerCtrlCompare_t Atm128_TCCR1A_t;


typedef Atm128TimerCtrlCompare_t Atm128_TCCR3A_t;


enum __nesc_unnamed4280 {
  ATM128_WAVE16_NORMAL = 0, 
  ATM128_WAVE16_PWM_8BIT, 
  ATM128_WAVE16_PWM_9BIT, 
  ATM128_WAVE16_PWM_10BIT, 
  ATM128_WAVE16_CTC_COMPARE, 
  ATM128_WAVE16_PWM_FAST_8BIT, 
  ATM128_WAVE16_PWM_FAST_9BIT, 
  ATM128_WAVE16_PWM_FAST_10BIT, 
  ATM128_WAVE16_PWM_CAPTURE_LOW, 
  ATM128_WAVE16_PWM_COMPARE_LOW, 
  ATM128_WAVE16_PWM_CAPTURE_HIGH, 
  ATM128_WAVE16_PWM_COMPARE_HIGH, 
  ATM128_WAVE16_CTC_CAPTURE, 
  ATM128_WAVE16_RESERVED, 
  ATM128_WAVE16_PWM_FAST_CAPTURE, 
  ATM128_WAVE16_PWM_FAST_COMPARE
};
#line 232
#line 222
typedef union __nesc_unnamed4281 {

  uint8_t flat;
  struct __nesc_unnamed4282 {
    uint8_t cs : 3;
    uint8_t wgm32 : 2;
    uint8_t rsvd : 1;
    uint8_t ices1 : 1;
    uint8_t icnc1 : 1;
  } bits;
} Atm128TimerCtrlCapture_t;


typedef Atm128TimerCtrlCapture_t Atm128_TCCR1B_t;


typedef Atm128TimerCtrlCapture_t Atm128_TCCR3B_t;
#line 250
#line 241
typedef union __nesc_unnamed4283 {

  uint8_t flat;
  struct __nesc_unnamed4284 {
    uint8_t rsvd : 5;
    uint8_t focC : 1;
    uint8_t focB : 1;
    uint8_t focA : 1;
  } bits;
} Atm128TimerCtrlClock_t;


typedef Atm128TimerCtrlClock_t Atm128_TCCR1C_t;


typedef Atm128TimerCtrlClock_t Atm128_TCCR3C_t;



typedef uint8_t Atm128_TCNT1H_t;
typedef uint8_t Atm128_TCNT1L_t;
typedef uint8_t Atm128_TCNT3H_t;
typedef uint8_t Atm128_TCNT3L_t;


typedef uint8_t Atm128_OCR1AH_t;
typedef uint8_t Atm128_OCR1AL_t;
typedef uint8_t Atm128_OCR1BH_t;
typedef uint8_t Atm128_OCR1BL_t;
typedef uint8_t Atm128_OCR1CH_t;
typedef uint8_t Atm128_OCR1CL_t;


typedef uint8_t Atm128_OCR3AH_t;
typedef uint8_t Atm128_OCR3AL_t;
typedef uint8_t Atm128_OCR3BH_t;
typedef uint8_t Atm128_OCR3BL_t;
typedef uint8_t Atm128_OCR3CH_t;
typedef uint8_t Atm128_OCR3CL_t;


typedef uint8_t Atm128_ICR1H_t;
typedef uint8_t Atm128_ICR1L_t;
typedef uint8_t Atm128_ICR3H_t;
typedef uint8_t Atm128_ICR3L_t;
#line 300
#line 288
typedef union __nesc_unnamed4285 {

  uint8_t flat;
  struct __nesc_unnamed4286 {
    uint8_t ocie1c : 1;
    uint8_t ocie3c : 1;
    uint8_t toie3 : 1;
    uint8_t ocie3b : 1;
    uint8_t ocie3a : 1;
    uint8_t ticie3 : 1;
    uint8_t rsvd : 2;
  } bits;
} Atm128_ETIMSK_t;
#line 315
#line 303
typedef union __nesc_unnamed4287 {

  uint8_t flat;
  struct __nesc_unnamed4288 {
    uint8_t ocf1c : 1;
    uint8_t ocf3c : 1;
    uint8_t tov3 : 1;
    uint8_t ocf3b : 1;
    uint8_t ocf3a : 1;
    uint8_t icf3 : 1;
    uint8_t rsvd : 2;
  } bits;
} Atm128_ETIFR_t;
# 51 "/cygdrive/c/Dropbox/tinyos-2.x/tos/platforms/mica/MicaTimer.h"
typedef struct __nesc_unnamed4289 {
} 
#line 51
T64khz;
typedef struct __nesc_unnamed4290 {
} 
#line 52
T128khz;
typedef struct __nesc_unnamed4291 {
} 
#line 53
T2mhz;
typedef struct __nesc_unnamed4292 {
} 
#line 54
T4mhz;
#line 107
typedef T32khz TOne;
typedef TMicro TThree;
typedef uint16_t counter_one_overflow_t;
typedef uint16_t counter_three_overflow_t;

enum __nesc_unnamed4293 {
  MICA_PRESCALER_ONE = ATM128_CLK16_DIVIDE_256, 
  MICA_DIVIDE_ONE_FOR_32KHZ_LOG2 = 0, 
  MICA_PRESCALER_THREE = ATM128_CLK16_DIVIDE_8, 
  MICA_DIVIDE_THREE_FOR_MICRO_LOG2 = 0, 
  EXT_STANDBY_T0_THRESHOLD = 12
};





enum __nesc_unnamed4294 {
  PLATFORM_MHZ = 8
};
# 55 "/cygdrive/c/Dropbox/tinyos-2.x/tos/platforms/micaz/hardware.h"
enum __nesc_unnamed4295 {
  CHANNEL_THERMISTOR = ATM128_ADC_SNGL_ADC1
};

enum __nesc_unnamed4296 {
  PLATFORM_BAUDRATE = 57600L
};
# 4 "BlinkToRadio.h"
enum __nesc_unnamed4297 {
  TIMER_PERIOD_MILLI = 250, 
  AM_BLINKTORADIO = 6, 
  DEVICE_DELAY = 30, 
  ACK_MSG = 0xAA, 
  ACK_NON_RECEIVED = -100, 
  MAX_FLASH_ADDR = 262143
};
#line 25
#line 15
typedef nx_struct BlinkToRadioMsg {
  nx_uint8_t nodeid;
  nx_uint16_t seq_number_coord;
  nx_uint16_t seq_number;
  nx_uint8_t pow_val;
  nx_uint16_t chan_0;
  nx_int8_t rssi_B;
  nx_int8_t rssi_A;
  nx_int8_t rssi_reception;
} __attribute__((packed)) 
BlinkToRadioMsg;
# 43 "/usr/lib/gcc/avr/4.1.2/include/stdarg.h" 3
typedef __builtin_va_list __gnuc_va_list;
#line 105
typedef __gnuc_va_list va_list;
# 242 "/usr/lib/gcc/avr/4.1.2/../../../../avr/include/stdio.h" 3
struct __file {
  char *buf;
  unsigned char unget;
  uint8_t flags;
#line 261
  int size;
  int len;
  int (*put)(char arg_0x7ee620c8, struct __file *arg_0x7ee622b0);
  int (*get)(struct __file *arg_0x7ee626a0);
  void *udata;
};
#line 405
extern struct __file *__iob[];
#line 417
struct __file;
#line 636
extern int printf(const char *__fmt, ...);
# 39 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/cc2420/CC2420.h"
typedef uint8_t cc2420_status_t;
#line 66
#line 49
typedef nx_struct cc2420_header_t {
  nxle_uint8_t length;
  nxle_uint16_t fcf;
  nxle_uint8_t dsn;
  nxle_uint16_t destpan;
  nxle_uint16_t dest;
  nxle_uint16_t src;



  nxle_uint8_t network;



  nxle_uint8_t type;
} __attribute__((packed)) 

cc2420_header_t;





#line 71
typedef nx_struct cc2420_footer_t {
} __attribute__((packed)) cc2420_footer_t;
#line 97
#line 81
typedef nx_struct cc2420_metadata_t {
  nx_uint8_t rssi;
  nx_uint8_t lqi;
  nx_uint8_t tx_power;
  nx_bool crc;
  nx_bool ack;
  nx_bool timesync;
  nx_uint32_t timestamp;
  nx_uint16_t rxInterval;
} __attribute__((packed)) 






cc2420_metadata_t;





#line 100
typedef nx_struct cc2420_packet_t {
  cc2420_header_t packet;
  nx_uint8_t data[];
} __attribute__((packed)) cc2420_packet_t;
#line 134
enum __nesc_unnamed4298 {

  MAC_HEADER_SIZE = sizeof(cc2420_header_t ) - 1, 

  MAC_FOOTER_SIZE = sizeof(uint16_t ), 

  MAC_PACKET_SIZE = MAC_HEADER_SIZE + 28 + MAC_FOOTER_SIZE, 

  CC2420_SIZE = MAC_HEADER_SIZE + MAC_FOOTER_SIZE
};

enum cc2420_enums {
  CC2420_TIME_ACK_TURNAROUND = 7, 
  CC2420_TIME_VREN = 20, 
  CC2420_TIME_SYMBOL = 2, 
  CC2420_BACKOFF_PERIOD = 20 / CC2420_TIME_SYMBOL, 
  CC2420_MIN_BACKOFF = 20 / CC2420_TIME_SYMBOL, 
  CC2420_ACK_WAIT_DELAY = 256
};

enum cc2420_status_enums {
  CC2420_STATUS_RSSI_VALID = 1 << 1, 
  CC2420_STATUS_LOCK = 1 << 2, 
  CC2420_STATUS_TX_ACTIVE = 1 << 3, 
  CC2420_STATUS_ENC_BUSY = 1 << 4, 
  CC2420_STATUS_TX_UNDERFLOW = 1 << 5, 
  CC2420_STATUS_XOSC16M_STABLE = 1 << 6
};

enum cc2420_config_reg_enums {
  CC2420_SNOP = 0x00, 
  CC2420_SXOSCON = 0x01, 
  CC2420_STXCAL = 0x02, 
  CC2420_SRXON = 0x03, 
  CC2420_STXON = 0x04, 
  CC2420_STXONCCA = 0x05, 
  CC2420_SRFOFF = 0x06, 
  CC2420_SXOSCOFF = 0x07, 
  CC2420_SFLUSHRX = 0x08, 
  CC2420_SFLUSHTX = 0x09, 
  CC2420_SACK = 0x0a, 
  CC2420_SACKPEND = 0x0b, 
  CC2420_SRXDEC = 0x0c, 
  CC2420_STXENC = 0x0d, 
  CC2420_SAES = 0x0e, 
  CC2420_MAIN = 0x10, 
  CC2420_MDMCTRL0 = 0x11, 
  CC2420_MDMCTRL1 = 0x12, 
  CC2420_RSSI = 0x13, 
  CC2420_SYNCWORD = 0x14, 
  CC2420_TXCTRL = 0x15, 
  CC2420_RXCTRL0 = 0x16, 
  CC2420_RXCTRL1 = 0x17, 
  CC2420_FSCTRL = 0x18, 
  CC2420_SECCTRL0 = 0x19, 
  CC2420_SECCTRL1 = 0x1a, 
  CC2420_BATTMON = 0x1b, 
  CC2420_IOCFG0 = 0x1c, 
  CC2420_IOCFG1 = 0x1d, 
  CC2420_MANFIDL = 0x1e, 
  CC2420_MANFIDH = 0x1f, 
  CC2420_FSMTC = 0x20, 
  CC2420_MANAND = 0x21, 
  CC2420_MANOR = 0x22, 
  CC2420_AGCCTRL = 0x23, 
  CC2420_AGCTST0 = 0x24, 
  CC2420_AGCTST1 = 0x25, 
  CC2420_AGCTST2 = 0x26, 
  CC2420_FSTST0 = 0x27, 
  CC2420_FSTST1 = 0x28, 
  CC2420_FSTST2 = 0x29, 
  CC2420_FSTST3 = 0x2a, 
  CC2420_RXBPFTST = 0x2b, 
  CC2420_FMSTATE = 0x2c, 
  CC2420_ADCTST = 0x2d, 
  CC2420_DACTST = 0x2e, 
  CC2420_TOPTST = 0x2f, 
  CC2420_TXFIFO = 0x3e, 
  CC2420_RXFIFO = 0x3f
};

enum cc2420_ram_addr_enums {
  CC2420_RAM_TXFIFO = 0x000, 
  CC2420_RAM_RXFIFO = 0x080, 
  CC2420_RAM_KEY0 = 0x100, 
  CC2420_RAM_RXNONCE = 0x110, 
  CC2420_RAM_SABUF = 0x120, 
  CC2420_RAM_KEY1 = 0x130, 
  CC2420_RAM_TXNONCE = 0x140, 
  CC2420_RAM_CBCSTATE = 0x150, 
  CC2420_RAM_IEEEADR = 0x160, 
  CC2420_RAM_PANID = 0x168, 
  CC2420_RAM_SHORTADR = 0x16a
};

enum cc2420_nonce_enums {
  CC2420_NONCE_BLOCK_COUNTER = 0, 
  CC2420_NONCE_KEY_SEQ_COUNTER = 2, 
  CC2420_NONCE_FRAME_COUNTER = 3, 
  CC2420_NONCE_SOURCE_ADDRESS = 7, 
  CC2420_NONCE_FLAGS = 15
};

enum cc2420_main_enums {
  CC2420_MAIN_RESETn = 15, 
  CC2420_MAIN_ENC_RESETn = 14, 
  CC2420_MAIN_DEMOD_RESETn = 13, 
  CC2420_MAIN_MOD_RESETn = 12, 
  CC2420_MAIN_FS_RESETn = 11, 
  CC2420_MAIN_XOSC16M_BYPASS = 0
};

enum cc2420_mdmctrl0_enums {
  CC2420_MDMCTRL0_RESERVED_FRAME_MODE = 13, 
  CC2420_MDMCTRL0_PAN_COORDINATOR = 12, 
  CC2420_MDMCTRL0_ADR_DECODE = 11, 
  CC2420_MDMCTRL0_CCA_HYST = 8, 
  CC2420_MDMCTRL0_CCA_MOD = 6, 
  CC2420_MDMCTRL0_AUTOCRC = 5, 
  CC2420_MDMCTRL0_AUTOACK = 4, 
  CC2420_MDMCTRL0_PREAMBLE_LENGTH = 0
};

enum cc2420_mdmctrl1_enums {
  CC2420_MDMCTRL1_CORR_THR = 6, 
  CC2420_MDMCTRL1_DEMOD_AVG_MODE = 5, 
  CC2420_MDMCTRL1_MODULATION_MODE = 4, 
  CC2420_MDMCTRL1_TX_MODE = 2, 
  CC2420_MDMCTRL1_RX_MODE = 0
};

enum cc2420_rssi_enums {
  CC2420_RSSI_CCA_THR = 8, 
  CC2420_RSSI_RSSI_VAL = 0
};

enum cc2420_syncword_enums {
  CC2420_SYNCWORD_SYNCWORD = 0
};

enum cc2420_txctrl_enums {
  CC2420_TXCTRL_TXMIXBUF_CUR = 14, 
  CC2420_TXCTRL_TX_TURNAROUND = 13, 
  CC2420_TXCTRL_TXMIX_CAP_ARRAY = 11, 
  CC2420_TXCTRL_TXMIX_CURRENT = 9, 
  CC2420_TXCTRL_PA_CURRENT = 6, 
  CC2420_TXCTRL_RESERVED = 5, 
  CC2420_TXCTRL_PA_LEVEL = 0
};

enum cc2420_rxctrl0_enums {
  CC2420_RXCTRL0_RXMIXBUF_CUR = 12, 
  CC2420_RXCTRL0_HIGH_LNA_GAIN = 10, 
  CC2420_RXCTRL0_MED_LNA_GAIN = 8, 
  CC2420_RXCTRL0_LOW_LNA_GAIN = 6, 
  CC2420_RXCTRL0_HIGH_LNA_CURRENT = 4, 
  CC2420_RXCTRL0_MED_LNA_CURRENT = 2, 
  CC2420_RXCTRL0_LOW_LNA_CURRENT = 0
};

enum cc2420_rxctrl1_enums {
  CC2420_RXCTRL1_RXBPF_LOCUR = 13, 
  CC2420_RXCTRL1_RXBPF_MIDCUR = 12, 
  CC2420_RXCTRL1_LOW_LOWGAIN = 11, 
  CC2420_RXCTRL1_MED_LOWGAIN = 10, 
  CC2420_RXCTRL1_HIGH_HGM = 9, 
  CC2420_RXCTRL1_MED_HGM = 8, 
  CC2420_RXCTRL1_LNA_CAP_ARRAY = 6, 
  CC2420_RXCTRL1_RXMIX_TAIL = 4, 
  CC2420_RXCTRL1_RXMIX_VCM = 2, 
  CC2420_RXCTRL1_RXMIX_CURRENT = 0
};

enum cc2420_rsctrl_enums {
  CC2420_FSCTRL_LOCK_THR = 14, 
  CC2420_FSCTRL_CAL_DONE = 13, 
  CC2420_FSCTRL_CAL_RUNNING = 12, 
  CC2420_FSCTRL_LOCK_LENGTH = 11, 
  CC2420_FSCTRL_LOCK_STATUS = 10, 
  CC2420_FSCTRL_FREQ = 0
};

enum cc2420_secctrl0_enums {
  CC2420_SECCTRL0_RXFIFO_PROTECTION = 9, 
  CC2420_SECCTRL0_SEC_CBC_HEAD = 8, 
  CC2420_SECCTRL0_SEC_SAKEYSEL = 7, 
  CC2420_SECCTRL0_SEC_TXKEYSEL = 6, 
  CC2420_SECCTRL0_SEC_RXKEYSEL = 5, 
  CC2420_SECCTRL0_SEC_M = 2, 
  CC2420_SECCTRL0_SEC_MODE = 0
};

enum cc2420_secctrl1_enums {
  CC2420_SECCTRL1_SEC_TXL = 8, 
  CC2420_SECCTRL1_SEC_RXL = 0
};

enum cc2420_battmon_enums {
  CC2420_BATTMON_BATT_OK = 6, 
  CC2420_BATTMON_BATTMON_EN = 5, 
  CC2420_BATTMON_BATTMON_VOLTAGE = 0
};

enum cc2420_iocfg0_enums {
  CC2420_IOCFG0_BCN_ACCEPT = 11, 
  CC2420_IOCFG0_FIFO_POLARITY = 10, 
  CC2420_IOCFG0_FIFOP_POLARITY = 9, 
  CC2420_IOCFG0_SFD_POLARITY = 8, 
  CC2420_IOCFG0_CCA_POLARITY = 7, 
  CC2420_IOCFG0_FIFOP_THR = 0
};

enum cc2420_iocfg1_enums {
  CC2420_IOCFG1_HSSD_SRC = 10, 
  CC2420_IOCFG1_SFDMUX = 5, 
  CC2420_IOCFG1_CCAMUX = 0
};

enum cc2420_manfidl_enums {
  CC2420_MANFIDL_PARTNUM = 12, 
  CC2420_MANFIDL_MANFID = 0
};

enum cc2420_manfidh_enums {
  CC2420_MANFIDH_VERSION = 12, 
  CC2420_MANFIDH_PARTNUM = 0
};

enum cc2420_fsmtc_enums {
  CC2420_FSMTC_TC_RXCHAIN2RX = 13, 
  CC2420_FSMTC_TC_SWITCH2TX = 10, 
  CC2420_FSMTC_TC_PAON2TX = 6, 
  CC2420_FSMTC_TC_TXEND2SWITCH = 3, 
  CC2420_FSMTC_TC_TXEND2PAOFF = 0
};

enum cc2420_sfdmux_enums {
  CC2420_SFDMUX_SFD = 0, 
  CC2420_SFDMUX_XOSC16M_STABLE = 24
};

enum __nesc_unnamed4299 {

  CC2420_INVALID_TIMESTAMP = 0x80000000L
};
# 6 "/cygdrive/c/Dropbox/tinyos-2.x/tos/types/AM.h"
typedef nx_uint8_t nx_am_id_t;
typedef nx_uint8_t nx_am_group_t;
typedef nx_uint16_t nx_am_addr_t;

typedef uint8_t am_id_t;
typedef uint8_t am_group_t;
typedef uint16_t am_addr_t;

enum __nesc_unnamed4300 {
  AM_BROADCAST_ADDR = 0xffff
};









enum __nesc_unnamed4301 {
  TOS_AM_GROUP = 0x22, 
  TOS_AM_ADDRESS = 1
};
# 72 "/cygdrive/c/Dropbox/tinyos-2.x/tos/lib/serial/Serial.h"
typedef uint8_t uart_id_t;



enum __nesc_unnamed4302 {
  HDLC_FLAG_BYTE = 0x7e, 
  HDLC_CTLESC_BYTE = 0x7d
};



enum __nesc_unnamed4303 {
  TOS_SERIAL_ACTIVE_MESSAGE_ID = 0, 
  TOS_SERIAL_CC1000_ID = 1, 
  TOS_SERIAL_802_15_4_ID = 2, 
  TOS_SERIAL_UNKNOWN_ID = 255
};


enum __nesc_unnamed4304 {
  SERIAL_PROTO_ACK = 67, 
  SERIAL_PROTO_PACKET_ACK = 68, 
  SERIAL_PROTO_PACKET_NOACK = 69, 
  SERIAL_PROTO_PACKET_UNKNOWN = 255
};
#line 110
#line 98
typedef struct radio_stats {
  uint8_t version;
  uint8_t flags;
  uint8_t reserved;
  uint8_t platform;
  uint16_t MTU;
  uint16_t radio_crc_fail;
  uint16_t radio_queue_drops;
  uint16_t serial_crc_fail;
  uint16_t serial_tx_fail;
  uint16_t serial_short_packets;
  uint16_t serial_proto_drops;
} radio_stats_t;







#line 112
typedef nx_struct serial_header {
  nx_am_addr_t dest;
  nx_am_addr_t src;
  nx_uint8_t length;
  nx_am_group_t group;
  nx_am_id_t type;
} __attribute__((packed)) serial_header_t;




#line 120
typedef nx_struct serial_packet {
  serial_header_t header;
  nx_uint8_t data[];
} __attribute__((packed)) serial_packet_t;



#line 125
typedef nx_struct serial_metadata {
  nx_uint8_t ack;
} __attribute__((packed)) serial_metadata_t;
# 49 "/cygdrive/c/Dropbox/tinyos-2.x/tos/platforms/micaz/platform_message.h"
#line 46
typedef union message_header {
  cc2420_header_t cc2420;
  serial_header_t serial;
} message_header_t;



#line 51
typedef union message_footer {
  cc2420_footer_t cc2420;
} message_footer_t;




#line 55
typedef union message_metadata {
  cc2420_metadata_t cc2420;
  serial_metadata_t serial;
} message_metadata_t;
# 19 "/cygdrive/c/Dropbox/tinyos-2.x/tos/types/message.h"
#line 14
typedef nx_struct message_t {
  nx_uint8_t header[sizeof(message_header_t )];
  nx_uint8_t data[28];
  nx_uint8_t footer[sizeof(message_footer_t )];
  nx_uint8_t metadata[sizeof(message_metadata_t )];
} __attribute__((packed)) message_t;
# 72 "/cygdrive/c/Dropbox/tinyos-2.x/tos/lib/printf/printf.h"
int printfflush();






#line 77
typedef nx_struct printf_msg {
  nx_uint8_t buffer[28];
} __attribute__((packed)) printf_msg_t;

enum __nesc_unnamed4305 {
  AM_PRINTF_MSG = 100
};
# 4 "build/micaz/StorageVolumes.h"
enum __nesc_unnamed4306 {
  VOLUME_BLOCKTEST
};
# 32 "/cygdrive/c/Dropbox/tinyos-2.x/tos/types/Leds.h"
enum __nesc_unnamed4307 {
  LEDS_LED0 = 1 << 0, 
  LEDS_LED1 = 1 << 1, 
  LEDS_LED2 = 1 << 2, 
  LEDS_LED3 = 1 << 3, 
  LEDS_LED4 = 1 << 4, 
  LEDS_LED5 = 1 << 5, 
  LEDS_LED6 = 1 << 6, 
  LEDS_LED7 = 1 << 7
};
# 41 "/cygdrive/c/Dropbox/tinyos-2.x/tos/types/Storage.h"
typedef uint8_t volume_id_t;
typedef uint32_t storage_addr_t;
typedef uint32_t storage_len_t;
typedef uint32_t storage_cookie_t;

enum __nesc_unnamed4308 {
  SEEK_BEGINNING = 0
};
# 36 "/cygdrive/c/Dropbox/tinyos-2.x/tos/platforms/mica2/chips/at45db/HplAt45db_chip.h"
enum __nesc_unnamed4309 {
  AT45_MAX_PAGES = 2048, 
  AT45_PAGE_SIZE = 264, 
  AT45_PAGE_SIZE_LOG2 = 8
};

typedef uint16_t at45page_t;
typedef uint16_t at45pageoffset_t;
# 16 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/at45db/HplAt45db.h"
enum __nesc_unnamed4310 {
  AT45_C_READ_BUFFER1 = 0xd4, 
  AT45_C_READ_BUFFER2 = 0xd6, 
  AT45_C_READ_CONTINUOUS = 0xe8, 
  AT45_C_READ_PAGE = 0xd2, 
  AT45_C_WRITE_BUFFER1 = 0x84, 
  AT45_C_WRITE_BUFFER2 = 0x87, 
  AT45_C_WRITE_MEM_BUFFER1 = 0x82, 
  AT45_C_WRITE_MEM_BUFFER2 = 0x85, 
  AT45_C_FILL_BUFFER1 = 0x53, 
  AT45_C_FILL_BUFFER2 = 0x55, 
  AT45_C_FLUSH_BUFFER1 = 0x83, 
  AT45_C_FLUSH_BUFFER2 = 0x86, 
  AT45_C_QFLUSH_BUFFER1 = 0x88, 
  AT45_C_QFLUSH_BUFFER2 = 0x89, 
  AT45_C_COMPARE_BUFFER1 = 0x60, 
  AT45_C_COMPARE_BUFFER2 = 0x61, 
  AT45_C_REQ_STATUS = 0xd7, 
  AT45_C_ERASE_PAGE = 0x81
};
# 38 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/at45db/At45db.h"
enum __nesc_unnamed4311 {
  AT45_ERASE, 
  AT45_DONT_ERASE, 
  AT45_PREVIOUSLY_ERASED
};
# 39 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/crc.h"
uint16_t crcTable[256] __attribute((__progmem__))  = { 
0x0000, 0x1021, 0x2042, 0x3063, 0x4084, 0x50a5, 0x60c6, 0x70e7, 
0x8108, 0x9129, 0xa14a, 0xb16b, 0xc18c, 0xd1ad, 0xe1ce, 0xf1ef, 
0x1231, 0x0210, 0x3273, 0x2252, 0x52b5, 0x4294, 0x72f7, 0x62d6, 
0x9339, 0x8318, 0xb37b, 0xa35a, 0xd3bd, 0xc39c, 0xf3ff, 0xe3de, 
0x2462, 0x3443, 0x0420, 0x1401, 0x64e6, 0x74c7, 0x44a4, 0x5485, 
0xa56a, 0xb54b, 0x8528, 0x9509, 0xe5ee, 0xf5cf, 0xc5ac, 0xd58d, 
0x3653, 0x2672, 0x1611, 0x0630, 0x76d7, 0x66f6, 0x5695, 0x46b4, 
0xb75b, 0xa77a, 0x9719, 0x8738, 0xf7df, 0xe7fe, 0xd79d, 0xc7bc, 
0x48c4, 0x58e5, 0x6886, 0x78a7, 0x0840, 0x1861, 0x2802, 0x3823, 
0xc9cc, 0xd9ed, 0xe98e, 0xf9af, 0x8948, 0x9969, 0xa90a, 0xb92b, 
0x5af5, 0x4ad4, 0x7ab7, 0x6a96, 0x1a71, 0x0a50, 0x3a33, 0x2a12, 
0xdbfd, 0xcbdc, 0xfbbf, 0xeb9e, 0x9b79, 0x8b58, 0xbb3b, 0xab1a, 
0x6ca6, 0x7c87, 0x4ce4, 0x5cc5, 0x2c22, 0x3c03, 0x0c60, 0x1c41, 
0xedae, 0xfd8f, 0xcdec, 0xddcd, 0xad2a, 0xbd0b, 0x8d68, 0x9d49, 
0x7e97, 0x6eb6, 0x5ed5, 0x4ef4, 0x3e13, 0x2e32, 0x1e51, 0x0e70, 
0xff9f, 0xefbe, 0xdfdd, 0xcffc, 0xbf1b, 0xaf3a, 0x9f59, 0x8f78, 
0x9188, 0x81a9, 0xb1ca, 0xa1eb, 0xd10c, 0xc12d, 0xf14e, 0xe16f, 
0x1080, 0x00a1, 0x30c2, 0x20e3, 0x5004, 0x4025, 0x7046, 0x6067, 
0x83b9, 0x9398, 0xa3fb, 0xb3da, 0xc33d, 0xd31c, 0xe37f, 0xf35e, 
0x02b1, 0x1290, 0x22f3, 0x32d2, 0x4235, 0x5214, 0x6277, 0x7256, 
0xb5ea, 0xa5cb, 0x95a8, 0x8589, 0xf56e, 0xe54f, 0xd52c, 0xc50d, 
0x34e2, 0x24c3, 0x14a0, 0x0481, 0x7466, 0x6447, 0x5424, 0x4405, 
0xa7db, 0xb7fa, 0x8799, 0x97b8, 0xe75f, 0xf77e, 0xc71d, 0xd73c, 
0x26d3, 0x36f2, 0x0691, 0x16b0, 0x6657, 0x7676, 0x4615, 0x5634, 
0xd94c, 0xc96d, 0xf90e, 0xe92f, 0x99c8, 0x89e9, 0xb98a, 0xa9ab, 
0x5844, 0x4865, 0x7806, 0x6827, 0x18c0, 0x08e1, 0x3882, 0x28a3, 
0xcb7d, 0xdb5c, 0xeb3f, 0xfb1e, 0x8bf9, 0x9bd8, 0xabbb, 0xbb9a, 
0x4a75, 0x5a54, 0x6a37, 0x7a16, 0x0af1, 0x1ad0, 0x2ab3, 0x3a92, 
0xfd2e, 0xed0f, 0xdd6c, 0xcd4d, 0xbdaa, 0xad8b, 0x9de8, 0x8dc9, 
0x7c26, 0x6c07, 0x5c64, 0x4c45, 0x3ca2, 0x2c83, 0x1ce0, 0x0cc1, 
0xef1f, 0xff3e, 0xcf5d, 0xdf7c, 0xaf9b, 0xbfba, 0x8fd9, 0x9ff8, 
0x6e17, 0x7e36, 0x4e55, 0x5e74, 0x2e93, 0x3eb2, 0x0ed1, 0x1ef0 };









static uint16_t crcByte(uint16_t oldCrc, uint8_t byte) __attribute((noinline))  ;
# 32 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/Atm128Uart.h"
typedef uint8_t Atm128_UDR0_t;
typedef uint8_t Atm128_UDR1_t;
#line 48
#line 36
typedef union __nesc_unnamed4312 {
  struct Atm128_UCSRA_t {
    uint8_t mpcm : 1;
    uint8_t u2x : 1;
    uint8_t upe : 1;
    uint8_t dor : 1;
    uint8_t fe : 1;
    uint8_t udre : 1;
    uint8_t txc : 1;
    uint8_t rxc : 1;
  } bits;
  uint8_t flat;
} Atm128UartStatus_t;

typedef Atm128UartStatus_t Atm128_UCSR0A_t;
typedef Atm128UartStatus_t Atm128_UCSR1A_t;
#line 66
#line 54
typedef union __nesc_unnamed4313 {
  struct Atm128_UCSRB_t {
    uint8_t txb8 : 1;
    uint8_t rxb8 : 1;
    uint8_t ucsz2 : 1;
    uint8_t txen : 1;
    uint8_t rxen : 1;
    uint8_t udrie : 1;
    uint8_t txcie : 1;
    uint8_t rxcie : 1;
  } bits;
  uint8_t flat;
} Atm128UartControl_t;

typedef Atm128UartControl_t Atm128_UCSR0B_t;
typedef Atm128UartControl_t Atm128_UCSR1B_t;

enum __nesc_unnamed4314 {
  ATM128_UART_DATA_SIZE_5_BITS = 0, 
  ATM128_UART_DATA_SIZE_6_BITS = 1, 
  ATM128_UART_DATA_SIZE_7_BITS = 2, 
  ATM128_UART_DATA_SIZE_8_BITS = 3
};
#line 89
#line 79
typedef union __nesc_unnamed4315 {
  uint8_t flat;
  struct Atm128_UCSRC_t {
    uint8_t ucpol : 1;
    uint8_t ucsz : 2;
    uint8_t usbs : 1;
    uint8_t upm : 2;
    uint8_t umsel : 1;
    uint8_t rsvd : 1;
  } bits;
} Atm128UartMode_t;

typedef Atm128UartMode_t Atm128_UCSR0C_t;
typedef Atm128UartMode_t Atm128_UCSR1C_t;





enum __nesc_unnamed4316 {
  ATM128_19200_BAUD_4MHZ = 12, 
  ATM128_38400_BAUD_4MHZ = 6, 
  ATM128_57600_BAUD_4MHZ = 3, 

  ATM128_19200_BAUD_4MHZ_2X = 25, 
  ATM128_38400_BAUD_4MHZ_2X = 12, 
  ATM128_57600_BAUD_4MHZ_2X = 8, 

  ATM128_19200_BAUD_7MHZ = 23, 
  ATM128_38400_BAUD_7MHZ = 11, 
  ATM128_57600_BAUD_7MHZ = 7, 

  ATM128_19200_BAUD_7MHZ_2X = 47, 
  ATM128_38400_BAUD_7MHZ_2X = 23, 
  ATM128_57600_BAUD_7MHZ_2X = 15, 

  ATM128_19200_BAUD_8MHZ = 25, 
  ATM128_38400_BAUD_8MHZ = 12, 
  ATM128_57600_BAUD_8MHZ = 8, 

  ATM128_19200_BAUD_8MHZ_2X = 51, 
  ATM128_38400_BAUD_8MHZ_2X = 34, 
  ATM128_57600_BAUD_8MHZ_2X = 11
};

typedef uint8_t Atm128_UBRR0L_t;
typedef uint8_t Atm128_UBRR0H_t;

typedef uint8_t Atm128_UBRR1L_t;
typedef uint8_t Atm128_UBRR1H_t;
# 87 "/cygdrive/c/Dropbox/tinyos-2.x/tos/lib/printf/PutcharP.nc"
static int uart_putchar(char c, struct __file *stream);
static struct __file atm128_stdout = 
{ .put = (int (*)(char c, struct __file *stream))uart_putchar, .get = (void *)0, .flags = 0x0002, .udata = 0 };
# 38 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/cc2420/IEEE802154.h"
enum ieee154_fcf_enums {
  IEEE154_FCF_FRAME_TYPE = 0, 
  IEEE154_FCF_SECURITY_ENABLED = 3, 
  IEEE154_FCF_FRAME_PENDING = 4, 
  IEEE154_FCF_ACK_REQ = 5, 
  IEEE154_FCF_INTRAPAN = 6, 
  IEEE154_FCF_DEST_ADDR_MODE = 10, 
  IEEE154_FCF_SRC_ADDR_MODE = 14
};

enum ieee154_fcf_type_enums {
  IEEE154_TYPE_BEACON = 0, 
  IEEE154_TYPE_DATA = 1, 
  IEEE154_TYPE_ACK = 2, 
  IEEE154_TYPE_MAC_CMD = 3
};

enum iee154_fcf_addr_mode_enums {
  IEEE154_ADDR_NONE = 0, 
  IEEE154_ADDR_SHORT = 2, 
  IEEE154_ADDR_EXT = 3
};
# 32 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/spi/Atm128Spi.h"
enum __nesc_unnamed4317 {
  ATM128_SPI_CLK_DIVIDE_4 = 0, 
  ATM128_SPI_CLK_DIVIDE_16 = 1, 
  ATM128_SPI_CLK_DIVIDE_64 = 2, 
  ATM128_SPI_CLK_DIVIDE_128 = 3
};
#line 49
#line 40
typedef struct __nesc_unnamed4318 {
  uint8_t spie : 1;
  uint8_t spe : 1;
  uint8_t dord : 1;
  uint8_t mstr : 1;
  uint8_t cpol : 1;
  uint8_t cpha : 1;
  uint8_t spr : 2;
} 
Atm128SPIControl_s;



#line 50
typedef union __nesc_unnamed4319 {
  uint8_t flat;
  Atm128SPIControl_s bits;
} Atm128SPIControl_t;

typedef Atm128SPIControl_t Atm128_SPCR_t;








#line 58
typedef struct __nesc_unnamed4320 {
  uint8_t spif : 1;
  uint8_t wcol : 1;
  uint8_t rsvd : 5;
  uint8_t spi2x : 1;
} 
Atm128SPIStatus_s;



#line 65
typedef union __nesc_unnamed4321 {
  uint8_t flat;
  Atm128SPIStatus_s bits;
} Atm128SPIStatus_t;

typedef Atm128SPIStatus_t Atm128_SPSR_t;

typedef uint8_t Atm128_SPDR_t;
# 33 "/cygdrive/c/Dropbox/tinyos-2.x/tos/types/Resource.h"
typedef uint8_t resource_client_id_t;
# 28 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/cc2420/CC2420TimeSyncMessage.h"
typedef nx_uint32_t timesync_radio_t;
typedef TMilli BlinkToRadioC$Timer0$precision_tag;
typedef TMilli BlinkToRadioC$Timer1$precision_tag;
enum HilTimerMilliC$__nesc_unnamed4322 {
  HilTimerMilliC$TIMER_COUNT = 3U
};
typedef TMilli /*AlarmCounterMilliP.Atm128AlarmAsyncC*/Atm128AlarmAsyncC$0$precision;
typedef /*AlarmCounterMilliP.Atm128AlarmAsyncC*/Atm128AlarmAsyncC$0$precision /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$precision;
typedef /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$precision /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$precision_tag;
typedef uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$size_type;
typedef /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$precision /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Counter$precision_tag;
typedef uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Counter$size_type;
typedef uint8_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Compare$size_type;
typedef uint8_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Timer$timer_size;
typedef uint8_t HplAtm128Timer0AsyncP$Compare$size_type;
typedef uint8_t HplAtm128Timer0AsyncP$Timer$timer_size;
typedef TMilli /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$precision_tag;
typedef /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$precision_tag /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$precision_tag;
typedef uint32_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$size_type;
typedef /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$precision_tag /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$precision_tag;
typedef TMilli /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$precision_tag;
typedef /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$precision_tag /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$precision_tag;
typedef /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$precision_tag /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$precision_tag;
typedef TMilli /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC$0$precision_tag;
typedef /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC$0$precision_tag /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC$0$LocalTime$precision_tag;
typedef /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC$0$precision_tag /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC$0$Counter$precision_tag;
typedef uint32_t /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC$0$Counter$size_type;
enum SerialAMQueueP$__nesc_unnamed4323 {
  SerialAMQueueP$NUM_CLIENTS = 1U
};
typedef TMicro /*Atm128Uart0C.UartP*/Atm128UartP$0$Counter$precision_tag;
typedef uint32_t /*Atm128Uart0C.UartP*/Atm128UartP$0$Counter$size_type;
typedef uint16_t HplAtm128Timer3P$CompareA$size_type;
typedef uint16_t HplAtm128Timer3P$Capture$size_type;
typedef uint16_t HplAtm128Timer3P$CompareB$size_type;
typedef uint16_t HplAtm128Timer3P$CompareC$size_type;
typedef uint16_t HplAtm128Timer3P$Timer$timer_size;
typedef uint16_t /*InitThreeP.InitThree*/Atm128TimerInitC$0$timer_size;
typedef /*InitThreeP.InitThree*/Atm128TimerInitC$0$timer_size /*InitThreeP.InitThree*/Atm128TimerInitC$0$Timer$timer_size;
typedef TThree /*CounterThree16C.NCounter*/Atm128CounterC$0$frequency_tag;
typedef uint16_t /*CounterThree16C.NCounter*/Atm128CounterC$0$timer_size;
typedef /*CounterThree16C.NCounter*/Atm128CounterC$0$frequency_tag /*CounterThree16C.NCounter*/Atm128CounterC$0$Counter$precision_tag;
typedef /*CounterThree16C.NCounter*/Atm128CounterC$0$timer_size /*CounterThree16C.NCounter*/Atm128CounterC$0$Counter$size_type;
typedef /*CounterThree16C.NCounter*/Atm128CounterC$0$timer_size /*CounterThree16C.NCounter*/Atm128CounterC$0$Timer$timer_size;
typedef TMicro /*CounterMicro32C.Transform32*/TransformCounterC$0$to_precision_tag;
typedef uint32_t /*CounterMicro32C.Transform32*/TransformCounterC$0$to_size_type;
typedef TThree /*CounterMicro32C.Transform32*/TransformCounterC$0$from_precision_tag;
typedef uint16_t /*CounterMicro32C.Transform32*/TransformCounterC$0$from_size_type;
typedef counter_three_overflow_t /*CounterMicro32C.Transform32*/TransformCounterC$0$upper_count_type;
typedef /*CounterMicro32C.Transform32*/TransformCounterC$0$from_precision_tag /*CounterMicro32C.Transform32*/TransformCounterC$0$CounterFrom$precision_tag;
typedef /*CounterMicro32C.Transform32*/TransformCounterC$0$from_size_type /*CounterMicro32C.Transform32*/TransformCounterC$0$CounterFrom$size_type;
typedef /*CounterMicro32C.Transform32*/TransformCounterC$0$to_precision_tag /*CounterMicro32C.Transform32*/TransformCounterC$0$Counter$precision_tag;
typedef /*CounterMicro32C.Transform32*/TransformCounterC$0$to_size_type /*CounterMicro32C.Transform32*/TransformCounterC$0$Counter$size_type;
typedef uint8_t /*PrintfC.QueueC*/QueueC$0$queue_t;
typedef /*PrintfC.QueueC*/QueueC$0$queue_t /*PrintfC.QueueC*/QueueC$0$Queue$t;
typedef uint8_t PrintfP$Queue$t;
typedef T32khz CC2420ControlP$StartupTimer$precision_tag;
typedef uint32_t CC2420ControlP$StartupTimer$size_type;
typedef uint16_t CC2420ControlP$ReadRssi$val_t;
typedef uint16_t HplAtm128Timer1P$CompareA$size_type;
typedef uint16_t HplAtm128Timer1P$Capture$size_type;
typedef uint16_t HplAtm128Timer1P$CompareB$size_type;
typedef uint16_t HplAtm128Timer1P$CompareC$size_type;
typedef uint16_t HplAtm128Timer1P$Timer$timer_size;
typedef uint16_t /*InitOneP.InitOne*/Atm128TimerInitC$1$timer_size;
typedef /*InitOneP.InitOne*/Atm128TimerInitC$1$timer_size /*InitOneP.InitOne*/Atm128TimerInitC$1$Timer$timer_size;
typedef TOne /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$0$frequency_tag;
typedef uint16_t /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$0$timer_size;
typedef /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$0$frequency_tag /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$0$Alarm$precision_tag;
typedef /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$0$timer_size /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$0$Alarm$size_type;
typedef /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$0$timer_size /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$0$HplAtm128Compare$size_type;
typedef /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$0$timer_size /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$0$HplAtm128Timer$timer_size;
enum /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16*/AlarmOne16C$0$__nesc_unnamed4324 {
  AlarmOne16C$0$COMPARE_ID = 0U
};
typedef TOne /*CounterOne16C.NCounter*/Atm128CounterC$1$frequency_tag;
typedef uint16_t /*CounterOne16C.NCounter*/Atm128CounterC$1$timer_size;
typedef /*CounterOne16C.NCounter*/Atm128CounterC$1$frequency_tag /*CounterOne16C.NCounter*/Atm128CounterC$1$Counter$precision_tag;
typedef /*CounterOne16C.NCounter*/Atm128CounterC$1$timer_size /*CounterOne16C.NCounter*/Atm128CounterC$1$Counter$size_type;
typedef /*CounterOne16C.NCounter*/Atm128CounterC$1$timer_size /*CounterOne16C.NCounter*/Atm128CounterC$1$Timer$timer_size;
typedef T32khz /*Counter32khz32C.Transform32*/TransformCounterC$1$to_precision_tag;
typedef uint32_t /*Counter32khz32C.Transform32*/TransformCounterC$1$to_size_type;
typedef T32khz /*Counter32khz32C.Transform32*/TransformCounterC$1$from_precision_tag;
typedef uint16_t /*Counter32khz32C.Transform32*/TransformCounterC$1$from_size_type;
typedef counter_one_overflow_t /*Counter32khz32C.Transform32*/TransformCounterC$1$upper_count_type;
typedef /*Counter32khz32C.Transform32*/TransformCounterC$1$from_precision_tag /*Counter32khz32C.Transform32*/TransformCounterC$1$CounterFrom$precision_tag;
typedef /*Counter32khz32C.Transform32*/TransformCounterC$1$from_size_type /*Counter32khz32C.Transform32*/TransformCounterC$1$CounterFrom$size_type;
typedef /*Counter32khz32C.Transform32*/TransformCounterC$1$to_precision_tag /*Counter32khz32C.Transform32*/TransformCounterC$1$Counter$precision_tag;
typedef /*Counter32khz32C.Transform32*/TransformCounterC$1$to_size_type /*Counter32khz32C.Transform32*/TransformCounterC$1$Counter$size_type;
typedef T32khz /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$to_precision_tag;
typedef uint32_t /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$to_size_type;
typedef TOne /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$from_precision_tag;
typedef uint16_t /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$from_size_type;
typedef /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$to_precision_tag /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$Alarm$precision_tag;
typedef /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$to_size_type /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$Alarm$size_type;
typedef /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$from_precision_tag /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$AlarmFrom$precision_tag;
typedef /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$from_size_type /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$AlarmFrom$size_type;
typedef /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$to_precision_tag /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$Counter$precision_tag;
typedef /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$to_size_type /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$Counter$size_type;
typedef uint16_t /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC$0$Atm128Capture$size_type;
enum /*CC2420ControlC.Spi*/CC2420SpiC$0$__nesc_unnamed4325 {
  CC2420SpiC$0$CLIENT_ID = 0U
};
enum /*CC2420ControlC.SyncSpiC*/CC2420SpiC$1$__nesc_unnamed4326 {
  CC2420SpiC$1$CLIENT_ID = 1U
};
enum /*CC2420ControlC.RssiResource*/CC2420SpiC$2$__nesc_unnamed4327 {
  CC2420SpiC$2$CLIENT_ID = 2U
};
typedef T32khz CC2420TransmitP$PacketTimeStamp$precision_tag;
typedef uint32_t CC2420TransmitP$PacketTimeStamp$size_type;
typedef T32khz CC2420TransmitP$BackoffTimer$precision_tag;
typedef uint32_t CC2420TransmitP$BackoffTimer$size_type;
enum /*CC2420TransmitC.Spi*/CC2420SpiC$3$__nesc_unnamed4328 {
  CC2420SpiC$3$CLIENT_ID = 3U
};
typedef T32khz CC2420ReceiveP$PacketTimeStamp$precision_tag;
typedef uint32_t CC2420ReceiveP$PacketTimeStamp$size_type;
typedef T32khz CC2420PacketP$PacketTimeStamp32khz$precision_tag;
typedef uint32_t CC2420PacketP$PacketTimeStamp32khz$size_type;
typedef T32khz CC2420PacketP$LocalTime32khz$precision_tag;
typedef TMilli CC2420PacketP$LocalTimeMilli$precision_tag;
typedef TMilli CC2420PacketP$PacketTimeStampMilli$precision_tag;
typedef uint32_t CC2420PacketP$PacketTimeStampMilli$size_type;
typedef T32khz /*CC2420PacketC.CounterToLocalTimeC*/CounterToLocalTimeC$1$precision_tag;
typedef /*CC2420PacketC.CounterToLocalTimeC*/CounterToLocalTimeC$1$precision_tag /*CC2420PacketC.CounterToLocalTimeC*/CounterToLocalTimeC$1$LocalTime$precision_tag;
typedef /*CC2420PacketC.CounterToLocalTimeC*/CounterToLocalTimeC$1$precision_tag /*CC2420PacketC.CounterToLocalTimeC*/CounterToLocalTimeC$1$Counter$precision_tag;
typedef uint32_t /*CC2420PacketC.CounterToLocalTimeC*/CounterToLocalTimeC$1$Counter$size_type;
enum /*CC2420ReceiveC.Spi*/CC2420SpiC$4$__nesc_unnamed4329 {
  CC2420SpiC$4$CLIENT_ID = 4U
};
typedef uint16_t RandomMlcgC$SeedInit$parameter;
enum AMQueueP$__nesc_unnamed4330 {
  AMQueueP$NUM_CLIENTS = 1U
};
enum /*BlinkToRadioAppC.BlockStorageC*/BlockStorageC$0$__nesc_unnamed4331 {
  BlockStorageC$0$BLOCK_ID = 0U + 0U, BlockStorageC$0$RESOURCE_ID = 0U
};
typedef TMicro At45dbP$BusyWait$precision_tag;
typedef uint16_t At45dbP$BusyWait$size_type;
typedef TMicro HplAt45dbIOP$BusyWait$precision_tag;
typedef uint16_t HplAt45dbIOP$BusyWait$size_type;
typedef TMicro BusyWaitMicroC$BusyWait$precision_tag;
typedef uint16_t BusyWaitMicroC$BusyWait$size_type;
# 51 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/Init.nc"
static error_t PlatformP$Init$init(void );
#line 51
static error_t MotePlatformP$PlatformInit$init(void );
# 31 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/GeneralIO.nc"
static void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP$0$IO$toggle(void );



static void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP$0$IO$makeOutput(void );
#line 29
static void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP$0$IO$set(void );

static void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP$1$IO$toggle(void );



static void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP$1$IO$makeOutput(void );
#line 29
static void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP$1$IO$set(void );
static void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP$1$IO$clr(void );
static void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP$2$IO$toggle(void );



static void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP$2$IO$makeOutput(void );
#line 29
static void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP$2$IO$set(void );
static void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP$2$IO$clr(void );




static void /*HplAtm128GeneralIOC.PortA.Bit3*/HplAtm128GeneralIOPinP$3$IO$makeOutput(void );
#line 29
static void /*HplAtm128GeneralIOC.PortA.Bit3*/HplAtm128GeneralIOPinP$3$IO$set(void );
static void /*HplAtm128GeneralIOC.PortA.Bit3*/HplAtm128GeneralIOPinP$3$IO$clr(void );


static void /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP$4$IO$makeInput(void );
#line 30
static void /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP$4$IO$clr(void );




static void /*HplAtm128GeneralIOC.PortA.Bit5*/HplAtm128GeneralIOPinP$5$IO$makeOutput(void );
#line 29
static void /*HplAtm128GeneralIOC.PortA.Bit5*/HplAtm128GeneralIOPinP$5$IO$set(void );
static void /*HplAtm128GeneralIOC.PortA.Bit5*/HplAtm128GeneralIOPinP$5$IO$clr(void );




static void /*HplAtm128GeneralIOC.PortA.Bit6*/HplAtm128GeneralIOPinP$6$IO$makeOutput(void );
#line 29
static void /*HplAtm128GeneralIOC.PortA.Bit6*/HplAtm128GeneralIOPinP$6$IO$set(void );
static void /*HplAtm128GeneralIOC.PortA.Bit6*/HplAtm128GeneralIOPinP$6$IO$clr(void );




static void /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP$8$IO$makeOutput(void );
#line 29
static void /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP$8$IO$set(void );
static void /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP$8$IO$clr(void );




static void /*HplAtm128GeneralIOC.PortB.Bit1*/HplAtm128GeneralIOPinP$9$IO$makeOutput(void );
#line 35
static void /*HplAtm128GeneralIOC.PortB.Bit2*/HplAtm128GeneralIOPinP$10$IO$makeOutput(void );
#line 33
static void /*HplAtm128GeneralIOC.PortB.Bit3*/HplAtm128GeneralIOPinP$11$IO$makeInput(void );
#line 32
static bool /*HplAtm128GeneralIOC.PortB.Bit7*/HplAtm128GeneralIOPinP$15$IO$get(void );
static void /*HplAtm128GeneralIOC.PortD.Bit2*/HplAtm128GeneralIOPinP$26$IO$makeInput(void );
#line 32
static bool /*HplAtm128GeneralIOC.PortD.Bit2*/HplAtm128GeneralIOPinP$26$IO$get(void );
#line 30
static void /*HplAtm128GeneralIOC.PortD.Bit2*/HplAtm128GeneralIOPinP$26$IO$clr(void );




static void /*HplAtm128GeneralIOC.PortD.Bit3*/HplAtm128GeneralIOPinP$27$IO$makeOutput(void );
#line 29
static void /*HplAtm128GeneralIOC.PortD.Bit3*/HplAtm128GeneralIOPinP$27$IO$set(void );



static void /*HplAtm128GeneralIOC.PortD.Bit4*/HplAtm128GeneralIOPinP$28$IO$makeInput(void );
#line 32
static bool /*HplAtm128GeneralIOC.PortD.Bit4*/HplAtm128GeneralIOPinP$28$IO$get(void );


static void /*HplAtm128GeneralIOC.PortD.Bit5*/HplAtm128GeneralIOPinP$29$IO$makeOutput(void );
#line 29
static void /*HplAtm128GeneralIOC.PortD.Bit5*/HplAtm128GeneralIOPinP$29$IO$set(void );
static void /*HplAtm128GeneralIOC.PortD.Bit5*/HplAtm128GeneralIOPinP$29$IO$clr(void );


static void /*HplAtm128GeneralIOC.PortD.Bit6*/HplAtm128GeneralIOPinP$30$IO$makeInput(void );
#line 32
static bool /*HplAtm128GeneralIOC.PortD.Bit6*/HplAtm128GeneralIOPinP$30$IO$get(void );
#line 32
static bool /*HplAtm128GeneralIOC.PortE.Bit6*/HplAtm128GeneralIOPinP$38$IO$get(void );
# 51 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/Init.nc"
static error_t MeasureClockC$Init$init(void );
# 60 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/timer/Atm128Calibrate.nc"
static uint16_t MeasureClockC$Atm128Calibrate$baudrateRegister(uint32_t baudrate);
# 56 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static error_t SchedulerBasicP$TaskBasic$postTask(
# 45 "/cygdrive/c/Dropbox/tinyos-2.x/tos/system/SchedulerBasicP.nc"
uint8_t arg_0x7ef008d8);
# 64 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void SchedulerBasicP$TaskBasic$default$runTask(
# 45 "/cygdrive/c/Dropbox/tinyos-2.x/tos/system/SchedulerBasicP.nc"
uint8_t arg_0x7ef008d8);
# 46 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/Scheduler.nc"
static void SchedulerBasicP$Scheduler$init(void );
#line 61
static void SchedulerBasicP$Scheduler$taskLoop(void );
#line 54
static bool SchedulerBasicP$Scheduler$runNextTask(void );
# 59 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/McuSleep.nc"
static void McuSleepC$McuSleep$sleep(void );
# 44 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/McuPowerState.nc"
static void McuSleepC$McuPowerState$update(void );
# 51 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/Init.nc"
static error_t LedsP$Init$init(void );
# 50 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/Leds.nc"
static void LedsP$Leds$led0Off(void );





static void LedsP$Leds$led0Toggle(void );




static void LedsP$Leds$led1On(void );










static void LedsP$Leds$led1Toggle(void );
#line 89
static void LedsP$Leds$led2Toggle(void );
#line 45
static void LedsP$Leds$led0On(void );
# 72 "/cygdrive/c/Dropbox/tinyos-2.x/tos/lib/timer/Timer.nc"
static void BlinkToRadioC$Timer0$fired(void );
# 53 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Config.nc"
static void BlinkToRadioC$CC2420Config$syncDone(error_t error);
# 92 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/SplitControl.nc"
static void BlinkToRadioC$AMControl$startDone(error_t error);
#line 117
static void BlinkToRadioC$AMControl$stopDone(error_t error);
# 49 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/Boot.nc"
static void BlinkToRadioC$Boot$booted(void );
# 99 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/AMSend.nc"
static void BlinkToRadioC$AMSend$sendDone(
#line 92
message_t * msg, 






error_t error);
# 64 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void BlinkToRadioC$AMSendTask$runTask(void );
# 95 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/BlockRead.nc"
static void BlinkToRadioC$BlockRead$computeCrcDone(storage_addr_t addr, storage_len_t len, 
uint16_t crc, error_t error);
#line 67
static void BlinkToRadioC$BlockRead$readDone(storage_addr_t addr, 
#line 62
void * buf, 




storage_len_t len, 
error_t error);
# 72 "/cygdrive/c/Dropbox/tinyos-2.x/tos/lib/timer/Timer.nc"
static void BlinkToRadioC$Timer1$fired(void );
# 112 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/BlockWrite.nc"
static void BlinkToRadioC$BlockWrite$syncDone(error_t error);
#line 71
static void BlinkToRadioC$BlockWrite$writeDone(storage_addr_t addr, 
#line 66
void * buf, 




storage_len_t len, 
error_t error);
#line 91
static void BlinkToRadioC$BlockWrite$eraseDone(error_t error);
# 67 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/Receive.nc"
static 
#line 63
message_t * 



BlinkToRadioC$Receive$receive(
#line 60
message_t * msg, 
void * payload, 





uint8_t len);
# 64 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void BlinkToRadioC$EraseFlash$runTask(void );
# 98 "/cygdrive/c/Dropbox/tinyos-2.x/tos/lib/timer/Alarm.nc"
static /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$size_type /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$getNow(void );
#line 92
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$startAt(/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$size_type t0, /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$size_type dt);
#line 105
static /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$size_type /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$getAlarm(void );
#line 62
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$stop(void );
# 51 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/Init.nc"
static error_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Init$init(void );
# 53 "/cygdrive/c/Dropbox/tinyos-2.x/tos/lib/timer/Counter.nc"
static /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Counter$size_type /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Counter$get(void );
# 49 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Compare$fired(void );
# 61 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Timer$overflow(void );
# 44 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/timer/HplAtm128TimerCtrl8.nc"
static Atm128_TIFR_t HplAtm128Timer0AsyncP$TimerCtrl$getInterruptFlag(void );
#line 37
static void HplAtm128Timer0AsyncP$TimerCtrl$setControl(Atm128TimerControl_t control);
# 54 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/McuPowerOverride.nc"
static mcu_power_t HplAtm128Timer0AsyncP$McuPowerOverride$lowestState(void );
# 44 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/timer/HplAtm128TimerAsync.nc"
static int HplAtm128Timer0AsyncP$TimerAsync$compareBusy(void );
#line 32
static void HplAtm128Timer0AsyncP$TimerAsync$setTimer0Asynchronous(void );
# 39 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
static HplAtm128Timer0AsyncP$Compare$size_type HplAtm128Timer0AsyncP$Compare$get(void );





static void HplAtm128Timer0AsyncP$Compare$set(HplAtm128Timer0AsyncP$Compare$size_type t);










static void HplAtm128Timer0AsyncP$Compare$start(void );
# 52 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
static HplAtm128Timer0AsyncP$Timer$timer_size HplAtm128Timer0AsyncP$Timer$get(void );
# 64 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$fired$runTask(void );
# 67 "/cygdrive/c/Dropbox/tinyos-2.x/tos/lib/timer/Alarm.nc"
static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$fired(void );
# 125 "/cygdrive/c/Dropbox/tinyos-2.x/tos/lib/timer/Timer.nc"
static uint32_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$getNow(void );
#line 118
static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$startOneShotAt(uint32_t t0, uint32_t dt);
#line 67
static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$stop(void );
# 64 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$updateFromTimer$runTask(void );
# 72 "/cygdrive/c/Dropbox/tinyos-2.x/tos/lib/timer/Timer.nc"
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$fired(void );
#line 72
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$default$fired(
# 37 "/cygdrive/c/Dropbox/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x7e798260);
# 53 "/cygdrive/c/Dropbox/tinyos-2.x/tos/lib/timer/Timer.nc"
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$startPeriodic(
# 37 "/cygdrive/c/Dropbox/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x7e798260, 
# 53 "/cygdrive/c/Dropbox/tinyos-2.x/tos/lib/timer/Timer.nc"
uint32_t dt);








static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$startOneShot(
# 37 "/cygdrive/c/Dropbox/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x7e798260, 
# 62 "/cygdrive/c/Dropbox/tinyos-2.x/tos/lib/timer/Timer.nc"
uint32_t dt);
# 71 "/cygdrive/c/Dropbox/tinyos-2.x/tos/lib/timer/Counter.nc"
static void /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC$0$Counter$overflow(void );
# 69 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/AMSend.nc"
static error_t /*PrintfC.SerialAMSenderC.AMQueueEntryP*/AMQueueEntryP$0$AMSend$send(am_addr_t addr, 
#line 60
message_t * msg, 








uint8_t len);
# 89 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/Send.nc"
static void /*PrintfC.SerialAMSenderC.AMQueueEntryP*/AMQueueEntryP$0$Send$sendDone(
#line 85
message_t * msg, 



error_t error);
# 99 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/AMSend.nc"
static void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$0$AMSend$sendDone(
# 40 "/cygdrive/c/Dropbox/tinyos-2.x/tos/system/AMQueueImplP.nc"
am_id_t arg_0x7e7050c0, 
# 92 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/AMSend.nc"
message_t * msg, 






error_t error);
# 64 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/Send.nc"
static error_t /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$0$Send$send(
# 38 "/cygdrive/c/Dropbox/tinyos-2.x/tos/system/AMQueueImplP.nc"
uint8_t arg_0x7e7066b0, 
# 56 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/Send.nc"
message_t * msg, 







uint8_t len);
#line 89
static void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$0$Send$default$sendDone(
# 38 "/cygdrive/c/Dropbox/tinyos-2.x/tos/system/AMQueueImplP.nc"
uint8_t arg_0x7e7066b0, 
# 85 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/Send.nc"
message_t * msg, 



error_t error);
# 64 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$0$errorTask$runTask(void );
#line 64
static void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$0$CancelTask$runTask(void );
# 89 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/Send.nc"
static void /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$SubSend$sendDone(
#line 85
message_t * msg, 



error_t error);
# 67 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/Receive.nc"
static 
#line 63
message_t * 



/*SerialActiveMessageC.AM*/SerialActiveMessageP$0$SubReceive$receive(
#line 60
message_t * msg, 
void * payload, 





uint8_t len);
# 69 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/AMSend.nc"
static error_t /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$AMSend$send(
# 36 "/cygdrive/c/Dropbox/tinyos-2.x/tos/lib/serial/SerialActiveMessageP.nc"
am_id_t arg_0x7e6c1e70, 
# 69 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/AMSend.nc"
am_addr_t addr, 
#line 60
message_t * msg, 








uint8_t len);
# 67 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/Packet.nc"
static uint8_t /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$Packet$payloadLength(
#line 63
message_t * msg);
#line 115
static 
#line 112
void * 


/*SerialActiveMessageC.AM*/SerialActiveMessageP$0$Packet$getPayload(
#line 110
message_t * msg, 




uint8_t len);
#line 95
static uint8_t /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$Packet$maxPayloadLength(void );
#line 83
static void /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$Packet$setPayloadLength(
#line 79
message_t * msg, 



uint8_t len);
# 67 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/Receive.nc"
static 
#line 63
message_t * 



/*SerialActiveMessageC.AM*/SerialActiveMessageP$0$Receive$default$receive(
# 37 "/cygdrive/c/Dropbox/tinyos-2.x/tos/lib/serial/SerialActiveMessageP.nc"
am_id_t arg_0x7e6b88e0, 
# 60 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
# 67 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/AMPacket.nc"
static am_addr_t /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$AMPacket$destination(
#line 63
message_t * amsg);
#line 92
static void /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$AMPacket$setDestination(
#line 88
message_t * amsg, 



am_addr_t addr);
#line 136
static am_id_t /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$AMPacket$type(
#line 132
message_t * amsg);
#line 151
static void /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$AMPacket$setType(
#line 147
message_t * amsg, 



am_id_t t);
# 83 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/SplitControl.nc"
static error_t SerialP$SplitControl$start(void );
# 64 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void SerialP$stopDoneTask$runTask(void );
#line 64
static void SerialP$RunTx$runTask(void );
# 51 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/Init.nc"
static error_t SerialP$Init$init(void );
# 43 "/cygdrive/c/Dropbox/tinyos-2.x/tos/lib/serial/SerialFlush.nc"
static void SerialP$SerialFlush$flushDone(void );
#line 38
static void SerialP$SerialFlush$default$flush(void );
# 64 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void SerialP$startDoneTask$runTask(void );
# 83 "/cygdrive/c/Dropbox/tinyos-2.x/tos/lib/serial/SerialFrameComm.nc"
static void SerialP$SerialFrameComm$dataReceived(uint8_t data);





static void SerialP$SerialFrameComm$putDone(void );
#line 74
static void SerialP$SerialFrameComm$delimiterReceived(void );
# 64 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void SerialP$defaultSerialFlushTask$runTask(void );
# 60 "/cygdrive/c/Dropbox/tinyos-2.x/tos/lib/serial/SendBytePacket.nc"
static error_t SerialP$SendBytePacket$completeSend(void );
#line 51
static error_t SerialP$SendBytePacket$startSend(uint8_t first_byte);
# 64 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$receiveTask$runTask(void );
# 64 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/Send.nc"
static error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$Send$send(
# 40 "/cygdrive/c/Dropbox/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x7e5a9ba8, 
# 56 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/Send.nc"
message_t * msg, 







uint8_t len);
#line 89
static void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$Send$default$sendDone(
# 40 "/cygdrive/c/Dropbox/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x7e5a9ba8, 
# 85 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/Send.nc"
message_t * msg, 



error_t error);
# 64 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$signalSendDone$runTask(void );
# 67 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/Receive.nc"
static 
#line 63
message_t * 



/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$Receive$default$receive(
# 39 "/cygdrive/c/Dropbox/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x7e5a9568, 
# 60 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
# 31 "/cygdrive/c/Dropbox/tinyos-2.x/tos/lib/serial/SerialPacketInfo.nc"
static uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$PacketInfo$default$upperLength(
# 43 "/cygdrive/c/Dropbox/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x7e5a8768, 
# 31 "/cygdrive/c/Dropbox/tinyos-2.x/tos/lib/serial/SerialPacketInfo.nc"
message_t *msg, uint8_t dataLinkLen);
#line 15
static uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$PacketInfo$default$offset(
# 43 "/cygdrive/c/Dropbox/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x7e5a8768);
# 23 "/cygdrive/c/Dropbox/tinyos-2.x/tos/lib/serial/SerialPacketInfo.nc"
static uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$PacketInfo$default$dataLinkLength(
# 43 "/cygdrive/c/Dropbox/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x7e5a8768, 
# 23 "/cygdrive/c/Dropbox/tinyos-2.x/tos/lib/serial/SerialPacketInfo.nc"
message_t *msg, uint8_t upperLen);
# 70 "/cygdrive/c/Dropbox/tinyos-2.x/tos/lib/serial/SendBytePacket.nc"
static uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$SendBytePacket$nextByte(void );









static void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$SendBytePacket$sendCompleted(error_t error);
# 51 "/cygdrive/c/Dropbox/tinyos-2.x/tos/lib/serial/ReceiveBytePacket.nc"
static error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$ReceiveBytePacket$startPacket(void );






static void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$ReceiveBytePacket$byteReceived(uint8_t data);










static void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$ReceiveBytePacket$endPacket(error_t result);
# 79 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/UartStream.nc"
static void HdlcTranslateC$UartStream$receivedByte(uint8_t byte);
#line 99
static void HdlcTranslateC$UartStream$receiveDone(
#line 95
uint8_t * buf, 



uint16_t len, error_t error);
#line 57
static void HdlcTranslateC$UartStream$sendDone(
#line 53
uint8_t * buf, 



uint16_t len, error_t error);
# 45 "/cygdrive/c/Dropbox/tinyos-2.x/tos/lib/serial/SerialFrameComm.nc"
static error_t HdlcTranslateC$SerialFrameComm$putDelimiter(void );
#line 68
static void HdlcTranslateC$SerialFrameComm$resetReceive(void );
#line 54
static error_t HdlcTranslateC$SerialFrameComm$putData(uint8_t data);
# 51 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/Init.nc"
static error_t /*Atm128Uart0C.UartP*/Atm128UartP$0$Init$init(void );
# 48 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/UartStream.nc"
static error_t /*Atm128Uart0C.UartP*/Atm128UartP$0$UartStream$send(
#line 44
uint8_t * buf, 



uint16_t len);
# 71 "/cygdrive/c/Dropbox/tinyos-2.x/tos/lib/timer/Counter.nc"
static void /*Atm128Uart0C.UartP*/Atm128UartP$0$Counter$overflow(void );
# 49 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/HplAtm128Uart.nc"
static void /*Atm128Uart0C.UartP*/Atm128UartP$0$HplUart$rxDone(uint8_t data);
#line 47
static void /*Atm128Uart0C.UartP*/Atm128UartP$0$HplUart$txDone(void );
# 74 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/StdControl.nc"
static error_t /*Atm128Uart0C.UartP*/Atm128UartP$0$StdControl$start(void );









static error_t /*Atm128Uart0C.UartP*/Atm128UartP$0$StdControl$stop(void );
# 51 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/Init.nc"
static error_t HplAtm128UartP$Uart0Init$init(void );
# 42 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/HplAtm128Uart.nc"
static error_t HplAtm128UartP$HplUart0$enableRxIntr(void );
#line 40
static error_t HplAtm128UartP$HplUart0$enableTxIntr(void );
static error_t HplAtm128UartP$HplUart0$disableTxIntr(void );

static error_t HplAtm128UartP$HplUart0$disableRxIntr(void );


static void HplAtm128UartP$HplUart0$tx(uint8_t data);
# 51 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/Init.nc"
static error_t HplAtm128UartP$Uart1Init$init(void );
# 49 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/HplAtm128Uart.nc"
static void HplAtm128UartP$HplUart1$default$rxDone(uint8_t data);
#line 47
static void HplAtm128UartP$HplUart1$default$txDone(void );
# 74 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/StdControl.nc"
static error_t HplAtm128UartP$Uart0RxControl$start(void );









static error_t HplAtm128UartP$Uart0RxControl$stop(void );
#line 74
static error_t HplAtm128UartP$Uart0TxControl$start(void );









static error_t HplAtm128UartP$Uart0TxControl$stop(void );
# 41 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/timer/HplAtm128TimerCtrl16.nc"
static void HplAtm128Timer3P$TimerCtrl$setCtrlCapture(Atm128TimerCtrlCapture_t control);
#line 37
static Atm128TimerCtrlCapture_t HplAtm128Timer3P$TimerCtrl$getCtrlCapture(void );
# 49 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
static void HplAtm128Timer3P$CompareA$default$fired(void );
# 51 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Capture.nc"
static void HplAtm128Timer3P$Capture$default$captured(HplAtm128Timer3P$Capture$size_type t);
# 49 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
static void HplAtm128Timer3P$CompareB$default$fired(void );
#line 49
static void HplAtm128Timer3P$CompareC$default$fired(void );
# 52 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
static HplAtm128Timer3P$Timer$timer_size HplAtm128Timer3P$Timer$get(void );
#line 95
static void HplAtm128Timer3P$Timer$setScale(uint8_t scale);
#line 58
static void HplAtm128Timer3P$Timer$set(HplAtm128Timer3P$Timer$timer_size t);










static void HplAtm128Timer3P$Timer$start(void );
# 51 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/Init.nc"
static error_t /*InitThreeP.InitThree*/Atm128TimerInitC$0$Init$init(void );
# 61 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
static void /*InitThreeP.InitThree*/Atm128TimerInitC$0$Timer$overflow(void );
#line 61
static void /*CounterThree16C.NCounter*/Atm128CounterC$0$Timer$overflow(void );
# 71 "/cygdrive/c/Dropbox/tinyos-2.x/tos/lib/timer/Counter.nc"
static void /*CounterMicro32C.Transform32*/TransformCounterC$0$CounterFrom$overflow(void );
# 31 "/cygdrive/c/Dropbox/tinyos-2.x/tos/lib/serial/SerialPacketInfo.nc"
static uint8_t SerialPacketInfoActiveMessageP$Info$upperLength(message_t *msg, uint8_t dataLinkLen);
#line 15
static uint8_t SerialPacketInfoActiveMessageP$Info$offset(void );







static uint8_t SerialPacketInfoActiveMessageP$Info$dataLinkLength(message_t *msg, uint8_t upperLen);
# 73 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/Queue.nc"
static 
#line 71
/*PrintfC.QueueC*/QueueC$0$Queue$t  

/*PrintfC.QueueC*/QueueC$0$Queue$head(void );
#line 90
static error_t /*PrintfC.QueueC*/QueueC$0$Queue$enqueue(
#line 86
/*PrintfC.QueueC*/QueueC$0$Queue$t  newVal);
#line 65
static uint8_t /*PrintfC.QueueC*/QueueC$0$Queue$maxSize(void );
#line 81
static 
#line 79
/*PrintfC.QueueC*/QueueC$0$Queue$t  

/*PrintfC.QueueC*/QueueC$0$Queue$dequeue(void );
#line 50
static bool /*PrintfC.QueueC*/QueueC$0$Queue$empty(void );







static uint8_t /*PrintfC.QueueC*/QueueC$0$Queue$size(void );
# 99 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/AMSend.nc"
static void PrintfP$AMSend$sendDone(
#line 92
message_t * msg, 






error_t error);
# 64 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void PrintfP$retrySend$runTask(void );
# 51 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/Init.nc"
static error_t PrintfP$Init$init(void );
# 49 "/cygdrive/c/Dropbox/tinyos-2.x/tos/lib/printf/Putchar.nc"
static int PrintfP$Putchar$putchar(int c);
# 51 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/Init.nc"
static error_t PutcharP$Init$init(void );
# 49 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/Boot.nc"
static void SerialStartP$Boot$booted(void );
# 92 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/SplitControl.nc"
static void SerialStartP$SerialControl$startDone(error_t error);
#line 117
static void SerialStartP$SerialControl$stopDone(error_t error);
# 67 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/Receive.nc"
static 
#line 63
message_t * 



CC2420ActiveMessageP$SubReceive$receive(
#line 60
message_t * msg, 
void * payload, 





uint8_t len);
# 89 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/Send.nc"
static void CC2420ActiveMessageP$SubSend$sendDone(
#line 85
message_t * msg, 



error_t error);
# 53 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Config.nc"
static void CC2420ActiveMessageP$CC2420Config$syncDone(error_t error);
# 95 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/cc2420/interfaces/RadioBackoff.nc"
static void CC2420ActiveMessageP$RadioBackoff$default$requestCca(
# 45 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/cc2420/CC2420ActiveMessageP.nc"
am_id_t arg_0x7e2d7230, 
# 95 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/cc2420/interfaces/RadioBackoff.nc"
message_t * msg);
#line 81
static void CC2420ActiveMessageP$RadioBackoff$default$requestInitialBackoff(
# 45 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/cc2420/CC2420ActiveMessageP.nc"
am_id_t arg_0x7e2d7230, 
# 81 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/cc2420/interfaces/RadioBackoff.nc"
message_t * msg);






static void CC2420ActiveMessageP$RadioBackoff$default$requestCongestionBackoff(
# 45 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/cc2420/CC2420ActiveMessageP.nc"
am_id_t arg_0x7e2d7230, 
# 88 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/cc2420/interfaces/RadioBackoff.nc"
message_t * msg);
# 59 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/SendNotifier.nc"
static void CC2420ActiveMessageP$SendNotifier$default$aboutToSend(
# 44 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/cc2420/CC2420ActiveMessageP.nc"
am_id_t arg_0x7e2d8b78, 
# 59 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/SendNotifier.nc"
am_addr_t dest, 
#line 57
message_t * msg);
# 95 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/cc2420/interfaces/RadioBackoff.nc"
static void CC2420ActiveMessageP$SubBackoff$requestCca(message_t * msg);
#line 81
static void CC2420ActiveMessageP$SubBackoff$requestInitialBackoff(message_t * msg);






static void CC2420ActiveMessageP$SubBackoff$requestCongestionBackoff(message_t * msg);
# 67 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/Packet.nc"
static uint8_t CC2420ActiveMessageP$Packet$payloadLength(
#line 63
message_t * msg);
#line 115
static 
#line 112
void * 


CC2420ActiveMessageP$Packet$getPayload(
#line 110
message_t * msg, 




uint8_t len);
#line 83
static void CC2420ActiveMessageP$Packet$setPayloadLength(
#line 79
message_t * msg, 



uint8_t len);
# 69 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/AMSend.nc"
static error_t CC2420ActiveMessageP$AMSend$send(
# 39 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/cc2420/CC2420ActiveMessageP.nc"
am_id_t arg_0x7e2db0c0, 
# 69 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/AMSend.nc"
am_addr_t addr, 
#line 60
message_t * msg, 








uint8_t len);
# 67 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/Receive.nc"
static 
#line 63
message_t * 



CC2420ActiveMessageP$Snoop$default$receive(
# 41 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/cc2420/CC2420ActiveMessageP.nc"
am_id_t arg_0x7e2d9148, 
# 60 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
#line 67
static 
#line 63
message_t * 



CC2420ActiveMessageP$Receive$default$receive(
# 40 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/cc2420/CC2420ActiveMessageP.nc"
am_id_t arg_0x7e2dba80, 
# 60 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
# 57 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/AMPacket.nc"
static am_addr_t CC2420ActiveMessageP$AMPacket$address(void );









static am_addr_t CC2420ActiveMessageP$AMPacket$destination(
#line 63
message_t * amsg);
#line 92
static void CC2420ActiveMessageP$AMPacket$setDestination(
#line 88
message_t * amsg, 



am_addr_t addr);
#line 136
static am_id_t CC2420ActiveMessageP$AMPacket$type(
#line 132
message_t * amsg);
#line 151
static void CC2420ActiveMessageP$AMPacket$setType(
#line 147
message_t * amsg, 



am_id_t t);
#line 125
static bool CC2420ActiveMessageP$AMPacket$isForMe(
#line 122
message_t * amsg);
# 83 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/SplitControl.nc"
static error_t CC2420CsmaP$SplitControl$start(void );
# 81 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/cc2420/interfaces/RadioBackoff.nc"
static void CC2420CsmaP$SubBackoff$requestInitialBackoff(message_t * msg);






static void CC2420CsmaP$SubBackoff$requestCongestionBackoff(message_t * msg);
# 73 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Transmit.nc"
static void CC2420CsmaP$CC2420Transmit$sendDone(message_t * p_msg, error_t error);
# 64 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/Send.nc"
static error_t CC2420CsmaP$Send$send(
#line 56
message_t * msg, 







uint8_t len);
#line 114
static 
#line 112
void * 

CC2420CsmaP$Send$getPayload(
#line 111
message_t * msg, 


uint8_t len);
#line 101
static uint8_t CC2420CsmaP$Send$maxPayloadLength(void );
# 76 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Power.nc"
static void CC2420CsmaP$CC2420Power$startOscillatorDone(void );
#line 56
static void CC2420CsmaP$CC2420Power$startVRegDone(void );
# 92 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/Resource.nc"
static void CC2420CsmaP$Resource$granted(void );
# 64 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void CC2420CsmaP$sendDone_task$runTask(void );
#line 64
static void CC2420CsmaP$stopDone_task$runTask(void );
#line 64
static void CC2420CsmaP$startDone_task$runTask(void );
# 86 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Config.nc"
static bool CC2420ControlP$CC2420Config$isAddressRecognitionEnabled(void );
#line 110
static bool CC2420ControlP$CC2420Config$isAutoAckEnabled(void );
#line 105
static bool CC2420ControlP$CC2420Config$isHwAutoAckDefault(void );
#line 64
static uint16_t CC2420ControlP$CC2420Config$getShortAddr(void );
#line 52
static error_t CC2420ControlP$CC2420Config$sync(void );
#line 70
static uint16_t CC2420ControlP$CC2420Config$getPanAddr(void );
# 67 "/cygdrive/c/Dropbox/tinyos-2.x/tos/lib/timer/Alarm.nc"
static void CC2420ControlP$StartupTimer$fired(void );
# 63 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/Read.nc"
static void CC2420ControlP$ReadRssi$default$readDone(error_t result, CC2420ControlP$ReadRssi$val_t val);
# 64 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void CC2420ControlP$syncDone$runTask(void );
# 51 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/Init.nc"
static error_t CC2420ControlP$Init$init(void );
# 92 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/Resource.nc"
static void CC2420ControlP$SpiResource$granted(void );
#line 92
static void CC2420ControlP$SyncResource$granted(void );
# 71 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Power.nc"
static error_t CC2420ControlP$CC2420Power$startOscillator(void );
#line 90
static error_t CC2420ControlP$CC2420Power$rxOn(void );
#line 51
static error_t CC2420ControlP$CC2420Power$startVReg(void );
#line 63
static error_t CC2420ControlP$CC2420Power$stopVReg(void );
# 64 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void CC2420ControlP$sync$runTask(void );
# 110 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/Resource.nc"
static error_t CC2420ControlP$Resource$release(void );
#line 78
static error_t CC2420ControlP$Resource$request(void );
# 57 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/GpioInterrupt.nc"
static void CC2420ControlP$InterruptCCA$fired(void );
# 92 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/Resource.nc"
static void CC2420ControlP$RssiResource$granted(void );
# 41 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/timer/HplAtm128TimerCtrl16.nc"
static void HplAtm128Timer1P$TimerCtrl$setCtrlCapture(Atm128TimerCtrlCapture_t control);
#line 37
static Atm128TimerCtrlCapture_t HplAtm128Timer1P$TimerCtrl$getCtrlCapture(void );
# 53 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
static void HplAtm128Timer1P$CompareA$reset(void );
#line 45
static void HplAtm128Timer1P$CompareA$set(HplAtm128Timer1P$CompareA$size_type t);










static void HplAtm128Timer1P$CompareA$start(void );


static void HplAtm128Timer1P$CompareA$stop(void );
# 79 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Capture.nc"
static void HplAtm128Timer1P$Capture$setEdge(bool up);
#line 55
static void HplAtm128Timer1P$Capture$reset(void );


static void HplAtm128Timer1P$Capture$start(void );


static void HplAtm128Timer1P$Capture$stop(void );
# 49 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
static void HplAtm128Timer1P$CompareB$default$fired(void );
#line 49
static void HplAtm128Timer1P$CompareC$default$fired(void );
# 78 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
static bool HplAtm128Timer1P$Timer$test(void );
#line 52
static HplAtm128Timer1P$Timer$timer_size HplAtm128Timer1P$Timer$get(void );
#line 95
static void HplAtm128Timer1P$Timer$setScale(uint8_t scale);
#line 58
static void HplAtm128Timer1P$Timer$set(HplAtm128Timer1P$Timer$timer_size t);










static void HplAtm128Timer1P$Timer$start(void );
# 51 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/Init.nc"
static error_t /*InitOneP.InitOne*/Atm128TimerInitC$1$Init$init(void );
# 61 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
static void /*InitOneP.InitOne*/Atm128TimerInitC$1$Timer$overflow(void );
# 92 "/cygdrive/c/Dropbox/tinyos-2.x/tos/lib/timer/Alarm.nc"
static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$0$Alarm$startAt(/*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$0$Alarm$size_type t0, /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$0$Alarm$size_type dt);
#line 62
static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$0$Alarm$stop(void );
# 49 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$0$HplAtm128Compare$fired(void );
# 61 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$0$HplAtm128Timer$overflow(void );
# 53 "/cygdrive/c/Dropbox/tinyos-2.x/tos/lib/timer/Counter.nc"
static /*CounterOne16C.NCounter*/Atm128CounterC$1$Counter$size_type /*CounterOne16C.NCounter*/Atm128CounterC$1$Counter$get(void );






static bool /*CounterOne16C.NCounter*/Atm128CounterC$1$Counter$isOverflowPending(void );
# 61 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
static void /*CounterOne16C.NCounter*/Atm128CounterC$1$Timer$overflow(void );
# 71 "/cygdrive/c/Dropbox/tinyos-2.x/tos/lib/timer/Counter.nc"
static void /*Counter32khz32C.Transform32*/TransformCounterC$1$CounterFrom$overflow(void );
#line 53
static /*Counter32khz32C.Transform32*/TransformCounterC$1$Counter$size_type /*Counter32khz32C.Transform32*/TransformCounterC$1$Counter$get(void );
# 98 "/cygdrive/c/Dropbox/tinyos-2.x/tos/lib/timer/Alarm.nc"
static /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$Alarm$size_type /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$Alarm$getNow(void );
#line 92
static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$Alarm$startAt(/*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$Alarm$size_type t0, /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$Alarm$size_type dt);
#line 55
static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$Alarm$start(/*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$Alarm$size_type dt);






static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$Alarm$stop(void );




static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$AlarmFrom$fired(void );
# 71 "/cygdrive/c/Dropbox/tinyos-2.x/tos/lib/timer/Counter.nc"
static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$Counter$overflow(void );
# 51 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/Init.nc"
static error_t NoInitC$Init$init(void );
# 43 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/GpioCapture.nc"
static error_t /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC$0$Capture$captureFallingEdge(void );
#line 55
static void /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC$0$Capture$disable(void );
#line 42
static error_t /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC$0$Capture$captureRisingEdge(void );
# 51 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Capture.nc"
static void /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC$0$Atm128Capture$captured(/*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC$0$Atm128Capture$size_type t);
# 64 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
static void /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC$0$Atm128Interrupt$fired(void );
# 50 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/GpioInterrupt.nc"
static error_t /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC$0$Interrupt$disable(void );
#line 43
static error_t /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC$0$Interrupt$enableFallingEdge(void );
# 64 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
static void /*HplAtm128InterruptC.IntPin0*/HplAtm128InterruptPinP$0$Irq$default$fired(void );
# 41 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptSig.nc"
static void /*HplAtm128InterruptC.IntPin0*/HplAtm128InterruptPinP$0$IrqSignal$fired(void );
# 64 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
static void /*HplAtm128InterruptC.IntPin1*/HplAtm128InterruptPinP$1$Irq$default$fired(void );
# 41 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptSig.nc"
static void /*HplAtm128InterruptC.IntPin1*/HplAtm128InterruptPinP$1$IrqSignal$fired(void );
# 45 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
static void /*HplAtm128InterruptC.IntPin2*/HplAtm128InterruptPinP$2$Irq$clear(void );
#line 40
static void /*HplAtm128InterruptC.IntPin2*/HplAtm128InterruptPinP$2$Irq$disable(void );
#line 59
static void /*HplAtm128InterruptC.IntPin2*/HplAtm128InterruptPinP$2$Irq$edge(bool low_to_high);
#line 35
static void /*HplAtm128InterruptC.IntPin2*/HplAtm128InterruptPinP$2$Irq$enable(void );
# 41 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptSig.nc"
static void /*HplAtm128InterruptC.IntPin2*/HplAtm128InterruptPinP$2$IrqSignal$fired(void );
# 64 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
static void /*HplAtm128InterruptC.IntPin3*/HplAtm128InterruptPinP$3$Irq$default$fired(void );
# 41 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptSig.nc"
static void /*HplAtm128InterruptC.IntPin3*/HplAtm128InterruptPinP$3$IrqSignal$fired(void );
# 64 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
static void /*HplAtm128InterruptC.IntPin4*/HplAtm128InterruptPinP$4$Irq$default$fired(void );
# 41 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptSig.nc"
static void /*HplAtm128InterruptC.IntPin4*/HplAtm128InterruptPinP$4$IrqSignal$fired(void );
# 64 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
static void /*HplAtm128InterruptC.IntPin5*/HplAtm128InterruptPinP$5$Irq$default$fired(void );
# 41 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptSig.nc"
static void /*HplAtm128InterruptC.IntPin5*/HplAtm128InterruptPinP$5$IrqSignal$fired(void );
# 45 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
static void /*HplAtm128InterruptC.IntPin6*/HplAtm128InterruptPinP$6$Irq$clear(void );
#line 40
static void /*HplAtm128InterruptC.IntPin6*/HplAtm128InterruptPinP$6$Irq$disable(void );
#line 59
static void /*HplAtm128InterruptC.IntPin6*/HplAtm128InterruptPinP$6$Irq$edge(bool low_to_high);
#line 35
static void /*HplAtm128InterruptC.IntPin6*/HplAtm128InterruptPinP$6$Irq$enable(void );
# 41 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptSig.nc"
static void /*HplAtm128InterruptC.IntPin6*/HplAtm128InterruptPinP$6$IrqSignal$fired(void );
# 64 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
static void /*HplAtm128InterruptC.IntPin7*/HplAtm128InterruptPinP$7$Irq$default$fired(void );
# 41 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptSig.nc"
static void /*HplAtm128InterruptC.IntPin7*/HplAtm128InterruptPinP$7$IrqSignal$fired(void );
# 50 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/GpioInterrupt.nc"
static error_t HplCC2420InterruptsP$CCA$disable(void );
#line 42
static error_t HplCC2420InterruptsP$CCA$enableRisingEdge(void );
# 64 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void HplCC2420InterruptsP$CCATask$runTask(void );
# 71 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/SpiPacket.nc"
static void CC2420SpiP$SpiPacket$sendDone(
#line 64
uint8_t * txBuf, 
uint8_t * rxBuf, 





uint16_t len, 
error_t error);
# 62 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Fifo.nc"
static error_t CC2420SpiP$Fifo$continueRead(
# 46 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc"
uint8_t arg_0x7ded1280, 
# 62 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Fifo.nc"
uint8_t * data, uint8_t length);
#line 91
static void CC2420SpiP$Fifo$default$writeDone(
# 46 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc"
uint8_t arg_0x7ded1280, 
# 91 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Fifo.nc"
uint8_t * data, uint8_t length, error_t error);
#line 82
static cc2420_status_t CC2420SpiP$Fifo$write(
# 46 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc"
uint8_t arg_0x7ded1280, 
# 82 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Fifo.nc"
uint8_t * data, uint8_t length);
#line 51
static cc2420_status_t CC2420SpiP$Fifo$beginRead(
# 46 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc"
uint8_t arg_0x7ded1280, 
# 51 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Fifo.nc"
uint8_t * data, uint8_t length);
#line 71
static void CC2420SpiP$Fifo$default$readDone(
# 46 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc"
uint8_t arg_0x7ded1280, 
# 71 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Fifo.nc"
uint8_t * data, uint8_t length, error_t error);
# 31 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/cc2420/interfaces/ChipSpiResource.nc"
static void CC2420SpiP$ChipSpiResource$abortRelease(void );







static error_t CC2420SpiP$ChipSpiResource$attemptRelease(void );
# 92 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/Resource.nc"
static void CC2420SpiP$SpiResource$granted(void );
# 63 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Ram.nc"
static cc2420_status_t CC2420SpiP$Ram$write(
# 47 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc"
uint16_t arg_0x7ded1ca8, 
# 63 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Ram.nc"
uint8_t offset, uint8_t * data, uint8_t length);
# 47 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Register.nc"
static cc2420_status_t CC2420SpiP$Reg$read(
# 48 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc"
uint8_t arg_0x7decf4f0, 
# 47 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Register.nc"
uint16_t *data);







static cc2420_status_t CC2420SpiP$Reg$write(
# 48 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc"
uint8_t arg_0x7decf4f0, 
# 55 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Register.nc"
uint16_t data);
# 110 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/Resource.nc"
static error_t CC2420SpiP$Resource$release(
# 45 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc"
uint8_t arg_0x7ded2818);
# 87 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/Resource.nc"
static error_t CC2420SpiP$Resource$immediateRequest(
# 45 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc"
uint8_t arg_0x7ded2818);
# 78 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/Resource.nc"
static error_t CC2420SpiP$Resource$request(
# 45 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc"
uint8_t arg_0x7ded2818);
# 92 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/Resource.nc"
static void CC2420SpiP$Resource$default$granted(
# 45 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc"
uint8_t arg_0x7ded2818);
# 118 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/Resource.nc"
static bool CC2420SpiP$Resource$isOwner(
# 45 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc"
uint8_t arg_0x7ded2818);
# 64 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void CC2420SpiP$grant$runTask(void );
# 45 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Strobe.nc"
static cc2420_status_t CC2420SpiP$Strobe$strobe(
# 49 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc"
uint8_t arg_0x7decfca8);
# 51 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/Init.nc"
static error_t StateImplP$Init$init(void );
# 56 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/State.nc"
static void StateImplP$State$toIdle(
# 67 "/cygdrive/c/Dropbox/tinyos-2.x/tos/system/StateImplP.nc"
uint8_t arg_0x7de696b0);
# 66 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/State.nc"
static bool StateImplP$State$isState(
# 67 "/cygdrive/c/Dropbox/tinyos-2.x/tos/system/StateImplP.nc"
uint8_t arg_0x7de696b0, 
# 66 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/State.nc"
uint8_t myState);
#line 61
static bool StateImplP$State$isIdle(
# 67 "/cygdrive/c/Dropbox/tinyos-2.x/tos/system/StateImplP.nc"
uint8_t arg_0x7de696b0);
# 45 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/State.nc"
static error_t StateImplP$State$requestState(
# 67 "/cygdrive/c/Dropbox/tinyos-2.x/tos/system/StateImplP.nc"
uint8_t arg_0x7de696b0, 
# 45 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/State.nc"
uint8_t reqState);





static void StateImplP$State$forceState(
# 67 "/cygdrive/c/Dropbox/tinyos-2.x/tos/system/StateImplP.nc"
uint8_t arg_0x7de696b0, 
# 51 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/State.nc"
uint8_t reqState);
# 64 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void Atm128SpiP$zeroTask$runTask(void );
# 59 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/SpiPacket.nc"
static error_t Atm128SpiP$SpiPacket$send(
#line 48
uint8_t * txBuf, 

uint8_t * rxBuf, 








uint16_t len);
# 92 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/Resource.nc"
static void Atm128SpiP$ResourceArbiter$granted(
# 84 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/spi/Atm128SpiP.nc"
uint8_t arg_0x7de468b0);
# 34 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/SpiByte.nc"
static uint8_t Atm128SpiP$SpiByte$write(uint8_t tx);
# 92 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/spi/Atm128Spi.nc"
static void Atm128SpiP$Spi$dataReady(uint8_t data);
# 110 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/Resource.nc"
static error_t Atm128SpiP$Resource$release(
# 80 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/spi/Atm128SpiP.nc"
uint8_t arg_0x7de4a9c8);
# 87 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/Resource.nc"
static error_t Atm128SpiP$Resource$immediateRequest(
# 80 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/spi/Atm128SpiP.nc"
uint8_t arg_0x7de4a9c8);
# 78 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/Resource.nc"
static error_t Atm128SpiP$Resource$request(
# 80 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/spi/Atm128SpiP.nc"
uint8_t arg_0x7de4a9c8);
# 92 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/Resource.nc"
static void Atm128SpiP$Resource$default$granted(
# 80 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/spi/Atm128SpiP.nc"
uint8_t arg_0x7de4a9c8);
# 118 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/Resource.nc"
static bool Atm128SpiP$Resource$isOwner(
# 80 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/spi/Atm128SpiP.nc"
uint8_t arg_0x7de4a9c8);
# 72 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/spi/Atm128Spi.nc"
static void HplAtm128SpiP$SPI$sleep(void );
#line 66
static void HplAtm128SpiP$SPI$initMaster(void );
#line 105
static void HplAtm128SpiP$SPI$setMasterBit(bool isMaster);
#line 96
static void HplAtm128SpiP$SPI$enableInterrupt(bool enabled);
#line 80
static uint8_t HplAtm128SpiP$SPI$read(void );
#line 125
static void HplAtm128SpiP$SPI$setMasterDoubleSpeed(bool on);
#line 114
static void HplAtm128SpiP$SPI$setClock(uint8_t speed);
#line 108
static void HplAtm128SpiP$SPI$setClockPolarity(bool highWhenIdle);
#line 86
static void HplAtm128SpiP$SPI$write(uint8_t data);
#line 99
static void HplAtm128SpiP$SPI$enableSpi(bool busOn);
#line 111
static void HplAtm128SpiP$SPI$setClockPhase(bool sampleOnTrailing);
# 51 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/Init.nc"
static error_t /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$Init$init(void );
# 69 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/ResourceQueue.nc"
static error_t /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$FcfsQueue$enqueue(resource_client_id_t id);
#line 43
static bool /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$FcfsQueue$isEmpty(void );








static bool /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$FcfsQueue$isEnqueued(resource_client_id_t id);







static resource_client_id_t /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$FcfsQueue$dequeue(void );
# 43 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/ResourceRequested.nc"
static void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$ResourceRequested$default$requested(
# 52 "/cygdrive/c/Dropbox/tinyos-2.x/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x7dd87770);
# 51 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/ResourceRequested.nc"
static void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$ResourceRequested$default$immediateRequested(
# 52 "/cygdrive/c/Dropbox/tinyos-2.x/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x7dd87770);
# 55 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/ResourceConfigure.nc"
static void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$ResourceConfigure$default$unconfigure(
# 56 "/cygdrive/c/Dropbox/tinyos-2.x/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x7dd86430);
# 49 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/ResourceConfigure.nc"
static void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$ResourceConfigure$default$configure(
# 56 "/cygdrive/c/Dropbox/tinyos-2.x/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x7dd86430);
# 110 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/Resource.nc"
static error_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$Resource$release(
# 51 "/cygdrive/c/Dropbox/tinyos-2.x/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x7dd8acf8);
# 87 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/Resource.nc"
static error_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$Resource$immediateRequest(
# 51 "/cygdrive/c/Dropbox/tinyos-2.x/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x7dd8acf8);
# 78 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/Resource.nc"
static error_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$Resource$request(
# 51 "/cygdrive/c/Dropbox/tinyos-2.x/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x7dd8acf8);
# 118 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/Resource.nc"
static bool /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$Resource$isOwner(
# 51 "/cygdrive/c/Dropbox/tinyos-2.x/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x7dd8acf8);
# 80 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/ArbiterInfo.nc"
static bool /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$ArbiterInfo$inUse(void );
# 64 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$grantedTask$runTask(void );
# 110 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/Resource.nc"
static error_t HplCC2420SpiP$Resource$release(void );
#line 87
static error_t HplCC2420SpiP$Resource$immediateRequest(void );
#line 78
static error_t HplCC2420SpiP$Resource$request(void );
#line 118
static bool HplCC2420SpiP$Resource$isOwner(void );
#line 92
static void HplCC2420SpiP$SubResource$granted(void );
# 44 "/cygdrive/c/Dropbox/tinyos-2.x/tos/system/ActiveMessageAddressC.nc"
static am_addr_t ActiveMessageAddressC$amAddress(void );
# 50 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/ActiveMessageAddress.nc"
static am_addr_t ActiveMessageAddressC$ActiveMessageAddress$amAddress(void );




static am_group_t ActiveMessageAddressC$ActiveMessageAddress$amGroup(void );
# 66 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/cc2420/interfaces/RadioBackoff.nc"
static void CC2420TransmitP$RadioBackoff$setCongestionBackoff(uint16_t backoffTime);
#line 60
static void CC2420TransmitP$RadioBackoff$setInitialBackoff(uint16_t backoffTime);
# 50 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/GpioCapture.nc"
static void CC2420TransmitP$CaptureSFD$captured(uint16_t time);
# 67 "/cygdrive/c/Dropbox/tinyos-2.x/tos/lib/timer/Alarm.nc"
static void CC2420TransmitP$BackoffTimer$fired(void );
# 63 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Receive.nc"
static void CC2420TransmitP$CC2420Receive$receive(uint8_t type, message_t * message);
# 51 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Transmit.nc"
static error_t CC2420TransmitP$Send$send(message_t * p_msg, bool useCca);
# 24 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/cc2420/interfaces/ChipSpiResource.nc"
static void CC2420TransmitP$ChipSpiResource$releasing(void );
# 51 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/Init.nc"
static error_t CC2420TransmitP$Init$init(void );
# 92 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/Resource.nc"
static void CC2420TransmitP$SpiResource$granted(void );
# 74 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/StdControl.nc"
static error_t CC2420TransmitP$StdControl$start(void );









static error_t CC2420TransmitP$StdControl$stop(void );
# 91 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Fifo.nc"
static void CC2420TransmitP$TXFIFO$writeDone(uint8_t * data, uint8_t length, error_t error);
#line 71
static void CC2420TransmitP$TXFIFO$readDone(uint8_t * data, uint8_t length, error_t error);
# 53 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Config.nc"
static void CC2420ReceiveP$CC2420Config$syncDone(error_t error);
# 64 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void CC2420ReceiveP$receiveDone_task$runTask(void );
# 55 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Receive.nc"
static void CC2420ReceiveP$CC2420Receive$sfd_dropped(void );
#line 49
static void CC2420ReceiveP$CC2420Receive$sfd(uint32_t time);
# 51 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/Init.nc"
static error_t CC2420ReceiveP$Init$init(void );
# 92 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/Resource.nc"
static void CC2420ReceiveP$SpiResource$granted(void );
# 91 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Fifo.nc"
static void CC2420ReceiveP$RXFIFO$writeDone(uint8_t * data, uint8_t length, error_t error);
#line 71
static void CC2420ReceiveP$RXFIFO$readDone(uint8_t * data, uint8_t length, error_t error);
# 57 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/GpioInterrupt.nc"
static void CC2420ReceiveP$InterruptFIFOP$fired(void );
# 74 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/StdControl.nc"
static error_t CC2420ReceiveP$StdControl$start(void );









static error_t CC2420ReceiveP$StdControl$stop(void );
# 64 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Packet.nc"
static int8_t CC2420PacketP$CC2420Packet$getRssi(message_t *p_msg);
# 59 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/PacketTimeStamp.nc"
static void CC2420PacketP$PacketTimeStamp32khz$clear(
#line 55
message_t * msg);
#line 67
static void CC2420PacketP$PacketTimeStamp32khz$set(
#line 62
message_t * msg, 




CC2420PacketP$PacketTimeStamp32khz$size_type value);
# 42 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420PacketBody.nc"
static cc2420_header_t * CC2420PacketP$CC2420PacketBody$getHeader(message_t * msg);




static cc2420_metadata_t * CC2420PacketP$CC2420PacketBody$getMetadata(message_t * msg);
# 47 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/cc2420/interfaces/PacketTimeSyncOffset.nc"
static uint8_t CC2420PacketP$PacketTimeSyncOffset$get(
#line 42
message_t * msg);
#line 39
static bool CC2420PacketP$PacketTimeSyncOffset$isSet(
#line 35
message_t * msg);
# 71 "/cygdrive/c/Dropbox/tinyos-2.x/tos/lib/timer/Counter.nc"
static void /*CC2420PacketC.CounterToLocalTimeC*/CounterToLocalTimeC$1$Counter$overflow(void );
# 41 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/Random.nc"
static uint16_t RandomMlcgC$Random$rand16(void );
#line 35
static uint32_t RandomMlcgC$Random$rand32(void );
# 51 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/Init.nc"
static error_t RandomMlcgC$Init$init(void );
# 89 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/Send.nc"
static void UniqueSendP$SubSend$sendDone(
#line 85
message_t * msg, 



error_t error);
#line 64
static error_t UniqueSendP$Send$send(
#line 56
message_t * msg, 







uint8_t len);
#line 114
static 
#line 112
void * 

UniqueSendP$Send$getPayload(
#line 111
message_t * msg, 


uint8_t len);
# 51 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/Init.nc"
static error_t UniqueSendP$Init$init(void );
# 67 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/Receive.nc"
static 
#line 63
message_t * 



UniqueReceiveP$SubReceive$receive(
#line 60
message_t * msg, 
void * payload, 





uint8_t len);
# 51 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/Init.nc"
static error_t UniqueReceiveP$Init$init(void );
# 67 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/Receive.nc"
static 
#line 63
message_t * 



UniqueReceiveP$DuplicateReceive$default$receive(
#line 60
message_t * msg, 
void * payload, 





uint8_t len);
# 89 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/Send.nc"
static void CC2420TinyosNetworkP$SubSend$sendDone(
#line 85
message_t * msg, 



error_t error);
# 67 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/Receive.nc"
static 
#line 63
message_t * 



CC2420TinyosNetworkP$SubReceive$receive(
#line 60
message_t * msg, 
void * payload, 





uint8_t len);
# 64 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/Send.nc"
static error_t CC2420TinyosNetworkP$Send$send(
#line 56
message_t * msg, 







uint8_t len);
#line 114
static 
#line 112
void * 

CC2420TinyosNetworkP$Send$getPayload(
#line 111
message_t * msg, 


uint8_t len);
# 67 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/Receive.nc"
static 
#line 63
message_t * 



CC2420TinyosNetworkP$NonTinyosReceive$default$receive(
# 48 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/cc2420/lowpan/CC2420TinyosNetworkP.nc"
uint8_t arg_0x7db201b0, 
# 60 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
# 69 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/AMSend.nc"
static error_t /*BlinkToRadioAppC.AMSenderC.AMQueueEntryP*/AMQueueEntryP$1$AMSend$send(am_addr_t addr, 
#line 60
message_t * msg, 








uint8_t len);
# 89 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/Send.nc"
static void /*BlinkToRadioAppC.AMSenderC.AMQueueEntryP*/AMQueueEntryP$1$Send$sendDone(
#line 85
message_t * msg, 



error_t error);
# 99 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/AMSend.nc"
static void /*AMQueueP.AMQueueImplP*/AMQueueImplP$1$AMSend$sendDone(
# 40 "/cygdrive/c/Dropbox/tinyos-2.x/tos/system/AMQueueImplP.nc"
am_id_t arg_0x7e7050c0, 
# 92 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/AMSend.nc"
message_t * msg, 






error_t error);
# 64 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/Send.nc"
static error_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$1$Send$send(
# 38 "/cygdrive/c/Dropbox/tinyos-2.x/tos/system/AMQueueImplP.nc"
uint8_t arg_0x7e7066b0, 
# 56 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/Send.nc"
message_t * msg, 







uint8_t len);
#line 89
static void /*AMQueueP.AMQueueImplP*/AMQueueImplP$1$Send$default$sendDone(
# 38 "/cygdrive/c/Dropbox/tinyos-2.x/tos/system/AMQueueImplP.nc"
uint8_t arg_0x7e7066b0, 
# 85 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/Send.nc"
message_t * msg, 



error_t error);
# 64 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void /*AMQueueP.AMQueueImplP*/AMQueueImplP$1$errorTask$runTask(void );
#line 64
static void /*AMQueueP.AMQueueImplP*/AMQueueImplP$1$CancelTask$runTask(void );
#line 64
static void BlockStorageP$erasetask$runTask(void );
# 85 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/at45db/At45db.nc"
static void BlockStorageP$At45db$copyPageDone(error_t error);
#line 125
static void BlockStorageP$At45db$syncDone(error_t error);
#line 143
static void BlockStorageP$At45db$flushDone(error_t error);
#line 69
static void BlockStorageP$At45db$writeDone(error_t error);
#line 105
static void BlockStorageP$At45db$eraseDone(error_t error);
#line 183
static void BlockStorageP$At45db$computeCrcDone(error_t error, uint16_t crc);
#line 162
static void BlockStorageP$At45db$readDone(error_t error);
# 112 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/BlockWrite.nc"
static void BlockStorageP$BlockWrite$default$syncDone(
# 55 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/at45db/BlockStorageP.nc"
uint8_t arg_0x7dab6d28, 
# 112 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/BlockWrite.nc"
error_t error);
#line 71
static void BlockStorageP$BlockWrite$default$writeDone(
# 55 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/at45db/BlockStorageP.nc"
uint8_t arg_0x7dab6d28, 
# 71 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/BlockWrite.nc"
storage_addr_t addr, 
#line 66
void * buf, 




storage_len_t len, 
error_t error);
#line 91
static void BlockStorageP$BlockWrite$default$eraseDone(
# 55 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/at45db/BlockStorageP.nc"
uint8_t arg_0x7dab6d28, 
# 91 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/BlockWrite.nc"
error_t error);
#line 58
static error_t BlockStorageP$BlockWrite$write(
# 55 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/at45db/BlockStorageP.nc"
uint8_t arg_0x7dab6d28, 
# 58 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/BlockWrite.nc"
storage_addr_t addr, 
#line 51
void * buf, 






storage_len_t len);
# 56 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/BlockRead.nc"
static error_t BlockStorageP$BlockRead$read(
# 56 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/at45db/BlockStorageP.nc"
uint8_t arg_0x7dab3830, 
# 56 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/BlockRead.nc"
storage_addr_t addr, 
#line 49
void * buf, 






storage_len_t len);
#line 95
static void BlockStorageP$BlockRead$default$computeCrcDone(
# 56 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/at45db/BlockStorageP.nc"
uint8_t arg_0x7dab3830, 
# 95 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/BlockRead.nc"
storage_addr_t addr, storage_len_t len, 
uint16_t crc, error_t error);






static storage_len_t BlockStorageP$BlockRead$getSize(
# 56 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/at45db/BlockStorageP.nc"
uint8_t arg_0x7dab3830);
# 67 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/BlockRead.nc"
static void BlockStorageP$BlockRead$default$readDone(
# 56 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/at45db/BlockStorageP.nc"
uint8_t arg_0x7dab3830, 
# 67 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/BlockRead.nc"
storage_addr_t addr, 
#line 62
void * buf, 




storage_len_t len, 
error_t error);
# 50 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/at45db/At45dbBlockConfig.nc"
static at45page_t BlockStorageP$BConfig$npages(
# 62 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/at45db/BlockStorageP.nc"
uint8_t arg_0x7da998d8);
# 30 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/at45db/At45dbBlockConfig.nc"
static int BlockStorageP$BConfig$default$flipped(
# 62 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/at45db/BlockStorageP.nc"
uint8_t arg_0x7da998d8);
# 24 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/at45db/At45dbBlockConfig.nc"
static int BlockStorageP$BConfig$default$isConfig(
# 62 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/at45db/BlockStorageP.nc"
uint8_t arg_0x7da998d8);
# 37 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/at45db/At45dbBlockConfig.nc"
static int BlockStorageP$BConfig$default$writeHook(
# 62 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/at45db/BlockStorageP.nc"
uint8_t arg_0x7da998d8);
# 58 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/at45db/At45dbBlockConfig.nc"
static at45page_t BlockStorageP$BConfig$remap(
# 62 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/at45db/BlockStorageP.nc"
uint8_t arg_0x7da998d8, 
# 58 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/at45db/At45dbBlockConfig.nc"
at45page_t page);
# 30 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/at45db/At45dbVolume.nc"
static at45page_t BlockStorageP$At45dbVolume$default$volumeSize(
# 60 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/at45db/BlockStorageP.nc"
uint8_t arg_0x7daa12a8);
# 24 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/at45db/At45dbVolume.nc"
static at45page_t BlockStorageP$At45dbVolume$default$remap(
# 60 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/at45db/BlockStorageP.nc"
uint8_t arg_0x7daa12a8, 
# 24 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/at45db/At45dbVolume.nc"
at45page_t volumePage);
# 110 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/Resource.nc"
static error_t BlockStorageP$Resource$default$release(
# 61 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/at45db/BlockStorageP.nc"
uint8_t arg_0x7daa1a08);
# 78 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/Resource.nc"
static error_t BlockStorageP$Resource$default$request(
# 61 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/at45db/BlockStorageP.nc"
uint8_t arg_0x7daa1a08);
# 92 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/Resource.nc"
static void BlockStorageP$Resource$granted(
# 61 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/at45db/BlockStorageP.nc"
uint8_t arg_0x7daa1a08);
# 163 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/at45db/HplAt45db.nc"
static void At45dbP$HplAt45db$crcDone(uint16_t computedCrc);
#line 79
static void At45dbP$HplAt45db$flushDone(void );
#line 185
static void At45dbP$HplAt45db$writeDone(void );
#line 35
static void At45dbP$HplAt45db$waitIdleDone(void );
#line 47
static void At45dbP$HplAt45db$waitCompareDone(bool compareOk);
#line 106
static void At45dbP$HplAt45db$eraseDone(void );
#line 93
static void At45dbP$HplAt45db$compareDone(void );
#line 61
static void At45dbP$HplAt45db$fillDone(void );
#line 141
static void At45dbP$HplAt45db$readDone(void );
# 155 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/at45db/At45db.nc"
static void At45dbP$At45db$read(at45page_t page, at45pageoffset_t offset, 
void * data, at45pageoffset_t n);
#line 100
static void At45dbP$At45db$erase(at45page_t page, uint8_t eraseKind);
#line 120
static void At45dbP$At45db$syncAll(void );
#line 62
static void At45dbP$At45db$write(at45page_t page, at45pageoffset_t offset, 
void * data, at45pageoffset_t n);
#line 176
static void At45dbP$At45db$computeCrc(at45page_t page, at45pageoffset_t offset, 
at45pageoffset_t n, uint16_t baseCrc);
# 64 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void At45dbP$taskSuccess$runTask(void );
#line 64
static void At45dbP$taskFail$runTask(void );
# 51 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/Init.nc"
static error_t At45dbP$Init$init(void );
# 41 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/at45db/HplAt45db.nc"
static void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$HplAt45db$waitCompare(void );
#line 100
static void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$HplAt45db$erase(uint8_t cmd, at45page_t page);
#line 30
static void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$HplAt45db$waitIdle(void );
#line 73
static void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$HplAt45db$flush(uint8_t cmd, at45page_t page);
#line 178
static void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$HplAt45db$write(uint8_t cmd, at45page_t page, at45pageoffset_t offset, 
uint8_t * data, at45pageoffset_t n);
#line 87
static void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$HplAt45db$compare(uint8_t cmd, at45page_t page);
#line 157
static void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$HplAt45db$crc(uint8_t cmd, at45page_t page, at45pageoffset_t offset, 
at45pageoffset_t n, uint16_t baseCrc);
#line 119
static void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$HplAt45db$readBuffer(uint8_t cmd, at45pageoffset_t offset, 
uint8_t * data, uint16_t n);
#line 55
static void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$HplAt45db$fill(uint8_t cmd, at45page_t page);
# 35 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/at45db/HplAt45dbByte.nc"
static void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$HplAt45dbByte$idle(void );
# 92 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/Resource.nc"
static void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$Resource$granted(void );
# 64 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
static void HplAt45dbIOP$InInterrupt$fired(void );
# 42 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/at45db/HplAt45dbByte.nc"
static bool HplAt45dbIOP$HplAt45dbByte$getCompareStatus(void );
#line 31
static void HplAt45dbIOP$HplAt45dbByte$waitIdle(void );
#line 47
static void HplAt45dbIOP$HplAt45dbByte$select(void );




static void HplAt45dbIOP$HplAt45dbByte$deselect(void );
# 51 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/Init.nc"
static error_t HplAt45dbIOP$Init$init(void );
# 64 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void HplAt45dbIOP$avail$runTask(void );
# 34 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/SpiByte.nc"
static uint8_t HplAt45dbIOP$FlashSpi$write(uint8_t tx);
# 55 "/cygdrive/c/Dropbox/tinyos-2.x/tos/lib/timer/BusyWait.nc"
static void BusyWaitMicroC$BusyWait$wait(BusyWaitMicroC$BusyWait$size_type dt);
# 55 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/ResourceConfigure.nc"
static void /*HplAt45dbIOC.NoArbiterC*/NoArbiterC$0$ResourceConfigure$default$unconfigure(void );
#line 49
static void /*HplAt45dbIOC.NoArbiterC*/NoArbiterC$0$ResourceConfigure$default$configure(void );
# 110 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/Resource.nc"
static error_t /*HplAt45dbIOC.NoArbiterC*/NoArbiterC$0$Resource$release(void );
#line 78
static error_t /*HplAt45dbIOC.NoArbiterC*/NoArbiterC$0$Resource$request(void );
# 64 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void /*HplAt45dbIOC.NoArbiterC*/NoArbiterC$0$granted$runTask(void );
# 51 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/Init.nc"
static error_t /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC$1$Init$init(void );
# 69 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/ResourceQueue.nc"
static error_t /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC$1$FcfsQueue$enqueue(resource_client_id_t id);
#line 43
static bool /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC$1$FcfsQueue$isEmpty(void );








static bool /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC$1$FcfsQueue$isEnqueued(resource_client_id_t id);







static resource_client_id_t /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC$1$FcfsQueue$dequeue(void );
# 43 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/ResourceRequested.nc"
static void /*At45dbC.Arbiter.Arbiter*/ArbiterP$0$ResourceRequested$default$requested(
# 55 "/cygdrive/c/Dropbox/tinyos-2.x/tos/system/ArbiterP.nc"
uint8_t arg_0x7d950870);
# 55 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/ResourceConfigure.nc"
static void /*At45dbC.Arbiter.Arbiter*/ArbiterP$0$ResourceConfigure$default$unconfigure(
# 60 "/cygdrive/c/Dropbox/tinyos-2.x/tos/system/ArbiterP.nc"
uint8_t arg_0x7d94fc58);
# 49 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/ResourceConfigure.nc"
static void /*At45dbC.Arbiter.Arbiter*/ArbiterP$0$ResourceConfigure$default$configure(
# 60 "/cygdrive/c/Dropbox/tinyos-2.x/tos/system/ArbiterP.nc"
uint8_t arg_0x7d94fc58);
# 56 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/ResourceDefaultOwner.nc"
static error_t /*At45dbC.Arbiter.Arbiter*/ArbiterP$0$ResourceDefaultOwner$release(void );
#line 73
static void /*At45dbC.Arbiter.Arbiter*/ArbiterP$0$ResourceDefaultOwner$default$requested(void );
#line 46
static void /*At45dbC.Arbiter.Arbiter*/ArbiterP$0$ResourceDefaultOwner$default$granted(void );
# 110 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/Resource.nc"
static error_t /*At45dbC.Arbiter.Arbiter*/ArbiterP$0$Resource$release(
# 54 "/cygdrive/c/Dropbox/tinyos-2.x/tos/system/ArbiterP.nc"
uint8_t arg_0x7d953e38);
# 78 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/Resource.nc"
static error_t /*At45dbC.Arbiter.Arbiter*/ArbiterP$0$Resource$request(
# 54 "/cygdrive/c/Dropbox/tinyos-2.x/tos/system/ArbiterP.nc"
uint8_t arg_0x7d953e38);
# 92 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/Resource.nc"
static void /*At45dbC.Arbiter.Arbiter*/ArbiterP$0$Resource$default$granted(
# 54 "/cygdrive/c/Dropbox/tinyos-2.x/tos/system/ArbiterP.nc"
uint8_t arg_0x7d953e38);
# 64 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void /*At45dbC.Arbiter.Arbiter*/ArbiterP$0$grantedTask$runTask(void );
# 30 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/at45db/At45dbVolume.nc"
static at45page_t At45dbStorageManagerC$At45dbVolume$volumeSize(
# 18 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/at45db/At45dbStorageManagerC.nc"
volume_id_t arg_0x7d920150);
# 24 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/at45db/At45dbVolume.nc"
static at45page_t At45dbStorageManagerC$At45dbVolume$remap(
# 18 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/at45db/At45dbStorageManagerC.nc"
volume_id_t arg_0x7d920150, 
# 24 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/at45db/At45dbVolume.nc"
at45page_t volumePage);
# 51 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/Init.nc"
static error_t PlatformP$MoteInit$init(void );
#line 51
static error_t PlatformP$MeasureClock$init(void );
# 42 "/cygdrive/c/Dropbox/tinyos-2.x/tos/platforms/mica/PlatformP.nc"
static inline void PlatformP$power_init(void );






static inline error_t PlatformP$Init$init(void );
# 51 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/Init.nc"
static error_t MotePlatformP$SubInit$init(void );
# 33 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/GeneralIO.nc"
static void MotePlatformP$SerialIdPin$makeInput(void );
#line 30
static void MotePlatformP$SerialIdPin$clr(void );
# 26 "/cygdrive/c/Dropbox/tinyos-2.x/tos/platforms/micaz/MotePlatformP.nc"
static inline error_t MotePlatformP$PlatformInit$init(void );
# 46 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP$0$IO$set(void );

static void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP$0$IO$toggle(void );



static __inline void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP$0$IO$makeOutput(void );
#line 46
static __inline void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP$1$IO$set(void );
static __inline void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP$1$IO$clr(void );
static inline void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP$1$IO$toggle(void );



static __inline void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP$1$IO$makeOutput(void );
#line 46
static __inline void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP$2$IO$set(void );
static __inline void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP$2$IO$clr(void );
static void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP$2$IO$toggle(void );



static __inline void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP$2$IO$makeOutput(void );
#line 46
static __inline void /*HplAtm128GeneralIOC.PortA.Bit3*/HplAtm128GeneralIOPinP$3$IO$set(void );
static __inline void /*HplAtm128GeneralIOC.PortA.Bit3*/HplAtm128GeneralIOPinP$3$IO$clr(void );




static __inline void /*HplAtm128GeneralIOC.PortA.Bit3*/HplAtm128GeneralIOPinP$3$IO$makeOutput(void );
#line 47
static __inline void /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP$4$IO$clr(void );


static __inline void /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP$4$IO$makeInput(void );
#line 46
static __inline void /*HplAtm128GeneralIOC.PortA.Bit5*/HplAtm128GeneralIOPinP$5$IO$set(void );
static __inline void /*HplAtm128GeneralIOC.PortA.Bit5*/HplAtm128GeneralIOPinP$5$IO$clr(void );




static __inline void /*HplAtm128GeneralIOC.PortA.Bit5*/HplAtm128GeneralIOPinP$5$IO$makeOutput(void );
#line 46
static __inline void /*HplAtm128GeneralIOC.PortA.Bit6*/HplAtm128GeneralIOPinP$6$IO$set(void );
static __inline void /*HplAtm128GeneralIOC.PortA.Bit6*/HplAtm128GeneralIOPinP$6$IO$clr(void );




static __inline void /*HplAtm128GeneralIOC.PortA.Bit6*/HplAtm128GeneralIOPinP$6$IO$makeOutput(void );
#line 46
static __inline void /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP$8$IO$set(void );
static __inline void /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP$8$IO$clr(void );




static __inline void /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP$8$IO$makeOutput(void );
#line 52
static __inline void /*HplAtm128GeneralIOC.PortB.Bit1*/HplAtm128GeneralIOPinP$9$IO$makeOutput(void );
#line 52
static __inline void /*HplAtm128GeneralIOC.PortB.Bit2*/HplAtm128GeneralIOPinP$10$IO$makeOutput(void );
#line 50
static __inline void /*HplAtm128GeneralIOC.PortB.Bit3*/HplAtm128GeneralIOPinP$11$IO$makeInput(void );
#line 45
static __inline bool /*HplAtm128GeneralIOC.PortB.Bit7*/HplAtm128GeneralIOPinP$15$IO$get(void );
#line 45
static __inline bool /*HplAtm128GeneralIOC.PortD.Bit2*/HplAtm128GeneralIOPinP$26$IO$get(void );

static __inline void /*HplAtm128GeneralIOC.PortD.Bit2*/HplAtm128GeneralIOPinP$26$IO$clr(void );


static __inline void /*HplAtm128GeneralIOC.PortD.Bit2*/HplAtm128GeneralIOPinP$26$IO$makeInput(void );
#line 46
static __inline void /*HplAtm128GeneralIOC.PortD.Bit3*/HplAtm128GeneralIOPinP$27$IO$set(void );





static __inline void /*HplAtm128GeneralIOC.PortD.Bit3*/HplAtm128GeneralIOPinP$27$IO$makeOutput(void );
#line 45
static __inline bool /*HplAtm128GeneralIOC.PortD.Bit4*/HplAtm128GeneralIOPinP$28$IO$get(void );




static __inline void /*HplAtm128GeneralIOC.PortD.Bit4*/HplAtm128GeneralIOPinP$28$IO$makeInput(void );
#line 46
static __inline void /*HplAtm128GeneralIOC.PortD.Bit5*/HplAtm128GeneralIOPinP$29$IO$set(void );
static __inline void /*HplAtm128GeneralIOC.PortD.Bit5*/HplAtm128GeneralIOPinP$29$IO$clr(void );




static __inline void /*HplAtm128GeneralIOC.PortD.Bit5*/HplAtm128GeneralIOPinP$29$IO$makeOutput(void );
#line 45
static __inline bool /*HplAtm128GeneralIOC.PortD.Bit6*/HplAtm128GeneralIOPinP$30$IO$get(void );




static __inline void /*HplAtm128GeneralIOC.PortD.Bit6*/HplAtm128GeneralIOPinP$30$IO$makeInput(void );
#line 45
static __inline bool /*HplAtm128GeneralIOC.PortE.Bit6*/HplAtm128GeneralIOPinP$38$IO$get(void );
# 33 "/cygdrive/c/Dropbox/tinyos-2.x/tos/platforms/mica/MeasureClockC.nc"
enum MeasureClockC$__nesc_unnamed4332 {


  MeasureClockC$MAGIC = 488 / (16 / PLATFORM_MHZ)
};

uint16_t MeasureClockC$cycles;

static inline error_t MeasureClockC$Init$init(void );
#line 120
static inline uint16_t MeasureClockC$Atm128Calibrate$baudrateRegister(uint32_t baudrate);
# 51 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/Init.nc"
static error_t RealMainP$SoftwareInit$init(void );
# 49 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/Boot.nc"
static void RealMainP$Boot$booted(void );
# 51 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/Init.nc"
static error_t RealMainP$PlatformInit$init(void );
# 46 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/Scheduler.nc"
static void RealMainP$Scheduler$init(void );
#line 61
static void RealMainP$Scheduler$taskLoop(void );
#line 54
static bool RealMainP$Scheduler$runNextTask(void );
# 52 "/cygdrive/c/Dropbox/tinyos-2.x/tos/system/RealMainP.nc"
int main(void )   ;
# 64 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void SchedulerBasicP$TaskBasic$runTask(
# 45 "/cygdrive/c/Dropbox/tinyos-2.x/tos/system/SchedulerBasicP.nc"
uint8_t arg_0x7ef008d8);
# 59 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/McuSleep.nc"
static void SchedulerBasicP$McuSleep$sleep(void );
# 50 "/cygdrive/c/Dropbox/tinyos-2.x/tos/system/SchedulerBasicP.nc"
enum SchedulerBasicP$__nesc_unnamed4333 {

  SchedulerBasicP$NUM_TASKS = 31U, 
  SchedulerBasicP$NO_TASK = 255
};

uint8_t SchedulerBasicP$m_head;
uint8_t SchedulerBasicP$m_tail;
uint8_t SchedulerBasicP$m_next[SchedulerBasicP$NUM_TASKS];








static __inline uint8_t SchedulerBasicP$popTask(void );
#line 86
static inline bool SchedulerBasicP$isWaiting(uint8_t id);




static inline bool SchedulerBasicP$pushTask(uint8_t id);
#line 113
static inline void SchedulerBasicP$Scheduler$init(void );









static bool SchedulerBasicP$Scheduler$runNextTask(void );
#line 138
static inline void SchedulerBasicP$Scheduler$taskLoop(void );
#line 159
static error_t SchedulerBasicP$TaskBasic$postTask(uint8_t id);




static void SchedulerBasicP$TaskBasic$default$runTask(uint8_t id);
# 54 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/McuPowerOverride.nc"
static mcu_power_t McuSleepC$McuPowerOverride$lowestState(void );
# 58 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/McuSleepC.nc"
const_uint8_t McuSleepC$atm128PowerBits[ATM128_POWER_DOWN + 1] = { 
0, 
1 << 3, ((
1 << 2) | (1 << 4)) | (1 << 3), (
1 << 4) | (1 << 3), (
1 << 2) | (1 << 4), 
1 << 4 };

static inline mcu_power_t McuSleepC$getPowerState(void );
#line 97
static inline void McuSleepC$McuSleep$sleep(void );
#line 110
static inline void McuSleepC$McuPowerState$update(void );
# 31 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/GeneralIO.nc"
static void LedsP$Led0$toggle(void );



static void LedsP$Led0$makeOutput(void );
#line 29
static void LedsP$Led0$set(void );
static void LedsP$Led0$clr(void );
static void LedsP$Led1$toggle(void );



static void LedsP$Led1$makeOutput(void );
#line 29
static void LedsP$Led1$set(void );
static void LedsP$Led1$clr(void );
static void LedsP$Led2$toggle(void );



static void LedsP$Led2$makeOutput(void );
#line 29
static void LedsP$Led2$set(void );
# 45 "/cygdrive/c/Dropbox/tinyos-2.x/tos/system/LedsP.nc"
static inline error_t LedsP$Init$init(void );
#line 63
static inline void LedsP$Leds$led0On(void );




static inline void LedsP$Leds$led0Off(void );




static inline void LedsP$Leds$led0Toggle(void );




static inline void LedsP$Leds$led1On(void );









static inline void LedsP$Leds$led1Toggle(void );
#line 103
static inline void LedsP$Leds$led2Toggle(void );
# 53 "/cygdrive/c/Dropbox/tinyos-2.x/tos/lib/timer/Timer.nc"
static void BlinkToRadioC$Timer0$startPeriodic(uint32_t dt);
# 83 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/SplitControl.nc"
static error_t BlinkToRadioC$AMControl$start(void );
# 115 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/Packet.nc"
static 
#line 112
void * 


BlinkToRadioC$Packet$getPayload(
#line 110
message_t * msg, 




uint8_t len);
# 69 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/AMSend.nc"
static error_t BlinkToRadioC$AMSend$send(am_addr_t addr, 
#line 60
message_t * msg, 








uint8_t len);
# 64 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Packet.nc"
static int8_t BlinkToRadioC$CC2420Packet$getRssi(message_t *p_msg);
# 56 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static error_t BlinkToRadioC$AMSendTask$postTask(void );
# 56 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/BlockRead.nc"
static error_t BlinkToRadioC$BlockRead$read(storage_addr_t addr, 
#line 49
void * buf, 






storage_len_t len);
# 62 "/cygdrive/c/Dropbox/tinyos-2.x/tos/lib/timer/Timer.nc"
static void BlinkToRadioC$Timer1$startOneShot(uint32_t dt);
# 58 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/BlockWrite.nc"
static error_t BlinkToRadioC$BlockWrite$write(storage_addr_t addr, 
#line 51
void * buf, 






storage_len_t len);
# 50 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/Leds.nc"
static void BlinkToRadioC$Leds$led0Off(void );





static void BlinkToRadioC$Leds$led0Toggle(void );




static void BlinkToRadioC$Leds$led1On(void );










static void BlinkToRadioC$Leds$led1Toggle(void );
#line 89
static void BlinkToRadioC$Leds$led2Toggle(void );
#line 45
static void BlinkToRadioC$Leds$led0On(void );
# 34 "BlinkToRadioC.nc"
enum BlinkToRadioC$__nesc_unnamed4334 {
#line 34
  BlinkToRadioC$AMSendTask = 0U
};
#line 34
typedef int BlinkToRadioC$__nesc_sillytask_AMSendTask[BlinkToRadioC$AMSendTask];
enum BlinkToRadioC$__nesc_unnamed4335 {
#line 35
  BlinkToRadioC$EraseFlash = 1U
};
#line 35
typedef int BlinkToRadioC$__nesc_sillytask_EraseFlash[BlinkToRadioC$EraseFlash];
#line 23
uint16_t BlinkToRadioC$counter = 0;
bool BlinkToRadioC$busy = FALSE;
bool BlinkToRadioC$ack = FALSE;
message_t BlinkToRadioC$pkt;

uint16_t BlinkToRadioC$DestAdd = AM_BROADCAST_ADDR;

storage_addr_t BlinkToRadioC$WriteLogAddrs = 0;
storage_addr_t BlinkToRadioC$ReadLogAddrs = 0;
BlinkToRadioMsg BlinkToRadioC$ReadLogMsg;



static inline void BlinkToRadioC$WriteFlash(BlinkToRadioMsg *arg_0x7e9552c0);

static inline void BlinkToRadioC$Boot$booted(void );







static inline void BlinkToRadioC$AMControl$startDone(error_t err);
#line 59
static inline void BlinkToRadioC$AMControl$stopDone(error_t err);




static inline void BlinkToRadioC$CC2420Config$syncDone(error_t error);




static inline void BlinkToRadioC$Timer0$fired(void );
#line 100
static inline void BlinkToRadioC$AMSend$sendDone(message_t *msg, error_t error);









static inline message_t *BlinkToRadioC$Receive$receive(message_t *msg, void *payload, uint8_t len);
#line 133
static inline void BlinkToRadioC$AMSendTask$runTask(void );
#line 151
static inline void BlinkToRadioC$Timer1$fired(void );






static inline void BlinkToRadioC$BlockRead$readDone(storage_addr_t addr, void *buf, storage_len_t len, error_t error);
#line 177
static inline void BlinkToRadioC$EraseFlash$runTask(void );

static inline void BlinkToRadioC$WriteFlash(BlinkToRadioMsg *btrpkt);
#line 191
static inline void BlinkToRadioC$BlockWrite$writeDone(storage_addr_t addr, void *buf, storage_len_t len, error_t error);




static inline void BlinkToRadioC$BlockRead$computeCrcDone(storage_addr_t addr, storage_len_t len, uint16_t crc, error_t error);

static inline void BlinkToRadioC$BlockWrite$syncDone(error_t error);
static inline void BlinkToRadioC$BlockWrite$eraseDone(error_t error);
# 44 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/timer/HplAtm128TimerCtrl8.nc"
static Atm128_TIFR_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$TimerCtrl$getInterruptFlag(void );
#line 37
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$TimerCtrl$setControl(Atm128TimerControl_t control);
# 67 "/cygdrive/c/Dropbox/tinyos-2.x/tos/lib/timer/Alarm.nc"
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$fired(void );
# 71 "/cygdrive/c/Dropbox/tinyos-2.x/tos/lib/timer/Counter.nc"
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Counter$overflow(void );
# 44 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/timer/HplAtm128TimerAsync.nc"
static int /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$TimerAsync$compareBusy(void );
#line 32
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$TimerAsync$setTimer0Asynchronous(void );
# 39 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
static /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Compare$size_type /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Compare$get(void );





static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Compare$set(/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Compare$size_type t);










static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Compare$start(void );
# 52 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
static /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Timer$timer_size /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Timer$get(void );
# 38 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/timer/Atm128AlarmAsyncP.nc"
uint8_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$set;
uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$t0;
#line 39
uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$dt;
uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$base;



enum /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$__nesc_unnamed4336 {
  Atm128AlarmAsyncP$0$MINDT = 2, 
  Atm128AlarmAsyncP$0$MAXT = 230
};



static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$setInterrupt(void );


static inline error_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Init$init(void );
#line 74
static inline void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$setOcr0(uint8_t n);
#line 90
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$setInterrupt(void );
#line 149
static inline void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Compare$fired(void );
#line 161
static uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Counter$get(void );
#line 204
static inline void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$stop(void );







static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$startAt(uint32_t nt0, uint32_t ndt);









static inline uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$getNow(void );



static inline uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$getAlarm(void );



static inline void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Timer$overflow(void );
# 49 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
static void HplAtm128Timer0AsyncP$Compare$fired(void );
# 61 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
static void HplAtm128Timer0AsyncP$Timer$overflow(void );
# 50 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer0AsyncP.nc"
static inline uint8_t HplAtm128Timer0AsyncP$Timer$get(void );
#line 76
static inline void HplAtm128Timer0AsyncP$TimerCtrl$setControl(Atm128TimerControl_t x);
#line 94
static inline Atm128_TIFR_t HplAtm128Timer0AsyncP$TimerCtrl$getInterruptFlag(void );
#line 122
static inline void HplAtm128Timer0AsyncP$Compare$start(void );









static inline uint8_t HplAtm128Timer0AsyncP$Compare$get(void );


static inline void HplAtm128Timer0AsyncP$Compare$set(uint8_t t);




static __inline void HplAtm128Timer0AsyncP$stabiliseTimer0(void );
#line 155
static inline mcu_power_t HplAtm128Timer0AsyncP$McuPowerOverride$lowestState(void );
#line 178
void __vector_15(void ) __attribute((signal))   ;





void __vector_16(void ) __attribute((signal))   ;
#line 198
static inline void HplAtm128Timer0AsyncP$TimerAsync$setTimer0Asynchronous(void );







static inline int HplAtm128Timer0AsyncP$TimerAsync$compareBusy(void );
# 56 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static error_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$fired$postTask(void );
# 98 "/cygdrive/c/Dropbox/tinyos-2.x/tos/lib/timer/Alarm.nc"
static /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$size_type /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$getNow(void );
#line 92
static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$startAt(/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$size_type t0, /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$size_type dt);
#line 105
static /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$size_type /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$getAlarm(void );
#line 62
static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$stop(void );
# 72 "/cygdrive/c/Dropbox/tinyos-2.x/tos/lib/timer/Timer.nc"
static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$fired(void );
# 63 "/cygdrive/c/Dropbox/tinyos-2.x/tos/lib/timer/AlarmToTimerC.nc"
enum /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$__nesc_unnamed4337 {
#line 63
  AlarmToTimerC$0$fired = 2U
};
#line 63
typedef int /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$__nesc_sillytask_fired[/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$fired];
#line 44
uint32_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$m_dt;
bool /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$m_oneshot;

static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$start(uint32_t t0, uint32_t dt, bool oneshot);
#line 60
static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$stop(void );


static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$fired$runTask(void );






static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$fired(void );
#line 82
static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$startOneShotAt(uint32_t t0, uint32_t dt);


static inline uint32_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$getNow(void );
# 56 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static error_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$updateFromTimer$postTask(void );
# 125 "/cygdrive/c/Dropbox/tinyos-2.x/tos/lib/timer/Timer.nc"
static uint32_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$getNow(void );
#line 118
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$startOneShotAt(uint32_t t0, uint32_t dt);
#line 67
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$stop(void );




static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$fired(
# 37 "/cygdrive/c/Dropbox/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x7e798260);
#line 60
enum /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$__nesc_unnamed4338 {
#line 60
  VirtualizeTimerC$0$updateFromTimer = 3U
};
#line 60
typedef int /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$__nesc_sillytask_updateFromTimer[/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$updateFromTimer];
#line 42
enum /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$__nesc_unnamed4339 {

  VirtualizeTimerC$0$NUM_TIMERS = 3, 
  VirtualizeTimerC$0$END_OF_LIST = 255
};








#line 48
typedef struct /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$__nesc_unnamed4340 {

  uint32_t t0;
  uint32_t dt;
  bool isoneshot : 1;
  bool isrunning : 1;
  bool _reserved : 6;
} /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer_t;

/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$m_timers[/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$NUM_TIMERS];




static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$fireTimers(uint32_t now);
#line 89
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$updateFromTimer$runTask(void );
#line 128
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$fired(void );




static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$startTimer(uint8_t num, uint32_t t0, uint32_t dt, bool isoneshot);









static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$startPeriodic(uint8_t num, uint32_t dt);




static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$startOneShot(uint8_t num, uint32_t dt);
#line 193
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$default$fired(uint8_t num);
# 47 "/cygdrive/c/Dropbox/tinyos-2.x/tos/lib/timer/CounterToLocalTimeC.nc"
static inline void /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC$0$Counter$overflow(void );
# 99 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/AMSend.nc"
static void /*PrintfC.SerialAMSenderC.AMQueueEntryP*/AMQueueEntryP$0$AMSend$sendDone(
#line 92
message_t * msg, 






error_t error);
# 64 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/Send.nc"
static error_t /*PrintfC.SerialAMSenderC.AMQueueEntryP*/AMQueueEntryP$0$Send$send(
#line 56
message_t * msg, 







uint8_t len);
# 92 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/AMPacket.nc"
static void /*PrintfC.SerialAMSenderC.AMQueueEntryP*/AMQueueEntryP$0$AMPacket$setDestination(
#line 88
message_t * amsg, 



am_addr_t addr);
#line 151
static void /*PrintfC.SerialAMSenderC.AMQueueEntryP*/AMQueueEntryP$0$AMPacket$setType(
#line 147
message_t * amsg, 



am_id_t t);
# 45 "/cygdrive/c/Dropbox/tinyos-2.x/tos/system/AMQueueEntryP.nc"
static error_t /*PrintfC.SerialAMSenderC.AMQueueEntryP*/AMQueueEntryP$0$AMSend$send(am_addr_t dest, 
message_t *msg, 
uint8_t len);









static inline void /*PrintfC.SerialAMSenderC.AMQueueEntryP*/AMQueueEntryP$0$Send$sendDone(message_t *m, error_t err);
# 69 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/AMSend.nc"
static error_t /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$0$AMSend$send(
# 40 "/cygdrive/c/Dropbox/tinyos-2.x/tos/system/AMQueueImplP.nc"
am_id_t arg_0x7e7050c0, 
# 69 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/AMSend.nc"
am_addr_t addr, 
#line 60
message_t * msg, 








uint8_t len);
# 89 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/Send.nc"
static void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$0$Send$sendDone(
# 38 "/cygdrive/c/Dropbox/tinyos-2.x/tos/system/AMQueueImplP.nc"
uint8_t arg_0x7e7066b0, 
# 85 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/Send.nc"
message_t * msg, 



error_t error);
# 67 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/Packet.nc"
static uint8_t /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$0$Packet$payloadLength(
#line 63
message_t * msg);
#line 83
static void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$0$Packet$setPayloadLength(
#line 79
message_t * msg, 



uint8_t len);
# 56 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static error_t /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$0$errorTask$postTask(void );
# 67 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/AMPacket.nc"
static am_addr_t /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$0$AMPacket$destination(
#line 63
message_t * amsg);
#line 136
static am_id_t /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$0$AMPacket$type(
#line 132
message_t * amsg);
# 118 "/cygdrive/c/Dropbox/tinyos-2.x/tos/system/AMQueueImplP.nc"
enum /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$0$__nesc_unnamed4341 {
#line 118
  AMQueueImplP$0$CancelTask = 4U
};
#line 118
typedef int /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$0$__nesc_sillytask_CancelTask[/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$0$CancelTask];
#line 161
enum /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$0$__nesc_unnamed4342 {
#line 161
  AMQueueImplP$0$errorTask = 5U
};
#line 161
typedef int /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$0$__nesc_sillytask_errorTask[/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$0$errorTask];
#line 49
#line 47
typedef struct /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$0$__nesc_unnamed4343 {
  message_t * msg;
} /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$0$queue_entry_t;

uint8_t /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$0$current = 1;
/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$0$queue_entry_t /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$0$queue[1];
uint8_t /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$0$cancelMask[1 / 8 + 1];

static void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$0$tryToSend(void );

static inline void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$0$nextPacket(void );
#line 82
static inline error_t /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$0$Send$send(uint8_t clientId, message_t *msg, 
uint8_t len);
#line 118
static inline void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$0$CancelTask$runTask(void );
#line 155
static inline void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$0$sendDone(uint8_t last, message_t * msg, error_t err);





static inline void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$0$errorTask$runTask(void );




static void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$0$tryToSend(void );
#line 181
static inline void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$0$AMSend$sendDone(am_id_t id, message_t *msg, error_t err);
#line 207
static inline void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$0$Send$default$sendDone(uint8_t id, message_t *msg, error_t err);
# 64 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/Send.nc"
static error_t /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$SubSend$send(
#line 56
message_t * msg, 







uint8_t len);
# 99 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/AMSend.nc"
static void /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$AMSend$sendDone(
# 36 "/cygdrive/c/Dropbox/tinyos-2.x/tos/lib/serial/SerialActiveMessageP.nc"
am_id_t arg_0x7e6c1e70, 
# 92 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/AMSend.nc"
message_t * msg, 






error_t error);
# 67 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/Receive.nc"
static 
#line 63
message_t * 



/*SerialActiveMessageC.AM*/SerialActiveMessageP$0$Receive$receive(
# 37 "/cygdrive/c/Dropbox/tinyos-2.x/tos/lib/serial/SerialActiveMessageP.nc"
am_id_t arg_0x7e6b88e0, 
# 60 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
# 49 "/cygdrive/c/Dropbox/tinyos-2.x/tos/lib/serial/SerialActiveMessageP.nc"
static inline serial_header_t * /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$getHeader(message_t * msg);







static error_t /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$AMSend$send(am_id_t id, am_addr_t dest, 
message_t *msg, 
uint8_t len);
#line 85
static inline void /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$SubSend$sendDone(message_t *msg, error_t result);







static inline message_t */*SerialActiveMessageC.AM*/SerialActiveMessageP$0$Receive$default$receive(uint8_t id, message_t *msg, void *payload, uint8_t len);



static inline message_t */*SerialActiveMessageC.AM*/SerialActiveMessageP$0$SubReceive$receive(message_t *msg, void *payload, uint8_t len);








static inline uint8_t /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$Packet$payloadLength(message_t *msg);




static inline void /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$Packet$setPayloadLength(message_t *msg, uint8_t len);



static inline uint8_t /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$Packet$maxPayloadLength(void );



static void */*SerialActiveMessageC.AM*/SerialActiveMessageP$0$Packet$getPayload(message_t *msg, uint8_t len);
#line 132
static am_addr_t /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$AMPacket$destination(message_t *amsg);









static inline void /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$AMPacket$setDestination(message_t *amsg, am_addr_t addr);
#line 156
static am_id_t /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$AMPacket$type(message_t *amsg);




static inline void /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$AMPacket$setType(message_t *amsg, am_id_t type);
# 92 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/SplitControl.nc"
static void SerialP$SplitControl$startDone(error_t error);
#line 117
static void SerialP$SplitControl$stopDone(error_t error);
# 56 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static error_t SerialP$stopDoneTask$postTask(void );
# 74 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/StdControl.nc"
static error_t SerialP$SerialControl$start(void );









static error_t SerialP$SerialControl$stop(void );
# 56 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static error_t SerialP$RunTx$postTask(void );
# 38 "/cygdrive/c/Dropbox/tinyos-2.x/tos/lib/serial/SerialFlush.nc"
static void SerialP$SerialFlush$flush(void );
# 56 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static error_t SerialP$startDoneTask$postTask(void );
# 45 "/cygdrive/c/Dropbox/tinyos-2.x/tos/lib/serial/SerialFrameComm.nc"
static error_t SerialP$SerialFrameComm$putDelimiter(void );
#line 68
static void SerialP$SerialFrameComm$resetReceive(void );
#line 54
static error_t SerialP$SerialFrameComm$putData(uint8_t data);
# 56 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static error_t SerialP$defaultSerialFlushTask$postTask(void );
# 70 "/cygdrive/c/Dropbox/tinyos-2.x/tos/lib/serial/SendBytePacket.nc"
static uint8_t SerialP$SendBytePacket$nextByte(void );









static void SerialP$SendBytePacket$sendCompleted(error_t error);
# 51 "/cygdrive/c/Dropbox/tinyos-2.x/tos/lib/serial/ReceiveBytePacket.nc"
static error_t SerialP$ReceiveBytePacket$startPacket(void );






static void SerialP$ReceiveBytePacket$byteReceived(uint8_t data);










static void SerialP$ReceiveBytePacket$endPacket(error_t result);
# 189 "/cygdrive/c/Dropbox/tinyos-2.x/tos/lib/serial/SerialP.nc"
enum SerialP$__nesc_unnamed4344 {
#line 189
  SerialP$RunTx = 6U
};
#line 189
typedef int SerialP$__nesc_sillytask_RunTx[SerialP$RunTx];
#line 320
enum SerialP$__nesc_unnamed4345 {
#line 320
  SerialP$startDoneTask = 7U
};
#line 320
typedef int SerialP$__nesc_sillytask_startDoneTask[SerialP$startDoneTask];





enum SerialP$__nesc_unnamed4346 {
#line 326
  SerialP$stopDoneTask = 8U
};
#line 326
typedef int SerialP$__nesc_sillytask_stopDoneTask[SerialP$stopDoneTask];








enum SerialP$__nesc_unnamed4347 {
#line 335
  SerialP$defaultSerialFlushTask = 9U
};
#line 335
typedef int SerialP$__nesc_sillytask_defaultSerialFlushTask[SerialP$defaultSerialFlushTask];
#line 79
enum SerialP$__nesc_unnamed4348 {
  SerialP$RX_DATA_BUFFER_SIZE = 2, 
  SerialP$TX_DATA_BUFFER_SIZE = 4, 
  SerialP$SERIAL_MTU = 255, 
  SerialP$SERIAL_VERSION = 1, 
  SerialP$ACK_QUEUE_SIZE = 5
};

enum SerialP$__nesc_unnamed4349 {
  SerialP$RXSTATE_NOSYNC, 
  SerialP$RXSTATE_PROTO, 
  SerialP$RXSTATE_TOKEN, 
  SerialP$RXSTATE_INFO, 
  SerialP$RXSTATE_INACTIVE
};

enum SerialP$__nesc_unnamed4350 {
  SerialP$TXSTATE_IDLE, 
  SerialP$TXSTATE_PROTO, 
  SerialP$TXSTATE_SEQNO, 
  SerialP$TXSTATE_INFO, 
  SerialP$TXSTATE_FCS1, 
  SerialP$TXSTATE_FCS2, 
  SerialP$TXSTATE_ENDFLAG, 
  SerialP$TXSTATE_ENDWAIT, 
  SerialP$TXSTATE_FINISH, 
  SerialP$TXSTATE_ERROR, 
  SerialP$TXSTATE_INACTIVE
};





#line 109
typedef enum SerialP$__nesc_unnamed4351 {
  SerialP$BUFFER_AVAILABLE, 
  SerialP$BUFFER_FILLING, 
  SerialP$BUFFER_COMPLETE
} SerialP$tx_data_buffer_states_t;

enum SerialP$__nesc_unnamed4352 {
  SerialP$TX_ACK_INDEX = 0, 
  SerialP$TX_DATA_INDEX = 1, 
  SerialP$TX_BUFFER_COUNT = 2
};






#line 122
typedef struct SerialP$__nesc_unnamed4353 {
  uint8_t writePtr;
  uint8_t readPtr;
  uint8_t buf[SerialP$RX_DATA_BUFFER_SIZE + 1];
} SerialP$rx_buf_t;




#line 128
typedef struct SerialP$__nesc_unnamed4354 {
  uint8_t state;
  uint8_t buf;
} SerialP$tx_buf_t;





#line 133
typedef struct SerialP$__nesc_unnamed4355 {
  uint8_t writePtr;
  uint8_t readPtr;
  uint8_t buf[SerialP$ACK_QUEUE_SIZE + 1];
} SerialP$ack_queue_t;



SerialP$rx_buf_t SerialP$rxBuf;
SerialP$tx_buf_t SerialP$txBuf[SerialP$TX_BUFFER_COUNT];



uint8_t SerialP$rxState;
uint8_t SerialP$rxByteCnt;
uint8_t SerialP$rxProto;
uint8_t SerialP$rxSeqno;
uint16_t SerialP$rxCRC;



uint8_t SerialP$txState;
uint8_t SerialP$txByteCnt;
uint8_t SerialP$txProto;
uint8_t SerialP$txSeqno;
uint16_t SerialP$txCRC;
uint8_t SerialP$txPending;
uint8_t SerialP$txIndex;


SerialP$ack_queue_t SerialP$ackQ;

bool SerialP$offPending = FALSE;



static __inline void SerialP$txInit(void );
static __inline void SerialP$rxInit(void );
static __inline void SerialP$ackInit(void );

static __inline bool SerialP$ack_queue_is_full(void );
static __inline bool SerialP$ack_queue_is_empty(void );
static __inline void SerialP$ack_queue_push(uint8_t token);
static __inline uint8_t SerialP$ack_queue_top(void );
static inline uint8_t SerialP$ack_queue_pop(void );




static __inline void SerialP$rx_buffer_push(uint8_t data);
static __inline uint8_t SerialP$rx_buffer_top(void );
static __inline uint8_t SerialP$rx_buffer_pop(void );
static __inline uint16_t SerialP$rx_current_crc(void );

static void SerialP$rx_state_machine(bool isDelimeter, uint8_t data);
static void SerialP$MaybeScheduleTx(void );




static __inline void SerialP$txInit(void );
#line 205
static __inline void SerialP$rxInit(void );








static __inline void SerialP$ackInit(void );



static inline error_t SerialP$Init$init(void );
#line 232
static __inline bool SerialP$ack_queue_is_full(void );









static __inline bool SerialP$ack_queue_is_empty(void );





static __inline void SerialP$ack_queue_push(uint8_t token);









static __inline uint8_t SerialP$ack_queue_top(void );









static inline uint8_t SerialP$ack_queue_pop(void );
#line 295
static __inline void SerialP$rx_buffer_push(uint8_t data);



static __inline uint8_t SerialP$rx_buffer_top(void );



static __inline uint8_t SerialP$rx_buffer_pop(void );





static __inline uint16_t SerialP$rx_current_crc(void );










static inline void SerialP$startDoneTask$runTask(void );





static inline void SerialP$stopDoneTask$runTask(void );



static inline void SerialP$SerialFlush$flushDone(void );




static inline void SerialP$defaultSerialFlushTask$runTask(void );


static inline void SerialP$SerialFlush$default$flush(void );



static inline error_t SerialP$SplitControl$start(void );




static void SerialP$testOff(void );
#line 384
static inline void SerialP$SerialFrameComm$delimiterReceived(void );


static inline void SerialP$SerialFrameComm$dataReceived(uint8_t data);



static inline bool SerialP$valid_rx_proto(uint8_t proto);










static void SerialP$rx_state_machine(bool isDelimeter, uint8_t data);
#line 502
static void SerialP$MaybeScheduleTx(void );










static inline error_t SerialP$SendBytePacket$completeSend(void );








static inline error_t SerialP$SendBytePacket$startSend(uint8_t b);
#line 539
static inline void SerialP$RunTx$runTask(void );
#line 642
static inline void SerialP$SerialFrameComm$putDone(void );
# 56 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$receiveTask$postTask(void );
# 89 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/Send.nc"
static void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$Send$sendDone(
# 40 "/cygdrive/c/Dropbox/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x7e5a9ba8, 
# 85 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/Send.nc"
message_t * msg, 



error_t error);
# 56 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$signalSendDone$postTask(void );
# 67 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/Receive.nc"
static 
#line 63
message_t * 



/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$Receive$receive(
# 39 "/cygdrive/c/Dropbox/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x7e5a9568, 
# 60 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
# 31 "/cygdrive/c/Dropbox/tinyos-2.x/tos/lib/serial/SerialPacketInfo.nc"
static uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$PacketInfo$upperLength(
# 43 "/cygdrive/c/Dropbox/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x7e5a8768, 
# 31 "/cygdrive/c/Dropbox/tinyos-2.x/tos/lib/serial/SerialPacketInfo.nc"
message_t *msg, uint8_t dataLinkLen);
#line 15
static uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$PacketInfo$offset(
# 43 "/cygdrive/c/Dropbox/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x7e5a8768);
# 23 "/cygdrive/c/Dropbox/tinyos-2.x/tos/lib/serial/SerialPacketInfo.nc"
static uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$PacketInfo$dataLinkLength(
# 43 "/cygdrive/c/Dropbox/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x7e5a8768, 
# 23 "/cygdrive/c/Dropbox/tinyos-2.x/tos/lib/serial/SerialPacketInfo.nc"
message_t *msg, uint8_t upperLen);
# 60 "/cygdrive/c/Dropbox/tinyos-2.x/tos/lib/serial/SendBytePacket.nc"
static error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$SendBytePacket$completeSend(void );
#line 51
static error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$SendBytePacket$startSend(uint8_t first_byte);
# 147 "/cygdrive/c/Dropbox/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
enum /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$__nesc_unnamed4356 {
#line 147
  SerialDispatcherP$0$signalSendDone = 10U
};
#line 147
typedef int /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$__nesc_sillytask_signalSendDone[/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$signalSendDone];
#line 264
enum /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$__nesc_unnamed4357 {
#line 264
  SerialDispatcherP$0$receiveTask = 11U
};
#line 264
typedef int /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$__nesc_sillytask_receiveTask[/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$receiveTask];
#line 55
#line 51
typedef enum /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$__nesc_unnamed4358 {
  SerialDispatcherP$0$SEND_STATE_IDLE = 0, 
  SerialDispatcherP$0$SEND_STATE_BEGIN = 1, 
  SerialDispatcherP$0$SEND_STATE_DATA = 2
} /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$send_state_t;

enum /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$__nesc_unnamed4359 {
  SerialDispatcherP$0$RECV_STATE_IDLE = 0, 
  SerialDispatcherP$0$RECV_STATE_BEGIN = 1, 
  SerialDispatcherP$0$RECV_STATE_DATA = 2
};






#line 63
typedef struct /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$__nesc_unnamed4360 {
  uint8_t which : 1;
  uint8_t bufZeroLocked : 1;
  uint8_t bufOneLocked : 1;
  uint8_t state : 2;
} /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$recv_state_t;



/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$recv_state_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$receiveState = { 0, 0, 0, /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$RECV_STATE_IDLE };
uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$recvType = TOS_SERIAL_UNKNOWN_ID;
uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$recvIndex = 0;


message_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$messages[2];
message_t * /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$messagePtrs[2] = { &/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$messages[0], &/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$messages[1] };




uint8_t * /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$receiveBuffer = (uint8_t * )&/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$messages[0];

uint8_t * /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$sendBuffer = (void *)0;
/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$send_state_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$sendState = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$SEND_STATE_IDLE;
uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$sendLen = 0;
uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$sendIndex = 0;
error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$sendError = SUCCESS;
bool /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$sendCancelled = FALSE;
uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$sendId = 0;


uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$receiveTaskPending = FALSE;
uart_id_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$receiveTaskType = 0;
uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$receiveTaskWhich;
message_t * /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$receiveTaskBuf = (void *)0;
uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$receiveTaskSize = 0;

static inline error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$Send$send(uint8_t id, message_t *msg, uint8_t len);
#line 147
static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$signalSendDone$runTask(void );
#line 167
static inline uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$SendBytePacket$nextByte(void );
#line 183
static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$SendBytePacket$sendCompleted(error_t error);




static inline bool /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$isCurrentBufferLocked(void );



static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$lockCurrentBuffer(void );








static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$unlockBuffer(uint8_t which);








static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$receiveBufferSwap(void );




static inline error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$ReceiveBytePacket$startPacket(void );
#line 233
static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$ReceiveBytePacket$byteReceived(uint8_t b);
#line 264
static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$receiveTask$runTask(void );
#line 285
static void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$ReceiveBytePacket$endPacket(error_t result);
#line 344
static inline uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$PacketInfo$default$offset(uart_id_t id);


static inline uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$PacketInfo$default$dataLinkLength(uart_id_t id, message_t *msg, 
uint8_t upperLen);


static inline uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$PacketInfo$default$upperLength(uart_id_t id, message_t *msg, 
uint8_t dataLinkLen);




static inline message_t */*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$Receive$default$receive(uart_id_t idxxx, message_t *msg, 
void *payload, 
uint8_t len);


static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$Send$default$sendDone(uart_id_t idxxx, message_t *msg, error_t error);
# 48 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/UartStream.nc"
static error_t HdlcTranslateC$UartStream$send(
#line 44
uint8_t * buf, 



uint16_t len);
# 83 "/cygdrive/c/Dropbox/tinyos-2.x/tos/lib/serial/SerialFrameComm.nc"
static void HdlcTranslateC$SerialFrameComm$dataReceived(uint8_t data);





static void HdlcTranslateC$SerialFrameComm$putDone(void );
#line 74
static void HdlcTranslateC$SerialFrameComm$delimiterReceived(void );
# 47 "/cygdrive/c/Dropbox/tinyos-2.x/tos/lib/serial/HdlcTranslateC.nc"
#line 44
typedef struct HdlcTranslateC$__nesc_unnamed4361 {
  uint8_t sendEscape : 1;
  uint8_t receiveEscape : 1;
} HdlcTranslateC$HdlcState;


HdlcTranslateC$HdlcState HdlcTranslateC$state = { 0, 0 };
uint8_t HdlcTranslateC$txTemp;
uint8_t HdlcTranslateC$m_data;


static inline void HdlcTranslateC$SerialFrameComm$resetReceive(void );





static inline void HdlcTranslateC$UartStream$receivedByte(uint8_t data);
#line 86
static error_t HdlcTranslateC$SerialFrameComm$putDelimiter(void );





static error_t HdlcTranslateC$SerialFrameComm$putData(uint8_t data);
#line 104
static inline void HdlcTranslateC$UartStream$sendDone(uint8_t *buf, uint16_t len, 
error_t error);










static inline void HdlcTranslateC$UartStream$receiveDone(uint8_t *buf, uint16_t len, error_t error);
# 74 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/StdControl.nc"
static error_t /*Atm128Uart0C.UartP*/Atm128UartP$0$HplUartTxControl$start(void );









static error_t /*Atm128Uart0C.UartP*/Atm128UartP$0$HplUartTxControl$stop(void );
# 79 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/UartStream.nc"
static void /*Atm128Uart0C.UartP*/Atm128UartP$0$UartStream$receivedByte(uint8_t byte);
#line 99
static void /*Atm128Uart0C.UartP*/Atm128UartP$0$UartStream$receiveDone(
#line 95
uint8_t * buf, 



uint16_t len, error_t error);
#line 57
static void /*Atm128Uart0C.UartP*/Atm128UartP$0$UartStream$sendDone(
#line 53
uint8_t * buf, 



uint16_t len, error_t error);
# 42 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/HplAtm128Uart.nc"
static error_t /*Atm128Uart0C.UartP*/Atm128UartP$0$HplUart$enableRxIntr(void );
#line 40
static error_t /*Atm128Uart0C.UartP*/Atm128UartP$0$HplUart$enableTxIntr(void );
static error_t /*Atm128Uart0C.UartP*/Atm128UartP$0$HplUart$disableTxIntr(void );

static error_t /*Atm128Uart0C.UartP*/Atm128UartP$0$HplUart$disableRxIntr(void );


static void /*Atm128Uart0C.UartP*/Atm128UartP$0$HplUart$tx(uint8_t data);
# 74 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/StdControl.nc"
static error_t /*Atm128Uart0C.UartP*/Atm128UartP$0$HplUartRxControl$start(void );









static error_t /*Atm128Uart0C.UartP*/Atm128UartP$0$HplUartRxControl$stop(void );
# 62 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/Atm128UartP.nc"
uint16_t /*Atm128Uart0C.UartP*/Atm128UartP$0$m_tx_len;
#line 62
uint16_t /*Atm128Uart0C.UartP*/Atm128UartP$0$m_rx_len;
uint8_t * /*Atm128Uart0C.UartP*/Atm128UartP$0$m_tx_buf;
#line 63
uint8_t * /*Atm128Uart0C.UartP*/Atm128UartP$0$m_rx_buf;
uint16_t /*Atm128Uart0C.UartP*/Atm128UartP$0$m_tx_pos;
#line 64
uint16_t /*Atm128Uart0C.UartP*/Atm128UartP$0$m_rx_pos;
uint16_t /*Atm128Uart0C.UartP*/Atm128UartP$0$m_byte_time;
uint8_t /*Atm128Uart0C.UartP*/Atm128UartP$0$m_rx_intr;
uint8_t /*Atm128Uart0C.UartP*/Atm128UartP$0$m_tx_intr;

static inline error_t /*Atm128Uart0C.UartP*/Atm128UartP$0$Init$init(void );







static inline error_t /*Atm128Uart0C.UartP*/Atm128UartP$0$StdControl$start(void );
#line 93
static inline error_t /*Atm128Uart0C.UartP*/Atm128UartP$0$StdControl$stop(void );
#line 133
static inline void /*Atm128Uart0C.UartP*/Atm128UartP$0$HplUart$rxDone(uint8_t data);
#line 155
static error_t /*Atm128Uart0C.UartP*/Atm128UartP$0$UartStream$send(uint8_t *buf, uint16_t len);
#line 173
static inline void /*Atm128Uart0C.UartP*/Atm128UartP$0$HplUart$txDone(void );
#line 216
static inline void /*Atm128Uart0C.UartP*/Atm128UartP$0$Counter$overflow(void );
# 49 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/HplAtm128Uart.nc"
static void HplAtm128UartP$HplUart0$rxDone(uint8_t data);
#line 47
static void HplAtm128UartP$HplUart0$txDone(void );

static void HplAtm128UartP$HplUart1$rxDone(uint8_t data);
#line 47
static void HplAtm128UartP$HplUart1$txDone(void );
# 60 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/timer/Atm128Calibrate.nc"
static uint16_t HplAtm128UartP$Atm128Calibrate$baudrateRegister(uint32_t baudrate);
# 44 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/McuPowerState.nc"
static void HplAtm128UartP$McuPowerState$update(void );
# 87 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/HplAtm128UartP.nc"
static inline error_t HplAtm128UartP$Uart0Init$init(void );
#line 107
static inline error_t HplAtm128UartP$Uart0TxControl$start(void );





static inline error_t HplAtm128UartP$Uart0TxControl$stop(void );





static inline error_t HplAtm128UartP$Uart0RxControl$start(void );





static inline error_t HplAtm128UartP$Uart0RxControl$stop(void );





static inline error_t HplAtm128UartP$HplUart0$enableTxIntr(void );





static inline error_t HplAtm128UartP$HplUart0$disableTxIntr(void );




static inline error_t HplAtm128UartP$HplUart0$enableRxIntr(void );




static inline error_t HplAtm128UartP$HplUart0$disableRxIntr(void );
#line 164
static void HplAtm128UartP$HplUart0$tx(uint8_t data);






void __vector_18(void ) __attribute((signal))   ;





void __vector_20(void ) __attribute((interrupt))   ;



static inline error_t HplAtm128UartP$Uart1Init$init(void );
#line 265
void __vector_30(void ) __attribute((signal))   ;




void __vector_32(void ) __attribute((interrupt))   ;





static inline void HplAtm128UartP$HplUart1$default$txDone(void );
static inline void HplAtm128UartP$HplUart1$default$rxDone(uint8_t data);
# 49 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
static void HplAtm128Timer3P$CompareA$fired(void );
# 51 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Capture.nc"
static void HplAtm128Timer3P$Capture$captured(HplAtm128Timer3P$Capture$size_type t);
# 49 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
static void HplAtm128Timer3P$CompareB$fired(void );
#line 49
static void HplAtm128Timer3P$CompareC$fired(void );
# 61 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
static void HplAtm128Timer3P$Timer$overflow(void );
# 47 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer3P.nc"
static inline uint16_t HplAtm128Timer3P$Timer$get(void );


static inline void HplAtm128Timer3P$Timer$set(uint16_t t);








static inline void HplAtm128Timer3P$Timer$setScale(uint8_t s);









static inline Atm128TimerCtrlCapture_t HplAtm128Timer3P$TimerCtrl$getCtrlCapture(void );









static inline uint16_t HplAtm128Timer3P$TimerCtrlCapture2int(Atm128TimerCtrlCapture_t x);






static inline void HplAtm128Timer3P$TimerCtrl$setCtrlCapture(Atm128_TCCR3B_t x);
#line 127
static inline void HplAtm128Timer3P$Timer$start(void );
#line 188
static inline void HplAtm128Timer3P$CompareA$default$fired(void );
void __vector_26(void ) __attribute((interrupt))   ;


static inline void HplAtm128Timer3P$CompareB$default$fired(void );
void __vector_27(void ) __attribute((interrupt))   ;


static inline void HplAtm128Timer3P$CompareC$default$fired(void );
void __vector_28(void ) __attribute((interrupt))   ;


static inline void HplAtm128Timer3P$Capture$default$captured(uint16_t time);
void __vector_25(void ) __attribute((interrupt))   ;



void __vector_29(void ) __attribute((interrupt))   ;
# 95 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
static void /*InitThreeP.InitThree*/Atm128TimerInitC$0$Timer$setScale(uint8_t scale);
#line 58
static void /*InitThreeP.InitThree*/Atm128TimerInitC$0$Timer$set(/*InitThreeP.InitThree*/Atm128TimerInitC$0$Timer$timer_size t);










static void /*InitThreeP.InitThree*/Atm128TimerInitC$0$Timer$start(void );
# 42 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/timer/Atm128TimerInitC.nc"
static inline error_t /*InitThreeP.InitThree*/Atm128TimerInitC$0$Init$init(void );








static inline void /*InitThreeP.InitThree*/Atm128TimerInitC$0$Timer$overflow(void );
# 71 "/cygdrive/c/Dropbox/tinyos-2.x/tos/lib/timer/Counter.nc"
static void /*CounterThree16C.NCounter*/Atm128CounterC$0$Counter$overflow(void );
# 56 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/timer/Atm128CounterC.nc"
static inline void /*CounterThree16C.NCounter*/Atm128CounterC$0$Timer$overflow(void );
# 71 "/cygdrive/c/Dropbox/tinyos-2.x/tos/lib/timer/Counter.nc"
static void /*CounterMicro32C.Transform32*/TransformCounterC$0$Counter$overflow(void );
# 56 "/cygdrive/c/Dropbox/tinyos-2.x/tos/lib/timer/TransformCounterC.nc"
/*CounterMicro32C.Transform32*/TransformCounterC$0$upper_count_type /*CounterMicro32C.Transform32*/TransformCounterC$0$m_upper;

enum /*CounterMicro32C.Transform32*/TransformCounterC$0$__nesc_unnamed4362 {

  TransformCounterC$0$LOW_SHIFT_RIGHT = 0, 
  TransformCounterC$0$HIGH_SHIFT_LEFT = 8 * sizeof(/*CounterMicro32C.Transform32*/TransformCounterC$0$from_size_type ) - /*CounterMicro32C.Transform32*/TransformCounterC$0$LOW_SHIFT_RIGHT, 
  TransformCounterC$0$NUM_UPPER_BITS = 8 * sizeof(/*CounterMicro32C.Transform32*/TransformCounterC$0$to_size_type ) - 8 * sizeof(/*CounterMicro32C.Transform32*/TransformCounterC$0$from_size_type ) + 0, 



  TransformCounterC$0$OVERFLOW_MASK = /*CounterMicro32C.Transform32*/TransformCounterC$0$NUM_UPPER_BITS ? ((/*CounterMicro32C.Transform32*/TransformCounterC$0$upper_count_type )2 << (/*CounterMicro32C.Transform32*/TransformCounterC$0$NUM_UPPER_BITS - 1)) - 1 : 0
};
#line 122
static inline void /*CounterMicro32C.Transform32*/TransformCounterC$0$CounterFrom$overflow(void );
# 40 "/cygdrive/c/Dropbox/tinyos-2.x/tos/lib/serial/SerialPacketInfoActiveMessageP.nc"
static inline uint8_t SerialPacketInfoActiveMessageP$Info$offset(void );


static inline uint8_t SerialPacketInfoActiveMessageP$Info$dataLinkLength(message_t *msg, uint8_t upperLen);


static inline uint8_t SerialPacketInfoActiveMessageP$Info$upperLength(message_t *msg, uint8_t dataLinkLen);
# 48 "/cygdrive/c/Dropbox/tinyos-2.x/tos/system/QueueC.nc"
/*PrintfC.QueueC*/QueueC$0$queue_t  /*PrintfC.QueueC*/QueueC$0$queue[250];
uint8_t /*PrintfC.QueueC*/QueueC$0$head = 0;
uint8_t /*PrintfC.QueueC*/QueueC$0$tail = 0;
uint8_t /*PrintfC.QueueC*/QueueC$0$size = 0;

static inline bool /*PrintfC.QueueC*/QueueC$0$Queue$empty(void );



static inline uint8_t /*PrintfC.QueueC*/QueueC$0$Queue$size(void );



static inline uint8_t /*PrintfC.QueueC*/QueueC$0$Queue$maxSize(void );



static inline /*PrintfC.QueueC*/QueueC$0$queue_t /*PrintfC.QueueC*/QueueC$0$Queue$head(void );



static inline void /*PrintfC.QueueC*/QueueC$0$printQueue(void );
#line 85
static inline /*PrintfC.QueueC*/QueueC$0$queue_t /*PrintfC.QueueC*/QueueC$0$Queue$dequeue(void );
#line 97
static inline error_t /*PrintfC.QueueC*/QueueC$0$Queue$enqueue(/*PrintfC.QueueC*/QueueC$0$queue_t newVal);
# 90 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/Queue.nc"
static error_t PrintfP$Queue$enqueue(
#line 86
PrintfP$Queue$t  newVal);
#line 81
static 
#line 79
PrintfP$Queue$t  

PrintfP$Queue$dequeue(void );
#line 50
static bool PrintfP$Queue$empty(void );







static uint8_t PrintfP$Queue$size(void );
# 69 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/AMSend.nc"
static error_t PrintfP$AMSend$send(am_addr_t addr, 
#line 60
message_t * msg, 








uint8_t len);
# 115 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/Packet.nc"
static 
#line 112
void * 


PrintfP$Packet$getPayload(
#line 110
message_t * msg, 




uint8_t len);
# 56 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static error_t PrintfP$retrySend$postTask(void );
# 114 "/cygdrive/c/Dropbox/tinyos-2.x/tos/lib/printf/PrintfP.nc"
enum PrintfP$__nesc_unnamed4363 {
#line 114
  PrintfP$retrySend = 12U
};
#line 114
typedef int PrintfP$__nesc_sillytask_retrySend[PrintfP$retrySend];
#line 101
enum PrintfP$__nesc_unnamed4364 {
  PrintfP$S_STARTED, 
  PrintfP$S_FLUSHING
};

message_t PrintfP$printfMsg;
uint8_t PrintfP$state = PrintfP$S_STARTED;

static inline error_t PrintfP$Init$init(void );




static inline void PrintfP$retrySend$runTask(void );




static void PrintfP$sendNext(void );










int printfflush(void )   ;
#line 142
static void PrintfP$AMSend$sendDone(message_t *msg, error_t error);









static inline int PrintfP$Putchar$putchar(int c);
# 49 "/cygdrive/c/Dropbox/tinyos-2.x/tos/lib/printf/Putchar.nc"
static int PutcharP$Putchar$putchar(int c);
# 98 "/cygdrive/c/Dropbox/tinyos-2.x/tos/lib/printf/PutcharP.nc"
static inline error_t PutcharP$Init$init(void );
#line 110
int uart_putchar(char c, struct __file *stream) __attribute((noinline))   ;
# 83 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/SplitControl.nc"
static error_t SerialStartP$SerialControl$start(void );
# 44 "/cygdrive/c/Dropbox/tinyos-2.x/tos/lib/printf/SerialStartP.nc"
static inline void SerialStartP$Boot$booted(void );



static inline void SerialStartP$SerialControl$startDone(error_t error);
static inline void SerialStartP$SerialControl$stopDone(error_t error);
# 64 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/Send.nc"
static error_t CC2420ActiveMessageP$SubSend$send(
#line 56
message_t * msg, 







uint8_t len);
#line 114
static 
#line 112
void * 

CC2420ActiveMessageP$SubSend$getPayload(
#line 111
message_t * msg, 


uint8_t len);
# 70 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Config.nc"
static uint16_t CC2420ActiveMessageP$CC2420Config$getPanAddr(void );
# 95 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/cc2420/interfaces/RadioBackoff.nc"
static void CC2420ActiveMessageP$RadioBackoff$requestCca(
# 45 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/cc2420/CC2420ActiveMessageP.nc"
am_id_t arg_0x7e2d7230, 
# 95 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/cc2420/interfaces/RadioBackoff.nc"
message_t * msg);
#line 81
static void CC2420ActiveMessageP$RadioBackoff$requestInitialBackoff(
# 45 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/cc2420/CC2420ActiveMessageP.nc"
am_id_t arg_0x7e2d7230, 
# 81 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/cc2420/interfaces/RadioBackoff.nc"
message_t * msg);






static void CC2420ActiveMessageP$RadioBackoff$requestCongestionBackoff(
# 45 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/cc2420/CC2420ActiveMessageP.nc"
am_id_t arg_0x7e2d7230, 
# 88 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/cc2420/interfaces/RadioBackoff.nc"
message_t * msg);
# 59 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/SendNotifier.nc"
static void CC2420ActiveMessageP$SendNotifier$aboutToSend(
# 44 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/cc2420/CC2420ActiveMessageP.nc"
am_id_t arg_0x7e2d8b78, 
# 59 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/SendNotifier.nc"
am_addr_t dest, 
#line 57
message_t * msg);
# 99 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/AMSend.nc"
static void CC2420ActiveMessageP$AMSend$sendDone(
# 39 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/cc2420/CC2420ActiveMessageP.nc"
am_id_t arg_0x7e2db0c0, 
# 92 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/AMSend.nc"
message_t * msg, 






error_t error);
# 67 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/Receive.nc"
static 
#line 63
message_t * 



CC2420ActiveMessageP$Snoop$receive(
# 41 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/cc2420/CC2420ActiveMessageP.nc"
am_id_t arg_0x7e2d9148, 
# 60 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
# 50 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/ActiveMessageAddress.nc"
static am_addr_t CC2420ActiveMessageP$ActiveMessageAddress$amAddress(void );
# 42 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420PacketBody.nc"
static cc2420_header_t * CC2420ActiveMessageP$CC2420PacketBody$getHeader(message_t * msg);




static cc2420_metadata_t * CC2420ActiveMessageP$CC2420PacketBody$getMetadata(message_t * msg);
# 67 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/Receive.nc"
static 
#line 63
message_t * 



CC2420ActiveMessageP$Receive$receive(
# 40 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/cc2420/CC2420ActiveMessageP.nc"
am_id_t arg_0x7e2dba80, 
# 60 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
# 61 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/cc2420/CC2420ActiveMessageP.nc"
static error_t CC2420ActiveMessageP$AMSend$send(am_id_t id, am_addr_t addr, 
message_t *msg, 
uint8_t len);
#line 88
static inline am_addr_t CC2420ActiveMessageP$AMPacket$address(void );



static am_addr_t CC2420ActiveMessageP$AMPacket$destination(message_t *amsg);









static inline void CC2420ActiveMessageP$AMPacket$setDestination(message_t *amsg, am_addr_t addr);









static inline bool CC2420ActiveMessageP$AMPacket$isForMe(message_t *amsg);




static inline am_id_t CC2420ActiveMessageP$AMPacket$type(message_t *amsg);




static inline void CC2420ActiveMessageP$AMPacket$setType(message_t *amsg, am_id_t type);
#line 147
static inline uint8_t CC2420ActiveMessageP$Packet$payloadLength(message_t *msg);



static inline void CC2420ActiveMessageP$Packet$setPayloadLength(message_t *msg, uint8_t len);







static inline void *CC2420ActiveMessageP$Packet$getPayload(message_t *msg, uint8_t len);





static inline void CC2420ActiveMessageP$SubSend$sendDone(message_t *msg, error_t result);





static inline message_t *CC2420ActiveMessageP$SubReceive$receive(message_t *msg, void *payload, uint8_t len);
#line 191
static inline void CC2420ActiveMessageP$CC2420Config$syncDone(error_t error);





static inline void CC2420ActiveMessageP$SubBackoff$requestInitialBackoff(message_t *msg);




static inline void CC2420ActiveMessageP$SubBackoff$requestCongestionBackoff(message_t *msg);



static inline void CC2420ActiveMessageP$SubBackoff$requestCca(message_t *msg);
#line 237
static inline message_t *CC2420ActiveMessageP$Receive$default$receive(am_id_t id, message_t *msg, void *payload, uint8_t len);



static inline message_t *CC2420ActiveMessageP$Snoop$default$receive(am_id_t id, message_t *msg, void *payload, uint8_t len);






static inline void CC2420ActiveMessageP$SendNotifier$default$aboutToSend(am_id_t amId, am_addr_t addr, message_t *msg);

static inline void CC2420ActiveMessageP$RadioBackoff$default$requestInitialBackoff(am_id_t id, 
message_t *msg);


static inline void CC2420ActiveMessageP$RadioBackoff$default$requestCongestionBackoff(am_id_t id, 
message_t *msg);


static inline void CC2420ActiveMessageP$RadioBackoff$default$requestCca(am_id_t id, 
message_t *msg);
# 92 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/SplitControl.nc"
static void CC2420CsmaP$SplitControl$startDone(error_t error);
#line 117
static void CC2420CsmaP$SplitControl$stopDone(error_t error);
# 95 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/cc2420/interfaces/RadioBackoff.nc"
static void CC2420CsmaP$RadioBackoff$requestCca(message_t * msg);
#line 81
static void CC2420CsmaP$RadioBackoff$requestInitialBackoff(message_t * msg);






static void CC2420CsmaP$RadioBackoff$requestCongestionBackoff(message_t * msg);
#line 66
static void CC2420CsmaP$SubBackoff$setCongestionBackoff(uint16_t backoffTime);
#line 60
static void CC2420CsmaP$SubBackoff$setInitialBackoff(uint16_t backoffTime);
# 51 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Transmit.nc"
static error_t CC2420CsmaP$CC2420Transmit$send(message_t * p_msg, bool useCca);
# 89 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/Send.nc"
static void CC2420CsmaP$Send$sendDone(
#line 85
message_t * msg, 



error_t error);
# 41 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/Random.nc"
static uint16_t CC2420CsmaP$Random$rand16(void );
# 74 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/StdControl.nc"
static error_t CC2420CsmaP$SubControl$start(void );









static error_t CC2420CsmaP$SubControl$stop(void );
# 42 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420PacketBody.nc"
static cc2420_header_t * CC2420CsmaP$CC2420PacketBody$getHeader(message_t * msg);




static cc2420_metadata_t * CC2420CsmaP$CC2420PacketBody$getMetadata(message_t * msg);
# 71 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Power.nc"
static error_t CC2420CsmaP$CC2420Power$startOscillator(void );
#line 90
static error_t CC2420CsmaP$CC2420Power$rxOn(void );
#line 51
static error_t CC2420CsmaP$CC2420Power$startVReg(void );
#line 63
static error_t CC2420CsmaP$CC2420Power$stopVReg(void );
# 110 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/Resource.nc"
static error_t CC2420CsmaP$Resource$release(void );
#line 78
static error_t CC2420CsmaP$Resource$request(void );
# 66 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/State.nc"
static bool CC2420CsmaP$SplitControlState$isState(uint8_t myState);
#line 45
static error_t CC2420CsmaP$SplitControlState$requestState(uint8_t reqState);





static void CC2420CsmaP$SplitControlState$forceState(uint8_t reqState);
# 56 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static error_t CC2420CsmaP$sendDone_task$postTask(void );
#line 56
static error_t CC2420CsmaP$stopDone_task$postTask(void );
#line 56
static error_t CC2420CsmaP$startDone_task$postTask(void );
# 74 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/cc2420/csma/CC2420CsmaP.nc"
enum CC2420CsmaP$__nesc_unnamed4365 {
#line 74
  CC2420CsmaP$startDone_task = 13U
};
#line 74
typedef int CC2420CsmaP$__nesc_sillytask_startDone_task[CC2420CsmaP$startDone_task];

enum CC2420CsmaP$__nesc_unnamed4366 {
#line 76
  CC2420CsmaP$stopDone_task = 14U
};
#line 76
typedef int CC2420CsmaP$__nesc_sillytask_stopDone_task[CC2420CsmaP$stopDone_task];
enum CC2420CsmaP$__nesc_unnamed4367 {
#line 77
  CC2420CsmaP$sendDone_task = 15U
};
#line 77
typedef int CC2420CsmaP$__nesc_sillytask_sendDone_task[CC2420CsmaP$sendDone_task];
#line 58
enum CC2420CsmaP$__nesc_unnamed4368 {
  CC2420CsmaP$S_STOPPED, 
  CC2420CsmaP$S_STARTING, 
  CC2420CsmaP$S_STARTED, 
  CC2420CsmaP$S_STOPPING, 
  CC2420CsmaP$S_TRANSMITTING
};

message_t * CC2420CsmaP$m_msg;

error_t CC2420CsmaP$sendErr = SUCCESS;


bool CC2420CsmaP$ccaOn;







static inline void CC2420CsmaP$shutdown(void );


static error_t CC2420CsmaP$SplitControl$start(void );
#line 123
static inline error_t CC2420CsmaP$Send$send(message_t *p_msg, uint8_t len);
#line 158
static void *CC2420CsmaP$Send$getPayload(message_t *m, uint8_t len);








static inline uint8_t CC2420CsmaP$Send$maxPayloadLength(void );
#line 199
static inline void CC2420CsmaP$CC2420Transmit$sendDone(message_t *p_msg, error_t err);




static inline void CC2420CsmaP$CC2420Power$startVRegDone(void );



static inline void CC2420CsmaP$Resource$granted(void );



static inline void CC2420CsmaP$CC2420Power$startOscillatorDone(void );




static inline void CC2420CsmaP$SubBackoff$requestInitialBackoff(message_t *msg);








static inline void CC2420CsmaP$SubBackoff$requestCongestionBackoff(message_t *msg);
#line 240
static inline void CC2420CsmaP$sendDone_task$runTask(void );
#line 253
static inline void CC2420CsmaP$startDone_task$runTask(void );







static inline void CC2420CsmaP$stopDone_task$runTask(void );









static inline void CC2420CsmaP$shutdown(void );
# 53 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Config.nc"
static void CC2420ControlP$CC2420Config$syncDone(error_t error);
# 55 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Register.nc"
static cc2420_status_t CC2420ControlP$RXCTRL1$write(uint16_t data);
# 55 "/cygdrive/c/Dropbox/tinyos-2.x/tos/lib/timer/Alarm.nc"
static void CC2420ControlP$StartupTimer$start(CC2420ControlP$StartupTimer$size_type dt);
# 55 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Register.nc"
static cc2420_status_t CC2420ControlP$MDMCTRL0$write(uint16_t data);
# 35 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/GeneralIO.nc"
static void CC2420ControlP$RSTN$makeOutput(void );
#line 29
static void CC2420ControlP$RSTN$set(void );
static void CC2420ControlP$RSTN$clr(void );
# 63 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/Read.nc"
static void CC2420ControlP$ReadRssi$readDone(error_t result, CC2420ControlP$ReadRssi$val_t val);
# 56 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static error_t CC2420ControlP$syncDone$postTask(void );
# 47 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Register.nc"
static cc2420_status_t CC2420ControlP$RSSI$read(uint16_t *data);







static cc2420_status_t CC2420ControlP$IOCFG0$write(uint16_t data);
# 50 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/ActiveMessageAddress.nc"
static am_addr_t CC2420ControlP$ActiveMessageAddress$amAddress(void );




static am_group_t CC2420ControlP$ActiveMessageAddress$amGroup(void );
# 35 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/GeneralIO.nc"
static void CC2420ControlP$CSN$makeOutput(void );
#line 29
static void CC2420ControlP$CSN$set(void );
static void CC2420ControlP$CSN$clr(void );




static void CC2420ControlP$VREN$makeOutput(void );
#line 29
static void CC2420ControlP$VREN$set(void );
static void CC2420ControlP$VREN$clr(void );
# 45 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Strobe.nc"
static cc2420_status_t CC2420ControlP$SXOSCON$strobe(void );
# 110 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/Resource.nc"
static error_t CC2420ControlP$SpiResource$release(void );
#line 78
static error_t CC2420ControlP$SpiResource$request(void );
#line 110
static error_t CC2420ControlP$SyncResource$release(void );
#line 78
static error_t CC2420ControlP$SyncResource$request(void );
# 76 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Power.nc"
static void CC2420ControlP$CC2420Power$startOscillatorDone(void );
#line 56
static void CC2420ControlP$CC2420Power$startVRegDone(void );
# 55 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Register.nc"
static cc2420_status_t CC2420ControlP$IOCFG1$write(uint16_t data);
#line 55
static cc2420_status_t CC2420ControlP$FSCTRL$write(uint16_t data);
# 45 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Strobe.nc"
static cc2420_status_t CC2420ControlP$SRXON$strobe(void );
# 92 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/Resource.nc"
static void CC2420ControlP$Resource$granted(void );
# 63 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Ram.nc"
static cc2420_status_t CC2420ControlP$PANID$write(uint8_t offset, uint8_t * data, uint8_t length);
# 50 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/GpioInterrupt.nc"
static error_t CC2420ControlP$InterruptCCA$disable(void );
#line 42
static error_t CC2420ControlP$InterruptCCA$enableRisingEdge(void );
# 110 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/Resource.nc"
static error_t CC2420ControlP$RssiResource$release(void );
# 45 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Strobe.nc"
static cc2420_status_t CC2420ControlP$SRFOFF$strobe(void );
# 117 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/cc2420/control/CC2420ControlP.nc"
enum CC2420ControlP$__nesc_unnamed4369 {
#line 117
  CC2420ControlP$sync = 16U
};
#line 117
typedef int CC2420ControlP$__nesc_sillytask_sync[CC2420ControlP$sync];
enum CC2420ControlP$__nesc_unnamed4370 {
#line 118
  CC2420ControlP$syncDone = 17U
};
#line 118
typedef int CC2420ControlP$__nesc_sillytask_syncDone[CC2420ControlP$syncDone];
#line 85
#line 79
typedef enum CC2420ControlP$__nesc_unnamed4371 {
  CC2420ControlP$S_VREG_STOPPED, 
  CC2420ControlP$S_VREG_STARTING, 
  CC2420ControlP$S_VREG_STARTED, 
  CC2420ControlP$S_XOSC_STARTING, 
  CC2420ControlP$S_XOSC_STARTED
} CC2420ControlP$cc2420_control_state_t;

uint8_t CC2420ControlP$m_channel;

uint8_t CC2420ControlP$m_tx_power;

uint16_t CC2420ControlP$m_pan;

uint16_t CC2420ControlP$m_short_addr;

bool CC2420ControlP$m_sync_busy;


bool CC2420ControlP$autoAckEnabled;


bool CC2420ControlP$hwAutoAckDefault;


bool CC2420ControlP$addressRecognition;


bool CC2420ControlP$hwAddressRecognition;

CC2420ControlP$cc2420_control_state_t CC2420ControlP$m_state = CC2420ControlP$S_VREG_STOPPED;



static void CC2420ControlP$writeFsctrl(void );
static void CC2420ControlP$writeMdmctrl0(void );
static void CC2420ControlP$writeId(void );





static inline error_t CC2420ControlP$Init$init(void );
#line 171
static inline error_t CC2420ControlP$Resource$request(void );







static inline error_t CC2420ControlP$Resource$release(void );







static inline error_t CC2420ControlP$CC2420Power$startVReg(void );
#line 199
static inline error_t CC2420ControlP$CC2420Power$stopVReg(void );







static inline error_t CC2420ControlP$CC2420Power$startOscillator(void );
#line 249
static inline error_t CC2420ControlP$CC2420Power$rxOn(void );
#line 279
static uint16_t CC2420ControlP$CC2420Config$getShortAddr(void );







static inline uint16_t CC2420ControlP$CC2420Config$getPanAddr(void );
#line 300
static inline error_t CC2420ControlP$CC2420Config$sync(void );
#line 332
static inline bool CC2420ControlP$CC2420Config$isAddressRecognitionEnabled(void );
#line 359
static inline bool CC2420ControlP$CC2420Config$isHwAutoAckDefault(void );






static inline bool CC2420ControlP$CC2420Config$isAutoAckEnabled(void );









static inline void CC2420ControlP$SyncResource$granted(void );
#line 390
static inline void CC2420ControlP$SpiResource$granted(void );




static inline void CC2420ControlP$RssiResource$granted(void );
#line 408
static inline void CC2420ControlP$StartupTimer$fired(void );









static inline void CC2420ControlP$InterruptCCA$fired(void );
#line 442
static inline void CC2420ControlP$sync$runTask(void );



static inline void CC2420ControlP$syncDone$runTask(void );









static void CC2420ControlP$writeFsctrl(void );
#line 474
static void CC2420ControlP$writeMdmctrl0(void );
#line 493
static void CC2420ControlP$writeId(void );
#line 510
static inline void CC2420ControlP$ReadRssi$default$readDone(error_t error, uint16_t data);
# 44 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/timer/HplAtm128TimerCtrl8.nc"
static Atm128_TIFR_t HplAtm128Timer1P$Timer0Ctrl$getInterruptFlag(void );
# 49 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
static void HplAtm128Timer1P$CompareA$fired(void );
# 51 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Capture.nc"
static void HplAtm128Timer1P$Capture$captured(HplAtm128Timer1P$Capture$size_type t);
# 49 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
static void HplAtm128Timer1P$CompareB$fired(void );
#line 49
static void HplAtm128Timer1P$CompareC$fired(void );
# 61 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
static void HplAtm128Timer1P$Timer$overflow(void );
# 49 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer1P.nc"
static inline uint16_t HplAtm128Timer1P$Timer$get(void );


static inline void HplAtm128Timer1P$Timer$set(uint16_t t);








static inline void HplAtm128Timer1P$Timer$setScale(uint8_t s);









static inline Atm128TimerCtrlCapture_t HplAtm128Timer1P$TimerCtrl$getCtrlCapture(void );









static inline uint16_t HplAtm128Timer1P$TimerCtrlCapture2int(Atm128TimerCtrlCapture_t x);






static inline void HplAtm128Timer1P$TimerCtrl$setCtrlCapture(Atm128_TCCR1B_t x);
#line 122
static inline void HplAtm128Timer1P$Capture$setEdge(bool up);



static inline void HplAtm128Timer1P$Capture$reset(void );
static inline void HplAtm128Timer1P$CompareA$reset(void );



static inline void HplAtm128Timer1P$Timer$start(void );
static inline void HplAtm128Timer1P$Capture$start(void );
static inline void HplAtm128Timer1P$CompareA$start(void );




static inline void HplAtm128Timer1P$Capture$stop(void );
static inline void HplAtm128Timer1P$CompareA$stop(void );




static inline bool HplAtm128Timer1P$Timer$test(void );
#line 183
static inline void HplAtm128Timer1P$CompareA$set(uint16_t t);
#line 195
void __vector_12(void ) __attribute((interrupt))   ;


static inline void HplAtm128Timer1P$CompareB$default$fired(void );
void __vector_13(void ) __attribute((interrupt))   ;


static inline void HplAtm128Timer1P$CompareC$default$fired(void );
void __vector_24(void ) __attribute((interrupt))   ;



void __vector_11(void ) __attribute((interrupt))   ;



void __vector_14(void ) __attribute((interrupt))   ;
# 95 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
static void /*InitOneP.InitOne*/Atm128TimerInitC$1$Timer$setScale(uint8_t scale);
#line 58
static void /*InitOneP.InitOne*/Atm128TimerInitC$1$Timer$set(/*InitOneP.InitOne*/Atm128TimerInitC$1$Timer$timer_size t);










static void /*InitOneP.InitOne*/Atm128TimerInitC$1$Timer$start(void );
# 42 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/timer/Atm128TimerInitC.nc"
static inline error_t /*InitOneP.InitOne*/Atm128TimerInitC$1$Init$init(void );








static inline void /*InitOneP.InitOne*/Atm128TimerInitC$1$Timer$overflow(void );
# 67 "/cygdrive/c/Dropbox/tinyos-2.x/tos/lib/timer/Alarm.nc"
static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$0$Alarm$fired(void );
# 53 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$0$HplAtm128Compare$reset(void );
#line 45
static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$0$HplAtm128Compare$set(/*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$0$HplAtm128Compare$size_type t);










static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$0$HplAtm128Compare$start(void );


static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$0$HplAtm128Compare$stop(void );
# 52 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
static /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$0$HplAtm128Timer$timer_size /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$0$HplAtm128Timer$get(void );
# 65 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/timer/Atm128AlarmC.nc"
static inline void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$0$Alarm$stop(void );








static inline void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$0$Alarm$startAt(/*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$0$timer_size t0, /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$0$timer_size dt);
#line 110
static inline void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$0$HplAtm128Compare$fired(void );






static inline void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$0$HplAtm128Timer$overflow(void );
# 71 "/cygdrive/c/Dropbox/tinyos-2.x/tos/lib/timer/Counter.nc"
static void /*CounterOne16C.NCounter*/Atm128CounterC$1$Counter$overflow(void );
# 78 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
static bool /*CounterOne16C.NCounter*/Atm128CounterC$1$Timer$test(void );
#line 52
static /*CounterOne16C.NCounter*/Atm128CounterC$1$Timer$timer_size /*CounterOne16C.NCounter*/Atm128CounterC$1$Timer$get(void );
# 41 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/timer/Atm128CounterC.nc"
static inline /*CounterOne16C.NCounter*/Atm128CounterC$1$timer_size /*CounterOne16C.NCounter*/Atm128CounterC$1$Counter$get(void );




static inline bool /*CounterOne16C.NCounter*/Atm128CounterC$1$Counter$isOverflowPending(void );









static inline void /*CounterOne16C.NCounter*/Atm128CounterC$1$Timer$overflow(void );
# 53 "/cygdrive/c/Dropbox/tinyos-2.x/tos/lib/timer/Counter.nc"
static /*Counter32khz32C.Transform32*/TransformCounterC$1$CounterFrom$size_type /*Counter32khz32C.Transform32*/TransformCounterC$1$CounterFrom$get(void );






static bool /*Counter32khz32C.Transform32*/TransformCounterC$1$CounterFrom$isOverflowPending(void );










static void /*Counter32khz32C.Transform32*/TransformCounterC$1$Counter$overflow(void );
# 56 "/cygdrive/c/Dropbox/tinyos-2.x/tos/lib/timer/TransformCounterC.nc"
/*Counter32khz32C.Transform32*/TransformCounterC$1$upper_count_type /*Counter32khz32C.Transform32*/TransformCounterC$1$m_upper;

enum /*Counter32khz32C.Transform32*/TransformCounterC$1$__nesc_unnamed4372 {

  TransformCounterC$1$LOW_SHIFT_RIGHT = 0, 
  TransformCounterC$1$HIGH_SHIFT_LEFT = 8 * sizeof(/*Counter32khz32C.Transform32*/TransformCounterC$1$from_size_type ) - /*Counter32khz32C.Transform32*/TransformCounterC$1$LOW_SHIFT_RIGHT, 
  TransformCounterC$1$NUM_UPPER_BITS = 8 * sizeof(/*Counter32khz32C.Transform32*/TransformCounterC$1$to_size_type ) - 8 * sizeof(/*Counter32khz32C.Transform32*/TransformCounterC$1$from_size_type ) + 0, 



  TransformCounterC$1$OVERFLOW_MASK = /*Counter32khz32C.Transform32*/TransformCounterC$1$NUM_UPPER_BITS ? ((/*Counter32khz32C.Transform32*/TransformCounterC$1$upper_count_type )2 << (/*Counter32khz32C.Transform32*/TransformCounterC$1$NUM_UPPER_BITS - 1)) - 1 : 0
};

static /*Counter32khz32C.Transform32*/TransformCounterC$1$to_size_type /*Counter32khz32C.Transform32*/TransformCounterC$1$Counter$get(void );
#line 122
static inline void /*Counter32khz32C.Transform32*/TransformCounterC$1$CounterFrom$overflow(void );
# 67 "/cygdrive/c/Dropbox/tinyos-2.x/tos/lib/timer/Alarm.nc"
static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$Alarm$fired(void );
#line 92
static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$AlarmFrom$startAt(/*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$AlarmFrom$size_type t0, /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$AlarmFrom$size_type dt);
#line 62
static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$AlarmFrom$stop(void );
# 53 "/cygdrive/c/Dropbox/tinyos-2.x/tos/lib/timer/Counter.nc"
static /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$Counter$size_type /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$Counter$get(void );
# 66 "/cygdrive/c/Dropbox/tinyos-2.x/tos/lib/timer/TransformAlarmC.nc"
/*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$to_size_type /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$m_t0;
/*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$to_size_type /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$m_dt;

enum /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$__nesc_unnamed4373 {

  TransformAlarmC$0$MAX_DELAY_LOG2 = 8 * sizeof(/*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$from_size_type ) - 1 - 0, 
  TransformAlarmC$0$MAX_DELAY = (/*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$to_size_type )1 << /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$MAX_DELAY_LOG2
};

static inline /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$to_size_type /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$Alarm$getNow(void );
#line 91
static inline void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$Alarm$stop(void );




static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$set_alarm(void );
#line 136
static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$Alarm$startAt(/*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$to_size_type t0, /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$to_size_type dt);









static inline void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$Alarm$start(/*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$to_size_type dt);




static inline void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$AlarmFrom$fired(void );
#line 166
static inline void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$Counter$overflow(void );
# 22 "/cygdrive/c/Dropbox/tinyos-2.x/tos/system/NoInitC.nc"
static inline error_t NoInitC$Init$init(void );
# 50 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/GpioCapture.nc"
static void /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC$0$Capture$captured(uint16_t time);
# 79 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Capture.nc"
static void /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC$0$Atm128Capture$setEdge(bool up);
#line 55
static void /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC$0$Atm128Capture$reset(void );


static void /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC$0$Atm128Capture$start(void );


static void /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC$0$Atm128Capture$stop(void );
# 42 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/timer/Atm128GpioCaptureC.nc"
static error_t /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC$0$enableCapture(uint8_t mode);









static inline error_t /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC$0$Capture$captureRisingEdge(void );



static inline error_t /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC$0$Capture$captureFallingEdge(void );



static inline void /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC$0$Capture$disable(void );



static inline void /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC$0$Atm128Capture$captured(uint16_t time);
# 45 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
static void /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC$0$Atm128Interrupt$clear(void );
#line 40
static void /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC$0$Atm128Interrupt$disable(void );
#line 59
static void /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC$0$Atm128Interrupt$edge(bool low_to_high);
#line 35
static void /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC$0$Atm128Interrupt$enable(void );
# 57 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/GpioInterrupt.nc"
static void /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC$0$Interrupt$fired(void );
# 15 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/pins/Atm128GpioInterruptC.nc"
static inline error_t /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC$0$enable(bool rising);
#line 29
static inline error_t /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC$0$Interrupt$enableFallingEdge(void );



static inline error_t /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC$0$Interrupt$disable(void );




static inline void /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC$0$Atm128Interrupt$fired(void );
# 41 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptSig.nc"
static void HplAtm128InterruptSigP$IntSig6$fired(void );
#line 41
static void HplAtm128InterruptSigP$IntSig1$fired(void );
#line 41
static void HplAtm128InterruptSigP$IntSig4$fired(void );
#line 41
static void HplAtm128InterruptSigP$IntSig7$fired(void );
#line 41
static void HplAtm128InterruptSigP$IntSig2$fired(void );
#line 41
static void HplAtm128InterruptSigP$IntSig5$fired(void );
#line 41
static void HplAtm128InterruptSigP$IntSig0$fired(void );
#line 41
static void HplAtm128InterruptSigP$IntSig3$fired(void );
# 46 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptSigP.nc"
void __vector_1(void ) __attribute((signal))   ;




void __vector_2(void ) __attribute((signal))   ;




void __vector_3(void ) __attribute((signal))   ;




void __vector_4(void ) __attribute((signal))   ;




void __vector_5(void ) __attribute((signal))   ;




void __vector_6(void ) __attribute((signal))   ;




void __vector_7(void ) __attribute((signal))   ;




void __vector_8(void ) __attribute((signal))   ;
# 64 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
static void /*HplAtm128InterruptC.IntPin0*/HplAtm128InterruptPinP$0$Irq$fired(void );
# 61 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static inline void /*HplAtm128InterruptC.IntPin0*/HplAtm128InterruptPinP$0$IrqSignal$fired(void );

static inline void /*HplAtm128InterruptC.IntPin0*/HplAtm128InterruptPinP$0$Irq$default$fired(void );
# 64 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
static void /*HplAtm128InterruptC.IntPin1*/HplAtm128InterruptPinP$1$Irq$fired(void );
# 61 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static inline void /*HplAtm128InterruptC.IntPin1*/HplAtm128InterruptPinP$1$IrqSignal$fired(void );

static inline void /*HplAtm128InterruptC.IntPin1*/HplAtm128InterruptPinP$1$Irq$default$fired(void );
# 64 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
static void /*HplAtm128InterruptC.IntPin2*/HplAtm128InterruptPinP$2$Irq$fired(void );
# 41 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static __inline void /*HplAtm128InterruptC.IntPin2*/HplAtm128InterruptPinP$2$Irq$clear(void );
static __inline void /*HplAtm128InterruptC.IntPin2*/HplAtm128InterruptPinP$2$Irq$enable(void );
static __inline void /*HplAtm128InterruptC.IntPin2*/HplAtm128InterruptPinP$2$Irq$disable(void );



static __inline void /*HplAtm128InterruptC.IntPin2*/HplAtm128InterruptPinP$2$Irq$edge(bool low_to_high);
#line 61
static inline void /*HplAtm128InterruptC.IntPin2*/HplAtm128InterruptPinP$2$IrqSignal$fired(void );
# 64 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
static void /*HplAtm128InterruptC.IntPin3*/HplAtm128InterruptPinP$3$Irq$fired(void );
# 61 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static inline void /*HplAtm128InterruptC.IntPin3*/HplAtm128InterruptPinP$3$IrqSignal$fired(void );

static inline void /*HplAtm128InterruptC.IntPin3*/HplAtm128InterruptPinP$3$Irq$default$fired(void );
# 64 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
static void /*HplAtm128InterruptC.IntPin4*/HplAtm128InterruptPinP$4$Irq$fired(void );
# 61 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static inline void /*HplAtm128InterruptC.IntPin4*/HplAtm128InterruptPinP$4$IrqSignal$fired(void );

static inline void /*HplAtm128InterruptC.IntPin4*/HplAtm128InterruptPinP$4$Irq$default$fired(void );
# 64 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
static void /*HplAtm128InterruptC.IntPin5*/HplAtm128InterruptPinP$5$Irq$fired(void );
# 61 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static inline void /*HplAtm128InterruptC.IntPin5*/HplAtm128InterruptPinP$5$IrqSignal$fired(void );

static inline void /*HplAtm128InterruptC.IntPin5*/HplAtm128InterruptPinP$5$Irq$default$fired(void );
# 64 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
static void /*HplAtm128InterruptC.IntPin6*/HplAtm128InterruptPinP$6$Irq$fired(void );
# 41 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static __inline void /*HplAtm128InterruptC.IntPin6*/HplAtm128InterruptPinP$6$Irq$clear(void );
static __inline void /*HplAtm128InterruptC.IntPin6*/HplAtm128InterruptPinP$6$Irq$enable(void );
static __inline void /*HplAtm128InterruptC.IntPin6*/HplAtm128InterruptPinP$6$Irq$disable(void );



static __inline void /*HplAtm128InterruptC.IntPin6*/HplAtm128InterruptPinP$6$Irq$edge(bool low_to_high);
#line 61
static inline void /*HplAtm128InterruptC.IntPin6*/HplAtm128InterruptPinP$6$IrqSignal$fired(void );
# 64 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
static void /*HplAtm128InterruptC.IntPin7*/HplAtm128InterruptPinP$7$Irq$fired(void );
# 61 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static inline void /*HplAtm128InterruptC.IntPin7*/HplAtm128InterruptPinP$7$IrqSignal$fired(void );

static inline void /*HplAtm128InterruptC.IntPin7*/HplAtm128InterruptPinP$7$Irq$default$fired(void );
# 32 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/GeneralIO.nc"
static bool HplCC2420InterruptsP$CC_CCA$get(void );
# 57 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/GpioInterrupt.nc"
static void HplCC2420InterruptsP$CCA$fired(void );
# 56 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static error_t HplCC2420InterruptsP$CCATask$postTask(void );
# 69 "/cygdrive/c/Dropbox/tinyos-2.x/tos/platforms/micaz/chips/cc2420/HplCC2420InterruptsP.nc"
enum HplCC2420InterruptsP$__nesc_unnamed4374 {
#line 69
  HplCC2420InterruptsP$CCATask = 18U
};
#line 69
typedef int HplCC2420InterruptsP$__nesc_sillytask_CCATask[HplCC2420InterruptsP$CCATask];
#line 56
uint8_t HplCC2420InterruptsP$ccaWaitForState;

uint8_t HplCC2420InterruptsP$ccaLastState;

bool HplCC2420InterruptsP$ccaCheckDisabled = FALSE;








static inline void HplCC2420InterruptsP$CCATask$runTask(void );
#line 89
static inline error_t HplCC2420InterruptsP$CCA$enableRisingEdge(void );
#line 105
static inline error_t HplCC2420InterruptsP$CCA$disable(void );
# 59 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/SpiPacket.nc"
static error_t CC2420SpiP$SpiPacket$send(
#line 48
uint8_t * txBuf, 

uint8_t * rxBuf, 








uint16_t len);
# 91 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Fifo.nc"
static void CC2420SpiP$Fifo$writeDone(
# 46 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc"
uint8_t arg_0x7ded1280, 
# 91 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Fifo.nc"
uint8_t * data, uint8_t length, error_t error);
#line 71
static void CC2420SpiP$Fifo$readDone(
# 46 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc"
uint8_t arg_0x7ded1280, 
# 71 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Fifo.nc"
uint8_t * data, uint8_t length, error_t error);
# 24 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/cc2420/interfaces/ChipSpiResource.nc"
static void CC2420SpiP$ChipSpiResource$releasing(void );
# 34 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/SpiByte.nc"
static uint8_t CC2420SpiP$SpiByte$write(uint8_t tx);
# 56 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/State.nc"
static void CC2420SpiP$WorkingState$toIdle(void );




static bool CC2420SpiP$WorkingState$isIdle(void );
#line 45
static error_t CC2420SpiP$WorkingState$requestState(uint8_t reqState);
# 110 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/Resource.nc"
static error_t CC2420SpiP$SpiResource$release(void );
#line 87
static error_t CC2420SpiP$SpiResource$immediateRequest(void );
#line 78
static error_t CC2420SpiP$SpiResource$request(void );
#line 118
static bool CC2420SpiP$SpiResource$isOwner(void );
#line 92
static void CC2420SpiP$Resource$granted(
# 45 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc"
uint8_t arg_0x7ded2818);
# 56 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static error_t CC2420SpiP$grant$postTask(void );
# 88 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc"
enum CC2420SpiP$__nesc_unnamed4375 {
#line 88
  CC2420SpiP$grant = 19U
};
#line 88
typedef int CC2420SpiP$__nesc_sillytask_grant[CC2420SpiP$grant];
#line 63
enum CC2420SpiP$__nesc_unnamed4376 {
  CC2420SpiP$RESOURCE_COUNT = 5U, 
  CC2420SpiP$NO_HOLDER = 0xFF
};


enum CC2420SpiP$__nesc_unnamed4377 {
  CC2420SpiP$S_IDLE, 
  CC2420SpiP$S_BUSY
};


uint16_t CC2420SpiP$m_addr;


uint8_t CC2420SpiP$m_requests = 0;


uint8_t CC2420SpiP$m_holder = CC2420SpiP$NO_HOLDER;


bool CC2420SpiP$release;


static error_t CC2420SpiP$attemptRelease(void );







static inline void CC2420SpiP$ChipSpiResource$abortRelease(void );






static inline error_t CC2420SpiP$ChipSpiResource$attemptRelease(void );




static error_t CC2420SpiP$Resource$request(uint8_t id);
#line 126
static error_t CC2420SpiP$Resource$immediateRequest(uint8_t id);
#line 149
static error_t CC2420SpiP$Resource$release(uint8_t id);
#line 178
static inline uint8_t CC2420SpiP$Resource$isOwner(uint8_t id);





static inline void CC2420SpiP$SpiResource$granted(void );




static cc2420_status_t CC2420SpiP$Fifo$beginRead(uint8_t addr, uint8_t *data, 
uint8_t len);
#line 209
static inline error_t CC2420SpiP$Fifo$continueRead(uint8_t addr, uint8_t *data, 
uint8_t len);



static inline cc2420_status_t CC2420SpiP$Fifo$write(uint8_t addr, uint8_t *data, 
uint8_t len);
#line 260
static cc2420_status_t CC2420SpiP$Ram$write(uint16_t addr, uint8_t offset, 
uint8_t *data, 
uint8_t len);
#line 287
static inline cc2420_status_t CC2420SpiP$Reg$read(uint8_t addr, uint16_t *data);
#line 305
static cc2420_status_t CC2420SpiP$Reg$write(uint8_t addr, uint16_t data);
#line 318
static cc2420_status_t CC2420SpiP$Strobe$strobe(uint8_t addr);










static void CC2420SpiP$SpiPacket$sendDone(uint8_t *tx_buf, uint8_t *rx_buf, 
uint16_t len, error_t error);








static error_t CC2420SpiP$attemptRelease(void );
#line 358
static inline void CC2420SpiP$grant$runTask(void );








static inline void CC2420SpiP$Resource$default$granted(uint8_t id);


static inline void CC2420SpiP$Fifo$default$readDone(uint8_t addr, uint8_t *rx_buf, uint8_t rx_len, error_t error);


static inline void CC2420SpiP$Fifo$default$writeDone(uint8_t addr, uint8_t *tx_buf, uint8_t tx_len, error_t error);
# 74 "/cygdrive/c/Dropbox/tinyos-2.x/tos/system/StateImplP.nc"
uint8_t StateImplP$state[4U];

enum StateImplP$__nesc_unnamed4378 {
  StateImplP$S_IDLE = 0
};


static inline error_t StateImplP$Init$init(void );
#line 96
static error_t StateImplP$State$requestState(uint8_t id, uint8_t reqState);
#line 111
static inline void StateImplP$State$forceState(uint8_t id, uint8_t reqState);






static inline void StateImplP$State$toIdle(uint8_t id);







static inline bool StateImplP$State$isIdle(uint8_t id);






static bool StateImplP$State$isState(uint8_t id, uint8_t myState);
# 56 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static error_t Atm128SpiP$zeroTask$postTask(void );
# 71 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/SpiPacket.nc"
static void Atm128SpiP$SpiPacket$sendDone(
#line 64
uint8_t * txBuf, 
uint8_t * rxBuf, 





uint16_t len, 
error_t error);
# 110 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/Resource.nc"
static error_t Atm128SpiP$ResourceArbiter$release(
# 84 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/spi/Atm128SpiP.nc"
uint8_t arg_0x7de468b0);
# 87 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/Resource.nc"
static error_t Atm128SpiP$ResourceArbiter$immediateRequest(
# 84 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/spi/Atm128SpiP.nc"
uint8_t arg_0x7de468b0);
# 78 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/Resource.nc"
static error_t Atm128SpiP$ResourceArbiter$request(
# 84 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/spi/Atm128SpiP.nc"
uint8_t arg_0x7de468b0);
# 118 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/Resource.nc"
static bool Atm128SpiP$ResourceArbiter$isOwner(
# 84 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/spi/Atm128SpiP.nc"
uint8_t arg_0x7de468b0);
# 72 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/spi/Atm128Spi.nc"
static void Atm128SpiP$Spi$sleep(void );
#line 66
static void Atm128SpiP$Spi$initMaster(void );
#line 96
static void Atm128SpiP$Spi$enableInterrupt(bool enabled);
#line 80
static uint8_t Atm128SpiP$Spi$read(void );
#line 125
static void Atm128SpiP$Spi$setMasterDoubleSpeed(bool on);
#line 114
static void Atm128SpiP$Spi$setClock(uint8_t speed);
#line 108
static void Atm128SpiP$Spi$setClockPolarity(bool highWhenIdle);
#line 86
static void Atm128SpiP$Spi$write(uint8_t data);
#line 99
static void Atm128SpiP$Spi$enableSpi(bool busOn);
#line 111
static void Atm128SpiP$Spi$setClockPhase(bool sampleOnTrailing);
# 92 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/Resource.nc"
static void Atm128SpiP$Resource$granted(
# 80 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/spi/Atm128SpiP.nc"
uint8_t arg_0x7de4a9c8);
# 44 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/McuPowerState.nc"
static void Atm128SpiP$McuPowerState$update(void );
# 80 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/ArbiterInfo.nc"
static bool Atm128SpiP$ArbiterInfo$inUse(void );
# 207 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/spi/Atm128SpiP.nc"
enum Atm128SpiP$__nesc_unnamed4379 {
#line 207
  Atm128SpiP$zeroTask = 20U
};
#line 207
typedef int Atm128SpiP$__nesc_sillytask_zeroTask[Atm128SpiP$zeroTask];
#line 90
uint16_t Atm128SpiP$len;
uint8_t * Atm128SpiP$txBuffer;
uint8_t * Atm128SpiP$rxBuffer;
uint16_t Atm128SpiP$pos;

enum Atm128SpiP$__nesc_unnamed4380 {
  Atm128SpiP$SPI_IDLE, 
  Atm128SpiP$SPI_BUSY, 
  Atm128SpiP$SPI_ATOMIC_SIZE = 10
};





static void Atm128SpiP$startSpi(void );
#line 119
static inline void Atm128SpiP$stopSpi(void );







static uint8_t Atm128SpiP$SpiByte$write(uint8_t tx);
#line 162
static error_t Atm128SpiP$sendNextPart(void );
#line 207
static inline void Atm128SpiP$zeroTask$runTask(void );
#line 241
static error_t Atm128SpiP$SpiPacket$send(uint8_t *writeBuf, 
uint8_t *readBuf, 
uint16_t bufLen);
#line 265
static inline void Atm128SpiP$Spi$dataReady(uint8_t data);
#line 305
static inline error_t Atm128SpiP$Resource$immediateRequest(uint8_t id);







static inline error_t Atm128SpiP$Resource$request(uint8_t id);








static inline error_t Atm128SpiP$Resource$release(uint8_t id);









static inline uint8_t Atm128SpiP$Resource$isOwner(uint8_t id);



static inline void Atm128SpiP$ResourceArbiter$granted(uint8_t id);



static inline void Atm128SpiP$Resource$default$granted(uint8_t id);
# 33 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/GeneralIO.nc"
static void HplAtm128SpiP$MISO$makeInput(void );

static void HplAtm128SpiP$SCK$makeOutput(void );
# 44 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/McuPowerState.nc"
static void HplAtm128SpiP$Mcu$update(void );
# 92 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/spi/Atm128Spi.nc"
static void HplAtm128SpiP$SPI$dataReady(uint8_t data);
# 35 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/GeneralIO.nc"
static void HplAtm128SpiP$MOSI$makeOutput(void );
# 79 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/spi/HplAtm128SpiP.nc"
static inline void HplAtm128SpiP$SPI$initMaster(void );
#line 94
static inline void HplAtm128SpiP$SPI$sleep(void );



static inline uint8_t HplAtm128SpiP$SPI$read(void );
static inline void HplAtm128SpiP$SPI$write(uint8_t d);


void __vector_17(void ) __attribute((signal))   ;
#line 115
static void HplAtm128SpiP$SPI$enableInterrupt(bool enabled);
#line 130
static void HplAtm128SpiP$SPI$enableSpi(bool enabled);
#line 156
static inline void HplAtm128SpiP$SPI$setMasterBit(bool isMaster);
#line 169
static inline void HplAtm128SpiP$SPI$setClockPolarity(bool highWhenIdle);
#line 183
static inline void HplAtm128SpiP$SPI$setClockPhase(bool sampleOnTrailing);
#line 200
static inline void HplAtm128SpiP$SPI$setClock(uint8_t v);
#line 213
static inline void HplAtm128SpiP$SPI$setMasterDoubleSpeed(bool on);
# 39 "/cygdrive/c/Dropbox/tinyos-2.x/tos/system/FcfsResourceQueueC.nc"
enum /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$__nesc_unnamed4381 {
#line 39
  FcfsResourceQueueC$0$NO_ENTRY = 0xFF
};
uint8_t /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$resQ[1U];
uint8_t /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$qHead = /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$NO_ENTRY;
uint8_t /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$qTail = /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$NO_ENTRY;

static inline error_t /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$Init$init(void );




static inline bool /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$FcfsQueue$isEmpty(void );



static inline bool /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$FcfsQueue$isEnqueued(resource_client_id_t id);



static inline resource_client_id_t /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$FcfsQueue$dequeue(void );
#line 72
static inline error_t /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$FcfsQueue$enqueue(resource_client_id_t id);
# 43 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/ResourceRequested.nc"
static void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$ResourceRequested$requested(
# 52 "/cygdrive/c/Dropbox/tinyos-2.x/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x7dd87770);
# 51 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/ResourceRequested.nc"
static void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$ResourceRequested$immediateRequested(
# 52 "/cygdrive/c/Dropbox/tinyos-2.x/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x7dd87770);
# 55 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/ResourceConfigure.nc"
static void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$ResourceConfigure$unconfigure(
# 56 "/cygdrive/c/Dropbox/tinyos-2.x/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x7dd86430);
# 49 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/ResourceConfigure.nc"
static void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$ResourceConfigure$configure(
# 56 "/cygdrive/c/Dropbox/tinyos-2.x/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x7dd86430);
# 69 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/ResourceQueue.nc"
static error_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$Queue$enqueue(resource_client_id_t id);
#line 43
static bool /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$Queue$isEmpty(void );
#line 60
static resource_client_id_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$Queue$dequeue(void );
# 92 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/Resource.nc"
static void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$Resource$granted(
# 51 "/cygdrive/c/Dropbox/tinyos-2.x/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x7dd8acf8);
# 56 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static error_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$grantedTask$postTask(void );
# 69 "/cygdrive/c/Dropbox/tinyos-2.x/tos/system/SimpleArbiterP.nc"
enum /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$__nesc_unnamed4382 {
#line 69
  SimpleArbiterP$0$grantedTask = 21U
};
#line 69
typedef int /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$__nesc_sillytask_grantedTask[/*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$grantedTask];
#line 62
enum /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$__nesc_unnamed4383 {
#line 62
  SimpleArbiterP$0$RES_IDLE = 0, SimpleArbiterP$0$RES_GRANTING = 1, SimpleArbiterP$0$RES_BUSY = 2
};
#line 63
enum /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$__nesc_unnamed4384 {
#line 63
  SimpleArbiterP$0$NO_RES = 0xFF
};
uint8_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$state = /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$RES_IDLE;
uint8_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$resId = /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$NO_RES;
uint8_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$reqResId;



static inline error_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$Resource$request(uint8_t id);
#line 84
static inline error_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$Resource$immediateRequest(uint8_t id);
#line 97
static inline error_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$Resource$release(uint8_t id);
#line 123
static bool /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$ArbiterInfo$inUse(void );
#line 147
static uint8_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$Resource$isOwner(uint8_t id);






static inline void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$grantedTask$runTask(void );
#line 166
static inline void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$ResourceRequested$default$requested(uint8_t id);

static inline void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$ResourceRequested$default$immediateRequested(uint8_t id);

static inline void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$ResourceConfigure$default$configure(uint8_t id);

static inline void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$ResourceConfigure$default$unconfigure(uint8_t id);
# 35 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/GeneralIO.nc"
static void HplCC2420SpiP$SS$makeOutput(void );
#line 29
static void HplCC2420SpiP$SS$set(void );
static void HplCC2420SpiP$SS$clr(void );
# 92 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/Resource.nc"
static void HplCC2420SpiP$Resource$granted(void );
#line 110
static error_t HplCC2420SpiP$SubResource$release(void );
#line 87
static error_t HplCC2420SpiP$SubResource$immediateRequest(void );
#line 78
static error_t HplCC2420SpiP$SubResource$request(void );
#line 118
static bool HplCC2420SpiP$SubResource$isOwner(void );
# 51 "/cygdrive/c/Dropbox/tinyos-2.x/tos/platforms/micaz/chips/cc2420/HplCC2420SpiP.nc"
static inline error_t HplCC2420SpiP$Resource$request(void );




static inline error_t HplCC2420SpiP$Resource$immediateRequest(void );










static inline void HplCC2420SpiP$SubResource$granted(void );







static inline error_t HplCC2420SpiP$Resource$release(void );







static inline bool HplCC2420SpiP$Resource$isOwner(void );
# 51 "/cygdrive/c/Dropbox/tinyos-2.x/tos/system/ActiveMessageAddressC.nc"
am_addr_t ActiveMessageAddressC$addr = TOS_AM_ADDRESS;


am_group_t ActiveMessageAddressC$group = TOS_AM_GROUP;






static inline am_addr_t ActiveMessageAddressC$ActiveMessageAddress$amAddress(void );
#line 82
static inline am_group_t ActiveMessageAddressC$ActiveMessageAddress$amGroup(void );
#line 95
static am_addr_t ActiveMessageAddressC$amAddress(void );
# 81 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/cc2420/interfaces/RadioBackoff.nc"
static void CC2420TransmitP$RadioBackoff$requestInitialBackoff(message_t * msg);






static void CC2420TransmitP$RadioBackoff$requestCongestionBackoff(message_t * msg);
# 59 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/PacketTimeStamp.nc"
static void CC2420TransmitP$PacketTimeStamp$clear(
#line 55
message_t * msg);
#line 67
static void CC2420TransmitP$PacketTimeStamp$set(
#line 62
message_t * msg, 




CC2420TransmitP$PacketTimeStamp$size_type value);
# 45 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Strobe.nc"
static cc2420_status_t CC2420TransmitP$STXONCCA$strobe(void );
# 43 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/GpioCapture.nc"
static error_t CC2420TransmitP$CaptureSFD$captureFallingEdge(void );
#line 55
static void CC2420TransmitP$CaptureSFD$disable(void );
#line 42
static error_t CC2420TransmitP$CaptureSFD$captureRisingEdge(void );
# 98 "/cygdrive/c/Dropbox/tinyos-2.x/tos/lib/timer/Alarm.nc"
static CC2420TransmitP$BackoffTimer$size_type CC2420TransmitP$BackoffTimer$getNow(void );
#line 55
static void CC2420TransmitP$BackoffTimer$start(CC2420TransmitP$BackoffTimer$size_type dt);






static void CC2420TransmitP$BackoffTimer$stop(void );
# 63 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Ram.nc"
static cc2420_status_t CC2420TransmitP$TXFIFO_RAM$write(uint8_t offset, uint8_t * data, uint8_t length);
# 55 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Register.nc"
static cc2420_status_t CC2420TransmitP$TXCTRL$write(uint16_t data);
# 55 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Receive.nc"
static void CC2420TransmitP$CC2420Receive$sfd_dropped(void );
#line 49
static void CC2420TransmitP$CC2420Receive$sfd(uint32_t time);
# 73 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Transmit.nc"
static void CC2420TransmitP$Send$sendDone(message_t * p_msg, error_t error);
# 31 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/cc2420/interfaces/ChipSpiResource.nc"
static void CC2420TransmitP$ChipSpiResource$abortRelease(void );







static error_t CC2420TransmitP$ChipSpiResource$attemptRelease(void );
# 45 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Strobe.nc"
static cc2420_status_t CC2420TransmitP$SFLUSHTX$strobe(void );
# 35 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/GeneralIO.nc"
static void CC2420TransmitP$CSN$makeOutput(void );
#line 29
static void CC2420TransmitP$CSN$set(void );
static void CC2420TransmitP$CSN$clr(void );
# 42 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420PacketBody.nc"
static cc2420_header_t * CC2420TransmitP$CC2420PacketBody$getHeader(message_t * msg);




static cc2420_metadata_t * CC2420TransmitP$CC2420PacketBody$getMetadata(message_t * msg);
# 47 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/cc2420/interfaces/PacketTimeSyncOffset.nc"
static uint8_t CC2420TransmitP$PacketTimeSyncOffset$get(
#line 42
message_t * msg);
#line 39
static bool CC2420TransmitP$PacketTimeSyncOffset$isSet(
#line 35
message_t * msg);
# 110 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/Resource.nc"
static error_t CC2420TransmitP$SpiResource$release(void );
#line 87
static error_t CC2420TransmitP$SpiResource$immediateRequest(void );
#line 78
static error_t CC2420TransmitP$SpiResource$request(void );
# 33 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/GeneralIO.nc"
static void CC2420TransmitP$CCA$makeInput(void );
#line 32
static bool CC2420TransmitP$CCA$get(void );
# 45 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Strobe.nc"
static cc2420_status_t CC2420TransmitP$SNOP$strobe(void );
# 33 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/GeneralIO.nc"
static void CC2420TransmitP$SFD$makeInput(void );
#line 32
static bool CC2420TransmitP$SFD$get(void );
# 82 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Fifo.nc"
static cc2420_status_t CC2420TransmitP$TXFIFO$write(uint8_t * data, uint8_t length);
# 45 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Strobe.nc"
static cc2420_status_t CC2420TransmitP$STXON$strobe(void );
# 90 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/cc2420/transmit/CC2420TransmitP.nc"
#line 80
typedef enum CC2420TransmitP$__nesc_unnamed4385 {
  CC2420TransmitP$S_STOPPED, 
  CC2420TransmitP$S_STARTED, 
  CC2420TransmitP$S_LOAD, 
  CC2420TransmitP$S_SAMPLE_CCA, 
  CC2420TransmitP$S_BEGIN_TRANSMIT, 
  CC2420TransmitP$S_SFD, 
  CC2420TransmitP$S_EFD, 
  CC2420TransmitP$S_ACK_WAIT, 
  CC2420TransmitP$S_CANCEL
} CC2420TransmitP$cc2420_transmit_state_t;





enum CC2420TransmitP$__nesc_unnamed4386 {
  CC2420TransmitP$CC2420_ABORT_PERIOD = 320
};

message_t * CC2420TransmitP$m_msg;

bool CC2420TransmitP$m_cca;

uint8_t CC2420TransmitP$m_tx_power;

CC2420TransmitP$cc2420_transmit_state_t CC2420TransmitP$m_state = CC2420TransmitP$S_STOPPED;

bool CC2420TransmitP$m_receiving = FALSE;

uint16_t CC2420TransmitP$m_prev_time;


bool CC2420TransmitP$sfdHigh;


bool CC2420TransmitP$abortSpiRelease;


int8_t CC2420TransmitP$totalCcaChecks;


uint16_t CC2420TransmitP$myInitialBackoff;


uint16_t CC2420TransmitP$myCongestionBackoff;



static inline error_t CC2420TransmitP$send(message_t * p_msg, bool cca);

static void CC2420TransmitP$loadTXFIFO(void );
static void CC2420TransmitP$attemptSend(void );
static void CC2420TransmitP$congestionBackoff(void );
static error_t CC2420TransmitP$acquireSpiResource(void );
static inline error_t CC2420TransmitP$releaseSpiResource(void );
static void CC2420TransmitP$signalDone(error_t err);



static inline error_t CC2420TransmitP$Init$init(void );







static inline error_t CC2420TransmitP$StdControl$start(void );










static inline error_t CC2420TransmitP$StdControl$stop(void );
#line 172
static inline error_t CC2420TransmitP$Send$send(message_t * p_msg, bool useCca);
#line 223
static inline void CC2420TransmitP$RadioBackoff$setInitialBackoff(uint16_t backoffTime);








static inline void CC2420TransmitP$RadioBackoff$setCongestionBackoff(uint16_t backoffTime);







static __inline uint32_t CC2420TransmitP$time16to32(uint16_t time, uint32_t recent_time);
#line 261
static inline void CC2420TransmitP$CaptureSFD$captured(uint16_t time);
#line 342
static inline void CC2420TransmitP$ChipSpiResource$releasing(void );
#line 354
static inline void CC2420TransmitP$CC2420Receive$receive(uint8_t type, message_t *ack_msg);
#line 382
static inline void CC2420TransmitP$SpiResource$granted(void );
#line 420
static inline void CC2420TransmitP$TXFIFO$writeDone(uint8_t *tx_buf, uint8_t tx_len, 
error_t error);
#line 452
static inline void CC2420TransmitP$TXFIFO$readDone(uint8_t *tx_buf, uint8_t tx_len, 
error_t error);










static inline void CC2420TransmitP$BackoffTimer$fired(void );
#line 513
static inline error_t CC2420TransmitP$send(message_t * p_msg, bool cca);
#line 581
static void CC2420TransmitP$attemptSend(void );
#line 623
static void CC2420TransmitP$congestionBackoff(void );






static error_t CC2420TransmitP$acquireSpiResource(void );







static inline error_t CC2420TransmitP$releaseSpiResource(void );
#line 660
static void CC2420TransmitP$loadTXFIFO(void );
#line 685
static void CC2420TransmitP$signalDone(error_t err);
# 32 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/GeneralIO.nc"
static bool CC2420ReceiveP$FIFO$get(void );
# 86 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Config.nc"
static bool CC2420ReceiveP$CC2420Config$isAddressRecognitionEnabled(void );
#line 110
static bool CC2420ReceiveP$CC2420Config$isAutoAckEnabled(void );
#line 105
static bool CC2420ReceiveP$CC2420Config$isHwAutoAckDefault(void );
#line 64
static uint16_t CC2420ReceiveP$CC2420Config$getShortAddr(void );
# 56 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static error_t CC2420ReceiveP$receiveDone_task$postTask(void );
# 32 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/GeneralIO.nc"
static bool CC2420ReceiveP$FIFOP$get(void );
# 59 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/PacketTimeStamp.nc"
static void CC2420ReceiveP$PacketTimeStamp$clear(
#line 55
message_t * msg);
#line 67
static void CC2420ReceiveP$PacketTimeStamp$set(
#line 62
message_t * msg, 




CC2420ReceiveP$PacketTimeStamp$size_type value);
# 63 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Receive.nc"
static void CC2420ReceiveP$CC2420Receive$receive(uint8_t type, message_t * message);
# 45 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Strobe.nc"
static cc2420_status_t CC2420ReceiveP$SACK$strobe(void );
# 29 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/GeneralIO.nc"
static void CC2420ReceiveP$CSN$set(void );
static void CC2420ReceiveP$CSN$clr(void );
# 42 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420PacketBody.nc"
static cc2420_header_t * CC2420ReceiveP$CC2420PacketBody$getHeader(message_t * msg);




static cc2420_metadata_t * CC2420ReceiveP$CC2420PacketBody$getMetadata(message_t * msg);
# 67 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/Receive.nc"
static 
#line 63
message_t * 



CC2420ReceiveP$Receive$receive(
#line 60
message_t * msg, 
void * payload, 





uint8_t len);
# 110 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/Resource.nc"
static error_t CC2420ReceiveP$SpiResource$release(void );
#line 87
static error_t CC2420ReceiveP$SpiResource$immediateRequest(void );
#line 78
static error_t CC2420ReceiveP$SpiResource$request(void );
#line 118
static bool CC2420ReceiveP$SpiResource$isOwner(void );
# 62 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Fifo.nc"
static error_t CC2420ReceiveP$RXFIFO$continueRead(uint8_t * data, uint8_t length);
#line 51
static cc2420_status_t CC2420ReceiveP$RXFIFO$beginRead(uint8_t * data, uint8_t length);
# 50 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/GpioInterrupt.nc"
static error_t CC2420ReceiveP$InterruptFIFOP$disable(void );
#line 43
static error_t CC2420ReceiveP$InterruptFIFOP$enableFallingEdge(void );
# 45 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Strobe.nc"
static cc2420_status_t CC2420ReceiveP$SFLUSHRX$strobe(void );
# 115 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/cc2420/receive/CC2420ReceiveP.nc"
enum CC2420ReceiveP$__nesc_unnamed4387 {
#line 115
  CC2420ReceiveP$receiveDone_task = 22U
};
#line 115
typedef int CC2420ReceiveP$__nesc_sillytask_receiveDone_task[CC2420ReceiveP$receiveDone_task];
#line 76
#line 70
typedef enum CC2420ReceiveP$__nesc_unnamed4388 {
  CC2420ReceiveP$S_STOPPED, 
  CC2420ReceiveP$S_STARTED, 
  CC2420ReceiveP$S_RX_LENGTH, 
  CC2420ReceiveP$S_RX_FCF, 
  CC2420ReceiveP$S_RX_PAYLOAD
} CC2420ReceiveP$cc2420_receive_state_t;

enum CC2420ReceiveP$__nesc_unnamed4389 {
  CC2420ReceiveP$RXFIFO_SIZE = 128, 
  CC2420ReceiveP$TIMESTAMP_QUEUE_SIZE = 8, 
  CC2420ReceiveP$SACK_HEADER_LENGTH = 7
};

uint32_t CC2420ReceiveP$m_timestamp_queue[CC2420ReceiveP$TIMESTAMP_QUEUE_SIZE];

uint8_t CC2420ReceiveP$m_timestamp_head;

uint8_t CC2420ReceiveP$m_timestamp_size;


uint8_t CC2420ReceiveP$m_missed_packets;


bool CC2420ReceiveP$receivingPacket;


uint8_t CC2420ReceiveP$rxFrameLength;

uint8_t CC2420ReceiveP$m_bytes_left;

message_t * CC2420ReceiveP$m_p_rx_buf;

message_t CC2420ReceiveP$m_rx_buf;

CC2420ReceiveP$cc2420_receive_state_t CC2420ReceiveP$m_state;


static void CC2420ReceiveP$reset_state(void );
static void CC2420ReceiveP$beginReceive(void );
static void CC2420ReceiveP$receive(void );
static void CC2420ReceiveP$waitForNextPacket(void );
static void CC2420ReceiveP$flush(void );
static inline bool CC2420ReceiveP$passesAddressCheck(message_t * msg);




static inline error_t CC2420ReceiveP$Init$init(void );





static inline error_t CC2420ReceiveP$StdControl$start(void );









static inline error_t CC2420ReceiveP$StdControl$stop(void );
#line 149
static inline void CC2420ReceiveP$CC2420Receive$sfd(uint32_t time);








static inline void CC2420ReceiveP$CC2420Receive$sfd_dropped(void );
#line 175
static inline void CC2420ReceiveP$InterruptFIFOP$fired(void );










static inline void CC2420ReceiveP$SpiResource$granted(void );








static inline void CC2420ReceiveP$RXFIFO$readDone(uint8_t *rx_buf, uint8_t rx_len, 
error_t error);
#line 318
static inline void CC2420ReceiveP$RXFIFO$writeDone(uint8_t *tx_buf, uint8_t tx_len, error_t error);







static inline void CC2420ReceiveP$receiveDone_task$runTask(void );
#line 347
static inline void CC2420ReceiveP$CC2420Config$syncDone(error_t error);






static void CC2420ReceiveP$beginReceive(void );
#line 372
static void CC2420ReceiveP$flush(void );
#line 389
static void CC2420ReceiveP$receive(void );









static void CC2420ReceiveP$waitForNextPacket(void );
#line 437
static void CC2420ReceiveP$reset_state(void );










static inline bool CC2420ReceiveP$passesAddressCheck(message_t *msg);
# 90 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/cc2420/packet/CC2420PacketP.nc"
static inline int8_t CC2420PacketP$CC2420Packet$getRssi(message_t *p_msg);








static inline cc2420_header_t * CC2420PacketP$CC2420PacketBody$getHeader(message_t * msg);



static inline cc2420_metadata_t *CC2420PacketP$CC2420PacketBody$getMetadata(message_t *msg);
#line 122
static void CC2420PacketP$PacketTimeStamp32khz$clear(message_t *msg);





static inline void CC2420PacketP$PacketTimeStamp32khz$set(message_t *msg, uint32_t value);
#line 158
static inline bool CC2420PacketP$PacketTimeSyncOffset$isSet(message_t *msg);








static uint8_t CC2420PacketP$PacketTimeSyncOffset$get(message_t *msg);
# 47 "/cygdrive/c/Dropbox/tinyos-2.x/tos/lib/timer/CounterToLocalTimeC.nc"
static inline void /*CC2420PacketC.CounterToLocalTimeC*/CounterToLocalTimeC$1$Counter$overflow(void );
# 41 "/cygdrive/c/Dropbox/tinyos-2.x/tos/system/RandomMlcgC.nc"
uint32_t RandomMlcgC$seed;


static inline error_t RandomMlcgC$Init$init(void );
#line 58
static uint32_t RandomMlcgC$Random$rand32(void );
#line 78
static inline uint16_t RandomMlcgC$Random$rand16(void );
# 64 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/Send.nc"
static error_t UniqueSendP$SubSend$send(
#line 56
message_t * msg, 







uint8_t len);
#line 114
static 
#line 112
void * 

UniqueSendP$SubSend$getPayload(
#line 111
message_t * msg, 


uint8_t len);
#line 89
static void UniqueSendP$Send$sendDone(
#line 85
message_t * msg, 



error_t error);
# 41 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/Random.nc"
static uint16_t UniqueSendP$Random$rand16(void );
# 42 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420PacketBody.nc"
static cc2420_header_t * UniqueSendP$CC2420PacketBody$getHeader(message_t * msg);
# 56 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/State.nc"
static void UniqueSendP$State$toIdle(void );
#line 45
static error_t UniqueSendP$State$requestState(uint8_t reqState);
# 54 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/cc2420/unique/UniqueSendP.nc"
uint8_t UniqueSendP$localSendId;

enum UniqueSendP$__nesc_unnamed4390 {
  UniqueSendP$S_IDLE, 
  UniqueSendP$S_SENDING
};


static inline error_t UniqueSendP$Init$init(void );
#line 75
static inline error_t UniqueSendP$Send$send(message_t *msg, uint8_t len);
#line 99
static inline void *UniqueSendP$Send$getPayload(message_t *msg, uint8_t len);




static inline void UniqueSendP$SubSend$sendDone(message_t *msg, error_t error);
# 67 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/Receive.nc"
static 
#line 63
message_t * 



UniqueReceiveP$Receive$receive(
#line 60
message_t * msg, 
void * payload, 





uint8_t len);
# 42 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420PacketBody.nc"
static cc2420_header_t * UniqueReceiveP$CC2420PacketBody$getHeader(message_t * msg);
# 67 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/Receive.nc"
static 
#line 63
message_t * 



UniqueReceiveP$DuplicateReceive$receive(
#line 60
message_t * msg, 
void * payload, 





uint8_t len);
# 59 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/cc2420/unique/UniqueReceiveP.nc"
#line 56
struct UniqueReceiveP$__nesc_unnamed4391 {
  am_addr_t source;
  uint8_t dsn;
} UniqueReceiveP$receivedMessages[4];

uint8_t UniqueReceiveP$writeIndex = 0;


uint8_t UniqueReceiveP$recycleSourceElement;

enum UniqueReceiveP$__nesc_unnamed4392 {
  UniqueReceiveP$INVALID_ELEMENT = 0xFF
};


static inline error_t UniqueReceiveP$Init$init(void );









static inline bool UniqueReceiveP$hasSeen(uint16_t msgSource, uint8_t msgDsn);
static inline void UniqueReceiveP$insert(uint16_t msgSource, uint8_t msgDsn);


static inline message_t *UniqueReceiveP$SubReceive$receive(message_t *msg, void *payload, 
uint8_t len);
#line 111
static inline bool UniqueReceiveP$hasSeen(uint16_t msgSource, uint8_t msgDsn);
#line 137
static inline void UniqueReceiveP$insert(uint16_t msgSource, uint8_t msgDsn);
#line 158
static inline message_t *UniqueReceiveP$DuplicateReceive$default$receive(message_t *msg, void *payload, uint8_t len);
# 64 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/Send.nc"
static error_t CC2420TinyosNetworkP$SubSend$send(
#line 56
message_t * msg, 







uint8_t len);
#line 114
static 
#line 112
void * 

CC2420TinyosNetworkP$SubSend$getPayload(
#line 111
message_t * msg, 


uint8_t len);
#line 89
static void CC2420TinyosNetworkP$Send$sendDone(
#line 85
message_t * msg, 



error_t error);
# 67 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/Receive.nc"
static 
#line 63
message_t * 



CC2420TinyosNetworkP$NonTinyosReceive$receive(
# 48 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/cc2420/lowpan/CC2420TinyosNetworkP.nc"
uint8_t arg_0x7db201b0, 
# 60 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
# 42 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420PacketBody.nc"
static cc2420_header_t * CC2420TinyosNetworkP$CC2420PacketBody$getHeader(message_t * msg);
# 67 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/Receive.nc"
static 
#line 63
message_t * 



CC2420TinyosNetworkP$Receive$receive(
#line 60
message_t * msg, 
void * payload, 





uint8_t len);
# 61 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/cc2420/lowpan/CC2420TinyosNetworkP.nc"
static inline error_t CC2420TinyosNetworkP$Send$send(message_t *msg, uint8_t len);
#line 74
static inline void *CC2420TinyosNetworkP$Send$getPayload(message_t *msg, uint8_t len);




static inline void CC2420TinyosNetworkP$SubSend$sendDone(message_t *msg, error_t error);




static inline message_t *CC2420TinyosNetworkP$SubReceive$receive(message_t *msg, void *payload, uint8_t len);









static inline message_t *CC2420TinyosNetworkP$NonTinyosReceive$default$receive(uint8_t networkId, message_t *msg, void *payload, uint8_t len);
# 99 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/AMSend.nc"
static void /*BlinkToRadioAppC.AMSenderC.AMQueueEntryP*/AMQueueEntryP$1$AMSend$sendDone(
#line 92
message_t * msg, 






error_t error);
# 64 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/Send.nc"
static error_t /*BlinkToRadioAppC.AMSenderC.AMQueueEntryP*/AMQueueEntryP$1$Send$send(
#line 56
message_t * msg, 







uint8_t len);
# 92 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/AMPacket.nc"
static void /*BlinkToRadioAppC.AMSenderC.AMQueueEntryP*/AMQueueEntryP$1$AMPacket$setDestination(
#line 88
message_t * amsg, 



am_addr_t addr);
#line 151
static void /*BlinkToRadioAppC.AMSenderC.AMQueueEntryP*/AMQueueEntryP$1$AMPacket$setType(
#line 147
message_t * amsg, 



am_id_t t);
# 45 "/cygdrive/c/Dropbox/tinyos-2.x/tos/system/AMQueueEntryP.nc"
static inline error_t /*BlinkToRadioAppC.AMSenderC.AMQueueEntryP*/AMQueueEntryP$1$AMSend$send(am_addr_t dest, 
message_t *msg, 
uint8_t len);









static inline void /*BlinkToRadioAppC.AMSenderC.AMQueueEntryP*/AMQueueEntryP$1$Send$sendDone(message_t *m, error_t err);
# 69 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/AMSend.nc"
static error_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$1$AMSend$send(
# 40 "/cygdrive/c/Dropbox/tinyos-2.x/tos/system/AMQueueImplP.nc"
am_id_t arg_0x7e7050c0, 
# 69 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/AMSend.nc"
am_addr_t addr, 
#line 60
message_t * msg, 








uint8_t len);
# 89 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/Send.nc"
static void /*AMQueueP.AMQueueImplP*/AMQueueImplP$1$Send$sendDone(
# 38 "/cygdrive/c/Dropbox/tinyos-2.x/tos/system/AMQueueImplP.nc"
uint8_t arg_0x7e7066b0, 
# 85 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/Send.nc"
message_t * msg, 



error_t error);
# 67 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/Packet.nc"
static uint8_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$1$Packet$payloadLength(
#line 63
message_t * msg);
#line 83
static void /*AMQueueP.AMQueueImplP*/AMQueueImplP$1$Packet$setPayloadLength(
#line 79
message_t * msg, 



uint8_t len);
# 56 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static error_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$1$errorTask$postTask(void );
# 67 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/AMPacket.nc"
static am_addr_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$1$AMPacket$destination(
#line 63
message_t * amsg);
#line 136
static am_id_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$1$AMPacket$type(
#line 132
message_t * amsg);
# 118 "/cygdrive/c/Dropbox/tinyos-2.x/tos/system/AMQueueImplP.nc"
enum /*AMQueueP.AMQueueImplP*/AMQueueImplP$1$__nesc_unnamed4393 {
#line 118
  AMQueueImplP$1$CancelTask = 23U
};
#line 118
typedef int /*AMQueueP.AMQueueImplP*/AMQueueImplP$1$__nesc_sillytask_CancelTask[/*AMQueueP.AMQueueImplP*/AMQueueImplP$1$CancelTask];
#line 161
enum /*AMQueueP.AMQueueImplP*/AMQueueImplP$1$__nesc_unnamed4394 {
#line 161
  AMQueueImplP$1$errorTask = 24U
};
#line 161
typedef int /*AMQueueP.AMQueueImplP*/AMQueueImplP$1$__nesc_sillytask_errorTask[/*AMQueueP.AMQueueImplP*/AMQueueImplP$1$errorTask];
#line 49
#line 47
typedef struct /*AMQueueP.AMQueueImplP*/AMQueueImplP$1$__nesc_unnamed4395 {
  message_t * msg;
} /*AMQueueP.AMQueueImplP*/AMQueueImplP$1$queue_entry_t;

uint8_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$1$current = 1;
/*AMQueueP.AMQueueImplP*/AMQueueImplP$1$queue_entry_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$1$queue[1];
uint8_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$1$cancelMask[1 / 8 + 1];

static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP$1$tryToSend(void );

static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP$1$nextPacket(void );
#line 82
static inline error_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$1$Send$send(uint8_t clientId, message_t *msg, 
uint8_t len);
#line 118
static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP$1$CancelTask$runTask(void );
#line 155
static void /*AMQueueP.AMQueueImplP*/AMQueueImplP$1$sendDone(uint8_t last, message_t * msg, error_t err);





static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP$1$errorTask$runTask(void );




static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP$1$tryToSend(void );
#line 181
static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP$1$AMSend$sendDone(am_id_t id, message_t *msg, error_t err);
#line 207
static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP$1$Send$default$sendDone(uint8_t id, message_t *msg, error_t err);
# 56 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static error_t BlockStorageP$erasetask$postTask(void );
# 155 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/at45db/At45db.nc"
static void BlockStorageP$At45db$read(at45page_t page, at45pageoffset_t offset, 
void * data, at45pageoffset_t n);
#line 100
static void BlockStorageP$At45db$erase(at45page_t page, uint8_t eraseKind);
#line 120
static void BlockStorageP$At45db$syncAll(void );
#line 62
static void BlockStorageP$At45db$write(at45page_t page, at45pageoffset_t offset, 
void * data, at45pageoffset_t n);
#line 176
static void BlockStorageP$At45db$computeCrc(at45page_t page, at45pageoffset_t offset, 
at45pageoffset_t n, uint16_t baseCrc);
# 112 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/BlockWrite.nc"
static void BlockStorageP$BlockWrite$syncDone(
# 55 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/at45db/BlockStorageP.nc"
uint8_t arg_0x7dab6d28, 
# 112 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/BlockWrite.nc"
error_t error);
#line 71
static void BlockStorageP$BlockWrite$writeDone(
# 55 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/at45db/BlockStorageP.nc"
uint8_t arg_0x7dab6d28, 
# 71 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/BlockWrite.nc"
storage_addr_t addr, 
#line 66
void * buf, 




storage_len_t len, 
error_t error);
#line 91
static void BlockStorageP$BlockWrite$eraseDone(
# 55 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/at45db/BlockStorageP.nc"
uint8_t arg_0x7dab6d28, 
# 91 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/BlockWrite.nc"
error_t error);
# 95 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/BlockRead.nc"
static void BlockStorageP$BlockRead$computeCrcDone(
# 56 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/at45db/BlockStorageP.nc"
uint8_t arg_0x7dab3830, 
# 95 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/BlockRead.nc"
storage_addr_t addr, storage_len_t len, 
uint16_t crc, error_t error);
#line 67
static void BlockStorageP$BlockRead$readDone(
# 56 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/at45db/BlockStorageP.nc"
uint8_t arg_0x7dab3830, 
# 67 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/BlockRead.nc"
storage_addr_t addr, 
#line 62
void * buf, 




storage_len_t len, 
error_t error);
# 30 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/at45db/At45dbBlockConfig.nc"
static int BlockStorageP$BConfig$flipped(
# 62 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/at45db/BlockStorageP.nc"
uint8_t arg_0x7da998d8);
# 24 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/at45db/At45dbBlockConfig.nc"
static int BlockStorageP$BConfig$isConfig(
# 62 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/at45db/BlockStorageP.nc"
uint8_t arg_0x7da998d8);
# 37 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/at45db/At45dbBlockConfig.nc"
static int BlockStorageP$BConfig$writeHook(
# 62 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/at45db/BlockStorageP.nc"
uint8_t arg_0x7da998d8);
# 30 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/at45db/At45dbVolume.nc"
static at45page_t BlockStorageP$At45dbVolume$volumeSize(
# 60 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/at45db/BlockStorageP.nc"
uint8_t arg_0x7daa12a8);
# 24 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/at45db/At45dbVolume.nc"
static at45page_t BlockStorageP$At45dbVolume$remap(
# 60 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/at45db/BlockStorageP.nc"
uint8_t arg_0x7daa12a8, 
# 24 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/at45db/At45dbVolume.nc"
at45page_t volumePage);
# 110 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/Resource.nc"
static error_t BlockStorageP$Resource$release(
# 61 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/at45db/BlockStorageP.nc"
uint8_t arg_0x7daa1a08);
# 78 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/Resource.nc"
static error_t BlockStorageP$Resource$request(
# 61 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/at45db/BlockStorageP.nc"
uint8_t arg_0x7daa1a08);
#line 147
enum BlockStorageP$__nesc_unnamed4396 {
#line 147
  BlockStorageP$erasetask = 25U
};
#line 147
typedef int BlockStorageP$__nesc_sillytask_erasetask[BlockStorageP$erasetask];
#line 87
enum BlockStorageP$__nesc_unnamed4397 {
  BlockStorageP$R_IDLE, 
  BlockStorageP$R_WRITE, 
  BlockStorageP$R_ERASE, 
  BlockStorageP$R_SYNC, 
  BlockStorageP$R_READ, 
  BlockStorageP$R_CRC
};

enum BlockStorageP$__nesc_unnamed4398 {
  BlockStorageP$N = 1U + 0U, 
  BlockStorageP$NO_CLIENT = 0xff
};

uint8_t BlockStorageP$client = BlockStorageP$NO_CLIENT;
uint16_t BlockStorageP$blockpage = 0;
storage_addr_t BlockStorageP$currentOffset;







#line 105
struct BlockStorageP$__nesc_unnamed4399 {

  uint8_t request;
  uint8_t * buf;
  storage_addr_t addr;
  storage_len_t len;
} BlockStorageP$s[BlockStorageP$N];






static inline at45page_t BlockStorageP$pageRemap(at45page_t p);



static inline at45page_t BlockStorageP$BConfig$npages(uint8_t id);



static at45page_t BlockStorageP$BConfig$remap(uint8_t id, at45page_t page);





static inline int BlockStorageP$BConfig$default$isConfig(uint8_t blockId);



static inline int BlockStorageP$BConfig$default$flipped(uint8_t blockId);







static inline void BlockStorageP$eraseStart(void );
static inline void BlockStorageP$syncStart(void );
static inline void BlockStorageP$multipageStart(uint16_t crc);


static inline void BlockStorageP$startRequest(void );
#line 163
static void BlockStorageP$endRequest(error_t result, uint16_t crc);
#line 191
static error_t BlockStorageP$newRequest(uint8_t newState, uint8_t id, 
storage_addr_t addr, uint8_t * buf, storage_len_t len);
#line 217
static inline void BlockStorageP$Resource$granted(uint8_t blockId);
#line 231
static inline int BlockStorageP$BConfig$default$writeHook(uint8_t blockId);
#line 248
static void BlockStorageP$multipageContinue(uint16_t crc);
#line 282
static inline void BlockStorageP$multipageStart(uint16_t crc);




static inline void BlockStorageP$multipageOpDone(error_t result, uint16_t crc);
#line 303
static inline void BlockStorageP$eraseStart(void );



static inline void BlockStorageP$eraseEraseDone(error_t error);







static inline error_t BlockStorageP$BlockWrite$write(uint8_t id, storage_addr_t addr, void *buf, storage_len_t len);
#line 327
static inline void BlockStorageP$syncStart(void );



static inline void BlockStorageP$syncSyncDone(error_t error);







static inline error_t BlockStorageP$BlockRead$read(uint8_t id, storage_addr_t addr, void *buf, storage_len_t len);
#line 355
static inline storage_len_t BlockStorageP$BlockRead$getSize(uint8_t blockId);
#line 370
static inline void BlockStorageP$At45db$writeDone(error_t result);




static inline void BlockStorageP$At45db$readDone(error_t result);




static inline void BlockStorageP$At45db$computeCrcDone(error_t result, uint16_t newCrc);




static inline void BlockStorageP$At45db$eraseDone(error_t result);










static inline void BlockStorageP$At45db$syncDone(error_t result);




static inline void BlockStorageP$erasetask$runTask(void );




static inline void BlockStorageP$At45db$flushDone(error_t result);
static inline void BlockStorageP$At45db$copyPageDone(error_t error);
static inline void BlockStorageP$BlockWrite$default$writeDone(uint8_t id, storage_addr_t addr, void *buf, storage_len_t len, error_t result);
static inline void BlockStorageP$BlockWrite$default$eraseDone(uint8_t id, error_t result);
static inline void BlockStorageP$BlockWrite$default$syncDone(uint8_t id, error_t result);
static inline void BlockStorageP$BlockRead$default$readDone(uint8_t id, storage_addr_t addr, void *buf, storage_len_t len, error_t result);
static inline void BlockStorageP$BlockRead$default$computeCrcDone(uint8_t id, storage_addr_t addr, storage_len_t len, uint16_t x, error_t result);

static inline at45page_t BlockStorageP$At45dbVolume$default$remap(uint8_t id, at45page_t volumePage);
static inline at45page_t BlockStorageP$At45dbVolume$default$volumeSize(uint8_t id);
static inline error_t BlockStorageP$Resource$default$request(uint8_t id);
static inline error_t BlockStorageP$Resource$default$release(uint8_t id);
# 55 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/at45db/HplAt45db.nc"
static void At45dbP$HplAt45db$fill(uint8_t cmd, at45page_t page);
#line 41
static void At45dbP$HplAt45db$waitCompare(void );
#line 100
static void At45dbP$HplAt45db$erase(uint8_t cmd, at45page_t page);
#line 30
static void At45dbP$HplAt45db$waitIdle(void );
#line 73
static void At45dbP$HplAt45db$flush(uint8_t cmd, at45page_t page);
#line 178
static void At45dbP$HplAt45db$write(uint8_t cmd, at45page_t page, at45pageoffset_t offset, 
uint8_t * data, at45pageoffset_t n);
#line 87
static void At45dbP$HplAt45db$compare(uint8_t cmd, at45page_t page);
#line 157
static void At45dbP$HplAt45db$crc(uint8_t cmd, at45page_t page, at45pageoffset_t offset, 
at45pageoffset_t n, uint16_t baseCrc);
#line 119
static void At45dbP$HplAt45db$readBuffer(uint8_t cmd, at45pageoffset_t offset, 
uint8_t * data, uint16_t n);
# 85 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/at45db/At45db.nc"
static void At45dbP$At45db$copyPageDone(error_t error);
#line 125
static void At45dbP$At45db$syncDone(error_t error);
#line 143
static void At45dbP$At45db$flushDone(error_t error);
#line 69
static void At45dbP$At45db$writeDone(error_t error);
#line 105
static void At45dbP$At45db$eraseDone(error_t error);
#line 183
static void At45dbP$At45db$computeCrcDone(error_t error, uint16_t crc);
#line 162
static void At45dbP$At45db$readDone(error_t error);
# 55 "/cygdrive/c/Dropbox/tinyos-2.x/tos/lib/timer/BusyWait.nc"
static void At45dbP$BusyWait$wait(At45dbP$BusyWait$size_type dt);
# 56 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static error_t At45dbP$taskSuccess$postTask(void );
#line 56
static error_t At45dbP$taskFail$postTask(void );
# 134 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/at45db/At45dbP.nc"
enum At45dbP$__nesc_unnamed4400 {
#line 134
  At45dbP$taskSuccess = 26U
};
#line 134
typedef int At45dbP$__nesc_sillytask_taskSuccess[At45dbP$taskSuccess];


enum At45dbP$__nesc_unnamed4401 {
#line 137
  At45dbP$taskFail = 27U
};
#line 137
typedef int At45dbP$__nesc_sillytask_taskFail[At45dbP$taskFail];
#line 69
enum At45dbP$__nesc_unnamed4402 {
  At45dbP$IDLE, 
  At45dbP$R_READ, 
  At45dbP$R_READCRC, 
  At45dbP$R_WRITE, 
  At45dbP$R_ERASE, 
  At45dbP$R_COPY, 
  At45dbP$R_SYNC, 
  At45dbP$R_SYNCALL, 
  At45dbP$R_FLUSH, 
  At45dbP$R_FLUSHALL, 
  At45dbP$BROKEN
};
uint8_t At45dbP$request;
at45pageoffset_t At45dbP$reqOffset;
#line 83
at45pageoffset_t At45dbP$reqBytes;
uint8_t * At45dbP$reqBuf;
at45page_t At45dbP$reqPage;

enum At45dbP$__nesc_unnamed4403 {
  At45dbP$P_READ, 
  At45dbP$P_READCRC, 
  At45dbP$P_WRITE, 
  At45dbP$P_FLUSH, 
  At45dbP$P_FILL, 
  At45dbP$P_ERASE, 
  At45dbP$P_COMPARE, 
  At45dbP$P_COMPARE_CHECK
};







#line 98
struct At45dbP$__nesc_unnamed4404 {
  at45page_t page;
  bool busy : 1;
  bool clean : 1;
  bool erased : 1;
  uint8_t unchecked : 2;
} At45dbP$buffer[2];
uint8_t At45dbP$selected;
uint8_t At45dbP$checking;
bool At45dbP$flashBusy;





static inline error_t At45dbP$Init$init(void );
#line 127
static void At45dbP$flashIdle(void );



static void At45dbP$requestDone(error_t result, uint16_t computedCrc, uint8_t newState);
static void At45dbP$handleRWRequest(void );

static inline void At45dbP$taskSuccess$runTask(void );


static inline void At45dbP$taskFail$runTask(void );



static void At45dbP$checkBuffer(uint8_t buf);









static void At45dbP$flushBuffer(void );
#line 163
static inline void At45dbP$HplAt45db$waitIdleDone(void );
#line 175
static inline void At45dbP$HplAt45db$waitCompareDone(bool ok);
#line 190
static inline void At45dbP$HplAt45db$readDone(void );



static inline void At45dbP$HplAt45db$writeDone(void );





static inline void At45dbP$HplAt45db$crcDone(uint16_t crc);



static inline void At45dbP$HplAt45db$flushDone(void );







static inline void At45dbP$HplAt45db$compareDone(void );










static inline void At45dbP$HplAt45db$fillDone(void );







static inline void At45dbP$HplAt45db$eraseDone(void );










static void At45dbP$syncOrFlushAll(uint8_t newReq);

static void At45dbP$handleRWRequest(void );
#line 350
static void At45dbP$requestDone(error_t result, uint16_t computedCrc, uint8_t newState);
#line 366
static void At45dbP$newRequest(uint8_t req, at45page_t page, at45pageoffset_t offset, 
void * reqdata, at45pageoffset_t n);
#line 392
static inline void At45dbP$At45db$read(at45page_t page, at45pageoffset_t offset, 
void *reqdata, at45pageoffset_t n);



static inline void At45dbP$At45db$computeCrc(at45page_t page, 
at45pageoffset_t offset, 
at45pageoffset_t n, 
uint16_t baseCrc);




static inline void At45dbP$At45db$write(at45page_t page, at45pageoffset_t offset, 
void *reqdata, at45pageoffset_t n);




static inline void At45dbP$At45db$erase(at45page_t page, uint8_t eraseKind);
#line 445
static void At45dbP$syncOrFlushAll(uint8_t newReq);
#line 462
static inline void At45dbP$At45db$syncAll(void );
# 141 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/at45db/HplAt45db.nc"
static void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$HplAt45db$readDone(void );
#line 163
static void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$HplAt45db$crcDone(uint16_t computedCrc);
#line 79
static void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$HplAt45db$flushDone(void );
#line 185
static void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$HplAt45db$writeDone(void );
#line 35
static void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$HplAt45db$waitIdleDone(void );
#line 47
static void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$HplAt45db$waitCompareDone(bool compareOk);
#line 106
static void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$HplAt45db$eraseDone(void );
#line 93
static void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$HplAt45db$compareDone(void );
#line 61
static void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$HplAt45db$fillDone(void );
# 42 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/at45db/HplAt45dbByte.nc"
static bool /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$HplAt45dbByte$getCompareStatus(void );
#line 31
static void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$HplAt45dbByte$waitIdle(void );
#line 47
static void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$HplAt45dbByte$select(void );




static void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$HplAt45dbByte$deselect(void );
# 110 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/Resource.nc"
static error_t /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$Resource$release(void );
#line 78
static error_t /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$Resource$request(void );
# 34 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/SpiByte.nc"
static uint8_t /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$FlashSpi$write(uint8_t tx);
# 35 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/at45db/HplAt45dbByteC.nc"
enum /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$__nesc_unnamed4405 {
  HplAt45dbByteC$0$P_IDLE, 
  HplAt45dbByteC$0$P_SEND_CMD, 
  HplAt45dbByteC$0$P_READ, 
  HplAt45dbByteC$0$P_READ_CRC, 
  HplAt45dbByteC$0$P_WRITE, 
  HplAt45dbByteC$0$P_WAIT_IDLE, 
  HplAt45dbByteC$0$P_WAIT_COMPARE, 
  HplAt45dbByteC$0$P_WAIT_COMPARE_OK, 
  HplAt45dbByteC$0$P_FILL, 
  HplAt45dbByteC$0$P_FLUSH, 
  HplAt45dbByteC$0$P_COMPARE, 
  HplAt45dbByteC$0$P_ERASE
};
uint8_t /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$status = /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$P_IDLE;
uint8_t /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$flashCmd[9];
at45pageoffset_t /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$dataCount;
uint8_t * /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$data;
uint8_t /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$dontCare;

static inline void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$complete(uint16_t crc);
#line 86
static inline void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$requestFlashStatus(void );





static inline void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$doCommand(void );
#line 161
static inline void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$Resource$granted(void );
#line 173
static void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$execCommand(uint8_t op, uint8_t reqCmd, uint8_t reqDontCare, 
at45page_t reqPage, at45pageoffset_t reqOffset, 
uint8_t * reqData, at45pageoffset_t reqCount);
#line 191
static inline void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$HplAt45db$waitIdle(void );




static inline void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$HplAt45db$waitCompare(void );




static inline void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$HplAt45dbByte$idle(void );
#line 217
static inline void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$HplAt45db$fill(uint8_t cmd, at45page_t page);



static inline void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$HplAt45db$flush(uint8_t cmd, at45page_t page);



static inline void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$HplAt45db$compare(uint8_t cmd, at45page_t page);



static inline void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$HplAt45db$erase(uint8_t cmd, at45page_t page);









static inline void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$HplAt45db$readBuffer(uint8_t cmd, at45pageoffset_t offset, 
uint8_t *pdata, at45pageoffset_t count);



static inline void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$HplAt45db$crc(uint8_t cmd, 
at45page_t page, at45pageoffset_t offset, 
at45pageoffset_t count, 
uint16_t baseCrc);



static inline void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$HplAt45db$write(uint8_t cmd, 
at45page_t page, at45pageoffset_t offset, 
uint8_t *pdata, at45pageoffset_t count);
# 33 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/GeneralIO.nc"
static void HplAt45dbIOP$In$makeInput(void );
#line 32
static bool HplAt45dbIOP$In$get(void );
#line 30
static void HplAt45dbIOP$In$clr(void );
# 45 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
static void HplAt45dbIOP$InInterrupt$clear(void );
#line 40
static void HplAt45dbIOP$InInterrupt$disable(void );
#line 59
static void HplAt45dbIOP$InInterrupt$edge(bool low_to_high);
#line 35
static void HplAt45dbIOP$InInterrupt$enable(void );
# 35 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/GeneralIO.nc"
static void HplAt45dbIOP$Out$makeOutput(void );
#line 29
static void HplAt45dbIOP$Out$set(void );





static void HplAt45dbIOP$Select$makeOutput(void );
#line 29
static void HplAt45dbIOP$Select$set(void );
static void HplAt45dbIOP$Select$clr(void );
# 35 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/at45db/HplAt45dbByte.nc"
static void HplAt45dbIOP$HplAt45dbByte$idle(void );
# 35 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/GeneralIO.nc"
static void HplAt45dbIOP$Clk$makeOutput(void );
#line 29
static void HplAt45dbIOP$Clk$set(void );
static void HplAt45dbIOP$Clk$clr(void );
# 55 "/cygdrive/c/Dropbox/tinyos-2.x/tos/lib/timer/BusyWait.nc"
static void HplAt45dbIOP$BusyWait$wait(HplAt45dbIOP$BusyWait$size_type dt);
# 56 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static error_t HplAt45dbIOP$avail$postTask(void );
# 123 "/cygdrive/c/Dropbox/tinyos-2.x/tos/platforms/mica2/chips/at45db/HplAt45dbIOP.nc"
enum HplAt45dbIOP$__nesc_unnamed4406 {
#line 123
  HplAt45dbIOP$avail = 28U
};
#line 123
typedef int HplAt45dbIOP$__nesc_sillytask_avail[HplAt45dbIOP$avail];
#line 64
static inline error_t HplAt45dbIOP$Init$init(void );
#line 80
static inline void HplAt45dbIOP$HplAt45dbByte$select(void );




static inline void HplAt45dbIOP$HplAt45dbByte$deselect(void );
#line 102
static uint8_t HplAt45dbIOP$FlashSpi$write(uint8_t spiOut);
#line 123
static inline void HplAt45dbIOP$avail$runTask(void );



static inline void HplAt45dbIOP$HplAt45dbByte$waitIdle(void );
#line 145
static inline void HplAt45dbIOP$InInterrupt$fired(void );




static inline bool HplAt45dbIOP$HplAt45dbByte$getCompareStatus(void );
# 35 "/cygdrive/c/Dropbox/tinyos-2.x/tos/platforms/micaz/BusyWaitMicroC.nc"
static __inline void BusyWaitMicroC$BusyWait$wait(uint16_t dt);
# 55 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/ResourceConfigure.nc"
static void /*HplAt45dbIOC.NoArbiterC*/NoArbiterC$0$ResourceConfigure$unconfigure(void );
#line 49
static void /*HplAt45dbIOC.NoArbiterC*/NoArbiterC$0$ResourceConfigure$configure(void );
# 92 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/Resource.nc"
static void /*HplAt45dbIOC.NoArbiterC*/NoArbiterC$0$Resource$granted(void );
# 56 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static error_t /*HplAt45dbIOC.NoArbiterC*/NoArbiterC$0$granted$postTask(void );
# 25 "/cygdrive/c/Dropbox/tinyos-2.x/tos/system/NoArbiterC.nc"
enum /*HplAt45dbIOC.NoArbiterC*/NoArbiterC$0$__nesc_unnamed4407 {
#line 25
  NoArbiterC$0$granted = 29U
};
#line 25
typedef int /*HplAt45dbIOC.NoArbiterC*/NoArbiterC$0$__nesc_sillytask_granted[/*HplAt45dbIOC.NoArbiterC*/NoArbiterC$0$granted];
#line 25
static inline void /*HplAt45dbIOC.NoArbiterC*/NoArbiterC$0$granted$runTask(void );




static inline error_t /*HplAt45dbIOC.NoArbiterC*/NoArbiterC$0$Resource$request(void );









static inline error_t /*HplAt45dbIOC.NoArbiterC*/NoArbiterC$0$Resource$release(void );








static inline void /*HplAt45dbIOC.NoArbiterC*/NoArbiterC$0$ResourceConfigure$default$configure(void );
static inline void /*HplAt45dbIOC.NoArbiterC*/NoArbiterC$0$ResourceConfigure$default$unconfigure(void );
# 39 "/cygdrive/c/Dropbox/tinyos-2.x/tos/system/FcfsResourceQueueC.nc"
enum /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC$1$__nesc_unnamed4408 {
#line 39
  FcfsResourceQueueC$1$NO_ENTRY = 0xFF
};
uint8_t /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC$1$resQ[1U];
uint8_t /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC$1$qHead = /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC$1$NO_ENTRY;
uint8_t /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC$1$qTail = /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC$1$NO_ENTRY;

static inline error_t /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC$1$Init$init(void );




static inline bool /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC$1$FcfsQueue$isEmpty(void );



static inline bool /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC$1$FcfsQueue$isEnqueued(resource_client_id_t id);



static inline resource_client_id_t /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC$1$FcfsQueue$dequeue(void );
#line 72
static inline error_t /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC$1$FcfsQueue$enqueue(resource_client_id_t id);
# 43 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/ResourceRequested.nc"
static void /*At45dbC.Arbiter.Arbiter*/ArbiterP$0$ResourceRequested$requested(
# 55 "/cygdrive/c/Dropbox/tinyos-2.x/tos/system/ArbiterP.nc"
uint8_t arg_0x7d950870);
# 55 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/ResourceConfigure.nc"
static void /*At45dbC.Arbiter.Arbiter*/ArbiterP$0$ResourceConfigure$unconfigure(
# 60 "/cygdrive/c/Dropbox/tinyos-2.x/tos/system/ArbiterP.nc"
uint8_t arg_0x7d94fc58);
# 49 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/ResourceConfigure.nc"
static void /*At45dbC.Arbiter.Arbiter*/ArbiterP$0$ResourceConfigure$configure(
# 60 "/cygdrive/c/Dropbox/tinyos-2.x/tos/system/ArbiterP.nc"
uint8_t arg_0x7d94fc58);
# 69 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/ResourceQueue.nc"
static error_t /*At45dbC.Arbiter.Arbiter*/ArbiterP$0$Queue$enqueue(resource_client_id_t id);
#line 43
static bool /*At45dbC.Arbiter.Arbiter*/ArbiterP$0$Queue$isEmpty(void );
#line 60
static resource_client_id_t /*At45dbC.Arbiter.Arbiter*/ArbiterP$0$Queue$dequeue(void );
# 73 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/ResourceDefaultOwner.nc"
static void /*At45dbC.Arbiter.Arbiter*/ArbiterP$0$ResourceDefaultOwner$requested(void );
#line 46
static void /*At45dbC.Arbiter.Arbiter*/ArbiterP$0$ResourceDefaultOwner$granted(void );
# 92 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/Resource.nc"
static void /*At45dbC.Arbiter.Arbiter*/ArbiterP$0$Resource$granted(
# 54 "/cygdrive/c/Dropbox/tinyos-2.x/tos/system/ArbiterP.nc"
uint8_t arg_0x7d953e38);
# 56 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static error_t /*At45dbC.Arbiter.Arbiter*/ArbiterP$0$grantedTask$postTask(void );
# 75 "/cygdrive/c/Dropbox/tinyos-2.x/tos/system/ArbiterP.nc"
enum /*At45dbC.Arbiter.Arbiter*/ArbiterP$0$__nesc_unnamed4409 {
#line 75
  ArbiterP$0$grantedTask = 30U
};
#line 75
typedef int /*At45dbC.Arbiter.Arbiter*/ArbiterP$0$__nesc_sillytask_grantedTask[/*At45dbC.Arbiter.Arbiter*/ArbiterP$0$grantedTask];
#line 67
enum /*At45dbC.Arbiter.Arbiter*/ArbiterP$0$__nesc_unnamed4410 {
#line 67
  ArbiterP$0$RES_CONTROLLED, ArbiterP$0$RES_GRANTING, ArbiterP$0$RES_IMM_GRANTING, ArbiterP$0$RES_BUSY
};
#line 68
enum /*At45dbC.Arbiter.Arbiter*/ArbiterP$0$__nesc_unnamed4411 {
#line 68
  ArbiterP$0$default_owner_id = 1U
};
#line 69
enum /*At45dbC.Arbiter.Arbiter*/ArbiterP$0$__nesc_unnamed4412 {
#line 69
  ArbiterP$0$NO_RES = 0xFF
};
uint8_t /*At45dbC.Arbiter.Arbiter*/ArbiterP$0$state = /*At45dbC.Arbiter.Arbiter*/ArbiterP$0$RES_CONTROLLED;
uint8_t /*At45dbC.Arbiter.Arbiter*/ArbiterP$0$resId = /*At45dbC.Arbiter.Arbiter*/ArbiterP$0$default_owner_id;
uint8_t /*At45dbC.Arbiter.Arbiter*/ArbiterP$0$reqResId;



static inline error_t /*At45dbC.Arbiter.Arbiter*/ArbiterP$0$Resource$request(uint8_t id);
#line 108
static inline error_t /*At45dbC.Arbiter.Arbiter*/ArbiterP$0$Resource$release(uint8_t id);
#line 129
static inline error_t /*At45dbC.Arbiter.Arbiter*/ArbiterP$0$ResourceDefaultOwner$release(void );
#line 186
static inline void /*At45dbC.Arbiter.Arbiter*/ArbiterP$0$grantedTask$runTask(void );
#line 198
static inline void /*At45dbC.Arbiter.Arbiter*/ArbiterP$0$Resource$default$granted(uint8_t id);

static inline void /*At45dbC.Arbiter.Arbiter*/ArbiterP$0$ResourceRequested$default$requested(uint8_t id);



static inline void /*At45dbC.Arbiter.Arbiter*/ArbiterP$0$ResourceDefaultOwner$default$granted(void );

static inline void /*At45dbC.Arbiter.Arbiter*/ArbiterP$0$ResourceDefaultOwner$default$requested(void );





static inline void /*At45dbC.Arbiter.Arbiter*/ArbiterP$0$ResourceConfigure$default$configure(uint8_t id);

static inline void /*At45dbC.Arbiter.Arbiter*/ArbiterP$0$ResourceConfigure$default$unconfigure(uint8_t id);
# 21 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/at45db/At45dbStorageManagerC.nc"
static inline at45page_t At45dbStorageManagerC$At45dbVolume$remap(volume_id_t volid, at45page_t volumePage);








static inline at45page_t At45dbStorageManagerC$At45dbVolume$volumeSize(volume_id_t volid);
# 86 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/atm128hardware.h"
static __inline  void __nesc_disable_interrupt()
#line 86
{
   __asm volatile ("cli");}

#line 103
#line 102
__inline   __nesc_atomic_t 
__nesc_atomic_start(void )
{
  __nesc_atomic_t result = * (volatile uint8_t *)(0x3F + 0x20);

#line 106
  __nesc_disable_interrupt();
   __asm volatile ("" :  :  : "memory");
  return result;
}



#line 112
__inline   void 
__nesc_atomic_end(__nesc_atomic_t original_SREG)
{
   __asm volatile ("" :  :  : "memory");
  * (volatile uint8_t *)(0x3F + 0x20) = original_SREG;
}

# 113 "/cygdrive/c/Dropbox/tinyos-2.x/tos/system/SchedulerBasicP.nc"
static inline void SchedulerBasicP$Scheduler$init(void )
{
  /* atomic removed: atomic calls only */
  {
    memset((void *)SchedulerBasicP$m_next, SchedulerBasicP$NO_TASK, sizeof SchedulerBasicP$m_next);
    SchedulerBasicP$m_head = SchedulerBasicP$NO_TASK;
    SchedulerBasicP$m_tail = SchedulerBasicP$NO_TASK;
  }
}

# 46 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/Scheduler.nc"
inline static void RealMainP$Scheduler$init(void ){
#line 46
  SchedulerBasicP$Scheduler$init();
#line 46
}
#line 46
# 42 "/cygdrive/c/Dropbox/tinyos-2.x/tos/platforms/mica/PlatformP.nc"
static inline void PlatformP$power_init(void )
#line 42
{
  /* atomic removed: atomic calls only */
#line 43
  {
    * (volatile uint8_t *)(0x35 + 0x20) = 1 << 5;
  }
}

# 58 "/cygdrive/c/Dropbox/tinyos-2.x/tos/types/TinyError.h"
static inline  error_t ecombine(error_t r1, error_t r2)




{
  return r1 == r2 ? r1 : FAIL;
}

# 79 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer3P.nc"
static inline uint16_t HplAtm128Timer3P$TimerCtrlCapture2int(Atm128TimerCtrlCapture_t x)
#line 79
{
#line 79
  union __nesc_unnamed4413 {
#line 79
    Atm128TimerCtrlCapture_t f;
#line 79
    uint16_t t;
  } 
#line 79
  c = { .f = x };

#line 79
  return c.t;
}





static inline void HplAtm128Timer3P$TimerCtrl$setCtrlCapture(Atm128_TCCR3B_t x)
#line 86
{
  * (volatile uint8_t *)0x8A = HplAtm128Timer3P$TimerCtrlCapture2int(x);
}

#line 69
static inline Atm128TimerCtrlCapture_t HplAtm128Timer3P$TimerCtrl$getCtrlCapture(void )
#line 69
{
  return * (Atm128TimerCtrlCapture_t *)& * (volatile uint8_t *)0x8A;
}

#line 59
static inline void HplAtm128Timer3P$Timer$setScale(uint8_t s)
#line 59
{
  Atm128TimerCtrlCapture_t x = HplAtm128Timer3P$TimerCtrl$getCtrlCapture();

#line 61
  x.bits.cs = s;
  HplAtm128Timer3P$TimerCtrl$setCtrlCapture(x);
}

# 95 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
inline static void /*InitThreeP.InitThree*/Atm128TimerInitC$0$Timer$setScale(uint8_t scale){
#line 95
  HplAtm128Timer3P$Timer$setScale(scale);
#line 95
}
#line 95
# 127 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer3P.nc"
static inline void HplAtm128Timer3P$Timer$start(void )
#line 127
{
#line 127
  * (volatile uint8_t *)0x7D |= 1 << 2;
}

# 69 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
inline static void /*InitThreeP.InitThree*/Atm128TimerInitC$0$Timer$start(void ){
#line 69
  HplAtm128Timer3P$Timer$start();
#line 69
}
#line 69
# 50 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer3P.nc"
static inline void HplAtm128Timer3P$Timer$set(uint16_t t)
#line 50
{
#line 50
  * (volatile uint16_t *)0x88 = t;
}

# 58 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
inline static void /*InitThreeP.InitThree*/Atm128TimerInitC$0$Timer$set(/*InitThreeP.InitThree*/Atm128TimerInitC$0$Timer$timer_size t){
#line 58
  HplAtm128Timer3P$Timer$set(t);
#line 58
}
#line 58
# 42 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/timer/Atm128TimerInitC.nc"
static inline error_t /*InitThreeP.InitThree*/Atm128TimerInitC$0$Init$init(void )
#line 42
{
  /* atomic removed: atomic calls only */
#line 43
  {
    /*InitThreeP.InitThree*/Atm128TimerInitC$0$Timer$set(0);
    /*InitThreeP.InitThree*/Atm128TimerInitC$0$Timer$start();
    /*InitThreeP.InitThree*/Atm128TimerInitC$0$Timer$setScale(2);
  }
  return SUCCESS;
}

# 81 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer1P.nc"
static inline uint16_t HplAtm128Timer1P$TimerCtrlCapture2int(Atm128TimerCtrlCapture_t x)
#line 81
{
#line 81
  union __nesc_unnamed4414 {
#line 81
    Atm128TimerCtrlCapture_t f;
#line 81
    uint16_t t;
  } 
#line 81
  c = { .f = x };

#line 81
  return c.t;
}





static inline void HplAtm128Timer1P$TimerCtrl$setCtrlCapture(Atm128_TCCR1B_t x)
#line 88
{
  * (volatile uint8_t *)(0x2E + 0x20) = HplAtm128Timer1P$TimerCtrlCapture2int(x);
}

#line 71
static inline Atm128TimerCtrlCapture_t HplAtm128Timer1P$TimerCtrl$getCtrlCapture(void )
#line 71
{
  return * (Atm128TimerCtrlCapture_t * )& * (volatile uint8_t *)(0x2E + 0x20);
}

#line 61
static inline void HplAtm128Timer1P$Timer$setScale(uint8_t s)
#line 61
{
  Atm128TimerCtrlCapture_t x = HplAtm128Timer1P$TimerCtrl$getCtrlCapture();

#line 63
  x.bits.cs = s;
  HplAtm128Timer1P$TimerCtrl$setCtrlCapture(x);
}

# 95 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
inline static void /*InitOneP.InitOne*/Atm128TimerInitC$1$Timer$setScale(uint8_t scale){
#line 95
  HplAtm128Timer1P$Timer$setScale(scale);
#line 95
}
#line 95
# 131 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer1P.nc"
static inline void HplAtm128Timer1P$Timer$start(void )
#line 131
{
#line 131
  * (volatile uint8_t *)(0x37 + 0x20) |= 1 << 2;
}

# 69 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
inline static void /*InitOneP.InitOne*/Atm128TimerInitC$1$Timer$start(void ){
#line 69
  HplAtm128Timer1P$Timer$start();
#line 69
}
#line 69
# 52 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer1P.nc"
static inline void HplAtm128Timer1P$Timer$set(uint16_t t)
#line 52
{
#line 52
  * (volatile uint16_t *)(0x2C + 0x20) = t;
}

# 58 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
inline static void /*InitOneP.InitOne*/Atm128TimerInitC$1$Timer$set(/*InitOneP.InitOne*/Atm128TimerInitC$1$Timer$timer_size t){
#line 58
  HplAtm128Timer1P$Timer$set(t);
#line 58
}
#line 58
# 42 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/timer/Atm128TimerInitC.nc"
static inline error_t /*InitOneP.InitOne*/Atm128TimerInitC$1$Init$init(void )
#line 42
{
  /* atomic removed: atomic calls only */
#line 43
  {
    /*InitOneP.InitOne*/Atm128TimerInitC$1$Timer$set(0);
    /*InitOneP.InitOne*/Atm128TimerInitC$1$Timer$start();
    /*InitOneP.InitOne*/Atm128TimerInitC$1$Timer$setScale(4);
  }
  return SUCCESS;
}

# 47 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static __inline void /*HplAtm128InterruptC.IntPin2*/HplAtm128InterruptPinP$2$Irq$edge(bool low_to_high)
#line 47
{
  * (volatile uint8_t * )106U |= 1 << 5;

  if (low_to_high) {
    * (volatile uint8_t * )106U |= 1 << 4;
    }
  else {
#line 53
    * (volatile uint8_t * )106U &= ~(1 << 4);
    }
}

# 59 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
inline static void HplAt45dbIOP$InInterrupt$edge(bool low_to_high){
#line 59
  /*HplAtm128InterruptC.IntPin2*/HplAtm128InterruptPinP$2$Irq$edge(low_to_high);
#line 59
}
#line 59
# 43 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static __inline void /*HplAtm128InterruptC.IntPin2*/HplAtm128InterruptPinP$2$Irq$disable(void )
#line 43
{
#line 43
  * (volatile uint8_t *)(0x39 + 0x20) &= ~(1 << 2);
}

# 40 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
inline static void HplAt45dbIOP$InInterrupt$disable(void ){
#line 40
  /*HplAtm128InterruptC.IntPin2*/HplAtm128InterruptPinP$2$Irq$disable();
#line 40
}
#line 40
# 50 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortD.Bit2*/HplAtm128GeneralIOPinP$26$IO$makeInput(void )
#line 50
{
#line 50
  * (volatile uint8_t * )49U &= ~(1 << 2);
}

# 33 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void HplAt45dbIOP$In$makeInput(void ){
#line 33
  /*HplAtm128GeneralIOC.PortD.Bit2*/HplAtm128GeneralIOPinP$26$IO$makeInput();
#line 33
}
#line 33
# 47 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortD.Bit2*/HplAtm128GeneralIOPinP$26$IO$clr(void )
#line 47
{
#line 47
  * (volatile uint8_t * )50U &= ~(1 << 2);
}

# 30 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void HplAt45dbIOP$In$clr(void ){
#line 30
  /*HplAtm128GeneralIOC.PortD.Bit2*/HplAtm128GeneralIOPinP$26$IO$clr();
#line 30
}
#line 30
# 52 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortD.Bit3*/HplAtm128GeneralIOPinP$27$IO$makeOutput(void )
#line 52
{
#line 52
  * (volatile uint8_t * )49U |= 1 << 3;
}

# 35 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void HplAt45dbIOP$Out$makeOutput(void ){
#line 35
  /*HplAtm128GeneralIOC.PortD.Bit3*/HplAtm128GeneralIOPinP$27$IO$makeOutput();
#line 35
}
#line 35
# 46 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortD.Bit3*/HplAtm128GeneralIOPinP$27$IO$set(void )
#line 46
{
#line 46
  * (volatile uint8_t * )50U |= 1 << 3;
}

# 29 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void HplAt45dbIOP$Out$set(void ){
#line 29
  /*HplAtm128GeneralIOC.PortD.Bit3*/HplAtm128GeneralIOPinP$27$IO$set();
#line 29
}
#line 29
# 52 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortD.Bit5*/HplAtm128GeneralIOPinP$29$IO$makeOutput(void )
#line 52
{
#line 52
  * (volatile uint8_t * )49U |= 1 << 5;
}

# 35 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void HplAt45dbIOP$Clk$makeOutput(void ){
#line 35
  /*HplAtm128GeneralIOC.PortD.Bit5*/HplAtm128GeneralIOPinP$29$IO$makeOutput();
#line 35
}
#line 35
# 47 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortD.Bit5*/HplAtm128GeneralIOPinP$29$IO$clr(void )
#line 47
{
#line 47
  * (volatile uint8_t * )50U &= ~(1 << 5);
}

# 30 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void HplAt45dbIOP$Clk$clr(void ){
#line 30
  /*HplAtm128GeneralIOC.PortD.Bit5*/HplAtm128GeneralIOPinP$29$IO$clr();
#line 30
}
#line 30
# 46 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit3*/HplAtm128GeneralIOPinP$3$IO$set(void )
#line 46
{
#line 46
  * (volatile uint8_t * )59U |= 1 << 3;
}

# 29 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void HplAt45dbIOP$Select$set(void ){
#line 29
  /*HplAtm128GeneralIOC.PortA.Bit3*/HplAtm128GeneralIOPinP$3$IO$set();
#line 29
}
#line 29
# 52 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit3*/HplAtm128GeneralIOPinP$3$IO$makeOutput(void )
#line 52
{
#line 52
  * (volatile uint8_t * )58U |= 1 << 3;
}

# 35 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void HplAt45dbIOP$Select$makeOutput(void ){
#line 35
  /*HplAtm128GeneralIOC.PortA.Bit3*/HplAtm128GeneralIOPinP$3$IO$makeOutput();
#line 35
}
#line 35
# 64 "/cygdrive/c/Dropbox/tinyos-2.x/tos/platforms/mica2/chips/at45db/HplAt45dbIOP.nc"
static inline error_t HplAt45dbIOP$Init$init(void )
#line 64
{
  HplAt45dbIOP$Select$makeOutput();
  HplAt45dbIOP$Select$set();
  HplAt45dbIOP$Clk$clr();
  HplAt45dbIOP$Clk$makeOutput();
  HplAt45dbIOP$Out$set();
  HplAt45dbIOP$Out$makeOutput();
  HplAt45dbIOP$In$clr();
  HplAt45dbIOP$In$makeInput();

  HplAt45dbIOP$InInterrupt$disable();
  HplAt45dbIOP$InInterrupt$edge(TRUE);

  return SUCCESS;
}

# 51 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/Init.nc"
inline static error_t MotePlatformP$SubInit$init(void ){
#line 51
  unsigned char result;
#line 51

#line 51
  result = HplAt45dbIOP$Init$init();
#line 51
  result = ecombine(result, /*InitOneP.InitOne*/Atm128TimerInitC$1$Init$init());
#line 51
  result = ecombine(result, /*InitThreeP.InitThree*/Atm128TimerInitC$0$Init$init());
#line 51

#line 51
  return result;
#line 51
}
#line 51
# 47 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP$4$IO$clr(void )
#line 47
{
#line 47
  * (volatile uint8_t * )59U &= ~(1 << 4);
}

# 30 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void MotePlatformP$SerialIdPin$clr(void ){
#line 30
  /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP$4$IO$clr();
#line 30
}
#line 30
# 50 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP$4$IO$makeInput(void )
#line 50
{
#line 50
  * (volatile uint8_t * )58U &= ~(1 << 4);
}

# 33 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void MotePlatformP$SerialIdPin$makeInput(void ){
#line 33
  /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP$4$IO$makeInput();
#line 33
}
#line 33
# 26 "/cygdrive/c/Dropbox/tinyos-2.x/tos/platforms/micaz/MotePlatformP.nc"
static inline error_t MotePlatformP$PlatformInit$init(void )
#line 26
{

  * (volatile uint8_t *)(0x15 + 0x20) = 0;
  * (volatile uint8_t *)(0x14 + 0x20) = 0xff;


  MotePlatformP$SerialIdPin$makeInput();
  MotePlatformP$SerialIdPin$clr();

  return MotePlatformP$SubInit$init();
}

# 46 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP$0$IO$set(void )
#line 46
{
#line 46
  * (volatile uint8_t * )59U |= 1 << 0;
}

# 29 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void LedsP$Led2$set(void ){
#line 29
  /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP$0$IO$set();
#line 29
}
#line 29
# 46 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP$1$IO$set(void )
#line 46
{
#line 46
  * (volatile uint8_t * )59U |= 1 << 1;
}

# 29 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void LedsP$Led1$set(void ){
#line 29
  /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP$1$IO$set();
#line 29
}
#line 29
# 46 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP$2$IO$set(void )
#line 46
{
#line 46
  * (volatile uint8_t * )59U |= 1 << 2;
}

# 29 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void LedsP$Led0$set(void ){
#line 29
  /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP$2$IO$set();
#line 29
}
#line 29
# 52 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP$0$IO$makeOutput(void )
#line 52
{
#line 52
  * (volatile uint8_t * )58U |= 1 << 0;
}

# 35 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void LedsP$Led2$makeOutput(void ){
#line 35
  /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP$0$IO$makeOutput();
#line 35
}
#line 35
# 52 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP$1$IO$makeOutput(void )
#line 52
{
#line 52
  * (volatile uint8_t * )58U |= 1 << 1;
}

# 35 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void LedsP$Led1$makeOutput(void ){
#line 35
  /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP$1$IO$makeOutput();
#line 35
}
#line 35
# 52 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP$2$IO$makeOutput(void )
#line 52
{
#line 52
  * (volatile uint8_t * )58U |= 1 << 2;
}

# 35 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void LedsP$Led0$makeOutput(void ){
#line 35
  /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP$2$IO$makeOutput();
#line 35
}
#line 35
# 45 "/cygdrive/c/Dropbox/tinyos-2.x/tos/system/LedsP.nc"
static inline error_t LedsP$Init$init(void )
#line 45
{
  /* atomic removed: atomic calls only */
#line 46
  {
    ;
    LedsP$Led0$makeOutput();
    LedsP$Led1$makeOutput();
    LedsP$Led2$makeOutput();
    LedsP$Led0$set();
    LedsP$Led1$set();
    LedsP$Led2$set();
  }
  return SUCCESS;
}

# 51 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/Init.nc"
inline static error_t PlatformP$MoteInit$init(void ){
#line 51
  unsigned char result;
#line 51

#line 51
  result = LedsP$Init$init();
#line 51
  result = ecombine(result, MotePlatformP$PlatformInit$init());
#line 51

#line 51
  return result;
#line 51
}
#line 51
# 41 "/cygdrive/c/Dropbox/tinyos-2.x/tos/platforms/mica/MeasureClockC.nc"
static inline error_t MeasureClockC$Init$init(void )
#line 41
{
  /* atomic removed: atomic calls only */



  {
    uint8_t now;
#line 47
    uint8_t wraps;
    uint16_t start;


    * (volatile uint8_t *)(0x2E + 0x20) = 1 << 0;
    * (volatile uint8_t *)(0x30 + 0x20) = 1 << 3;
    * (volatile uint8_t *)(0x33 + 0x20) = (1 << 1) | (1 << 0);




    start = * (volatile uint16_t *)(0x2C + 0x20);
    for (wraps = MeasureClockC$MAGIC / 2; wraps; ) 
      {
        uint16_t next = * (volatile uint16_t *)(0x2C + 0x20);

        if (next < start) {
          wraps--;
          }
#line 65
        start = next;
      }


    now = * (volatile uint8_t *)(0x32 + 0x20);
    while (* (volatile uint8_t *)(0x32 + 0x20) == now) ;


    start = * (volatile uint16_t *)(0x2C + 0x20);
    now = * (volatile uint8_t *)(0x32 + 0x20);
    while (* (volatile uint8_t *)(0x32 + 0x20) == now) ;
    MeasureClockC$cycles = * (volatile uint16_t *)(0x2C + 0x20);

    MeasureClockC$cycles = (MeasureClockC$cycles - start + 16) >> 5;


    * (volatile uint8_t *)(0x30 + 0x20) = * (volatile uint8_t *)(0x2E + 0x20) = * (volatile uint8_t *)(0x33 + 0x20) = 0;
    * (volatile uint8_t *)(0x32 + 0x20) = 0;
    * (volatile uint16_t *)(0x2C + 0x20) = 0;
    * (volatile uint8_t *)0x7C = * (volatile uint8_t *)(0x36 + 0x20) = 0xff;
    while (* (volatile uint8_t *)(0x30 + 0x20) & (((1 << 2) | (1 << 1)) | (1 << 0))) 
      ;
  }
  return SUCCESS;
}

# 51 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/Init.nc"
inline static error_t PlatformP$MeasureClock$init(void ){
#line 51
  unsigned char result;
#line 51

#line 51
  result = MeasureClockC$Init$init();
#line 51

#line 51
  return result;
#line 51
}
#line 51
# 49 "/cygdrive/c/Dropbox/tinyos-2.x/tos/platforms/mica/PlatformP.nc"
static inline error_t PlatformP$Init$init(void )
{
  error_t ok;


  ok = PlatformP$MeasureClock$init();
  ok = ecombine(ok, PlatformP$MoteInit$init());

  if (ok != SUCCESS) {
    return ok;
    }
  PlatformP$power_init();

  return SUCCESS;
}

# 51 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/Init.nc"
inline static error_t RealMainP$PlatformInit$init(void ){
#line 51
  unsigned char result;
#line 51

#line 51
  result = PlatformP$Init$init();
#line 51

#line 51
  return result;
#line 51
}
#line 51
# 54 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/Scheduler.nc"
inline static bool RealMainP$Scheduler$runNextTask(void ){
#line 54
  unsigned char result;
#line 54

#line 54
  result = SchedulerBasicP$Scheduler$runNextTask();
#line 54

#line 54
  return result;
#line 54
}
#line 54
# 282 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/at45db/BlockStorageP.nc"
static inline void BlockStorageP$multipageStart(uint16_t crc)
#line 282
{
  BlockStorageP$currentOffset = 0;
  BlockStorageP$multipageContinue(crc);
}

# 462 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/at45db/At45dbP.nc"
static inline void At45dbP$At45db$syncAll(void )
#line 462
{
  At45dbP$syncOrFlushAll(At45dbP$R_SYNCALL);
}

# 120 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/at45db/At45db.nc"
inline static void BlockStorageP$At45db$syncAll(void ){
#line 120
  At45dbP$At45db$syncAll();
#line 120
}
#line 120
# 327 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/at45db/BlockStorageP.nc"
static inline void BlockStorageP$syncStart(void )
#line 327
{
  BlockStorageP$At45db$syncAll();
}

#line 118
static inline at45page_t BlockStorageP$pageRemap(at45page_t p)
#line 118
{
  return BlockStorageP$BConfig$remap(BlockStorageP$client, p);
}

# 411 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/at45db/At45dbP.nc"
static inline void At45dbP$At45db$erase(at45page_t page, uint8_t eraseKind)
#line 411
{
  At45dbP$newRequest(At45dbP$R_ERASE, page, eraseKind, (void *)0, 0);
}

# 100 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/at45db/At45db.nc"
inline static void BlockStorageP$At45db$erase(at45page_t page, uint8_t eraseKind){
#line 100
  At45dbP$At45db$erase(page, eraseKind);
#line 100
}
#line 100
# 303 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/at45db/BlockStorageP.nc"
static inline void BlockStorageP$eraseStart(void )
#line 303
{
  BlockStorageP$At45db$erase(BlockStorageP$pageRemap(BlockStorageP$blockpage), AT45_ERASE);
}

#line 149
static inline void BlockStorageP$startRequest(void )
#line 149
{
  switch (BlockStorageP$s[BlockStorageP$client].request) 
    {
      case BlockStorageP$R_ERASE: 
        BlockStorageP$eraseStart();
      break;
      case BlockStorageP$R_SYNC: 
        BlockStorageP$syncStart();
      break;
      default: 
        BlockStorageP$multipageStart((uint16_t )BlockStorageP$s[BlockStorageP$client].buf);
    }
}

#line 231
static inline int BlockStorageP$BConfig$default$writeHook(uint8_t blockId)
#line 231
{
  return FALSE;
}

# 37 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/at45db/At45dbBlockConfig.nc"
inline static int BlockStorageP$BConfig$writeHook(uint8_t arg_0x7da998d8){
#line 37
  int result;
#line 37

#line 37
    result = BlockStorageP$BConfig$default$writeHook(arg_0x7da998d8);
#line 37

#line 37
  return result;
#line 37
}
#line 37
# 217 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/at45db/BlockStorageP.nc"
static inline void BlockStorageP$Resource$granted(uint8_t blockId)
#line 217
{
  BlockStorageP$client = blockId;

  if (BlockStorageP$s[blockId].request == BlockStorageP$R_WRITE && 
  BlockStorageP$BConfig$writeHook(blockId)) 
    {


      BlockStorageP$client = BlockStorageP$NO_CLIENT;
      return;
    }
  BlockStorageP$startRequest();
}

# 198 "/cygdrive/c/Dropbox/tinyos-2.x/tos/system/ArbiterP.nc"
static inline void /*At45dbC.Arbiter.Arbiter*/ArbiterP$0$Resource$default$granted(uint8_t id)
#line 198
{
}

# 92 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/Resource.nc"
inline static void /*At45dbC.Arbiter.Arbiter*/ArbiterP$0$Resource$granted(uint8_t arg_0x7d953e38){
#line 92
  switch (arg_0x7d953e38) {
#line 92
    case /*BlinkToRadioAppC.BlockStorageC*/BlockStorageC$0$RESOURCE_ID:
#line 92
      BlockStorageP$Resource$granted(/*BlinkToRadioAppC.BlockStorageC*/BlockStorageC$0$BLOCK_ID);
#line 92
      break;
#line 92
    default:
#line 92
      /*At45dbC.Arbiter.Arbiter*/ArbiterP$0$Resource$default$granted(arg_0x7d953e38);
#line 92
      break;
#line 92
    }
#line 92
}
#line 92
# 212 "/cygdrive/c/Dropbox/tinyos-2.x/tos/system/ArbiterP.nc"
static inline void /*At45dbC.Arbiter.Arbiter*/ArbiterP$0$ResourceConfigure$default$configure(uint8_t id)
#line 212
{
}

# 49 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/ResourceConfigure.nc"
inline static void /*At45dbC.Arbiter.Arbiter*/ArbiterP$0$ResourceConfigure$configure(uint8_t arg_0x7d94fc58){
#line 49
    /*At45dbC.Arbiter.Arbiter*/ArbiterP$0$ResourceConfigure$default$configure(arg_0x7d94fc58);
#line 49
}
#line 49
# 186 "/cygdrive/c/Dropbox/tinyos-2.x/tos/system/ArbiterP.nc"
static inline void /*At45dbC.Arbiter.Arbiter*/ArbiterP$0$grantedTask$runTask(void )
#line 186
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 187
    {
      /*At45dbC.Arbiter.Arbiter*/ArbiterP$0$resId = /*At45dbC.Arbiter.Arbiter*/ArbiterP$0$reqResId;
      /*At45dbC.Arbiter.Arbiter*/ArbiterP$0$state = /*At45dbC.Arbiter.Arbiter*/ArbiterP$0$RES_BUSY;
    }
#line 190
    __nesc_atomic_end(__nesc_atomic); }
  /*At45dbC.Arbiter.Arbiter*/ArbiterP$0$ResourceConfigure$configure(/*At45dbC.Arbiter.Arbiter*/ArbiterP$0$resId);
  /*At45dbC.Arbiter.Arbiter*/ArbiterP$0$Resource$granted(/*At45dbC.Arbiter.Arbiter*/ArbiterP$0$resId);
}

# 56 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static error_t At45dbP$taskFail$postTask(void ){
#line 56
  unsigned char result;
#line 56

#line 56
  result = SchedulerBasicP$TaskBasic$postTask(At45dbP$taskFail);
#line 56

#line 56
  return result;
#line 56
}
#line 56
# 86 "/cygdrive/c/Dropbox/tinyos-2.x/tos/system/SchedulerBasicP.nc"
static inline bool SchedulerBasicP$isWaiting(uint8_t id)
{
  return SchedulerBasicP$m_next[id] != SchedulerBasicP$NO_TASK || SchedulerBasicP$m_tail == id;
}

static inline bool SchedulerBasicP$pushTask(uint8_t id)
{
  if (!SchedulerBasicP$isWaiting(id)) 
    {
      if (SchedulerBasicP$m_head == SchedulerBasicP$NO_TASK) 
        {
          SchedulerBasicP$m_head = id;
          SchedulerBasicP$m_tail = id;
        }
      else 
        {
          SchedulerBasicP$m_next[SchedulerBasicP$m_tail] = id;
          SchedulerBasicP$m_tail = id;
        }
      return TRUE;
    }
  else 
    {
      return FALSE;
    }
}

# 56 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static error_t /*HplAt45dbIOC.NoArbiterC*/NoArbiterC$0$granted$postTask(void ){
#line 56
  unsigned char result;
#line 56

#line 56
  result = SchedulerBasicP$TaskBasic$postTask(/*HplAt45dbIOC.NoArbiterC*/NoArbiterC$0$granted);
#line 56

#line 56
  return result;
#line 56
}
#line 56
# 30 "/cygdrive/c/Dropbox/tinyos-2.x/tos/system/NoArbiterC.nc"
static inline error_t /*HplAt45dbIOC.NoArbiterC*/NoArbiterC$0$Resource$request(void )
#line 30
{
  /*HplAt45dbIOC.NoArbiterC*/NoArbiterC$0$granted$postTask();
  return SUCCESS;
}

# 78 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/Resource.nc"
inline static error_t /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$Resource$request(void ){
#line 78
  unsigned char result;
#line 78

#line 78
  result = /*HplAt45dbIOC.NoArbiterC*/NoArbiterC$0$Resource$request();
#line 78

#line 78
  return result;
#line 78
}
#line 78
# 191 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/at45db/HplAt45dbByteC.nc"
static inline void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$HplAt45db$waitIdle(void )
#line 191
{
  /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$status = /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$P_WAIT_IDLE;
  /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$Resource$request();
}

# 30 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/at45db/HplAt45db.nc"
inline static void At45dbP$HplAt45db$waitIdle(void ){
#line 30
  /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$HplAt45db$waitIdle();
#line 30
}
#line 30
# 229 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/at45db/HplAt45dbByteC.nc"
static inline void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$HplAt45db$erase(uint8_t cmd, at45page_t page)
#line 229
{
  /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$execCommand(/*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$P_ERASE, cmd, 0, page, 0, (void *)0, 1);
}

# 100 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/at45db/HplAt45db.nc"
inline static void At45dbP$HplAt45db$erase(uint8_t cmd, at45page_t page){
#line 100
  /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$HplAt45db$erase(cmd, page);
#line 100
}
#line 100
# 287 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/at45db/BlockStorageP.nc"
static inline void BlockStorageP$multipageOpDone(error_t result, uint16_t crc)
#line 287
{
  if (result != SUCCESS) {
    BlockStorageP$endRequest(result, 0);
    }
  else {
#line 291
    BlockStorageP$multipageContinue(crc);
    }
}

#line 375
static inline void BlockStorageP$At45db$readDone(error_t result)
#line 375
{
  if (BlockStorageP$client != BlockStorageP$NO_CLIENT) {
    BlockStorageP$multipageOpDone(result, 0);
    }
}

# 162 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/at45db/At45db.nc"
inline static void At45dbP$At45db$readDone(error_t error){
#line 162
  BlockStorageP$At45db$readDone(error);
#line 162
}
#line 162
# 204 "/cygdrive/c/Dropbox/tinyos-2.x/tos/system/ArbiterP.nc"
static inline void /*At45dbC.Arbiter.Arbiter*/ArbiterP$0$ResourceDefaultOwner$default$granted(void )
#line 204
{
}

# 46 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/ResourceDefaultOwner.nc"
inline static void /*At45dbC.Arbiter.Arbiter*/ArbiterP$0$ResourceDefaultOwner$granted(void ){
#line 46
  /*At45dbC.Arbiter.Arbiter*/ArbiterP$0$ResourceDefaultOwner$default$granted();
#line 46
}
#line 46
# 214 "/cygdrive/c/Dropbox/tinyos-2.x/tos/system/ArbiterP.nc"
static inline void /*At45dbC.Arbiter.Arbiter*/ArbiterP$0$ResourceConfigure$default$unconfigure(uint8_t id)
#line 214
{
}

# 55 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/ResourceConfigure.nc"
inline static void /*At45dbC.Arbiter.Arbiter*/ArbiterP$0$ResourceConfigure$unconfigure(uint8_t arg_0x7d94fc58){
#line 55
    /*At45dbC.Arbiter.Arbiter*/ArbiterP$0$ResourceConfigure$default$unconfigure(arg_0x7d94fc58);
#line 55
}
#line 55
# 56 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static error_t /*At45dbC.Arbiter.Arbiter*/ArbiterP$0$grantedTask$postTask(void ){
#line 56
  unsigned char result;
#line 56

#line 56
  result = SchedulerBasicP$TaskBasic$postTask(/*At45dbC.Arbiter.Arbiter*/ArbiterP$0$grantedTask);
#line 56

#line 56
  return result;
#line 56
}
#line 56
# 58 "/cygdrive/c/Dropbox/tinyos-2.x/tos/system/FcfsResourceQueueC.nc"
static inline resource_client_id_t /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC$1$FcfsQueue$dequeue(void )
#line 58
{
  /* atomic removed: atomic calls only */
#line 59
  {
    if (/*At45dbC.Arbiter.Queue*/FcfsResourceQueueC$1$qHead != /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC$1$NO_ENTRY) {
        uint8_t id = /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC$1$qHead;

#line 62
        /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC$1$qHead = /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC$1$resQ[/*At45dbC.Arbiter.Queue*/FcfsResourceQueueC$1$qHead];
        if (/*At45dbC.Arbiter.Queue*/FcfsResourceQueueC$1$qHead == /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC$1$NO_ENTRY) {
          /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC$1$qTail = /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC$1$NO_ENTRY;
          }
#line 65
        /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC$1$resQ[id] = /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC$1$NO_ENTRY;
        {
          unsigned char __nesc_temp = 
#line 66
          id;

#line 66
          return __nesc_temp;
        }
      }
#line 68
    {
      unsigned char __nesc_temp = 
#line 68
      /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC$1$NO_ENTRY;

#line 68
      return __nesc_temp;
    }
  }
}

# 60 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/ResourceQueue.nc"
inline static resource_client_id_t /*At45dbC.Arbiter.Arbiter*/ArbiterP$0$Queue$dequeue(void ){
#line 60
  unsigned char result;
#line 60

#line 60
  result = /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC$1$FcfsQueue$dequeue();
#line 60

#line 60
  return result;
#line 60
}
#line 60
# 50 "/cygdrive/c/Dropbox/tinyos-2.x/tos/system/FcfsResourceQueueC.nc"
static inline bool /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC$1$FcfsQueue$isEmpty(void )
#line 50
{
  return /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC$1$qHead == /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC$1$NO_ENTRY;
}

# 43 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/ResourceQueue.nc"
inline static bool /*At45dbC.Arbiter.Arbiter*/ArbiterP$0$Queue$isEmpty(void ){
#line 43
  unsigned char result;
#line 43

#line 43
  result = /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC$1$FcfsQueue$isEmpty();
#line 43

#line 43
  return result;
#line 43
}
#line 43
# 108 "/cygdrive/c/Dropbox/tinyos-2.x/tos/system/ArbiterP.nc"
static inline error_t /*At45dbC.Arbiter.Arbiter*/ArbiterP$0$Resource$release(uint8_t id)
#line 108
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 109
    {
      if (/*At45dbC.Arbiter.Arbiter*/ArbiterP$0$state == /*At45dbC.Arbiter.Arbiter*/ArbiterP$0$RES_BUSY && /*At45dbC.Arbiter.Arbiter*/ArbiterP$0$resId == id) {
          if (/*At45dbC.Arbiter.Arbiter*/ArbiterP$0$Queue$isEmpty() == FALSE) {
              /*At45dbC.Arbiter.Arbiter*/ArbiterP$0$reqResId = /*At45dbC.Arbiter.Arbiter*/ArbiterP$0$Queue$dequeue();
              /*At45dbC.Arbiter.Arbiter*/ArbiterP$0$state = /*At45dbC.Arbiter.Arbiter*/ArbiterP$0$RES_GRANTING;
              /*At45dbC.Arbiter.Arbiter*/ArbiterP$0$grantedTask$postTask();
              /*At45dbC.Arbiter.Arbiter*/ArbiterP$0$ResourceConfigure$unconfigure(id);
            }
          else {
              /*At45dbC.Arbiter.Arbiter*/ArbiterP$0$resId = /*At45dbC.Arbiter.Arbiter*/ArbiterP$0$default_owner_id;
              /*At45dbC.Arbiter.Arbiter*/ArbiterP$0$state = /*At45dbC.Arbiter.Arbiter*/ArbiterP$0$RES_CONTROLLED;
              /*At45dbC.Arbiter.Arbiter*/ArbiterP$0$ResourceConfigure$unconfigure(id);
              /*At45dbC.Arbiter.Arbiter*/ArbiterP$0$ResourceDefaultOwner$granted();
            }
          {
            unsigned char __nesc_temp = 
#line 123
            SUCCESS;

            {
#line 123
              __nesc_atomic_end(__nesc_atomic); 
#line 123
              return __nesc_temp;
            }
          }
        }
    }
#line 127
    __nesc_atomic_end(__nesc_atomic); }
#line 126
  return FAIL;
}

# 417 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/at45db/BlockStorageP.nc"
static inline error_t BlockStorageP$Resource$default$release(uint8_t id)
#line 417
{
#line 417
  return FAIL;
}

# 110 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/Resource.nc"
inline static error_t BlockStorageP$Resource$release(uint8_t arg_0x7daa1a08){
#line 110
  unsigned char result;
#line 110

#line 110
  switch (arg_0x7daa1a08) {
#line 110
    case /*BlinkToRadioAppC.BlockStorageC*/BlockStorageC$0$BLOCK_ID:
#line 110
      result = /*At45dbC.Arbiter.Arbiter*/ArbiterP$0$Resource$release(/*BlinkToRadioAppC.BlockStorageC*/BlockStorageC$0$RESOURCE_ID);
#line 110
      break;
#line 110
    default:
#line 110
      result = BlockStorageP$Resource$default$release(arg_0x7daa1a08);
#line 110
      break;
#line 110
    }
#line 110

#line 110
  return result;
#line 110
}
#line 110
# 264 "/usr/lib/ncc/nesc_nx.h"
static __inline  uint16_t __nesc_ntoh_uint16(const void * source)
#line 264
{
  const uint8_t *base = source;

#line 266
  return ((uint16_t )base[0] << 8) | base[1];
}

#line 235
static __inline  uint8_t __nesc_ntoh_uint8(const void * source)
#line 235
{
  const uint8_t *base = source;

#line 237
  return base[0];
}

#line 257
static __inline  int8_t __nesc_ntoh_int8(const void * source)
#line 257
{
#line 257
  return __nesc_ntoh_uint8(source);
}

# 222 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/timer/Atm128AlarmAsyncP.nc"
static inline uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$getNow(void )
#line 222
{
  return /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Counter$get();
}

# 98 "/cygdrive/c/Dropbox/tinyos-2.x/tos/lib/timer/Alarm.nc"
inline static /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$size_type /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$getNow(void ){
#line 98
  unsigned long result;
#line 98

#line 98
  result = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$getNow();
#line 98

#line 98
  return result;
#line 98
}
#line 98
# 85 "/cygdrive/c/Dropbox/tinyos-2.x/tos/lib/timer/AlarmToTimerC.nc"
static inline uint32_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$getNow(void )
{
#line 86
  return /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$getNow();
}

# 125 "/cygdrive/c/Dropbox/tinyos-2.x/tos/lib/timer/Timer.nc"
inline static uint32_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$getNow(void ){
#line 125
  unsigned long result;
#line 125

#line 125
  result = /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$getNow();
#line 125

#line 125
  return result;
#line 125
}
#line 125
# 148 "/cygdrive/c/Dropbox/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$startOneShot(uint8_t num, uint32_t dt)
{
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$startTimer(num, /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$getNow(), dt, TRUE);
}

# 62 "/cygdrive/c/Dropbox/tinyos-2.x/tos/lib/timer/Timer.nc"
inline static void BlinkToRadioC$Timer1$startOneShot(uint32_t dt){
#line 62
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$startOneShot(1U, dt);
#line 62
}
#line 62
# 158 "BlinkToRadioC.nc"
static inline void BlinkToRadioC$BlockRead$readDone(storage_addr_t addr, void *buf, storage_len_t len, error_t error)
#line 158
{
  if (error == SUCCESS) {
      BlinkToRadioMsg *msg = (BlinkToRadioMsg *)buf;


      printf("\n %u %u %u %u %d %d %d %d %lu ", __nesc_ntoh_uint8(msg->nodeid.data), __nesc_ntoh_uint16(
      msg->seq_number_coord.data), __nesc_ntoh_uint16(msg->seq_number.data), __nesc_ntoh_uint8(msg->pow_val.data), __nesc_ntoh_int8(
      msg->rssi_reception.data), __nesc_ntoh_uint16(msg->chan_0.data), __nesc_ntoh_int8(msg->rssi_B.data), __nesc_ntoh_int8(msg->rssi_A.data), 
      addr);

      if (__nesc_ntoh_uint8(msg->nodeid.data) == 255 && __nesc_ntoh_uint16(msg->seq_number_coord.data) == 65535) {
#line 168
        BlinkToRadioC$ReadLogAddrs = MAX_FLASH_ADDR;
        }
    }
  else {
#line 170
    printf("\n Error when reading");
    }
#line 171
  printfflush();
  BlinkToRadioC$ReadLogAddrs += sizeof(BlinkToRadioMsg );

  BlinkToRadioC$Timer1$startOneShot(10);
}

# 411 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/at45db/BlockStorageP.nc"
static inline void BlockStorageP$BlockRead$default$readDone(uint8_t id, storage_addr_t addr, void *buf, storage_len_t len, error_t result)
#line 411
{
}

# 67 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/BlockRead.nc"
inline static void BlockStorageP$BlockRead$readDone(uint8_t arg_0x7dab3830, storage_addr_t addr, void * buf, storage_len_t len, error_t error){
#line 67
  switch (arg_0x7dab3830) {
#line 67
    case /*BlinkToRadioAppC.BlockStorageC*/BlockStorageC$0$BLOCK_ID:
#line 67
      BlinkToRadioC$BlockRead$readDone(addr, buf, len, error);
#line 67
      break;
#line 67
    default:
#line 67
      BlockStorageP$BlockRead$default$readDone(arg_0x7dab3830, addr, buf, len, error);
#line 67
      break;
#line 67
    }
#line 67
}
#line 67
# 53 "/cygdrive/c/Dropbox/tinyos-2.x/tos/system/QueueC.nc"
static inline bool /*PrintfC.QueueC*/QueueC$0$Queue$empty(void )
#line 53
{
  return /*PrintfC.QueueC*/QueueC$0$size == 0;
}

# 50 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/Queue.nc"
inline static bool PrintfP$Queue$empty(void ){
#line 50
  unsigned char result;
#line 50

#line 50
  result = /*PrintfC.QueueC*/QueueC$0$Queue$empty();
#line 50

#line 50
  return result;
#line 50
}
#line 50
# 115 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/Packet.nc"
inline static void * PrintfP$Packet$getPayload(message_t * msg, uint8_t len){
#line 115
  void *result;
#line 115

#line 115
  result = /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$Packet$getPayload(msg, len);
#line 115

#line 115
  return result;
#line 115
}
#line 115
# 115 "/cygdrive/c/Dropbox/tinyos-2.x/tos/lib/serial/SerialActiveMessageP.nc"
static inline uint8_t /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$Packet$maxPayloadLength(void )
#line 115
{
  return 28;
}

# 69 "/cygdrive/c/Dropbox/tinyos-2.x/tos/system/QueueC.nc"
static inline void /*PrintfC.QueueC*/QueueC$0$printQueue(void )
#line 69
{
}

#line 65
static inline /*PrintfC.QueueC*/QueueC$0$queue_t /*PrintfC.QueueC*/QueueC$0$Queue$head(void )
#line 65
{
  return /*PrintfC.QueueC*/QueueC$0$queue[/*PrintfC.QueueC*/QueueC$0$head];
}

#line 85
static inline /*PrintfC.QueueC*/QueueC$0$queue_t /*PrintfC.QueueC*/QueueC$0$Queue$dequeue(void )
#line 85
{
  /*PrintfC.QueueC*/QueueC$0$queue_t t = /*PrintfC.QueueC*/QueueC$0$Queue$head();

#line 87
  ;
  if (!/*PrintfC.QueueC*/QueueC$0$Queue$empty()) {
      /*PrintfC.QueueC*/QueueC$0$head++;
      if (/*PrintfC.QueueC*/QueueC$0$head == 250) {
#line 90
        /*PrintfC.QueueC*/QueueC$0$head = 0;
        }
#line 91
      /*PrintfC.QueueC*/QueueC$0$size--;
      /*PrintfC.QueueC*/QueueC$0$printQueue();
    }
  return t;
}

# 81 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/Queue.nc"
inline static PrintfP$Queue$t  PrintfP$Queue$dequeue(void ){
#line 81
  unsigned char result;
#line 81

#line 81
  result = /*PrintfC.QueueC*/QueueC$0$Queue$dequeue();
#line 81

#line 81
  return result;
#line 81
}
#line 81
# 269 "/usr/lib/ncc/nesc_nx.h"
static __inline  uint16_t __nesc_hton_uint16(void * target, uint16_t value)
#line 269
{
  uint8_t *base = target;

#line 271
  base[1] = value;
  base[0] = value >> 8;
  return value;
}

# 49 "/cygdrive/c/Dropbox/tinyos-2.x/tos/lib/serial/SerialActiveMessageP.nc"
static inline serial_header_t * /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$getHeader(message_t * msg)
#line 49
{
  return (serial_header_t * )((uint8_t *)msg + (unsigned short )& ((message_t *)0)->data - sizeof(serial_header_t ));
}

#line 142
static inline void /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$AMPacket$setDestination(message_t *amsg, am_addr_t addr)
#line 142
{
  serial_header_t *header = /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$getHeader(amsg);

#line 144
  __nesc_hton_uint16(header->dest.data, addr);
}

# 92 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/AMPacket.nc"
inline static void /*PrintfC.SerialAMSenderC.AMQueueEntryP*/AMQueueEntryP$0$AMPacket$setDestination(message_t * amsg, am_addr_t addr){
#line 92
  /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$AMPacket$setDestination(amsg, addr);
#line 92
}
#line 92
# 240 "/usr/lib/ncc/nesc_nx.h"
static __inline  uint8_t __nesc_hton_uint8(void * target, uint8_t value)
#line 240
{
  uint8_t *base = target;

#line 242
  base[0] = value;
  return value;
}

# 161 "/cygdrive/c/Dropbox/tinyos-2.x/tos/lib/serial/SerialActiveMessageP.nc"
static inline void /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$AMPacket$setType(message_t *amsg, am_id_t type)
#line 161
{
  serial_header_t *header = /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$getHeader(amsg);

#line 163
  __nesc_hton_uint8(header->type.data, type);
}

# 151 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/AMPacket.nc"
inline static void /*PrintfC.SerialAMSenderC.AMQueueEntryP*/AMQueueEntryP$0$AMPacket$setType(message_t * amsg, am_id_t t){
#line 151
  /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$AMPacket$setType(amsg, t);
#line 151
}
#line 151
# 69 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/AMSend.nc"
inline static error_t /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$0$AMSend$send(am_id_t arg_0x7e7050c0, am_addr_t addr, message_t * msg, uint8_t len){
#line 69
  unsigned char result;
#line 69

#line 69
  result = /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$AMSend$send(arg_0x7e7050c0, addr, msg, len);
#line 69

#line 69
  return result;
#line 69
}
#line 69
# 67 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/AMPacket.nc"
inline static am_addr_t /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$0$AMPacket$destination(message_t * amsg){
#line 67
  unsigned short result;
#line 67

#line 67
  result = /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$AMPacket$destination(amsg);
#line 67

#line 67
  return result;
#line 67
}
#line 67
#line 136
inline static am_id_t /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$0$AMPacket$type(message_t * amsg){
#line 136
  unsigned char result;
#line 136

#line 136
  result = /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$AMPacket$type(amsg);
#line 136

#line 136
  return result;
#line 136
}
#line 136
# 111 "/cygdrive/c/Dropbox/tinyos-2.x/tos/lib/serial/SerialActiveMessageP.nc"
static inline void /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$Packet$setPayloadLength(message_t *msg, uint8_t len)
#line 111
{
  __nesc_hton_uint8(/*SerialActiveMessageC.AM*/SerialActiveMessageP$0$getHeader(msg)->length.data, len);
}

# 83 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/Packet.nc"
inline static void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$0$Packet$setPayloadLength(message_t * msg, uint8_t len){
#line 83
  /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$Packet$setPayloadLength(msg, len);
#line 83
}
#line 83
# 82 "/cygdrive/c/Dropbox/tinyos-2.x/tos/system/AMQueueImplP.nc"
static inline error_t /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$0$Send$send(uint8_t clientId, message_t *msg, 
uint8_t len)
#line 83
{
  if (clientId >= 1) {
      return FAIL;
    }
  if (/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$0$queue[clientId].msg != (void *)0) {
      return EBUSY;
    }
  ;

  /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$0$queue[clientId].msg = msg;
  /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$0$Packet$setPayloadLength(msg, len);

  if (/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$0$current >= 1) {
      error_t err;
      am_id_t amId = /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$0$AMPacket$type(msg);
      am_addr_t dest = /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$0$AMPacket$destination(msg);

      ;
      /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$0$current = clientId;

      err = /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$0$AMSend$send(amId, dest, msg, len);
      if (err != SUCCESS) {
          ;
          /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$0$current = 1;
          /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$0$queue[clientId].msg = (void *)0;
        }

      return err;
    }
  else {
      ;
    }
  return SUCCESS;
}

# 64 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/Send.nc"
inline static error_t /*PrintfC.SerialAMSenderC.AMQueueEntryP*/AMQueueEntryP$0$Send$send(message_t * msg, uint8_t len){
#line 64
  unsigned char result;
#line 64

#line 64
  result = /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$0$Send$send(0U, msg, len);
#line 64

#line 64
  return result;
#line 64
}
#line 64
# 522 "/cygdrive/c/Dropbox/tinyos-2.x/tos/lib/serial/SerialP.nc"
static inline error_t SerialP$SendBytePacket$startSend(uint8_t b)
#line 522
{
  bool not_busy = FALSE;

#line 524
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 524
    {
      if (SerialP$txBuf[SerialP$TX_DATA_INDEX].state == SerialP$BUFFER_AVAILABLE) {
          SerialP$txBuf[SerialP$TX_DATA_INDEX].state = SerialP$BUFFER_FILLING;
          SerialP$txBuf[SerialP$TX_DATA_INDEX].buf = b;
          not_busy = TRUE;
        }
    }
#line 530
    __nesc_atomic_end(__nesc_atomic); }
  if (not_busy) {
      SerialP$MaybeScheduleTx();
      return SUCCESS;
    }
  return EBUSY;
}

# 51 "/cygdrive/c/Dropbox/tinyos-2.x/tos/lib/serial/SendBytePacket.nc"
inline static error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$SendBytePacket$startSend(uint8_t first_byte){
#line 51
  unsigned char result;
#line 51

#line 51
  result = SerialP$SendBytePacket$startSend(first_byte);
#line 51

#line 51
  return result;
#line 51
}
#line 51
# 43 "/cygdrive/c/Dropbox/tinyos-2.x/tos/lib/serial/SerialPacketInfoActiveMessageP.nc"
static inline uint8_t SerialPacketInfoActiveMessageP$Info$dataLinkLength(message_t *msg, uint8_t upperLen)
#line 43
{
  return upperLen + sizeof(serial_header_t );
}

# 347 "/cygdrive/c/Dropbox/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
static inline uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$PacketInfo$default$dataLinkLength(uart_id_t id, message_t *msg, 
uint8_t upperLen)
#line 348
{
  return 0;
}

# 23 "/cygdrive/c/Dropbox/tinyos-2.x/tos/lib/serial/SerialPacketInfo.nc"
inline static uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$PacketInfo$dataLinkLength(uart_id_t arg_0x7e5a8768, message_t *msg, uint8_t upperLen){
#line 23
  unsigned char result;
#line 23

#line 23
  switch (arg_0x7e5a8768) {
#line 23
    case TOS_SERIAL_ACTIVE_MESSAGE_ID:
#line 23
      result = SerialPacketInfoActiveMessageP$Info$dataLinkLength(msg, upperLen);
#line 23
      break;
#line 23
    default:
#line 23
      result = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$PacketInfo$default$dataLinkLength(arg_0x7e5a8768, msg, upperLen);
#line 23
      break;
#line 23
    }
#line 23

#line 23
  return result;
#line 23
}
#line 23
# 40 "/cygdrive/c/Dropbox/tinyos-2.x/tos/lib/serial/SerialPacketInfoActiveMessageP.nc"
static inline uint8_t SerialPacketInfoActiveMessageP$Info$offset(void )
#line 40
{
  return (uint8_t )(sizeof(message_header_t ) - sizeof(serial_header_t ));
}

# 344 "/cygdrive/c/Dropbox/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
static inline uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$PacketInfo$default$offset(uart_id_t id)
#line 344
{
  return 0;
}

# 15 "/cygdrive/c/Dropbox/tinyos-2.x/tos/lib/serial/SerialPacketInfo.nc"
inline static uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$PacketInfo$offset(uart_id_t arg_0x7e5a8768){
#line 15
  unsigned char result;
#line 15

#line 15
  switch (arg_0x7e5a8768) {
#line 15
    case TOS_SERIAL_ACTIVE_MESSAGE_ID:
#line 15
      result = SerialPacketInfoActiveMessageP$Info$offset();
#line 15
      break;
#line 15
    default:
#line 15
      result = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$PacketInfo$default$offset(arg_0x7e5a8768);
#line 15
      break;
#line 15
    }
#line 15

#line 15
  return result;
#line 15
}
#line 15
# 100 "/cygdrive/c/Dropbox/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
static inline error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$Send$send(uint8_t id, message_t *msg, uint8_t len)
#line 100
{
  if (/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$sendState != /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$SEND_STATE_IDLE) {
      return EBUSY;
    }

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 105
    {
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$sendIndex = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$PacketInfo$offset(id);
      if (/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$sendIndex > sizeof(message_header_t )) {
          {
            unsigned char __nesc_temp = 
#line 108
            ESIZE;

            {
#line 108
              __nesc_atomic_end(__nesc_atomic); 
#line 108
              return __nesc_temp;
            }
          }
        }
#line 111
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$sendError = SUCCESS;
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$sendBuffer = (uint8_t *)msg;
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$sendState = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$SEND_STATE_DATA;
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$sendId = id;
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$sendCancelled = FALSE;






      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$sendLen = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$PacketInfo$dataLinkLength(id, msg, len) + /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$sendIndex;
    }
#line 123
    __nesc_atomic_end(__nesc_atomic); }
  if (/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$SendBytePacket$startSend(id) == SUCCESS) {
      return SUCCESS;
    }
  else {
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$sendState = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$SEND_STATE_IDLE;
      return FAIL;
    }
}

# 64 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/Send.nc"
inline static error_t /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$SubSend$send(message_t * msg, uint8_t len){
#line 64
  unsigned char result;
#line 64

#line 64
  result = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$Send$send(TOS_SERIAL_ACTIVE_MESSAGE_ID, msg, len);
#line 64

#line 64
  return result;
#line 64
}
#line 64
# 56 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static error_t SerialP$RunTx$postTask(void ){
#line 56
  unsigned char result;
#line 56

#line 56
  result = SchedulerBasicP$TaskBasic$postTask(SerialP$RunTx);
#line 56

#line 56
  return result;
#line 56
}
#line 56
inline static error_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$updateFromTimer$postTask(void ){
#line 56
  unsigned char result;
#line 56

#line 56
  result = SchedulerBasicP$TaskBasic$postTask(/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$updateFromTimer);
#line 56

#line 56
  return result;
#line 56
}
#line 56
# 94 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer0AsyncP.nc"
static inline Atm128_TIFR_t HplAtm128Timer0AsyncP$TimerCtrl$getInterruptFlag(void )
#line 94
{
  return * (Atm128_TIFR_t *)& * (volatile uint8_t *)(0x36 + 0x20);
}

# 44 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/timer/HplAtm128TimerCtrl8.nc"
inline static Atm128_TIFR_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$TimerCtrl$getInterruptFlag(void ){
#line 44
  union __nesc_unnamed4273 result;
#line 44

#line 44
  result = HplAtm128Timer0AsyncP$TimerCtrl$getInterruptFlag();
#line 44

#line 44
  return result;
#line 44
}
#line 44
# 31 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void LedsP$Led2$toggle(void ){
#line 31
  /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP$0$IO$toggle();
#line 31
}
#line 31
# 103 "/cygdrive/c/Dropbox/tinyos-2.x/tos/system/LedsP.nc"
static inline void LedsP$Leds$led2Toggle(void )
#line 103
{
  LedsP$Led2$toggle();
  ;
#line 105
  ;
}

# 89 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/Leds.nc"
inline static void BlinkToRadioC$Leds$led2Toggle(void ){
#line 89
  LedsP$Leds$led2Toggle();
#line 89
}
#line 89
# 191 "BlinkToRadioC.nc"
static inline void BlinkToRadioC$BlockWrite$writeDone(storage_addr_t addr, void *buf, storage_len_t len, error_t error)
#line 191
{
  BlinkToRadioC$Leds$led2Toggle();
}

# 408 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/at45db/BlockStorageP.nc"
static inline void BlockStorageP$BlockWrite$default$writeDone(uint8_t id, storage_addr_t addr, void *buf, storage_len_t len, error_t result)
#line 408
{
}

# 71 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/BlockWrite.nc"
inline static void BlockStorageP$BlockWrite$writeDone(uint8_t arg_0x7dab6d28, storage_addr_t addr, void * buf, storage_len_t len, error_t error){
#line 71
  switch (arg_0x7dab6d28) {
#line 71
    case /*BlinkToRadioAppC.BlockStorageC*/BlockStorageC$0$BLOCK_ID:
#line 71
      BlinkToRadioC$BlockWrite$writeDone(addr, buf, len, error);
#line 71
      break;
#line 71
    default:
#line 71
      BlockStorageP$BlockWrite$default$writeDone(arg_0x7dab6d28, addr, buf, len, error);
#line 71
      break;
#line 71
    }
#line 71
}
#line 71
# 199 "BlinkToRadioC.nc"
static inline void BlinkToRadioC$BlockWrite$eraseDone(error_t error)
#line 199
{
}

# 409 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/at45db/BlockStorageP.nc"
static inline void BlockStorageP$BlockWrite$default$eraseDone(uint8_t id, error_t result)
#line 409
{
}

# 91 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/BlockWrite.nc"
inline static void BlockStorageP$BlockWrite$eraseDone(uint8_t arg_0x7dab6d28, error_t error){
#line 91
  switch (arg_0x7dab6d28) {
#line 91
    case /*BlinkToRadioAppC.BlockStorageC*/BlockStorageC$0$BLOCK_ID:
#line 91
      BlinkToRadioC$BlockWrite$eraseDone(error);
#line 91
      break;
#line 91
    default:
#line 91
      BlockStorageP$BlockWrite$default$eraseDone(arg_0x7dab6d28, error);
#line 91
      break;
#line 91
    }
#line 91
}
#line 91
# 196 "BlinkToRadioC.nc"
static inline void BlinkToRadioC$BlockRead$computeCrcDone(storage_addr_t addr, storage_len_t len, uint16_t crc, error_t error)
#line 196
{
}

# 412 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/at45db/BlockStorageP.nc"
static inline void BlockStorageP$BlockRead$default$computeCrcDone(uint8_t id, storage_addr_t addr, storage_len_t len, uint16_t x, error_t result)
#line 412
{
}

# 95 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/BlockRead.nc"
inline static void BlockStorageP$BlockRead$computeCrcDone(uint8_t arg_0x7dab3830, storage_addr_t addr, storage_len_t len, uint16_t crc, error_t error){
#line 95
  switch (arg_0x7dab3830) {
#line 95
    case /*BlinkToRadioAppC.BlockStorageC*/BlockStorageC$0$BLOCK_ID:
#line 95
      BlinkToRadioC$BlockRead$computeCrcDone(addr, len, crc, error);
#line 95
      break;
#line 95
    default:
#line 95
      BlockStorageP$BlockRead$default$computeCrcDone(arg_0x7dab3830, addr, len, crc, error);
#line 95
      break;
#line 95
    }
#line 95
}
#line 95
# 198 "BlinkToRadioC.nc"
static inline void BlinkToRadioC$BlockWrite$syncDone(error_t error)
#line 198
{
}

# 410 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/at45db/BlockStorageP.nc"
static inline void BlockStorageP$BlockWrite$default$syncDone(uint8_t id, error_t result)
#line 410
{
}

# 112 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/BlockWrite.nc"
inline static void BlockStorageP$BlockWrite$syncDone(uint8_t arg_0x7dab6d28, error_t error){
#line 112
  switch (arg_0x7dab6d28) {
#line 112
    case /*BlinkToRadioAppC.BlockStorageC*/BlockStorageC$0$BLOCK_ID:
#line 112
      BlinkToRadioC$BlockWrite$syncDone(error);
#line 112
      break;
#line 112
    default:
#line 112
      BlockStorageP$BlockWrite$default$syncDone(arg_0x7dab6d28, error);
#line 112
      break;
#line 112
    }
#line 112
}
#line 112
# 136 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/at45db/BlockStorageP.nc"
static inline int BlockStorageP$BConfig$default$flipped(uint8_t blockId)
#line 136
{
  return FALSE;
}

# 30 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/at45db/At45dbBlockConfig.nc"
inline static int BlockStorageP$BConfig$flipped(uint8_t arg_0x7da998d8){
#line 30
  int result;
#line 30

#line 30
    result = BlockStorageP$BConfig$default$flipped(arg_0x7da998d8);
#line 30

#line 30
  return result;
#line 30
}
#line 30
# 21 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/at45db/At45dbStorageManagerC.nc"
static inline at45page_t At45dbStorageManagerC$At45dbVolume$remap(volume_id_t volid, at45page_t volumePage)
#line 21
{
  switch (volid) 
    {
# 14 "build/micaz/StorageVolumes.h"
      case VOLUME_BLOCKTEST: return volumePage + 0;
# 26 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/at45db/At45dbStorageManagerC.nc"
      default: return AT45_MAX_PAGES;
    }
}

# 414 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/at45db/BlockStorageP.nc"
static inline at45page_t BlockStorageP$At45dbVolume$default$remap(uint8_t id, at45page_t volumePage)
#line 414
{
#line 414
  return 0;
}

# 24 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/at45db/At45dbVolume.nc"
inline static at45page_t BlockStorageP$At45dbVolume$remap(uint8_t arg_0x7daa12a8, at45page_t volumePage){
#line 24
  unsigned short result;
#line 24

#line 24
  switch (arg_0x7daa12a8) {
#line 24
    case /*BlinkToRadioAppC.BlockStorageC*/BlockStorageC$0$BLOCK_ID:
#line 24
      result = At45dbStorageManagerC$At45dbVolume$remap(0, volumePage);
#line 24
      break;
#line 24
    default:
#line 24
      result = BlockStorageP$At45dbVolume$default$remap(arg_0x7daa12a8, volumePage);
#line 24
      break;
#line 24
    }
#line 24

#line 24
  return result;
#line 24
}
#line 24
# 405 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/at45db/At45dbP.nc"
static inline void At45dbP$At45db$write(at45page_t page, at45pageoffset_t offset, 
void *reqdata, at45pageoffset_t n)
#line 406
{
  At45dbP$newRequest(At45dbP$R_WRITE, page, offset, reqdata, n);
}

# 62 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/at45db/At45db.nc"
inline static void BlockStorageP$At45db$write(at45page_t page, at45pageoffset_t offset, void * data, at45pageoffset_t n){
#line 62
  At45dbP$At45db$write(page, offset, data, n);
#line 62
}
#line 62
# 392 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/at45db/At45dbP.nc"
static inline void At45dbP$At45db$read(at45page_t page, at45pageoffset_t offset, 
void *reqdata, at45pageoffset_t n)
#line 393
{
  At45dbP$newRequest(At45dbP$R_READ, page, offset, reqdata, n);
}

# 155 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/at45db/At45db.nc"
inline static void BlockStorageP$At45db$read(at45page_t page, at45pageoffset_t offset, void * data, at45pageoffset_t n){
#line 155
  At45dbP$At45db$read(page, offset, data, n);
#line 155
}
#line 155
# 397 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/at45db/At45dbP.nc"
static inline void At45dbP$At45db$computeCrc(at45page_t page, 
at45pageoffset_t offset, 
at45pageoffset_t n, 
uint16_t baseCrc)
#line 400
{

  At45dbP$newRequest(At45dbP$R_READCRC, page, offset, (uint8_t * )baseCrc, n);
}

# 176 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/at45db/At45db.nc"
inline static void BlockStorageP$At45db$computeCrc(at45page_t page, at45pageoffset_t offset, at45pageoffset_t n, uint16_t baseCrc){
#line 176
  At45dbP$At45db$computeCrc(page, offset, n, baseCrc);
#line 176
}
#line 176
# 380 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/at45db/BlockStorageP.nc"
static inline void BlockStorageP$At45db$computeCrcDone(error_t result, uint16_t newCrc)
#line 380
{
  if (BlockStorageP$client != BlockStorageP$NO_CLIENT) {
    BlockStorageP$multipageOpDone(result, newCrc);
    }
}

# 183 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/at45db/At45db.nc"
inline static void At45dbP$At45db$computeCrcDone(error_t error, uint16_t crc){
#line 183
  BlockStorageP$At45db$computeCrcDone(error, crc);
#line 183
}
#line 183
# 370 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/at45db/BlockStorageP.nc"
static inline void BlockStorageP$At45db$writeDone(error_t result)
#line 370
{
  if (BlockStorageP$client != BlockStorageP$NO_CLIENT) {
    BlockStorageP$multipageOpDone(result, 0);
    }
}

# 69 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/at45db/At45db.nc"
inline static void At45dbP$At45db$writeDone(error_t error){
#line 69
  BlockStorageP$At45db$writeDone(error);
#line 69
}
#line 69
# 331 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/at45db/BlockStorageP.nc"
static inline void BlockStorageP$syncSyncDone(error_t error)
#line 331
{
  BlockStorageP$endRequest(error, 0);
}

#line 396
static inline void BlockStorageP$At45db$syncDone(error_t result)
#line 396
{
  if (BlockStorageP$client != BlockStorageP$NO_CLIENT) {
    BlockStorageP$syncSyncDone(result);
    }
}

# 125 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/at45db/At45db.nc"
inline static void At45dbP$At45db$syncDone(error_t error){
#line 125
  BlockStorageP$At45db$syncDone(error);
#line 125
}
#line 125
# 406 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/at45db/BlockStorageP.nc"
static inline void BlockStorageP$At45db$flushDone(error_t result)
#line 406
{
}

# 143 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/at45db/At45db.nc"
inline static void At45dbP$At45db$flushDone(error_t error){
#line 143
  BlockStorageP$At45db$flushDone(error);
#line 143
}
#line 143
# 307 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/at45db/BlockStorageP.nc"
static inline void BlockStorageP$eraseEraseDone(error_t error)
#line 307
{
  BlockStorageP$endRequest(error, 0);
}

# 56 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static error_t BlockStorageP$erasetask$postTask(void ){
#line 56
  unsigned char result;
#line 56

#line 56
  result = SchedulerBasicP$TaskBasic$postTask(BlockStorageP$erasetask);
#line 56

#line 56
  return result;
#line 56
}
#line 56
# 385 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/at45db/BlockStorageP.nc"
static inline void BlockStorageP$At45db$eraseDone(error_t result)
#line 385
{
  if (BlockStorageP$client != BlockStorageP$NO_CLIENT) {
      if (BlockStorageP$blockpage < 1024) {
          BlockStorageP$blockpage++;
          BlockStorageP$erasetask$postTask();
        }
      else {
        BlockStorageP$eraseEraseDone(result);
        }
    }
}

# 105 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/at45db/At45db.nc"
inline static void At45dbP$At45db$eraseDone(error_t error){
#line 105
  BlockStorageP$At45db$eraseDone(error);
#line 105
}
#line 105
# 407 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/at45db/BlockStorageP.nc"
static inline void BlockStorageP$At45db$copyPageDone(error_t error)
#line 407
{
}

# 85 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/at45db/At45db.nc"
inline static void At45dbP$At45db$copyPageDone(error_t error){
#line 85
  BlockStorageP$At45db$copyPageDone(error);
#line 85
}
#line 85
# 221 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/at45db/HplAt45dbByteC.nc"
static inline void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$HplAt45db$flush(uint8_t cmd, at45page_t page)
#line 221
{
  /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$execCommand(/*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$P_FLUSH, cmd, 0, page, 0, (void *)0, 1);
}

# 73 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/at45db/HplAt45db.nc"
inline static void At45dbP$HplAt45db$flush(uint8_t cmd, at45page_t page){
#line 73
  /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$HplAt45db$flush(cmd, page);
#line 73
}
#line 73
# 56 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static error_t At45dbP$taskSuccess$postTask(void ){
#line 56
  unsigned char result;
#line 56

#line 56
  result = SchedulerBasicP$TaskBasic$postTask(At45dbP$taskSuccess);
#line 56

#line 56
  return result;
#line 56
}
#line 56
# 225 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/at45db/HplAt45dbByteC.nc"
static inline void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$HplAt45db$compare(uint8_t cmd, at45page_t page)
#line 225
{
  /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$execCommand(/*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$P_COMPARE, cmd, 0, page, 0, (void *)0, 1);
}

# 87 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/at45db/HplAt45db.nc"
inline static void At45dbP$HplAt45db$compare(uint8_t cmd, at45page_t page){
#line 87
  /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$HplAt45db$compare(cmd, page);
#line 87
}
#line 87
# 239 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/at45db/HplAt45dbByteC.nc"
static inline void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$HplAt45db$readBuffer(uint8_t cmd, at45pageoffset_t offset, 
uint8_t *pdata, at45pageoffset_t count)
#line 240
{
  /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$execCommand(/*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$P_READ, cmd, 2, 0, offset, pdata, count);
}

# 119 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/at45db/HplAt45db.nc"
inline static void At45dbP$HplAt45db$readBuffer(uint8_t cmd, at45pageoffset_t offset, uint8_t * data, uint16_t n){
#line 119
  /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$HplAt45db$readBuffer(cmd, offset, data, n);
#line 119
}
#line 119
# 244 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/at45db/HplAt45dbByteC.nc"
static inline void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$HplAt45db$crc(uint8_t cmd, 
at45page_t page, at45pageoffset_t offset, 
at45pageoffset_t count, 
uint16_t baseCrc)
#line 247
{
  /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$execCommand(/*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$P_READ_CRC, cmd, 2, page, offset, (uint8_t * )baseCrc, count);
}

# 157 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/at45db/HplAt45db.nc"
inline static void At45dbP$HplAt45db$crc(uint8_t cmd, at45page_t page, at45pageoffset_t offset, at45pageoffset_t n, uint16_t baseCrc){
#line 157
  /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$HplAt45db$crc(cmd, page, offset, n, baseCrc);
#line 157
}
#line 157
# 251 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/at45db/HplAt45dbByteC.nc"
static inline void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$HplAt45db$write(uint8_t cmd, 
at45page_t page, at45pageoffset_t offset, 
uint8_t *pdata, at45pageoffset_t count)
#line 253
{
  /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$execCommand(/*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$P_WRITE, cmd, 0, page, offset, pdata, count);
}

# 178 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/at45db/HplAt45db.nc"
inline static void At45dbP$HplAt45db$write(uint8_t cmd, at45page_t page, at45pageoffset_t offset, uint8_t * data, at45pageoffset_t n){
#line 178
  /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$HplAt45db$write(cmd, page, offset, data, n);
#line 178
}
#line 178
# 217 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/at45db/HplAt45dbByteC.nc"
static inline void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$HplAt45db$fill(uint8_t cmd, at45page_t page)
#line 217
{
  /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$execCommand(/*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$P_FILL, cmd, 0, page, 0, (void *)0, 1);
}

# 55 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/at45db/HplAt45db.nc"
inline static void At45dbP$HplAt45db$fill(uint8_t cmd, at45page_t page){
#line 55
  /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$HplAt45db$fill(cmd, page);
#line 55
}
#line 55
# 194 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/at45db/At45dbP.nc"
static inline void At45dbP$HplAt45db$writeDone(void )
#line 194
{
  At45dbP$buffer[At45dbP$selected].clean = FALSE;
  At45dbP$buffer[At45dbP$selected].unchecked = 0;
  At45dbP$requestDone(SUCCESS, 0, At45dbP$IDLE);
}

# 185 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/at45db/HplAt45db.nc"
inline static void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$HplAt45db$writeDone(void ){
#line 185
  At45dbP$HplAt45db$writeDone();
#line 185
}
#line 185
# 190 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/at45db/At45dbP.nc"
static inline void At45dbP$HplAt45db$readDone(void )
#line 190
{
  At45dbP$requestDone(SUCCESS, 0, At45dbP$IDLE);
}

# 141 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/at45db/HplAt45db.nc"
inline static void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$HplAt45db$readDone(void ){
#line 141
  At45dbP$HplAt45db$readDone();
#line 141
}
#line 141
# 231 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/at45db/At45dbP.nc"
static inline void At45dbP$HplAt45db$eraseDone(void )
#line 231
{
  At45dbP$flashBusy = TRUE;



  At45dbP$buffer[At45dbP$selected].page = At45dbP$reqPage;
  At45dbP$buffer[At45dbP$selected].clean = TRUE;
  At45dbP$buffer[At45dbP$selected].erased = TRUE;
  At45dbP$requestDone(SUCCESS, 0, At45dbP$IDLE);
}

# 106 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/at45db/HplAt45db.nc"
inline static void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$HplAt45db$eraseDone(void ){
#line 106
  At45dbP$HplAt45db$eraseDone();
#line 106
}
#line 106
# 196 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/at45db/HplAt45dbByteC.nc"
static inline void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$HplAt45db$waitCompare(void )
#line 196
{
  /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$status = /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$P_WAIT_COMPARE;
  /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$Resource$request();
}

# 41 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/at45db/HplAt45db.nc"
inline static void At45dbP$HplAt45db$waitCompare(void ){
#line 41
  /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$HplAt45db$waitCompare();
#line 41
}
#line 41
# 35 "/cygdrive/c/Dropbox/tinyos-2.x/tos/platforms/micaz/BusyWaitMicroC.nc"
static __inline void BusyWaitMicroC$BusyWait$wait(uint16_t dt)
#line 35
{

  if (dt) {


     __asm volatile (
    "1:	sbiw	%0,1\n"
    "	adiw	%0,1\n"
    "	sbiw	%0,1\n"
    "	brne	1b" : "+w"(dt));
    }
}

# 55 "/cygdrive/c/Dropbox/tinyos-2.x/tos/lib/timer/BusyWait.nc"
inline static void At45dbP$BusyWait$wait(At45dbP$BusyWait$size_type dt){
#line 55
  BusyWaitMicroC$BusyWait$wait(dt);
#line 55
}
#line 55
# 212 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/at45db/At45dbP.nc"
static inline void At45dbP$HplAt45db$compareDone(void )
#line 212
{
  At45dbP$flashBusy = TRUE;
  At45dbP$buffer[At45dbP$checking].busy = TRUE;




  At45dbP$BusyWait$wait(10);
  At45dbP$HplAt45db$waitCompare();
}

# 93 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/at45db/HplAt45db.nc"
inline static void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$HplAt45db$compareDone(void ){
#line 93
  At45dbP$HplAt45db$compareDone();
#line 93
}
#line 93
# 204 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/at45db/At45dbP.nc"
static inline void At45dbP$HplAt45db$flushDone(void )
#line 204
{
  At45dbP$flashBusy = TRUE;
  At45dbP$buffer[At45dbP$selected].clean = At45dbP$buffer[At45dbP$selected].busy = TRUE;
  At45dbP$buffer[At45dbP$selected].unchecked++;
  At45dbP$buffer[At45dbP$selected].erased = FALSE;
  At45dbP$handleRWRequest();
}

# 79 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/at45db/HplAt45db.nc"
inline static void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$HplAt45db$flushDone(void ){
#line 79
  At45dbP$HplAt45db$flushDone();
#line 79
}
#line 79
# 223 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/at45db/At45dbP.nc"
static inline void At45dbP$HplAt45db$fillDone(void )
#line 223
{
  At45dbP$flashBusy = TRUE;
  At45dbP$buffer[At45dbP$selected].page = At45dbP$reqPage;
  At45dbP$buffer[At45dbP$selected].clean = At45dbP$buffer[At45dbP$selected].busy = TRUE;
  At45dbP$buffer[At45dbP$selected].erased = FALSE;
  At45dbP$handleRWRequest();
}

# 61 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/at45db/HplAt45db.nc"
inline static void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$HplAt45db$fillDone(void ){
#line 61
  At45dbP$HplAt45db$fillDone();
#line 61
}
#line 61
# 200 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/at45db/At45dbP.nc"
static inline void At45dbP$HplAt45db$crcDone(uint16_t crc)
#line 200
{
  At45dbP$requestDone(SUCCESS, crc, At45dbP$IDLE);
}

# 163 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/at45db/HplAt45db.nc"
inline static void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$HplAt45db$crcDone(uint16_t computedCrc){
#line 163
  At45dbP$HplAt45db$crcDone(computedCrc);
#line 163
}
#line 163
# 55 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/at45db/HplAt45dbByteC.nc"
static inline void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$complete(uint16_t crc)
#line 55
{
  uint8_t s = /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$status;

  /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$status = /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$P_IDLE;
  switch (s) 
    {
      default: break;
      case /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$P_READ_CRC: 
        /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$HplAt45db$crcDone(crc);
      break;
      case /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$P_FILL: 
        /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$HplAt45db$fillDone();
      break;
      case /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$P_FLUSH: 
        /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$HplAt45db$flushDone();
      break;
      case /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$P_COMPARE: 
        /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$HplAt45db$compareDone();
      break;
      case /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$P_ERASE: 
        /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$HplAt45db$eraseDone();
      break;
      case /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$P_READ: 
        /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$HplAt45db$readDone();
      break;
      case /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$P_WRITE: 
        /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$HplAt45db$writeDone();
      break;
    }
}

# 50 "/cygdrive/c/Dropbox/tinyos-2.x/tos/system/NoArbiterC.nc"
static inline void /*HplAt45dbIOC.NoArbiterC*/NoArbiterC$0$ResourceConfigure$default$unconfigure(void )
#line 50
{
}

# 55 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/ResourceConfigure.nc"
inline static void /*HplAt45dbIOC.NoArbiterC*/NoArbiterC$0$ResourceConfigure$unconfigure(void ){
#line 55
  /*HplAt45dbIOC.NoArbiterC*/NoArbiterC$0$ResourceConfigure$default$unconfigure();
#line 55
}
#line 55
# 40 "/cygdrive/c/Dropbox/tinyos-2.x/tos/system/NoArbiterC.nc"
static inline error_t /*HplAt45dbIOC.NoArbiterC*/NoArbiterC$0$Resource$release(void )
#line 40
{
  /*HplAt45dbIOC.NoArbiterC*/NoArbiterC$0$ResourceConfigure$unconfigure();
  return SUCCESS;
}

# 110 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/Resource.nc"
inline static error_t /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$Resource$release(void ){
#line 110
  unsigned char result;
#line 110

#line 110
  result = /*HplAt45dbIOC.NoArbiterC*/NoArbiterC$0$Resource$release();
#line 110

#line 110
  return result;
#line 110
}
#line 110
# 85 "/cygdrive/c/Dropbox/tinyos-2.x/tos/platforms/mica2/chips/at45db/HplAt45dbIOP.nc"
static inline void HplAt45dbIOP$HplAt45dbByte$deselect(void )
#line 85
{
  HplAt45dbIOP$Select$set();
}

# 52 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/at45db/HplAt45dbByte.nc"
inline static void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$HplAt45dbByte$deselect(void ){
#line 52
  HplAt45dbIOP$HplAt45dbByte$deselect();
#line 52
}
#line 52
# 34 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/SpiByte.nc"
inline static uint8_t /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$FlashSpi$write(uint8_t tx){
#line 34
  unsigned char result;
#line 34

#line 34
  result = HplAt45dbIOP$FlashSpi$write(tx);
#line 34

#line 34
  return result;
#line 34
}
#line 34
# 47 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit3*/HplAtm128GeneralIOPinP$3$IO$clr(void )
#line 47
{
#line 47
  * (volatile uint8_t * )59U &= ~(1 << 3);
}

# 30 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void HplAt45dbIOP$Select$clr(void ){
#line 30
  /*HplAtm128GeneralIOC.PortA.Bit3*/HplAtm128GeneralIOPinP$3$IO$clr();
#line 30
}
#line 30
# 80 "/cygdrive/c/Dropbox/tinyos-2.x/tos/platforms/mica2/chips/at45db/HplAt45dbIOP.nc"
static inline void HplAt45dbIOP$HplAt45dbByte$select(void )
#line 80
{
  HplAt45dbIOP$Clk$clr();
  HplAt45dbIOP$Select$clr();
}

# 47 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/at45db/HplAt45dbByte.nc"
inline static void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$HplAt45dbByte$select(void ){
#line 47
  HplAt45dbIOP$HplAt45dbByte$select();
#line 47
}
#line 47
# 92 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/at45db/HplAt45dbByteC.nc"
static inline void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$doCommand(void )
#line 92
{
  uint8_t in = 0;
#line 93
  uint8_t out = 0;
  uint8_t *ptr;
  at45pageoffset_t count;
  uint8_t lphase;
  uint16_t crc = (uint16_t )/*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$data;

  if (/*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$dataCount) 
    {






      ptr = /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$flashCmd;
      lphase = /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$P_SEND_CMD;
      count = 4 + /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$dontCare;

      /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$HplAt45dbByte$select();
      for (; ; ) 
        {
          if (lphase == /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$P_READ_CRC) 
            {
              crc = crcByte(crc, in);

              --count;
              if (!count) {
                break;
                }
            }
          else {
#line 122
            if (lphase == /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$P_SEND_CMD) 
              {

                out = * ptr++;
                count--;
                if (!count) 
                  {
                    lphase = /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$status;
                    ptr = /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$data;
                    count = /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$dataCount;
                  }
              }
            else {
#line 134
              if (lphase == /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$P_READ) 
                {
                  * ptr++ = in;
                  --count;
                  if (!count) {
                    break;
                    }
                }
              else {
#line 141
                if (lphase == /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$P_WRITE) 
                  {
                    if (!count) {
                      break;
                      }
                    out = * ptr++;
                    --count;
                  }
                else {
                  break;
                  }
                }
              }
            }
#line 152
          in = /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$FlashSpi$write(out);
        }
      /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$HplAt45dbByte$deselect();
    }

  /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$Resource$release();
  /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$complete(crc);
}

# 56 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static error_t HplAt45dbIOP$avail$postTask(void ){
#line 56
  unsigned char result;
#line 56

#line 56
  result = SchedulerBasicP$TaskBasic$postTask(HplAt45dbIOP$avail);
#line 56

#line 56
  return result;
#line 56
}
#line 56
# 145 "/cygdrive/c/Dropbox/tinyos-2.x/tos/platforms/mica2/chips/at45db/HplAt45dbIOP.nc"
static inline void HplAt45dbIOP$InInterrupt$fired(void )
#line 145
{
  HplAt45dbIOP$InInterrupt$disable();
  HplAt45dbIOP$avail$postTask();
}

# 45 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline bool /*HplAtm128GeneralIOC.PortD.Bit2*/HplAtm128GeneralIOPinP$26$IO$get(void )
#line 45
{
#line 45
  return (* (volatile uint8_t * )48U & (1 << 2)) != 0;
}

# 32 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static bool HplAt45dbIOP$In$get(void ){
#line 32
  unsigned char result;
#line 32

#line 32
  result = /*HplAtm128GeneralIOC.PortD.Bit2*/HplAtm128GeneralIOPinP$26$IO$get();
#line 32

#line 32
  return result;
#line 32
}
#line 32
# 55 "/cygdrive/c/Dropbox/tinyos-2.x/tos/lib/timer/BusyWait.nc"
inline static void HplAt45dbIOP$BusyWait$wait(HplAt45dbIOP$BusyWait$size_type dt){
#line 55
  BusyWaitMicroC$BusyWait$wait(dt);
#line 55
}
#line 55
# 42 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static __inline void /*HplAtm128InterruptC.IntPin2*/HplAtm128InterruptPinP$2$Irq$enable(void )
#line 42
{
#line 42
  * (volatile uint8_t *)(0x39 + 0x20) |= 1 << 2;
}

# 35 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
inline static void HplAt45dbIOP$InInterrupt$enable(void ){
#line 35
  /*HplAtm128InterruptC.IntPin2*/HplAtm128InterruptPinP$2$Irq$enable();
#line 35
}
#line 35
# 41 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static __inline void /*HplAtm128InterruptC.IntPin2*/HplAtm128InterruptPinP$2$Irq$clear(void )
#line 41
{
#line 41
  * (volatile uint8_t *)(0x38 + 0x20) = 1 << 2;
}

# 45 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
inline static void HplAt45dbIOP$InInterrupt$clear(void ){
#line 45
  /*HplAtm128InterruptC.IntPin2*/HplAtm128InterruptPinP$2$Irq$clear();
#line 45
}
#line 45
# 127 "/cygdrive/c/Dropbox/tinyos-2.x/tos/platforms/mica2/chips/at45db/HplAt45dbIOP.nc"
static inline void HplAt45dbIOP$HplAt45dbByte$waitIdle(void )
#line 127
{

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      HplAt45dbIOP$InInterrupt$clear();
      HplAt45dbIOP$InInterrupt$enable();
      HplAt45dbIOP$Clk$clr();




      HplAt45dbIOP$BusyWait$wait(2);

      if (HplAt45dbIOP$In$get()) {
        HplAt45dbIOP$InInterrupt$fired();
        }
    }
#line 143
    __nesc_atomic_end(__nesc_atomic); }
}

# 31 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/at45db/HplAt45dbByte.nc"
inline static void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$HplAt45dbByte$waitIdle(void ){
#line 31
  HplAt45dbIOP$HplAt45dbByte$waitIdle();
#line 31
}
#line 31
# 86 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/at45db/HplAt45dbByteC.nc"
static inline void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$requestFlashStatus(void )
#line 86
{
  /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$HplAt45dbByte$select();
  /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$FlashSpi$write(AT45_C_REQ_STATUS);
  /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$HplAt45dbByte$waitIdle();
}

#line 161
static inline void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$Resource$granted(void )
#line 161
{
  switch (/*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$status) 
    {
      case /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$P_WAIT_COMPARE: case /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$P_WAIT_IDLE: 
          /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$requestFlashStatus();
      break;
      default: 
        /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$doCommand();
      break;
    }
}

# 92 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/Resource.nc"
inline static void /*HplAt45dbIOC.NoArbiterC*/NoArbiterC$0$Resource$granted(void ){
#line 92
  /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$Resource$granted();
#line 92
}
#line 92
# 49 "/cygdrive/c/Dropbox/tinyos-2.x/tos/system/NoArbiterC.nc"
static inline void /*HplAt45dbIOC.NoArbiterC*/NoArbiterC$0$ResourceConfigure$default$configure(void )
#line 49
{
}

# 49 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/ResourceConfigure.nc"
inline static void /*HplAt45dbIOC.NoArbiterC*/NoArbiterC$0$ResourceConfigure$configure(void ){
#line 49
  /*HplAt45dbIOC.NoArbiterC*/NoArbiterC$0$ResourceConfigure$default$configure();
#line 49
}
#line 49
# 25 "/cygdrive/c/Dropbox/tinyos-2.x/tos/system/NoArbiterC.nc"
static inline void /*HplAt45dbIOC.NoArbiterC*/NoArbiterC$0$granted$runTask(void )
#line 25
{
  /*HplAt45dbIOC.NoArbiterC*/NoArbiterC$0$ResourceConfigure$configure();
  /*HplAt45dbIOC.NoArbiterC*/NoArbiterC$0$Resource$granted();
}

# 163 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/at45db/At45dbP.nc"
static inline void At45dbP$HplAt45db$waitIdleDone(void )
#line 163
{
  At45dbP$flashIdle();







  At45dbP$handleRWRequest();
}

# 35 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/at45db/HplAt45db.nc"
inline static void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$HplAt45db$waitIdleDone(void ){
#line 35
  At45dbP$HplAt45db$waitIdleDone();
#line 35
}
#line 35
# 175 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/at45db/At45dbP.nc"
static inline void At45dbP$HplAt45db$waitCompareDone(bool ok)
#line 175
{
  At45dbP$flashIdle();

  if (ok) {
    At45dbP$buffer[At45dbP$checking].unchecked = 0;
    }
  else {
#line 180
    if (At45dbP$buffer[At45dbP$checking].unchecked < 2) {
      At45dbP$buffer[At45dbP$checking].clean = FALSE;
      }
    else {
        At45dbP$requestDone(FAIL, 0, At45dbP$BROKEN);
        return;
      }
    }
#line 187
  At45dbP$handleRWRequest();
}

# 47 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/at45db/HplAt45db.nc"
inline static void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$HplAt45db$waitCompareDone(bool compareOk){
#line 47
  At45dbP$HplAt45db$waitCompareDone(compareOk);
#line 47
}
#line 47
# 46 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortD.Bit5*/HplAtm128GeneralIOPinP$29$IO$set(void )
#line 46
{
#line 46
  * (volatile uint8_t * )50U |= 1 << 5;
}

# 29 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void HplAt45dbIOP$Clk$set(void ){
#line 29
  /*HplAtm128GeneralIOC.PortD.Bit5*/HplAtm128GeneralIOPinP$29$IO$set();
#line 29
}
#line 29
# 150 "/cygdrive/c/Dropbox/tinyos-2.x/tos/platforms/mica2/chips/at45db/HplAt45dbIOP.nc"
static inline bool HplAt45dbIOP$HplAt45dbByte$getCompareStatus(void )
#line 150
{
  HplAt45dbIOP$Clk$set();
  HplAt45dbIOP$Clk$clr();

   __asm volatile ("nop");
   __asm volatile ("nop");
  return !HplAt45dbIOP$In$get();
}

# 42 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/at45db/HplAt45dbByte.nc"
inline static bool /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$HplAt45dbByte$getCompareStatus(void ){
#line 42
  unsigned char result;
#line 42

#line 42
  result = HplAt45dbIOP$HplAt45dbByte$getCompareStatus();
#line 42

#line 42
  return result;
#line 42
}
#line 42
# 201 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/at45db/HplAt45dbByteC.nc"
static inline void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$HplAt45dbByte$idle(void )
#line 201
{
  if (/*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$status == /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$P_WAIT_COMPARE) 
    {
      bool cstatus = /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$HplAt45dbByte$getCompareStatus();

#line 205
      /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$HplAt45dbByte$deselect();
      /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$Resource$release();
      /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$HplAt45db$waitCompareDone(cstatus);
    }
  else 
    {
      /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$HplAt45dbByte$deselect();
      /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$Resource$release();
      /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$HplAt45db$waitIdleDone();
    }
}

# 35 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/at45db/HplAt45dbByte.nc"
inline static void HplAt45dbIOP$HplAt45dbByte$idle(void ){
#line 35
  /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$HplAt45dbByte$idle();
#line 35
}
#line 35
# 123 "/cygdrive/c/Dropbox/tinyos-2.x/tos/platforms/mica2/chips/at45db/HplAt45dbIOP.nc"
static inline void HplAt45dbIOP$avail$runTask(void )
#line 123
{
  HplAt45dbIOP$HplAt45dbByte$idle();
}

# 137 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/at45db/At45dbP.nc"
static inline void At45dbP$taskFail$runTask(void )
#line 137
{
  At45dbP$requestDone(FAIL, 0, At45dbP$IDLE);
}

#line 134
static inline void At45dbP$taskSuccess$runTask(void )
#line 134
{
  At45dbP$requestDone(SUCCESS, 0, At45dbP$IDLE);
}

# 401 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/at45db/BlockStorageP.nc"
static inline void BlockStorageP$erasetask$runTask(void )
#line 401
{
  BlockStorageP$eraseStart();
}

# 31 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void LedsP$Led0$toggle(void ){
#line 31
  /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP$2$IO$toggle();
#line 31
}
#line 31
# 73 "/cygdrive/c/Dropbox/tinyos-2.x/tos/system/LedsP.nc"
static inline void LedsP$Leds$led0Toggle(void )
#line 73
{
  LedsP$Led0$toggle();
  ;
#line 75
  ;
}

# 56 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/Leds.nc"
inline static void BlinkToRadioC$Leds$led0Toggle(void ){
#line 56
  LedsP$Leds$led0Toggle();
#line 56
}
#line 56
# 100 "BlinkToRadioC.nc"
static inline void BlinkToRadioC$AMSend$sendDone(message_t *msg, error_t error)
#line 100
{
  if (&BlinkToRadioC$pkt == msg) {
      BlinkToRadioC$busy = FALSE;
    }


  BlinkToRadioC$Leds$led0Toggle();
}

# 99 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/AMSend.nc"
inline static void /*BlinkToRadioAppC.AMSenderC.AMQueueEntryP*/AMQueueEntryP$1$AMSend$sendDone(message_t * msg, error_t error){
#line 99
  BlinkToRadioC$AMSend$sendDone(msg, error);
#line 99
}
#line 99
# 57 "/cygdrive/c/Dropbox/tinyos-2.x/tos/system/AMQueueEntryP.nc"
static inline void /*BlinkToRadioAppC.AMSenderC.AMQueueEntryP*/AMQueueEntryP$1$Send$sendDone(message_t *m, error_t err)
#line 57
{
  /*BlinkToRadioAppC.AMSenderC.AMQueueEntryP*/AMQueueEntryP$1$AMSend$sendDone(m, err);
}

# 207 "/cygdrive/c/Dropbox/tinyos-2.x/tos/system/AMQueueImplP.nc"
static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP$1$Send$default$sendDone(uint8_t id, message_t *msg, error_t err)
#line 207
{
}

# 89 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/Send.nc"
inline static void /*AMQueueP.AMQueueImplP*/AMQueueImplP$1$Send$sendDone(uint8_t arg_0x7e7066b0, message_t * msg, error_t error){
#line 89
  switch (arg_0x7e7066b0) {
#line 89
    case 0U:
#line 89
      /*BlinkToRadioAppC.AMSenderC.AMQueueEntryP*/AMQueueEntryP$1$Send$sendDone(msg, error);
#line 89
      break;
#line 89
    default:
#line 89
      /*AMQueueP.AMQueueImplP*/AMQueueImplP$1$Send$default$sendDone(arg_0x7e7066b0, msg, error);
#line 89
      break;
#line 89
    }
#line 89
}
#line 89
# 118 "/cygdrive/c/Dropbox/tinyos-2.x/tos/system/AMQueueImplP.nc"
static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP$1$CancelTask$runTask(void )
#line 118
{
  uint8_t i;
#line 119
  uint8_t j;
#line 119
  uint8_t mask;
#line 119
  uint8_t last;
  message_t *msg;

#line 121
  for (i = 0; i < 1 / 8 + 1; i++) {
      if (/*AMQueueP.AMQueueImplP*/AMQueueImplP$1$cancelMask[i]) {
          for (mask = 1, j = 0; j < 8; j++) {
              if (/*AMQueueP.AMQueueImplP*/AMQueueImplP$1$cancelMask[i] & mask) {
                  last = i * 8 + j;
                  msg = /*AMQueueP.AMQueueImplP*/AMQueueImplP$1$queue[last].msg;
                  /*AMQueueP.AMQueueImplP*/AMQueueImplP$1$queue[last].msg = (void *)0;
                  /*AMQueueP.AMQueueImplP*/AMQueueImplP$1$cancelMask[i] &= ~mask;
                  /*AMQueueP.AMQueueImplP*/AMQueueImplP$1$Send$sendDone(last, msg, ECANCEL);
                }
              mask <<= 1;
            }
        }
    }
}

#line 161
static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP$1$errorTask$runTask(void )
#line 161
{
  /*AMQueueP.AMQueueImplP*/AMQueueImplP$1$sendDone(/*AMQueueP.AMQueueImplP*/AMQueueImplP$1$current, /*AMQueueP.AMQueueImplP*/AMQueueImplP$1$queue[/*AMQueueP.AMQueueImplP*/AMQueueImplP$1$current].msg, FAIL);
}

# 56 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static error_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$1$errorTask$postTask(void ){
#line 56
  unsigned char result;
#line 56

#line 56
  result = SchedulerBasicP$TaskBasic$postTask(/*AMQueueP.AMQueueImplP*/AMQueueImplP$1$errorTask);
#line 56

#line 56
  return result;
#line 56
}
#line 56
# 69 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/AMSend.nc"
inline static error_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$1$AMSend$send(am_id_t arg_0x7e7050c0, am_addr_t addr, message_t * msg, uint8_t len){
#line 69
  unsigned char result;
#line 69

#line 69
  result = CC2420ActiveMessageP$AMSend$send(arg_0x7e7050c0, addr, msg, len);
#line 69

#line 69
  return result;
#line 69
}
#line 69
# 246 "/usr/lib/ncc/nesc_nx.h"
static __inline  uint8_t __nesc_ntoh_leuint8(const void * source)
#line 246
{
  const uint8_t *base = source;

#line 248
  return base[0];
}

# 99 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/cc2420/packet/CC2420PacketP.nc"
static inline cc2420_header_t * CC2420PacketP$CC2420PacketBody$getHeader(message_t * msg)
#line 99
{
  return (cc2420_header_t * )((uint8_t *)msg + (unsigned short )& ((message_t *)0)->data - sizeof(cc2420_header_t ));
}

# 42 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420PacketBody.nc"
inline static cc2420_header_t * CC2420ActiveMessageP$CC2420PacketBody$getHeader(message_t * msg){
#line 42
  nx_struct cc2420_header_t *result;
#line 42

#line 42
  result = CC2420PacketP$CC2420PacketBody$getHeader(msg);
#line 42

#line 42
  return result;
#line 42
}
#line 42
# 147 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/cc2420/CC2420ActiveMessageP.nc"
static inline uint8_t CC2420ActiveMessageP$Packet$payloadLength(message_t *msg)
#line 147
{
  return __nesc_ntoh_leuint8(CC2420ActiveMessageP$CC2420PacketBody$getHeader(msg)->length.data) - CC2420_SIZE;
}

# 67 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/Packet.nc"
inline static uint8_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$1$Packet$payloadLength(message_t * msg){
#line 67
  unsigned char result;
#line 67

#line 67
  result = CC2420ActiveMessageP$Packet$payloadLength(msg);
#line 67

#line 67
  return result;
#line 67
}
#line 67
# 67 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/AMPacket.nc"
inline static am_addr_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$1$AMPacket$destination(message_t * amsg){
#line 67
  unsigned short result;
#line 67

#line 67
  result = CC2420ActiveMessageP$AMPacket$destination(amsg);
#line 67

#line 67
  return result;
#line 67
}
#line 67
# 117 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/cc2420/CC2420ActiveMessageP.nc"
static inline am_id_t CC2420ActiveMessageP$AMPacket$type(message_t *amsg)
#line 117
{
  cc2420_header_t *header = CC2420ActiveMessageP$CC2420PacketBody$getHeader(amsg);

#line 119
  return __nesc_ntoh_leuint8(header->type.data);
}

# 136 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/AMPacket.nc"
inline static am_id_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$1$AMPacket$type(message_t * amsg){
#line 136
  unsigned char result;
#line 136

#line 136
  result = CC2420ActiveMessageP$AMPacket$type(amsg);
#line 136

#line 136
  return result;
#line 136
}
#line 136
# 57 "/cygdrive/c/Dropbox/tinyos-2.x/tos/system/AMQueueImplP.nc"
static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP$1$nextPacket(void )
#line 57
{
  uint8_t i;

#line 59
  /*AMQueueP.AMQueueImplP*/AMQueueImplP$1$current = (/*AMQueueP.AMQueueImplP*/AMQueueImplP$1$current + 1) % 1;
  for (i = 0; i < 1; i++) {
      if (/*AMQueueP.AMQueueImplP*/AMQueueImplP$1$queue[/*AMQueueP.AMQueueImplP*/AMQueueImplP$1$current].msg == (void *)0 || 
      /*AMQueueP.AMQueueImplP*/AMQueueImplP$1$cancelMask[/*AMQueueP.AMQueueImplP*/AMQueueImplP$1$current / 8] & (1 << /*AMQueueP.AMQueueImplP*/AMQueueImplP$1$current % 8)) 
        {
          /*AMQueueP.AMQueueImplP*/AMQueueImplP$1$current = (/*AMQueueP.AMQueueImplP*/AMQueueImplP$1$current + 1) % 1;
        }
      else {
          break;
        }
    }
  if (i >= 1) {
#line 70
    /*AMQueueP.AMQueueImplP*/AMQueueImplP$1$current = 1;
    }
}

#line 166
static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP$1$tryToSend(void )
#line 166
{
  /*AMQueueP.AMQueueImplP*/AMQueueImplP$1$nextPacket();
  if (/*AMQueueP.AMQueueImplP*/AMQueueImplP$1$current < 1) {
      error_t nextErr;
      message_t *nextMsg = /*AMQueueP.AMQueueImplP*/AMQueueImplP$1$queue[/*AMQueueP.AMQueueImplP*/AMQueueImplP$1$current].msg;
      am_id_t nextId = /*AMQueueP.AMQueueImplP*/AMQueueImplP$1$AMPacket$type(nextMsg);
      am_addr_t nextDest = /*AMQueueP.AMQueueImplP*/AMQueueImplP$1$AMPacket$destination(nextMsg);
      uint8_t len = /*AMQueueP.AMQueueImplP*/AMQueueImplP$1$Packet$payloadLength(nextMsg);

#line 174
      nextErr = /*AMQueueP.AMQueueImplP*/AMQueueImplP$1$AMSend$send(nextId, nextDest, nextMsg, len);
      if (nextErr != SUCCESS) {
          /*AMQueueP.AMQueueImplP*/AMQueueImplP$1$errorTask$postTask();
        }
    }
}

# 287 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/cc2420/control/CC2420ControlP.nc"
static inline uint16_t CC2420ControlP$CC2420Config$getPanAddr(void )
#line 287
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 288
    {
      unsigned short __nesc_temp = 
#line 288
      CC2420ControlP$m_pan;

      {
#line 288
        __nesc_atomic_end(__nesc_atomic); 
#line 288
        return __nesc_temp;
      }
    }
#line 290
    __nesc_atomic_end(__nesc_atomic); }
}

# 70 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Config.nc"
inline static uint16_t CC2420ActiveMessageP$CC2420Config$getPanAddr(void ){
#line 70
  unsigned short result;
#line 70

#line 70
  result = CC2420ControlP$CC2420Config$getPanAddr();
#line 70

#line 70
  return result;
#line 70
}
#line 70
# 248 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/cc2420/CC2420ActiveMessageP.nc"
static inline void CC2420ActiveMessageP$SendNotifier$default$aboutToSend(am_id_t amId, am_addr_t addr, message_t *msg)
#line 248
{
}

# 59 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/SendNotifier.nc"
inline static void CC2420ActiveMessageP$SendNotifier$aboutToSend(am_id_t arg_0x7e2d8b78, am_addr_t dest, message_t * msg){
#line 59
    CC2420ActiveMessageP$SendNotifier$default$aboutToSend(arg_0x7e2d8b78, dest, msg);
#line 59
}
#line 59
# 251 "/usr/lib/ncc/nesc_nx.h"
static __inline  uint8_t __nesc_hton_leuint8(void * target, uint8_t value)
#line 251
{
  uint8_t *base = target;

#line 253
  base[0] = value;
  return value;
}

#line 301
static __inline  uint32_t __nesc_hton_uint32(void * target, uint32_t value)
#line 301
{
  uint8_t *base = target;

#line 303
  base[3] = value;
  base[2] = value >> 8;
  base[1] = value >> 16;
  base[0] = value >> 24;
  return value;
}

#line 257
static __inline  int8_t __nesc_hton_int8(void * target, int8_t value)
#line 257
{
#line 257
  __nesc_hton_uint8(target, value);
#line 257
  return value;
}

#line 281
static __inline  uint16_t __nesc_hton_leuint16(void * target, uint16_t value)
#line 281
{
  uint8_t *base = target;

#line 283
  base[0] = value;
  base[1] = value >> 8;
  return value;
}

#line 276
static __inline  uint16_t __nesc_ntoh_leuint16(const void * source)
#line 276
{
  const uint8_t *base = source;

#line 278
  return ((uint16_t )base[1] << 8) | base[0];
}

# 513 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/cc2420/transmit/CC2420TransmitP.nc"
static inline error_t CC2420TransmitP$send(message_t * p_msg, bool cca)
#line 513
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 514
    {
      if (CC2420TransmitP$m_state == CC2420TransmitP$S_CANCEL) {
          {
            unsigned char __nesc_temp = 
#line 516
            ECANCEL;

            {
#line 516
              __nesc_atomic_end(__nesc_atomic); 
#line 516
              return __nesc_temp;
            }
          }
        }
#line 519
      if (CC2420TransmitP$m_state != CC2420TransmitP$S_STARTED) {
          {
            unsigned char __nesc_temp = 
#line 520
            FAIL;

            {
#line 520
              __nesc_atomic_end(__nesc_atomic); 
#line 520
              return __nesc_temp;
            }
          }
        }
#line 523
      CC2420TransmitP$m_state = CC2420TransmitP$S_LOAD;
      CC2420TransmitP$m_cca = cca;
      CC2420TransmitP$m_msg = p_msg;
      CC2420TransmitP$totalCcaChecks = 0;
    }
#line 527
    __nesc_atomic_end(__nesc_atomic); }

  if (CC2420TransmitP$acquireSpiResource() == SUCCESS) {
      CC2420TransmitP$loadTXFIFO();
    }

  return SUCCESS;
}

#line 172
static inline error_t CC2420TransmitP$Send$send(message_t * p_msg, bool useCca)
#line 172
{
  return CC2420TransmitP$send(p_msg, useCca);
}

# 51 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Transmit.nc"
inline static error_t CC2420CsmaP$CC2420Transmit$send(message_t * p_msg, bool useCca){
#line 51
  unsigned char result;
#line 51

#line 51
  result = CC2420TransmitP$Send$send(p_msg, useCca);
#line 51

#line 51
  return result;
#line 51
}
#line 51
# 258 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/cc2420/CC2420ActiveMessageP.nc"
static inline void CC2420ActiveMessageP$RadioBackoff$default$requestCca(am_id_t id, 
message_t *msg)
#line 259
{
}

# 95 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/cc2420/interfaces/RadioBackoff.nc"
inline static void CC2420ActiveMessageP$RadioBackoff$requestCca(am_id_t arg_0x7e2d7230, message_t * msg){
#line 95
    CC2420ActiveMessageP$RadioBackoff$default$requestCca(arg_0x7e2d7230, msg);
#line 95
}
#line 95
# 206 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/cc2420/CC2420ActiveMessageP.nc"
static inline void CC2420ActiveMessageP$SubBackoff$requestCca(message_t *msg)
#line 206
{

  CC2420ActiveMessageP$RadioBackoff$requestCca(__nesc_ntoh_leuint8(((cc2420_header_t * )((uint8_t *)msg + (unsigned short )& ((message_t *)0)->data - sizeof(cc2420_header_t )))->type.data), msg);
}

# 95 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/cc2420/interfaces/RadioBackoff.nc"
inline static void CC2420CsmaP$RadioBackoff$requestCca(message_t * msg){
#line 95
  CC2420ActiveMessageP$SubBackoff$requestCca(msg);
#line 95
}
#line 95
# 111 "/cygdrive/c/Dropbox/tinyos-2.x/tos/system/StateImplP.nc"
static inline void StateImplP$State$forceState(uint8_t id, uint8_t reqState)
#line 111
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 112
    StateImplP$state[id] = reqState;
#line 112
    __nesc_atomic_end(__nesc_atomic); }
}

# 51 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/State.nc"
inline static void CC2420CsmaP$SplitControlState$forceState(uint8_t reqState){
#line 51
  StateImplP$State$forceState(1U, reqState);
#line 51
}
#line 51
#line 66
inline static bool CC2420CsmaP$SplitControlState$isState(uint8_t myState){
#line 66
  unsigned char result;
#line 66

#line 66
  result = StateImplP$State$isState(1U, myState);
#line 66

#line 66
  return result;
#line 66
}
#line 66
# 103 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/cc2420/packet/CC2420PacketP.nc"
static inline cc2420_metadata_t *CC2420PacketP$CC2420PacketBody$getMetadata(message_t *msg)
#line 103
{
  return (cc2420_metadata_t *)msg->metadata;
}

# 47 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420PacketBody.nc"
inline static cc2420_metadata_t * CC2420CsmaP$CC2420PacketBody$getMetadata(message_t * msg){
#line 47
  nx_struct cc2420_metadata_t *result;
#line 47

#line 47
  result = CC2420PacketP$CC2420PacketBody$getMetadata(msg);
#line 47

#line 47
  return result;
#line 47
}
#line 47
#line 42
inline static cc2420_header_t * CC2420CsmaP$CC2420PacketBody$getHeader(message_t * msg){
#line 42
  nx_struct cc2420_header_t *result;
#line 42

#line 42
  result = CC2420PacketP$CC2420PacketBody$getHeader(msg);
#line 42

#line 42
  return result;
#line 42
}
#line 42
# 123 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/cc2420/csma/CC2420CsmaP.nc"
static inline error_t CC2420CsmaP$Send$send(message_t *p_msg, uint8_t len)
#line 123
{
  unsigned char *__nesc_temp43;
  unsigned char *__nesc_temp42;
#line 125
  cc2420_header_t *header = CC2420CsmaP$CC2420PacketBody$getHeader(p_msg);
  cc2420_metadata_t *metadata = CC2420CsmaP$CC2420PacketBody$getMetadata(p_msg);

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 128
    {
      if (!CC2420CsmaP$SplitControlState$isState(CC2420CsmaP$S_STARTED)) {
          {
            unsigned char __nesc_temp = 
#line 130
            FAIL;

            {
#line 130
              __nesc_atomic_end(__nesc_atomic); 
#line 130
              return __nesc_temp;
            }
          }
        }
#line 133
      CC2420CsmaP$SplitControlState$forceState(CC2420CsmaP$S_TRANSMITTING);
      CC2420CsmaP$m_msg = p_msg;
    }
#line 135
    __nesc_atomic_end(__nesc_atomic); }

  __nesc_hton_leuint8(header->length.data, len + CC2420_SIZE);
  (__nesc_temp42 = header->fcf.data, __nesc_hton_leuint16(__nesc_temp42, __nesc_ntoh_leuint16(__nesc_temp42) & (1 << IEEE154_FCF_ACK_REQ)));
  (__nesc_temp43 = header->fcf.data, __nesc_hton_leuint16(__nesc_temp43, __nesc_ntoh_leuint16(__nesc_temp43) | ((((IEEE154_TYPE_DATA << IEEE154_FCF_FRAME_TYPE) | (
  1 << IEEE154_FCF_INTRAPAN)) | (
  IEEE154_ADDR_SHORT << IEEE154_FCF_DEST_ADDR_MODE)) | (
  IEEE154_ADDR_SHORT << IEEE154_FCF_SRC_ADDR_MODE))));

  __nesc_hton_int8(metadata->ack.data, FALSE);
  __nesc_hton_uint8(metadata->rssi.data, 0);
  __nesc_hton_uint8(metadata->lqi.data, 0);
  __nesc_hton_int8(metadata->timesync.data, FALSE);
  __nesc_hton_uint32(metadata->timestamp.data, CC2420_INVALID_TIMESTAMP);

  CC2420CsmaP$ccaOn = TRUE;
  CC2420CsmaP$RadioBackoff$requestCca(CC2420CsmaP$m_msg);

  CC2420CsmaP$CC2420Transmit$send(CC2420CsmaP$m_msg, CC2420CsmaP$ccaOn);
  return SUCCESS;
}

# 64 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/Send.nc"
inline static error_t CC2420TinyosNetworkP$SubSend$send(message_t * msg, uint8_t len){
#line 64
  unsigned char result;
#line 64

#line 64
  result = CC2420CsmaP$Send$send(msg, len);
#line 64

#line 64
  return result;
#line 64
}
#line 64
# 42 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420PacketBody.nc"
inline static cc2420_header_t * CC2420TinyosNetworkP$CC2420PacketBody$getHeader(message_t * msg){
#line 42
  nx_struct cc2420_header_t *result;
#line 42

#line 42
  result = CC2420PacketP$CC2420PacketBody$getHeader(msg);
#line 42

#line 42
  return result;
#line 42
}
#line 42
# 61 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/cc2420/lowpan/CC2420TinyosNetworkP.nc"
static inline error_t CC2420TinyosNetworkP$Send$send(message_t *msg, uint8_t len)
#line 61
{
  __nesc_hton_leuint8(CC2420TinyosNetworkP$CC2420PacketBody$getHeader(msg)->network.data, 0x3f);
  return CC2420TinyosNetworkP$SubSend$send(msg, len);
}

# 64 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/Send.nc"
inline static error_t UniqueSendP$SubSend$send(message_t * msg, uint8_t len){
#line 64
  unsigned char result;
#line 64

#line 64
  result = CC2420TinyosNetworkP$Send$send(msg, len);
#line 64

#line 64
  return result;
#line 64
}
#line 64
# 42 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420PacketBody.nc"
inline static cc2420_header_t * UniqueSendP$CC2420PacketBody$getHeader(message_t * msg){
#line 42
  nx_struct cc2420_header_t *result;
#line 42

#line 42
  result = CC2420PacketP$CC2420PacketBody$getHeader(msg);
#line 42

#line 42
  return result;
#line 42
}
#line 42
# 45 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/State.nc"
inline static error_t UniqueSendP$State$requestState(uint8_t reqState){
#line 45
  unsigned char result;
#line 45

#line 45
  result = StateImplP$State$requestState(2U, reqState);
#line 45

#line 45
  return result;
#line 45
}
#line 45
# 75 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/cc2420/unique/UniqueSendP.nc"
static inline error_t UniqueSendP$Send$send(message_t *msg, uint8_t len)
#line 75
{
  error_t error;

#line 77
  if (UniqueSendP$State$requestState(UniqueSendP$S_SENDING) == SUCCESS) {
      __nesc_hton_leuint8(UniqueSendP$CC2420PacketBody$getHeader(msg)->dsn.data, UniqueSendP$localSendId++);

      if ((error = UniqueSendP$SubSend$send(msg, len)) != SUCCESS) {
          UniqueSendP$State$toIdle();
        }

      return error;
    }

  return EBUSY;
}

# 64 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/Send.nc"
inline static error_t CC2420ActiveMessageP$SubSend$send(message_t * msg, uint8_t len){
#line 64
  unsigned char result;
#line 64

#line 64
  result = UniqueSendP$Send$send(msg, len);
#line 64

#line 64
  return result;
#line 64
}
#line 64
# 87 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/Resource.nc"
inline static error_t CC2420TransmitP$SpiResource$immediateRequest(void ){
#line 87
  unsigned char result;
#line 87

#line 87
  result = CC2420SpiP$Resource$immediateRequest(/*CC2420TransmitC.Spi*/CC2420SpiC$3$CLIENT_ID);
#line 87

#line 87
  return result;
#line 87
}
#line 87
# 45 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/State.nc"
inline static error_t CC2420SpiP$WorkingState$requestState(uint8_t reqState){
#line 45
  unsigned char result;
#line 45

#line 45
  result = StateImplP$State$requestState(0U, reqState);
#line 45

#line 45
  return result;
#line 45
}
#line 45
# 118 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/Resource.nc"
inline static bool Atm128SpiP$ResourceArbiter$isOwner(uint8_t arg_0x7de468b0){
#line 118
  unsigned char result;
#line 118

#line 118
  result = /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$Resource$isOwner(arg_0x7de468b0);
#line 118

#line 118
  return result;
#line 118
}
#line 118
# 332 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/spi/Atm128SpiP.nc"
static inline uint8_t Atm128SpiP$Resource$isOwner(uint8_t id)
#line 332
{
  return Atm128SpiP$ResourceArbiter$isOwner(id);
}

# 118 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/Resource.nc"
inline static bool HplCC2420SpiP$SubResource$isOwner(void ){
#line 118
  unsigned char result;
#line 118

#line 118
  result = Atm128SpiP$Resource$isOwner(0U);
#line 118

#line 118
  return result;
#line 118
}
#line 118
# 83 "/cygdrive/c/Dropbox/tinyos-2.x/tos/platforms/micaz/chips/cc2420/HplCC2420SpiP.nc"
static inline bool HplCC2420SpiP$Resource$isOwner(void )
{
  return HplCC2420SpiP$SubResource$isOwner();
}

# 118 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/Resource.nc"
inline static bool CC2420SpiP$SpiResource$isOwner(void ){
#line 118
  unsigned char result;
#line 118

#line 118
  result = HplCC2420SpiP$Resource$isOwner();
#line 118

#line 118
  return result;
#line 118
}
#line 118
# 47 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP$8$IO$clr(void )
#line 47
{
#line 47
  * (volatile uint8_t * )56U &= ~(1 << 0);
}

# 30 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void HplCC2420SpiP$SS$clr(void ){
#line 30
  /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP$8$IO$clr();
#line 30
}
#line 30
# 52 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP$8$IO$makeOutput(void )
#line 52
{
#line 52
  * (volatile uint8_t * )55U |= 1 << 0;
}

# 35 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void HplCC2420SpiP$SS$makeOutput(void ){
#line 35
  /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP$8$IO$makeOutput();
#line 35
}
#line 35
# 170 "/cygdrive/c/Dropbox/tinyos-2.x/tos/system/SimpleArbiterP.nc"
static inline void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$ResourceConfigure$default$configure(uint8_t id)
#line 170
{
}

# 49 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/ResourceConfigure.nc"
inline static void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$ResourceConfigure$configure(uint8_t arg_0x7dd86430){
#line 49
    /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$ResourceConfigure$default$configure(arg_0x7dd86430);
#line 49
}
#line 49
# 168 "/cygdrive/c/Dropbox/tinyos-2.x/tos/system/SimpleArbiterP.nc"
static inline void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$ResourceRequested$default$immediateRequested(uint8_t id)
#line 168
{
}

# 51 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/ResourceRequested.nc"
inline static void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$ResourceRequested$immediateRequested(uint8_t arg_0x7dd87770){
#line 51
    /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$ResourceRequested$default$immediateRequested(arg_0x7dd87770);
#line 51
}
#line 51
# 84 "/cygdrive/c/Dropbox/tinyos-2.x/tos/system/SimpleArbiterP.nc"
static inline error_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$Resource$immediateRequest(uint8_t id)
#line 84
{
  /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$ResourceRequested$immediateRequested(/*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$resId);
  /* atomic removed: atomic calls only */
#line 86
  {
    if (/*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$state == /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$RES_IDLE) {
        /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$state = /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$RES_BUSY;
        /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$resId = id;
        /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$ResourceConfigure$configure(/*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$resId);
        {
          unsigned char __nesc_temp = 
#line 91
          SUCCESS;

#line 91
          return __nesc_temp;
        }
      }
#line 93
    {
      unsigned char __nesc_temp = 
#line 93
      FAIL;

#line 93
      return __nesc_temp;
    }
  }
}

# 87 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/Resource.nc"
inline static error_t Atm128SpiP$ResourceArbiter$immediateRequest(uint8_t arg_0x7de468b0){
#line 87
  unsigned char result;
#line 87

#line 87
  result = /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$Resource$immediateRequest(arg_0x7de468b0);
#line 87

#line 87
  return result;
#line 87
}
#line 87
# 305 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/spi/Atm128SpiP.nc"
static inline error_t Atm128SpiP$Resource$immediateRequest(uint8_t id)
#line 305
{
  error_t result = Atm128SpiP$ResourceArbiter$immediateRequest(id);

#line 307
  if (result == SUCCESS) {
      Atm128SpiP$startSpi();
    }
  return result;
}

# 87 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/Resource.nc"
inline static error_t HplCC2420SpiP$SubResource$immediateRequest(void ){
#line 87
  unsigned char result;
#line 87

#line 87
  result = Atm128SpiP$Resource$immediateRequest(0U);
#line 87

#line 87
  return result;
#line 87
}
#line 87
# 56 "/cygdrive/c/Dropbox/tinyos-2.x/tos/platforms/micaz/chips/cc2420/HplCC2420SpiP.nc"
static inline error_t HplCC2420SpiP$Resource$immediateRequest(void )
{
  error_t error = HplCC2420SpiP$SubResource$immediateRequest();

#line 59
  if (error == SUCCESS) 
    {
      HplCC2420SpiP$SS$makeOutput();
      HplCC2420SpiP$SS$clr();
    }
  return error;
}

# 87 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/Resource.nc"
inline static error_t CC2420SpiP$SpiResource$immediateRequest(void ){
#line 87
  unsigned char result;
#line 87

#line 87
  result = HplCC2420SpiP$Resource$immediateRequest();
#line 87

#line 87
  return result;
#line 87
}
#line 87
# 110 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/McuSleepC.nc"
static inline void McuSleepC$McuPowerState$update(void )
#line 110
{
}

# 44 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/McuPowerState.nc"
inline static void HplAtm128SpiP$Mcu$update(void ){
#line 44
  McuSleepC$McuPowerState$update();
#line 44
}
#line 44
# 156 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/spi/HplAtm128SpiP.nc"
static inline void HplAtm128SpiP$SPI$setMasterBit(bool isMaster)
#line 156
{
  if (isMaster) {
      * (volatile uint8_t *)(0x0D + 0x20) |= 1 << 4;
    }
  else {
      * (volatile uint8_t *)(0x0D + 0x20) &= ~(1 << 4);
    }
}

# 52 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortB.Bit1*/HplAtm128GeneralIOPinP$9$IO$makeOutput(void )
#line 52
{
#line 52
  * (volatile uint8_t * )55U |= 1 << 1;
}

# 35 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void HplAtm128SpiP$SCK$makeOutput(void ){
#line 35
  /*HplAtm128GeneralIOC.PortB.Bit1*/HplAtm128GeneralIOPinP$9$IO$makeOutput();
#line 35
}
#line 35
# 50 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortB.Bit3*/HplAtm128GeneralIOPinP$11$IO$makeInput(void )
#line 50
{
#line 50
  * (volatile uint8_t * )55U &= ~(1 << 3);
}

# 33 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void HplAtm128SpiP$MISO$makeInput(void ){
#line 33
  /*HplAtm128GeneralIOC.PortB.Bit3*/HplAtm128GeneralIOPinP$11$IO$makeInput();
#line 33
}
#line 33
# 52 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortB.Bit2*/HplAtm128GeneralIOPinP$10$IO$makeOutput(void )
#line 52
{
#line 52
  * (volatile uint8_t * )55U |= 1 << 2;
}

# 35 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void HplAtm128SpiP$MOSI$makeOutput(void ){
#line 35
  /*HplAtm128GeneralIOC.PortB.Bit2*/HplAtm128GeneralIOPinP$10$IO$makeOutput();
#line 35
}
#line 35
# 79 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/spi/HplAtm128SpiP.nc"
static inline void HplAtm128SpiP$SPI$initMaster(void )
#line 79
{
  HplAtm128SpiP$MOSI$makeOutput();
  HplAtm128SpiP$MISO$makeInput();
  HplAtm128SpiP$SCK$makeOutput();
  HplAtm128SpiP$SPI$setMasterBit(TRUE);
}

# 66 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/spi/Atm128Spi.nc"
inline static void Atm128SpiP$Spi$initMaster(void ){
#line 66
  HplAtm128SpiP$SPI$initMaster();
#line 66
}
#line 66
# 213 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/spi/HplAtm128SpiP.nc"
static inline void HplAtm128SpiP$SPI$setMasterDoubleSpeed(bool on)
#line 213
{
  if (on) {
      * (volatile uint8_t *)(0x0E + 0x20) |= 1 << 0;
    }
  else {
      * (volatile uint8_t *)(0x0E + 0x20) &= ~(1 << 0);
    }
}

# 125 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/spi/Atm128Spi.nc"
inline static void Atm128SpiP$Spi$setMasterDoubleSpeed(bool on){
#line 125
  HplAtm128SpiP$SPI$setMasterDoubleSpeed(on);
#line 125
}
#line 125
# 169 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/spi/HplAtm128SpiP.nc"
static inline void HplAtm128SpiP$SPI$setClockPolarity(bool highWhenIdle)
#line 169
{
  if (highWhenIdle) {
      * (volatile uint8_t *)(0x0D + 0x20) |= 1 << 3;
    }
  else {
      * (volatile uint8_t *)(0x0D + 0x20) &= ~(1 << 3);
    }
}

# 108 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/spi/Atm128Spi.nc"
inline static void Atm128SpiP$Spi$setClockPolarity(bool highWhenIdle){
#line 108
  HplAtm128SpiP$SPI$setClockPolarity(highWhenIdle);
#line 108
}
#line 108
# 183 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/spi/HplAtm128SpiP.nc"
static inline void HplAtm128SpiP$SPI$setClockPhase(bool sampleOnTrailing)
#line 183
{
  if (sampleOnTrailing) {
      * (volatile uint8_t *)(0x0D + 0x20) |= 1 << 2;
    }
  else {
      * (volatile uint8_t *)(0x0D + 0x20) &= ~(1 << 2);
    }
}

# 111 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/spi/Atm128Spi.nc"
inline static void Atm128SpiP$Spi$setClockPhase(bool sampleOnTrailing){
#line 111
  HplAtm128SpiP$SPI$setClockPhase(sampleOnTrailing);
#line 111
}
#line 111
# 200 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/spi/HplAtm128SpiP.nc"
static inline void HplAtm128SpiP$SPI$setClock(uint8_t v)
#line 200
{
  v &= 1 | 0;
  * (volatile uint8_t *)(0x0D + 0x20) = (* (volatile uint8_t *)(0x0D + 0x20) & ~(1 | 0)) | v;
}

# 114 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/spi/Atm128Spi.nc"
inline static void Atm128SpiP$Spi$setClock(uint8_t speed){
#line 114
  HplAtm128SpiP$SPI$setClock(speed);
#line 114
}
#line 114
# 118 "/cygdrive/c/Dropbox/tinyos-2.x/tos/system/StateImplP.nc"
static inline void StateImplP$State$toIdle(uint8_t id)
#line 118
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 119
    StateImplP$state[id] = StateImplP$S_IDLE;
#line 119
    __nesc_atomic_end(__nesc_atomic); }
}

# 56 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/State.nc"
inline static void CC2420SpiP$WorkingState$toIdle(void ){
#line 56
  StateImplP$State$toIdle(0U);
#line 56
}
#line 56
# 78 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/Resource.nc"
inline static error_t CC2420TransmitP$SpiResource$request(void ){
#line 78
  unsigned char result;
#line 78

#line 78
  result = CC2420SpiP$Resource$request(/*CC2420TransmitC.Spi*/CC2420SpiC$3$CLIENT_ID);
#line 78

#line 78
  return result;
#line 78
}
#line 78
# 54 "/cygdrive/c/Dropbox/tinyos-2.x/tos/system/FcfsResourceQueueC.nc"
static inline bool /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$FcfsQueue$isEnqueued(resource_client_id_t id)
#line 54
{
  return /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$resQ[id] != /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$NO_ENTRY || /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$qTail == id;
}

#line 72
static inline error_t /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$FcfsQueue$enqueue(resource_client_id_t id)
#line 72
{
  /* atomic removed: atomic calls only */
#line 73
  {
    if (!/*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$FcfsQueue$isEnqueued(id)) {
        if (/*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$qHead == /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$NO_ENTRY) {
          /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$qHead = id;
          }
        else {
#line 78
          /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$resQ[/*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$qTail] = id;
          }
#line 79
        /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$qTail = id;
        {
          unsigned char __nesc_temp = 
#line 80
          SUCCESS;

#line 80
          return __nesc_temp;
        }
      }
#line 82
    {
      unsigned char __nesc_temp = 
#line 82
      EBUSY;

#line 82
      return __nesc_temp;
    }
  }
}

# 69 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/ResourceQueue.nc"
inline static error_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$Queue$enqueue(resource_client_id_t id){
#line 69
  unsigned char result;
#line 69

#line 69
  result = /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$FcfsQueue$enqueue(id);
#line 69

#line 69
  return result;
#line 69
}
#line 69
# 56 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static error_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$grantedTask$postTask(void ){
#line 56
  unsigned char result;
#line 56

#line 56
  result = SchedulerBasicP$TaskBasic$postTask(/*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$grantedTask);
#line 56

#line 56
  return result;
#line 56
}
#line 56
# 166 "/cygdrive/c/Dropbox/tinyos-2.x/tos/system/SimpleArbiterP.nc"
static inline void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$ResourceRequested$default$requested(uint8_t id)
#line 166
{
}

# 43 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/ResourceRequested.nc"
inline static void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$ResourceRequested$requested(uint8_t arg_0x7dd87770){
#line 43
    /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$ResourceRequested$default$requested(arg_0x7dd87770);
#line 43
}
#line 43
# 71 "/cygdrive/c/Dropbox/tinyos-2.x/tos/system/SimpleArbiterP.nc"
static inline error_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$Resource$request(uint8_t id)
#line 71
{
  /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$ResourceRequested$requested(/*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$resId);
  /* atomic removed: atomic calls only */
#line 73
  {
    if (/*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$state == /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$RES_IDLE) {
        /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$state = /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$RES_GRANTING;
        /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$reqResId = id;
        /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$grantedTask$postTask();
        {
          unsigned char __nesc_temp = 
#line 78
          SUCCESS;

#line 78
          return __nesc_temp;
        }
      }
#line 80
    {
      unsigned char __nesc_temp = 
#line 80
      /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$Queue$enqueue(id);

#line 80
      return __nesc_temp;
    }
  }
}

# 78 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/Resource.nc"
inline static error_t Atm128SpiP$ResourceArbiter$request(uint8_t arg_0x7de468b0){
#line 78
  unsigned char result;
#line 78

#line 78
  result = /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$Resource$request(arg_0x7de468b0);
#line 78

#line 78
  return result;
#line 78
}
#line 78
# 80 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/ArbiterInfo.nc"
inline static bool Atm128SpiP$ArbiterInfo$inUse(void ){
#line 80
  unsigned char result;
#line 80

#line 80
  result = /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$ArbiterInfo$inUse();
#line 80

#line 80
  return result;
#line 80
}
#line 80
# 313 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/spi/Atm128SpiP.nc"
static inline error_t Atm128SpiP$Resource$request(uint8_t id)
#line 313
{
  /* atomic removed: atomic calls only */
#line 314
  {
    if (!Atm128SpiP$ArbiterInfo$inUse()) {
        Atm128SpiP$startSpi();
      }
  }
  return Atm128SpiP$ResourceArbiter$request(id);
}

# 78 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/Resource.nc"
inline static error_t HplCC2420SpiP$SubResource$request(void ){
#line 78
  unsigned char result;
#line 78

#line 78
  result = Atm128SpiP$Resource$request(0U);
#line 78

#line 78
  return result;
#line 78
}
#line 78
# 51 "/cygdrive/c/Dropbox/tinyos-2.x/tos/platforms/micaz/chips/cc2420/HplCC2420SpiP.nc"
static inline error_t HplCC2420SpiP$Resource$request(void )
{
  return HplCC2420SpiP$SubResource$request();
}

# 78 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/Resource.nc"
inline static error_t CC2420SpiP$SpiResource$request(void ){
#line 78
  unsigned char result;
#line 78

#line 78
  result = HplCC2420SpiP$Resource$request();
#line 78

#line 78
  return result;
#line 78
}
#line 78
# 55 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Register.nc"
inline static cc2420_status_t CC2420TransmitP$TXCTRL$write(uint16_t data){
#line 55
  unsigned char result;
#line 55

#line 55
  result = CC2420SpiP$Reg$write(CC2420_TXCTRL, data);
#line 55

#line 55
  return result;
#line 55
}
#line 55
# 99 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/spi/HplAtm128SpiP.nc"
static inline void HplAtm128SpiP$SPI$write(uint8_t d)
#line 99
{
#line 99
  * (volatile uint8_t *)(0x0F + 0x20) = d;
}

# 86 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/spi/Atm128Spi.nc"
inline static void Atm128SpiP$Spi$write(uint8_t data){
#line 86
  HplAtm128SpiP$SPI$write(data);
#line 86
}
#line 86
# 59 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/SpiPacket.nc"
inline static error_t CC2420SpiP$SpiPacket$send(uint8_t * txBuf, uint8_t * rxBuf, uint16_t len){
#line 59
  unsigned char result;
#line 59

#line 59
  result = Atm128SpiP$SpiPacket$send(txBuf, rxBuf, len);
#line 59

#line 59
  return result;
#line 59
}
#line 59
# 34 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/SpiByte.nc"
inline static uint8_t CC2420SpiP$SpiByte$write(uint8_t tx){
#line 34
  unsigned char result;
#line 34

#line 34
  result = Atm128SpiP$SpiByte$write(tx);
#line 34

#line 34
  return result;
#line 34
}
#line 34
# 126 "/cygdrive/c/Dropbox/tinyos-2.x/tos/system/StateImplP.nc"
static inline bool StateImplP$State$isIdle(uint8_t id)
#line 126
{
  return StateImplP$State$isState(id, StateImplP$S_IDLE);
}

# 61 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/State.nc"
inline static bool CC2420SpiP$WorkingState$isIdle(void ){
#line 61
  unsigned char result;
#line 61

#line 61
  result = StateImplP$State$isIdle(0U);
#line 61

#line 61
  return result;
#line 61
}
#line 61
# 214 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc"
static inline cc2420_status_t CC2420SpiP$Fifo$write(uint8_t addr, uint8_t *data, 
uint8_t len)
#line 215
{

  uint8_t status = 0;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 219
    {
      if (CC2420SpiP$WorkingState$isIdle()) {
          {
            unsigned char __nesc_temp = 
#line 221
            status;

            {
#line 221
              __nesc_atomic_end(__nesc_atomic); 
#line 221
              return __nesc_temp;
            }
          }
        }
    }
#line 225
    __nesc_atomic_end(__nesc_atomic); }
#line 225
  CC2420SpiP$m_addr = addr;

  status = CC2420SpiP$SpiByte$write(CC2420SpiP$m_addr);
  CC2420SpiP$SpiPacket$send(data, (void *)0, len);

  return status;
}

# 82 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Fifo.nc"
inline static cc2420_status_t CC2420TransmitP$TXFIFO$write(uint8_t * data, uint8_t length){
#line 82
  unsigned char result;
#line 82

#line 82
  result = CC2420SpiP$Fifo$write(CC2420_TXFIFO, data, length);
#line 82

#line 82
  return result;
#line 82
}
#line 82
# 56 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static error_t Atm128SpiP$zeroTask$postTask(void ){
#line 56
  unsigned char result;
#line 56

#line 56
  result = SchedulerBasicP$TaskBasic$postTask(Atm128SpiP$zeroTask);
#line 56

#line 56
  return result;
#line 56
}
#line 56
# 94 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/cc2420/lowpan/CC2420TinyosNetworkP.nc"
static inline message_t *CC2420TinyosNetworkP$NonTinyosReceive$default$receive(uint8_t networkId, message_t *msg, void *payload, uint8_t len)
#line 94
{
  return msg;
}

# 67 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/Receive.nc"
inline static message_t * CC2420TinyosNetworkP$NonTinyosReceive$receive(uint8_t arg_0x7db201b0, message_t * msg, void * payload, uint8_t len){
#line 67
  nx_struct message_t *result;
#line 67

#line 67
    result = CC2420TinyosNetworkP$NonTinyosReceive$default$receive(arg_0x7db201b0, msg, payload, len);
#line 67

#line 67
  return result;
#line 67
}
#line 67
# 241 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/cc2420/CC2420ActiveMessageP.nc"
static inline message_t *CC2420ActiveMessageP$Snoop$default$receive(am_id_t id, message_t *msg, void *payload, uint8_t len)
#line 241
{
  return msg;
}

# 67 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/Receive.nc"
inline static message_t * CC2420ActiveMessageP$Snoop$receive(am_id_t arg_0x7e2d9148, message_t * msg, void * payload, uint8_t len){
#line 67
  nx_struct message_t *result;
#line 67

#line 67
    result = CC2420ActiveMessageP$Snoop$default$receive(arg_0x7e2d9148, msg, payload, len);
#line 67

#line 67
  return result;
#line 67
}
#line 67
# 56 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static error_t BlinkToRadioC$AMSendTask$postTask(void ){
#line 56
  unsigned char result;
#line 56

#line 56
  result = SchedulerBasicP$TaskBasic$postTask(BlinkToRadioC$AMSendTask);
#line 56

#line 56
  return result;
#line 56
}
#line 56
# 315 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/at45db/BlockStorageP.nc"
static inline error_t BlockStorageP$BlockWrite$write(uint8_t id, storage_addr_t addr, void *buf, storage_len_t len)
#line 315
{
  return BlockStorageP$newRequest(BlockStorageP$R_WRITE, id, addr, buf, len);
}

# 58 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/BlockWrite.nc"
inline static error_t BlinkToRadioC$BlockWrite$write(storage_addr_t addr, void * buf, storage_len_t len){
#line 58
  unsigned char result;
#line 58

#line 58
  result = BlockStorageP$BlockWrite$write(/*BlinkToRadioAppC.BlockStorageC*/BlockStorageC$0$BLOCK_ID, addr, buf, len);
#line 58

#line 58
  return result;
#line 58
}
#line 58
# 179 "BlinkToRadioC.nc"
static inline void BlinkToRadioC$WriteFlash(BlinkToRadioMsg *btrpkt)
#line 179
{

  if (BlinkToRadioC$WriteLogAddrs <= MAX_FLASH_ADDR - sizeof(BlinkToRadioMsg )) {
      BlinkToRadioC$BlockWrite$write(BlinkToRadioC$WriteLogAddrs, btrpkt, sizeof(BlinkToRadioMsg ));
      BlinkToRadioC$WriteLogAddrs += sizeof(BlinkToRadioMsg );
    }
  else {
      printf("\nflash memory full!!!");
      printfflush();
    }
}

# 90 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/cc2420/packet/CC2420PacketP.nc"
static inline int8_t CC2420PacketP$CC2420Packet$getRssi(message_t *p_msg)
#line 90
{
  return __nesc_ntoh_uint8(CC2420PacketP$CC2420PacketBody$getMetadata(p_msg)->rssi.data);
}

# 64 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Packet.nc"
inline static int8_t BlinkToRadioC$CC2420Packet$getRssi(message_t *p_msg){
#line 64
  signed char result;
#line 64

#line 64
  result = CC2420PacketP$CC2420Packet$getRssi(p_msg);
#line 64

#line 64
  return result;
#line 64
}
#line 64
# 110 "BlinkToRadioC.nc"
static inline message_t *BlinkToRadioC$Receive$receive(message_t *msg, void *payload, uint8_t len)
#line 110
{


  BlinkToRadioC$Leds$led2Toggle();


  if (len == sizeof(BlinkToRadioMsg )) {
      BlinkToRadioMsg *btrpkt = (BlinkToRadioMsg *)payload;


      __nesc_hton_int8(btrpkt->rssi_reception.data, BlinkToRadioC$CC2420Packet$getRssi(msg) - 45);
      BlinkToRadioC$DestAdd = __nesc_ntoh_uint8(btrpkt->nodeid.data);
      BlinkToRadioC$WriteFlash(btrpkt);
      printf("\n %u %u %u %u %d %d %d %d", __nesc_ntoh_uint8(btrpkt->nodeid.data), __nesc_ntoh_uint16(btrpkt->seq_number_coord.data), __nesc_ntoh_uint16(btrpkt->seq_number.data), __nesc_ntoh_uint8(btrpkt->pow_val.data), __nesc_ntoh_int8(btrpkt->rssi_reception.data), __nesc_ntoh_uint16(btrpkt->chan_0.data), __nesc_ntoh_int8(btrpkt->rssi_B.data), __nesc_ntoh_int8(btrpkt->rssi_A.data));
      printf(" %lu", BlinkToRadioC$WriteLogAddrs);
      printfflush();
      BlinkToRadioC$ack = TRUE;
      BlinkToRadioC$AMSendTask$postTask();
    }

  return msg;
}

# 237 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/cc2420/CC2420ActiveMessageP.nc"
static inline message_t *CC2420ActiveMessageP$Receive$default$receive(am_id_t id, message_t *msg, void *payload, uint8_t len)
#line 237
{
  return msg;
}

# 67 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/Receive.nc"
inline static message_t * CC2420ActiveMessageP$Receive$receive(am_id_t arg_0x7e2dba80, message_t * msg, void * payload, uint8_t len){
#line 67
  nx_struct message_t *result;
#line 67

#line 67
  switch (arg_0x7e2dba80) {
#line 67
    case 6L:
#line 67
      result = BlinkToRadioC$Receive$receive(msg, payload, len);
#line 67
      break;
#line 67
    default:
#line 67
      result = CC2420ActiveMessageP$Receive$default$receive(arg_0x7e2dba80, msg, payload, len);
#line 67
      break;
#line 67
    }
#line 67

#line 67
  return result;
#line 67
}
#line 67
# 61 "/cygdrive/c/Dropbox/tinyos-2.x/tos/system/ActiveMessageAddressC.nc"
static inline am_addr_t ActiveMessageAddressC$ActiveMessageAddress$amAddress(void )
#line 61
{
  return ActiveMessageAddressC$amAddress();
}

# 50 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/ActiveMessageAddress.nc"
inline static am_addr_t CC2420ActiveMessageP$ActiveMessageAddress$amAddress(void ){
#line 50
  unsigned short result;
#line 50

#line 50
  result = ActiveMessageAddressC$ActiveMessageAddress$amAddress();
#line 50

#line 50
  return result;
#line 50
}
#line 50
# 88 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/cc2420/CC2420ActiveMessageP.nc"
static inline am_addr_t CC2420ActiveMessageP$AMPacket$address(void )
#line 88
{
  return CC2420ActiveMessageP$ActiveMessageAddress$amAddress();
}

#line 112
static inline bool CC2420ActiveMessageP$AMPacket$isForMe(message_t *amsg)
#line 112
{
  return CC2420ActiveMessageP$AMPacket$destination(amsg) == CC2420ActiveMessageP$AMPacket$address() || 
  CC2420ActiveMessageP$AMPacket$destination(amsg) == AM_BROADCAST_ADDR;
}

# 47 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420PacketBody.nc"
inline static cc2420_metadata_t * CC2420ActiveMessageP$CC2420PacketBody$getMetadata(message_t * msg){
#line 47
  nx_struct cc2420_metadata_t *result;
#line 47

#line 47
  result = CC2420PacketP$CC2420PacketBody$getMetadata(msg);
#line 47

#line 47
  return result;
#line 47
}
#line 47
# 171 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/cc2420/CC2420ActiveMessageP.nc"
static inline message_t *CC2420ActiveMessageP$SubReceive$receive(message_t *msg, void *payload, uint8_t len)
#line 171
{

  if (! __nesc_ntoh_int8(CC2420ActiveMessageP$CC2420PacketBody$getMetadata(msg)->crc.data)) {
      return msg;
    }

  if (CC2420ActiveMessageP$AMPacket$isForMe(msg)) {
      return CC2420ActiveMessageP$Receive$receive(CC2420ActiveMessageP$AMPacket$type(msg), msg, payload, len);
    }
  else {
      return CC2420ActiveMessageP$Snoop$receive(CC2420ActiveMessageP$AMPacket$type(msg), msg, payload, len);
    }
}

# 67 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/Receive.nc"
inline static message_t * UniqueReceiveP$Receive$receive(message_t * msg, void * payload, uint8_t len){
#line 67
  nx_struct message_t *result;
#line 67

#line 67
  result = CC2420ActiveMessageP$SubReceive$receive(msg, payload, len);
#line 67

#line 67
  return result;
#line 67
}
#line 67
# 137 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/cc2420/unique/UniqueReceiveP.nc"
static inline void UniqueReceiveP$insert(uint16_t msgSource, uint8_t msgDsn)
#line 137
{
  uint8_t element = UniqueReceiveP$recycleSourceElement;
  bool increment = FALSE;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 141
    {
      if (element == UniqueReceiveP$INVALID_ELEMENT || UniqueReceiveP$writeIndex == element) {

          element = UniqueReceiveP$writeIndex;
          increment = TRUE;
        }

      UniqueReceiveP$receivedMessages[element].source = msgSource;
      UniqueReceiveP$receivedMessages[element].dsn = msgDsn;
      if (increment) {
          UniqueReceiveP$writeIndex++;
          UniqueReceiveP$writeIndex %= 4;
        }
    }
#line 154
    __nesc_atomic_end(__nesc_atomic); }
}


static inline message_t *UniqueReceiveP$DuplicateReceive$default$receive(message_t *msg, void *payload, uint8_t len)
#line 158
{
  return msg;
}

# 67 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/Receive.nc"
inline static message_t * UniqueReceiveP$DuplicateReceive$receive(message_t * msg, void * payload, uint8_t len){
#line 67
  nx_struct message_t *result;
#line 67

#line 67
  result = UniqueReceiveP$DuplicateReceive$default$receive(msg, payload, len);
#line 67

#line 67
  return result;
#line 67
}
#line 67
# 111 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/cc2420/unique/UniqueReceiveP.nc"
static inline bool UniqueReceiveP$hasSeen(uint16_t msgSource, uint8_t msgDsn)
#line 111
{
  int i;

#line 113
  UniqueReceiveP$recycleSourceElement = UniqueReceiveP$INVALID_ELEMENT;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 115
    {
      for (i = 0; i < 4; i++) {
          if (UniqueReceiveP$receivedMessages[i].source == msgSource) {
              if (UniqueReceiveP$receivedMessages[i].dsn == msgDsn) {

                  {
                    unsigned char __nesc_temp = 
#line 120
                    TRUE;

                    {
#line 120
                      __nesc_atomic_end(__nesc_atomic); 
#line 120
                      return __nesc_temp;
                    }
                  }
                }
#line 123
              UniqueReceiveP$recycleSourceElement = i;
            }
        }
    }
#line 126
    __nesc_atomic_end(__nesc_atomic); }

  return FALSE;
}

# 42 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420PacketBody.nc"
inline static cc2420_header_t * UniqueReceiveP$CC2420PacketBody$getHeader(message_t * msg){
#line 42
  nx_struct cc2420_header_t *result;
#line 42

#line 42
  result = CC2420PacketP$CC2420PacketBody$getHeader(msg);
#line 42

#line 42
  return result;
#line 42
}
#line 42
# 85 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/cc2420/unique/UniqueReceiveP.nc"
static inline message_t *UniqueReceiveP$SubReceive$receive(message_t *msg, void *payload, 
uint8_t len)
#line 86
{
  uint16_t msgSource = __nesc_ntoh_leuint16(UniqueReceiveP$CC2420PacketBody$getHeader(msg)->src.data);
  uint8_t msgDsn = __nesc_ntoh_leuint8(UniqueReceiveP$CC2420PacketBody$getHeader(msg)->dsn.data);

  if (UniqueReceiveP$hasSeen(msgSource, msgDsn)) {
      return UniqueReceiveP$DuplicateReceive$receive(msg, payload, len);
    }
  else {
      UniqueReceiveP$insert(msgSource, msgDsn);
      return UniqueReceiveP$Receive$receive(msg, payload, len);
    }
}

# 67 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/Receive.nc"
inline static message_t * CC2420TinyosNetworkP$Receive$receive(message_t * msg, void * payload, uint8_t len){
#line 67
  nx_struct message_t *result;
#line 67

#line 67
  result = UniqueReceiveP$SubReceive$receive(msg, payload, len);
#line 67

#line 67
  return result;
#line 67
}
#line 67
# 84 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/cc2420/lowpan/CC2420TinyosNetworkP.nc"
static inline message_t *CC2420TinyosNetworkP$SubReceive$receive(message_t *msg, void *payload, uint8_t len)
#line 84
{
  if (__nesc_ntoh_leuint8(CC2420TinyosNetworkP$CC2420PacketBody$getHeader(msg)->network.data) == 0x3f) {
      return CC2420TinyosNetworkP$Receive$receive(msg, payload, len);
    }
  else {
      return CC2420TinyosNetworkP$NonTinyosReceive$receive(__nesc_ntoh_leuint8(CC2420TinyosNetworkP$CC2420PacketBody$getHeader(msg)->network.data), msg, payload, len);
    }
}

# 67 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/Receive.nc"
inline static message_t * CC2420ReceiveP$Receive$receive(message_t * msg, void * payload, uint8_t len){
#line 67
  nx_struct message_t *result;
#line 67

#line 67
  result = CC2420TinyosNetworkP$SubReceive$receive(msg, payload, len);
#line 67

#line 67
  return result;
#line 67
}
#line 67
# 64 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Config.nc"
inline static uint16_t CC2420ReceiveP$CC2420Config$getShortAddr(void ){
#line 64
  unsigned short result;
#line 64

#line 64
  result = CC2420ControlP$CC2420Config$getShortAddr();
#line 64

#line 64
  return result;
#line 64
}
#line 64
# 332 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/cc2420/control/CC2420ControlP.nc"
static inline bool CC2420ControlP$CC2420Config$isAddressRecognitionEnabled(void )
#line 332
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 333
    {
      unsigned char __nesc_temp = 
#line 333
      CC2420ControlP$addressRecognition;

      {
#line 333
        __nesc_atomic_end(__nesc_atomic); 
#line 333
        return __nesc_temp;
      }
    }
#line 335
    __nesc_atomic_end(__nesc_atomic); }
}

# 86 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Config.nc"
inline static bool CC2420ReceiveP$CC2420Config$isAddressRecognitionEnabled(void ){
#line 86
  unsigned char result;
#line 86

#line 86
  result = CC2420ControlP$CC2420Config$isAddressRecognitionEnabled();
#line 86

#line 86
  return result;
#line 86
}
#line 86
# 42 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420PacketBody.nc"
inline static cc2420_header_t * CC2420ReceiveP$CC2420PacketBody$getHeader(message_t * msg){
#line 42
  nx_struct cc2420_header_t *result;
#line 42

#line 42
  result = CC2420PacketP$CC2420PacketBody$getHeader(msg);
#line 42

#line 42
  return result;
#line 42
}
#line 42
# 448 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/cc2420/receive/CC2420ReceiveP.nc"
static inline bool CC2420ReceiveP$passesAddressCheck(message_t *msg)
#line 448
{
  cc2420_header_t *header = CC2420ReceiveP$CC2420PacketBody$getHeader(msg);

  if (!CC2420ReceiveP$CC2420Config$isAddressRecognitionEnabled()) {
      return TRUE;
    }

  return __nesc_ntoh_leuint16(header->dest.data) == CC2420ReceiveP$CC2420Config$getShortAddr()
   || __nesc_ntoh_leuint16(header->dest.data) == AM_BROADCAST_ADDR;
}

# 47 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420PacketBody.nc"
inline static cc2420_metadata_t * CC2420ReceiveP$CC2420PacketBody$getMetadata(message_t * msg){
#line 47
  nx_struct cc2420_metadata_t *result;
#line 47

#line 47
  result = CC2420PacketP$CC2420PacketBody$getMetadata(msg);
#line 47

#line 47
  return result;
#line 47
}
#line 47
# 326 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/cc2420/receive/CC2420ReceiveP.nc"
static inline void CC2420ReceiveP$receiveDone_task$runTask(void )
#line 326
{
  cc2420_metadata_t *metadata = CC2420ReceiveP$CC2420PacketBody$getMetadata(CC2420ReceiveP$m_p_rx_buf);
  cc2420_header_t *header = CC2420ReceiveP$CC2420PacketBody$getHeader(CC2420ReceiveP$m_p_rx_buf);
  uint8_t length = __nesc_ntoh_leuint8(header->length.data);
  uint8_t tmpLen __attribute((unused))  = sizeof(message_t ) - ((unsigned short )& ((message_t *)0)->data - sizeof(cc2420_header_t ));
  uint8_t * buf = (uint8_t * )header;

  __nesc_hton_int8(metadata->crc.data, buf[length] >> 7);
  __nesc_hton_uint8(metadata->lqi.data, buf[length] & 0x7f);
  __nesc_hton_uint8(metadata->rssi.data, buf[length - 1]);

  if (CC2420ReceiveP$passesAddressCheck(CC2420ReceiveP$m_p_rx_buf) && length >= CC2420_SIZE) {
      CC2420ReceiveP$m_p_rx_buf = CC2420ReceiveP$Receive$receive(CC2420ReceiveP$m_p_rx_buf, CC2420ReceiveP$m_p_rx_buf->data, 
      length - CC2420_SIZE);
    }

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 342
    CC2420ReceiveP$receivingPacket = FALSE;
#line 342
    __nesc_atomic_end(__nesc_atomic); }
  CC2420ReceiveP$waitForNextPacket();
}

# 30 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/at45db/At45dbStorageManagerC.nc"
static inline at45page_t At45dbStorageManagerC$At45dbVolume$volumeSize(volume_id_t volid)
#line 30
{
  switch (volid) 
    {
# 10 "build/micaz/StorageVolumes.h"
      case VOLUME_BLOCKTEST: return 1024;
# 35 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/at45db/At45dbStorageManagerC.nc"
      default: return 0;
    }
}

# 415 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/at45db/BlockStorageP.nc"
static inline at45page_t BlockStorageP$At45dbVolume$default$volumeSize(uint8_t id)
#line 415
{
#line 415
  return 0;
}

# 30 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/at45db/At45dbVolume.nc"
inline static at45page_t BlockStorageP$At45dbVolume$volumeSize(uint8_t arg_0x7daa12a8){
#line 30
  unsigned short result;
#line 30

#line 30
  switch (arg_0x7daa12a8) {
#line 30
    case /*BlinkToRadioAppC.BlockStorageC*/BlockStorageC$0$BLOCK_ID:
#line 30
      result = At45dbStorageManagerC$At45dbVolume$volumeSize(0);
#line 30
      break;
#line 30
    default:
#line 30
      result = BlockStorageP$At45dbVolume$default$volumeSize(arg_0x7daa12a8);
#line 30
      break;
#line 30
    }
#line 30

#line 30
  return result;
#line 30
}
#line 30
# 122 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/at45db/BlockStorageP.nc"
static inline at45page_t BlockStorageP$BConfig$npages(uint8_t id)
#line 122
{
  return BlockStorageP$At45dbVolume$volumeSize(id) >> 1;
}







static inline int BlockStorageP$BConfig$default$isConfig(uint8_t blockId)
#line 132
{
  return FALSE;
}

# 24 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/at45db/At45dbBlockConfig.nc"
inline static int BlockStorageP$BConfig$isConfig(uint8_t arg_0x7da998d8){
#line 24
  int result;
#line 24

#line 24
    result = BlockStorageP$BConfig$default$isConfig(arg_0x7da998d8);
#line 24

#line 24
  return result;
#line 24
}
#line 24
# 355 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/at45db/BlockStorageP.nc"
static inline storage_len_t BlockStorageP$BlockRead$getSize(uint8_t blockId)
#line 355
{
  storage_len_t vsize;

  if (BlockStorageP$BConfig$isConfig(blockId)) {
    vsize = BlockStorageP$BConfig$npages(blockId);
    }
  else {
#line 361
    vsize = BlockStorageP$At45dbVolume$volumeSize(blockId);
    }
  return vsize << AT45_PAGE_SIZE_LOG2;
}

# 129 "/cygdrive/c/Dropbox/tinyos-2.x/tos/system/ArbiterP.nc"
static inline error_t /*At45dbC.Arbiter.Arbiter*/ArbiterP$0$ResourceDefaultOwner$release(void )
#line 129
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 130
    {
      if (/*At45dbC.Arbiter.Arbiter*/ArbiterP$0$resId == /*At45dbC.Arbiter.Arbiter*/ArbiterP$0$default_owner_id) {
          if (/*At45dbC.Arbiter.Arbiter*/ArbiterP$0$state == /*At45dbC.Arbiter.Arbiter*/ArbiterP$0$RES_GRANTING) {
              /*At45dbC.Arbiter.Arbiter*/ArbiterP$0$grantedTask$postTask();
              {
                unsigned char __nesc_temp = 
#line 134
                SUCCESS;

                {
#line 134
                  __nesc_atomic_end(__nesc_atomic); 
#line 134
                  return __nesc_temp;
                }
              }
            }
          else {
#line 136
            if (/*At45dbC.Arbiter.Arbiter*/ArbiterP$0$state == /*At45dbC.Arbiter.Arbiter*/ArbiterP$0$RES_IMM_GRANTING) {
                /*At45dbC.Arbiter.Arbiter*/ArbiterP$0$resId = /*At45dbC.Arbiter.Arbiter*/ArbiterP$0$reqResId;
                /*At45dbC.Arbiter.Arbiter*/ArbiterP$0$state = /*At45dbC.Arbiter.Arbiter*/ArbiterP$0$RES_BUSY;
                {
                  unsigned char __nesc_temp = 
#line 139
                  SUCCESS;

                  {
#line 139
                    __nesc_atomic_end(__nesc_atomic); 
#line 139
                    return __nesc_temp;
                  }
                }
              }
            }
        }
    }
#line 145
    __nesc_atomic_end(__nesc_atomic); }
#line 143
  return FAIL;
}

#line 206
static inline void /*At45dbC.Arbiter.Arbiter*/ArbiterP$0$ResourceDefaultOwner$default$requested(void )
#line 206
{
  /*At45dbC.Arbiter.Arbiter*/ArbiterP$0$ResourceDefaultOwner$release();
}

# 73 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/ResourceDefaultOwner.nc"
inline static void /*At45dbC.Arbiter.Arbiter*/ArbiterP$0$ResourceDefaultOwner$requested(void ){
#line 73
  /*At45dbC.Arbiter.Arbiter*/ArbiterP$0$ResourceDefaultOwner$default$requested();
#line 73
}
#line 73
# 54 "/cygdrive/c/Dropbox/tinyos-2.x/tos/system/FcfsResourceQueueC.nc"
static inline bool /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC$1$FcfsQueue$isEnqueued(resource_client_id_t id)
#line 54
{
  return /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC$1$resQ[id] != /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC$1$NO_ENTRY || /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC$1$qTail == id;
}

#line 72
static inline error_t /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC$1$FcfsQueue$enqueue(resource_client_id_t id)
#line 72
{
  /* atomic removed: atomic calls only */
#line 73
  {
    if (!/*At45dbC.Arbiter.Queue*/FcfsResourceQueueC$1$FcfsQueue$isEnqueued(id)) {
        if (/*At45dbC.Arbiter.Queue*/FcfsResourceQueueC$1$qHead == /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC$1$NO_ENTRY) {
          /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC$1$qHead = id;
          }
        else {
#line 78
          /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC$1$resQ[/*At45dbC.Arbiter.Queue*/FcfsResourceQueueC$1$qTail] = id;
          }
#line 79
        /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC$1$qTail = id;
        {
          unsigned char __nesc_temp = 
#line 80
          SUCCESS;

#line 80
          return __nesc_temp;
        }
      }
#line 82
    {
      unsigned char __nesc_temp = 
#line 82
      EBUSY;

#line 82
      return __nesc_temp;
    }
  }
}

# 69 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/ResourceQueue.nc"
inline static error_t /*At45dbC.Arbiter.Arbiter*/ArbiterP$0$Queue$enqueue(resource_client_id_t id){
#line 69
  unsigned char result;
#line 69

#line 69
  result = /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC$1$FcfsQueue$enqueue(id);
#line 69

#line 69
  return result;
#line 69
}
#line 69
# 200 "/cygdrive/c/Dropbox/tinyos-2.x/tos/system/ArbiterP.nc"
static inline void /*At45dbC.Arbiter.Arbiter*/ArbiterP$0$ResourceRequested$default$requested(uint8_t id)
#line 200
{
}

# 43 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/ResourceRequested.nc"
inline static void /*At45dbC.Arbiter.Arbiter*/ArbiterP$0$ResourceRequested$requested(uint8_t arg_0x7d950870){
#line 43
    /*At45dbC.Arbiter.Arbiter*/ArbiterP$0$ResourceRequested$default$requested(arg_0x7d950870);
#line 43
}
#line 43
# 77 "/cygdrive/c/Dropbox/tinyos-2.x/tos/system/ArbiterP.nc"
static inline error_t /*At45dbC.Arbiter.Arbiter*/ArbiterP$0$Resource$request(uint8_t id)
#line 77
{
  /*At45dbC.Arbiter.Arbiter*/ArbiterP$0$ResourceRequested$requested(/*At45dbC.Arbiter.Arbiter*/ArbiterP$0$resId);
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 79
    {
      if (/*At45dbC.Arbiter.Arbiter*/ArbiterP$0$state == /*At45dbC.Arbiter.Arbiter*/ArbiterP$0$RES_CONTROLLED) {
          /*At45dbC.Arbiter.Arbiter*/ArbiterP$0$state = /*At45dbC.Arbiter.Arbiter*/ArbiterP$0$RES_GRANTING;
          /*At45dbC.Arbiter.Arbiter*/ArbiterP$0$reqResId = id;
        }
      else {
          unsigned char __nesc_temp = 
#line 84
          /*At45dbC.Arbiter.Arbiter*/ArbiterP$0$Queue$enqueue(id);

          {
#line 84
            __nesc_atomic_end(__nesc_atomic); 
#line 84
            return __nesc_temp;
          }
        }
    }
#line 87
    __nesc_atomic_end(__nesc_atomic); }
#line 86
  /*At45dbC.Arbiter.Arbiter*/ArbiterP$0$ResourceDefaultOwner$requested();
  return SUCCESS;
}

# 416 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/at45db/BlockStorageP.nc"
static inline error_t BlockStorageP$Resource$default$request(uint8_t id)
#line 416
{
#line 416
  return FAIL;
}

# 78 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/Resource.nc"
inline static error_t BlockStorageP$Resource$request(uint8_t arg_0x7daa1a08){
#line 78
  unsigned char result;
#line 78

#line 78
  switch (arg_0x7daa1a08) {
#line 78
    case /*BlinkToRadioAppC.BlockStorageC*/BlockStorageC$0$BLOCK_ID:
#line 78
      result = /*At45dbC.Arbiter.Arbiter*/ArbiterP$0$Resource$request(/*BlinkToRadioAppC.BlockStorageC*/BlockStorageC$0$RESOURCE_ID);
#line 78
      break;
#line 78
    default:
#line 78
      result = BlockStorageP$Resource$default$request(arg_0x7daa1a08);
#line 78
      break;
#line 78
    }
#line 78

#line 78
  return result;
#line 78
}
#line 78
# 95 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc"
static inline void CC2420SpiP$ChipSpiResource$abortRelease(void )
#line 95
{
  /* atomic removed: atomic calls only */
#line 96
  CC2420SpiP$release = FALSE;
}

# 31 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/cc2420/interfaces/ChipSpiResource.nc"
inline static void CC2420TransmitP$ChipSpiResource$abortRelease(void ){
#line 31
  CC2420SpiP$ChipSpiResource$abortRelease();
#line 31
}
#line 31
# 342 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/cc2420/transmit/CC2420TransmitP.nc"
static inline void CC2420TransmitP$ChipSpiResource$releasing(void )
#line 342
{
  if (CC2420TransmitP$abortSpiRelease) {
      CC2420TransmitP$ChipSpiResource$abortRelease();
    }
}

# 24 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/cc2420/interfaces/ChipSpiResource.nc"
inline static void CC2420SpiP$ChipSpiResource$releasing(void ){
#line 24
  CC2420TransmitP$ChipSpiResource$releasing();
#line 24
}
#line 24
# 44 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/McuPowerState.nc"
inline static void Atm128SpiP$McuPowerState$update(void ){
#line 44
  McuSleepC$McuPowerState$update();
#line 44
}
#line 44
# 94 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/spi/HplAtm128SpiP.nc"
static inline void HplAtm128SpiP$SPI$sleep(void )
#line 94
{
}

# 72 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/spi/Atm128Spi.nc"
inline static void Atm128SpiP$Spi$sleep(void ){
#line 72
  HplAtm128SpiP$SPI$sleep();
#line 72
}
#line 72
#line 99
inline static void Atm128SpiP$Spi$enableSpi(bool busOn){
#line 99
  HplAtm128SpiP$SPI$enableSpi(busOn);
#line 99
}
#line 99
# 119 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/spi/Atm128SpiP.nc"
static inline void Atm128SpiP$stopSpi(void )
#line 119
{
  Atm128SpiP$Spi$enableSpi(FALSE);
  /* atomic removed: atomic calls only */
#line 121
  {
    Atm128SpiP$Spi$sleep();
  }
  Atm128SpiP$McuPowerState$update();
}

# 172 "/cygdrive/c/Dropbox/tinyos-2.x/tos/system/SimpleArbiterP.nc"
static inline void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$ResourceConfigure$default$unconfigure(uint8_t id)
#line 172
{
}

# 55 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/ResourceConfigure.nc"
inline static void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$ResourceConfigure$unconfigure(uint8_t arg_0x7dd86430){
#line 55
    /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$ResourceConfigure$default$unconfigure(arg_0x7dd86430);
#line 55
}
#line 55
# 58 "/cygdrive/c/Dropbox/tinyos-2.x/tos/system/FcfsResourceQueueC.nc"
static inline resource_client_id_t /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$FcfsQueue$dequeue(void )
#line 58
{
  /* atomic removed: atomic calls only */
#line 59
  {
    if (/*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$qHead != /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$NO_ENTRY) {
        uint8_t id = /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$qHead;

#line 62
        /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$qHead = /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$resQ[/*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$qHead];
        if (/*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$qHead == /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$NO_ENTRY) {
          /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$qTail = /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$NO_ENTRY;
          }
#line 65
        /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$resQ[id] = /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$NO_ENTRY;
        {
          unsigned char __nesc_temp = 
#line 66
          id;

#line 66
          return __nesc_temp;
        }
      }
#line 68
    {
      unsigned char __nesc_temp = 
#line 68
      /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$NO_ENTRY;

#line 68
      return __nesc_temp;
    }
  }
}

# 60 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/ResourceQueue.nc"
inline static resource_client_id_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$Queue$dequeue(void ){
#line 60
  unsigned char result;
#line 60

#line 60
  result = /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$FcfsQueue$dequeue();
#line 60

#line 60
  return result;
#line 60
}
#line 60
# 50 "/cygdrive/c/Dropbox/tinyos-2.x/tos/system/FcfsResourceQueueC.nc"
static inline bool /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$FcfsQueue$isEmpty(void )
#line 50
{
  return /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$qHead == /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$NO_ENTRY;
}

# 43 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/ResourceQueue.nc"
inline static bool /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$Queue$isEmpty(void ){
#line 43
  unsigned char result;
#line 43

#line 43
  result = /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$FcfsQueue$isEmpty();
#line 43

#line 43
  return result;
#line 43
}
#line 43
# 97 "/cygdrive/c/Dropbox/tinyos-2.x/tos/system/SimpleArbiterP.nc"
static inline error_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$Resource$release(uint8_t id)
#line 97
{
  bool released = FALSE;

  /* atomic removed: atomic calls only */
#line 99
  {
    if (/*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$state == /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$RES_BUSY && /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$resId == id) {
        if (/*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$Queue$isEmpty() == FALSE) {
            /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$reqResId = /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$Queue$dequeue();
            /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$state = /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$RES_GRANTING;
            /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$grantedTask$postTask();
          }
        else {
            /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$resId = /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$NO_RES;
            /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$state = /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$RES_IDLE;
          }
        released = TRUE;
      }
  }
  if (released == TRUE) {
      /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$ResourceConfigure$unconfigure(id);
      return SUCCESS;
    }
  return FAIL;
}

# 110 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/Resource.nc"
inline static error_t Atm128SpiP$ResourceArbiter$release(uint8_t arg_0x7de468b0){
#line 110
  unsigned char result;
#line 110

#line 110
  result = /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$Resource$release(arg_0x7de468b0);
#line 110

#line 110
  return result;
#line 110
}
#line 110
# 322 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/spi/Atm128SpiP.nc"
static inline error_t Atm128SpiP$Resource$release(uint8_t id)
#line 322
{
  error_t error = Atm128SpiP$ResourceArbiter$release(id);

  /* atomic removed: atomic calls only */
#line 324
  {
    if (!Atm128SpiP$ArbiterInfo$inUse()) {
        Atm128SpiP$stopSpi();
      }
  }
  return error;
}

# 110 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/Resource.nc"
inline static error_t HplCC2420SpiP$SubResource$release(void ){
#line 110
  unsigned char result;
#line 110

#line 110
  result = Atm128SpiP$Resource$release(0U);
#line 110

#line 110
  return result;
#line 110
}
#line 110
# 46 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP$8$IO$set(void )
#line 46
{
#line 46
  * (volatile uint8_t * )56U |= 1 << 0;
}

# 29 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void HplCC2420SpiP$SS$set(void ){
#line 29
  /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP$8$IO$set();
#line 29
}
#line 29
# 75 "/cygdrive/c/Dropbox/tinyos-2.x/tos/platforms/micaz/chips/cc2420/HplCC2420SpiP.nc"
static inline error_t HplCC2420SpiP$Resource$release(void )
{
  if (HplCC2420SpiP$SubResource$isOwner()) {
    HplCC2420SpiP$SS$set();
    }
  return HplCC2420SpiP$SubResource$release();
}

# 110 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/Resource.nc"
inline static error_t CC2420SpiP$SpiResource$release(void ){
#line 110
  unsigned char result;
#line 110

#line 110
  result = HplCC2420SpiP$Resource$release();
#line 110

#line 110
  return result;
#line 110
}
#line 110
# 178 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc"
static inline uint8_t CC2420SpiP$Resource$isOwner(uint8_t id)
#line 178
{
  /* atomic removed: atomic calls only */
#line 179
  {
    unsigned char __nesc_temp = 
#line 179
    CC2420SpiP$m_holder == id;

#line 179
    return __nesc_temp;
  }
}

# 118 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/Resource.nc"
inline static bool CC2420ReceiveP$SpiResource$isOwner(void ){
#line 118
  unsigned char result;
#line 118

#line 118
  result = CC2420SpiP$Resource$isOwner(/*CC2420ReceiveC.Spi*/CC2420SpiC$4$CLIENT_ID);
#line 118

#line 118
  return result;
#line 118
}
#line 118
#line 87
inline static error_t CC2420ReceiveP$SpiResource$immediateRequest(void ){
#line 87
  unsigned char result;
#line 87

#line 87
  result = CC2420SpiP$Resource$immediateRequest(/*CC2420ReceiveC.Spi*/CC2420SpiC$4$CLIENT_ID);
#line 87

#line 87
  return result;
#line 87
}
#line 87
#line 78
inline static error_t CC2420ReceiveP$SpiResource$request(void ){
#line 78
  unsigned char result;
#line 78

#line 78
  result = CC2420SpiP$Resource$request(/*CC2420ReceiveC.Spi*/CC2420SpiC$4$CLIENT_ID);
#line 78

#line 78
  return result;
#line 78
}
#line 78
# 56 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static error_t CC2420SpiP$grant$postTask(void ){
#line 56
  unsigned char result;
#line 56

#line 56
  result = SchedulerBasicP$TaskBasic$postTask(CC2420SpiP$grant);
#line 56

#line 56
  return result;
#line 56
}
#line 56
# 184 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc"
static inline void CC2420SpiP$SpiResource$granted(void )
#line 184
{
  CC2420SpiP$grant$postTask();
}

# 92 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/Resource.nc"
inline static void HplCC2420SpiP$Resource$granted(void ){
#line 92
  CC2420SpiP$SpiResource$granted();
#line 92
}
#line 92
# 67 "/cygdrive/c/Dropbox/tinyos-2.x/tos/platforms/micaz/chips/cc2420/HplCC2420SpiP.nc"
static inline void HplCC2420SpiP$SubResource$granted(void )
{
  HplCC2420SpiP$SS$makeOutput();
  HplCC2420SpiP$SS$clr();

  HplCC2420SpiP$Resource$granted();
}

# 340 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/spi/Atm128SpiP.nc"
static inline void Atm128SpiP$Resource$default$granted(uint8_t id)
#line 340
{
}

# 92 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/Resource.nc"
inline static void Atm128SpiP$Resource$granted(uint8_t arg_0x7de4a9c8){
#line 92
  switch (arg_0x7de4a9c8) {
#line 92
    case 0U:
#line 92
      HplCC2420SpiP$SubResource$granted();
#line 92
      break;
#line 92
    default:
#line 92
      Atm128SpiP$Resource$default$granted(arg_0x7de4a9c8);
#line 92
      break;
#line 92
    }
#line 92
}
#line 92
# 336 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/spi/Atm128SpiP.nc"
static inline void Atm128SpiP$ResourceArbiter$granted(uint8_t id)
#line 336
{
  Atm128SpiP$Resource$granted(id);
}

# 92 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/Resource.nc"
inline static void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$Resource$granted(uint8_t arg_0x7dd8acf8){
#line 92
  Atm128SpiP$ResourceArbiter$granted(arg_0x7dd8acf8);
#line 92
}
#line 92
# 154 "/cygdrive/c/Dropbox/tinyos-2.x/tos/system/SimpleArbiterP.nc"
static inline void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$grantedTask$runTask(void )
#line 154
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 155
    {
      /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$resId = /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$reqResId;
      /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$state = /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$RES_BUSY;
    }
#line 158
    __nesc_atomic_end(__nesc_atomic); }
  /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$ResourceConfigure$configure(/*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$resId);
  /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$Resource$granted(/*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$resId);
}

# 71 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/SpiPacket.nc"
inline static void Atm128SpiP$SpiPacket$sendDone(uint8_t * txBuf, uint8_t * rxBuf, uint16_t len, error_t error){
#line 71
  CC2420SpiP$SpiPacket$sendDone(txBuf, rxBuf, len, error);
#line 71
}
#line 71
# 207 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/spi/Atm128SpiP.nc"
static inline void Atm128SpiP$zeroTask$runTask(void )
#line 207
{
  uint16_t myLen;
  uint8_t * rx;
  uint8_t * tx;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 212
    {
      myLen = Atm128SpiP$len;
      rx = Atm128SpiP$rxBuffer;
      tx = Atm128SpiP$txBuffer;
      Atm128SpiP$rxBuffer = (void *)0;
      Atm128SpiP$txBuffer = (void *)0;
      Atm128SpiP$len = 0;
      Atm128SpiP$pos = 0;
      Atm128SpiP$SpiPacket$sendDone(tx, rx, myLen, SUCCESS);
    }
#line 221
    __nesc_atomic_end(__nesc_atomic); }
}

# 452 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/cc2420/transmit/CC2420TransmitP.nc"
static inline void CC2420TransmitP$TXFIFO$readDone(uint8_t *tx_buf, uint8_t tx_len, 
error_t error)
#line 453
{
}

# 110 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/Resource.nc"
inline static error_t CC2420ReceiveP$SpiResource$release(void ){
#line 110
  unsigned char result;
#line 110

#line 110
  result = CC2420SpiP$Resource$release(/*CC2420ReceiveC.Spi*/CC2420SpiC$4$CLIENT_ID);
#line 110

#line 110
  return result;
#line 110
}
#line 110
# 29 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void CC2420ReceiveP$CSN$set(void ){
#line 29
  /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP$8$IO$set();
#line 29
}
#line 29
# 56 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static error_t CC2420ReceiveP$receiveDone_task$postTask(void ){
#line 56
  unsigned char result;
#line 56

#line 56
  result = SchedulerBasicP$TaskBasic$postTask(CC2420ReceiveP$receiveDone_task);
#line 56

#line 56
  return result;
#line 56
}
#line 56
# 47 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420PacketBody.nc"
inline static cc2420_metadata_t * CC2420TransmitP$CC2420PacketBody$getMetadata(message_t * msg){
#line 47
  nx_struct cc2420_metadata_t *result;
#line 47

#line 47
  result = CC2420PacketP$CC2420PacketBody$getMetadata(msg);
#line 47

#line 47
  return result;
#line 47
}
#line 47
# 139 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer1P.nc"
static inline void HplAtm128Timer1P$CompareA$stop(void )
#line 139
{
#line 139
  * (volatile uint8_t *)(0x37 + 0x20) &= ~(1 << 4);
}

# 59 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$0$HplAtm128Compare$stop(void ){
#line 59
  HplAtm128Timer1P$CompareA$stop();
#line 59
}
#line 59
# 65 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/timer/Atm128AlarmC.nc"
static inline void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$0$Alarm$stop(void )
#line 65
{
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$0$HplAtm128Compare$stop();
}

# 62 "/cygdrive/c/Dropbox/tinyos-2.x/tos/lib/timer/Alarm.nc"
inline static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$AlarmFrom$stop(void ){
#line 62
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$0$Alarm$stop();
#line 62
}
#line 62
# 91 "/cygdrive/c/Dropbox/tinyos-2.x/tos/lib/timer/TransformAlarmC.nc"
static inline void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$Alarm$stop(void )
{
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$AlarmFrom$stop();
}

# 62 "/cygdrive/c/Dropbox/tinyos-2.x/tos/lib/timer/Alarm.nc"
inline static void CC2420TransmitP$BackoffTimer$stop(void ){
#line 62
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$Alarm$stop();
#line 62
}
#line 62
# 42 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420PacketBody.nc"
inline static cc2420_header_t * CC2420TransmitP$CC2420PacketBody$getHeader(message_t * msg){
#line 42
  nx_struct cc2420_header_t *result;
#line 42

#line 42
  result = CC2420PacketP$CC2420PacketBody$getHeader(msg);
#line 42

#line 42
  return result;
#line 42
}
#line 42
# 354 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/cc2420/transmit/CC2420TransmitP.nc"
static inline void CC2420TransmitP$CC2420Receive$receive(uint8_t type, message_t *ack_msg)
#line 354
{
  cc2420_header_t *ack_header;
  cc2420_header_t *msg_header;
  cc2420_metadata_t *msg_metadata;
  uint8_t *ack_buf;
  uint8_t length;

  if (type == IEEE154_TYPE_ACK && CC2420TransmitP$m_msg) {
      ack_header = CC2420TransmitP$CC2420PacketBody$getHeader(ack_msg);
      msg_header = CC2420TransmitP$CC2420PacketBody$getHeader(CC2420TransmitP$m_msg);


      if (CC2420TransmitP$m_state == CC2420TransmitP$S_ACK_WAIT && __nesc_ntoh_leuint8(msg_header->dsn.data) == __nesc_ntoh_leuint8(ack_header->dsn.data)) {
          CC2420TransmitP$BackoffTimer$stop();

          msg_metadata = CC2420TransmitP$CC2420PacketBody$getMetadata(CC2420TransmitP$m_msg);
          ack_buf = (uint8_t *)ack_header;
          length = __nesc_ntoh_leuint8(ack_header->length.data);

          __nesc_hton_int8(msg_metadata->ack.data, TRUE);
          __nesc_hton_uint8(msg_metadata->rssi.data, ack_buf[length - 1]);
          __nesc_hton_uint8(msg_metadata->lqi.data, ack_buf[length] & 0x7f);
          CC2420TransmitP$signalDone(SUCCESS);
        }
    }
}

# 63 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Receive.nc"
inline static void CC2420ReceiveP$CC2420Receive$receive(uint8_t type, message_t * message){
#line 63
  CC2420TransmitP$CC2420Receive$receive(type, message);
#line 63
}
#line 63
# 59 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/PacketTimeStamp.nc"
inline static void CC2420ReceiveP$PacketTimeStamp$clear(message_t * msg){
#line 59
  CC2420PacketP$PacketTimeStamp32khz$clear(msg);
#line 59
}
#line 59
# 128 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/cc2420/packet/CC2420PacketP.nc"
static inline void CC2420PacketP$PacketTimeStamp32khz$set(message_t *msg, uint32_t value)
{
  __nesc_hton_uint32(CC2420PacketP$CC2420PacketBody$getMetadata(msg)->timestamp.data, value);
}

# 67 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/PacketTimeStamp.nc"
inline static void CC2420ReceiveP$PacketTimeStamp$set(message_t * msg, CC2420ReceiveP$PacketTimeStamp$size_type value){
#line 67
  CC2420PacketP$PacketTimeStamp32khz$set(msg, value);
#line 67
}
#line 67
# 209 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc"
static inline error_t CC2420SpiP$Fifo$continueRead(uint8_t addr, uint8_t *data, 
uint8_t len)
#line 210
{
  return CC2420SpiP$SpiPacket$send((void *)0, data, len);
}

# 62 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Fifo.nc"
inline static error_t CC2420ReceiveP$RXFIFO$continueRead(uint8_t * data, uint8_t length){
#line 62
  unsigned char result;
#line 62

#line 62
  result = CC2420SpiP$Fifo$continueRead(CC2420_RXFIFO, data, length);
#line 62

#line 62
  return result;
#line 62
}
#line 62
#line 51
inline static cc2420_status_t CC2420ReceiveP$RXFIFO$beginRead(uint8_t * data, uint8_t length){
#line 51
  unsigned char result;
#line 51

#line 51
  result = CC2420SpiP$Fifo$beginRead(CC2420_RXFIFO, data, length);
#line 51

#line 51
  return result;
#line 51
}
#line 51
# 30 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void CC2420ReceiveP$CSN$clr(void ){
#line 30
  /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP$8$IO$clr();
#line 30
}
#line 30
# 45 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Strobe.nc"
inline static cc2420_status_t CC2420ReceiveP$SACK$strobe(void ){
#line 45
  unsigned char result;
#line 45

#line 45
  result = CC2420SpiP$Strobe$strobe(CC2420_SACK);
#line 45

#line 45
  return result;
#line 45
}
#line 45
# 359 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/cc2420/control/CC2420ControlP.nc"
static inline bool CC2420ControlP$CC2420Config$isHwAutoAckDefault(void )
#line 359
{
  /* atomic removed: atomic calls only */
#line 360
  {
    unsigned char __nesc_temp = 
#line 360
    CC2420ControlP$hwAutoAckDefault;

#line 360
    return __nesc_temp;
  }
}

# 105 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Config.nc"
inline static bool CC2420ReceiveP$CC2420Config$isHwAutoAckDefault(void ){
#line 105
  unsigned char result;
#line 105

#line 105
  result = CC2420ControlP$CC2420Config$isHwAutoAckDefault();
#line 105

#line 105
  return result;
#line 105
}
#line 105
# 366 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/cc2420/control/CC2420ControlP.nc"
static inline bool CC2420ControlP$CC2420Config$isAutoAckEnabled(void )
#line 366
{
  /* atomic removed: atomic calls only */
#line 367
  {
    unsigned char __nesc_temp = 
#line 367
    CC2420ControlP$autoAckEnabled;

#line 367
    return __nesc_temp;
  }
}

# 110 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Config.nc"
inline static bool CC2420ReceiveP$CC2420Config$isAutoAckEnabled(void ){
#line 110
  unsigned char result;
#line 110

#line 110
  result = CC2420ControlP$CC2420Config$isAutoAckEnabled();
#line 110

#line 110
  return result;
#line 110
}
#line 110
# 45 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline bool /*HplAtm128GeneralIOC.PortE.Bit6*/HplAtm128GeneralIOPinP$38$IO$get(void )
#line 45
{
#line 45
  return (* (volatile uint8_t * )33U & (1 << 6)) != 0;
}

# 32 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static bool CC2420ReceiveP$FIFOP$get(void ){
#line 32
  unsigned char result;
#line 32

#line 32
  result = /*HplAtm128GeneralIOC.PortE.Bit6*/HplAtm128GeneralIOPinP$38$IO$get();
#line 32

#line 32
  return result;
#line 32
}
#line 32
# 45 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline bool /*HplAtm128GeneralIOC.PortB.Bit7*/HplAtm128GeneralIOPinP$15$IO$get(void )
#line 45
{
#line 45
  return (* (volatile uint8_t * )54U & (1 << 7)) != 0;
}

# 32 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static bool CC2420ReceiveP$FIFO$get(void ){
#line 32
  unsigned char result;
#line 32

#line 32
  result = /*HplAtm128GeneralIOC.PortB.Bit7*/HplAtm128GeneralIOPinP$15$IO$get();
#line 32

#line 32
  return result;
#line 32
}
#line 32
# 195 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/cc2420/receive/CC2420ReceiveP.nc"
static inline void CC2420ReceiveP$RXFIFO$readDone(uint8_t *rx_buf, uint8_t rx_len, 
error_t error)
#line 196
{
  cc2420_header_t *header = CC2420ReceiveP$CC2420PacketBody$getHeader(CC2420ReceiveP$m_p_rx_buf);
  uint8_t tmpLen __attribute((unused))  = sizeof(message_t ) - ((unsigned short )& ((message_t *)0)->data - sizeof(cc2420_header_t ));
  uint8_t * buf = (uint8_t * )header;

#line 200
  CC2420ReceiveP$rxFrameLength = buf[0];

  switch (CC2420ReceiveP$m_state) {

      case CC2420ReceiveP$S_RX_LENGTH: 
        CC2420ReceiveP$m_state = CC2420ReceiveP$S_RX_FCF;
      if (CC2420ReceiveP$rxFrameLength + 1 > CC2420ReceiveP$m_bytes_left) {

          CC2420ReceiveP$flush();
        }
      else {
          if (!CC2420ReceiveP$FIFO$get() && !CC2420ReceiveP$FIFOP$get()) {
              CC2420ReceiveP$m_bytes_left -= CC2420ReceiveP$rxFrameLength + 1;
            }

          if (CC2420ReceiveP$rxFrameLength <= MAC_PACKET_SIZE) {
              if (CC2420ReceiveP$rxFrameLength > 0) {
                  if (CC2420ReceiveP$rxFrameLength > CC2420ReceiveP$SACK_HEADER_LENGTH) {

                      CC2420ReceiveP$RXFIFO$continueRead(buf + 1, CC2420ReceiveP$SACK_HEADER_LENGTH);
                    }
                  else {

                      CC2420ReceiveP$m_state = CC2420ReceiveP$S_RX_PAYLOAD;
                      CC2420ReceiveP$RXFIFO$continueRead(buf + 1, CC2420ReceiveP$rxFrameLength);
                    }
                }
              else {
                  /* atomic removed: atomic calls only */
                  CC2420ReceiveP$receivingPacket = FALSE;
                  CC2420ReceiveP$CSN$set();
                  CC2420ReceiveP$SpiResource$release();
                  CC2420ReceiveP$waitForNextPacket();
                }
            }
          else {

              CC2420ReceiveP$flush();
            }
        }
      break;

      case CC2420ReceiveP$S_RX_FCF: 
        CC2420ReceiveP$m_state = CC2420ReceiveP$S_RX_PAYLOAD;










      if (CC2420ReceiveP$CC2420Config$isAutoAckEnabled() && !CC2420ReceiveP$CC2420Config$isHwAutoAckDefault()) {



          if (((__nesc_ntoh_leuint16(
#line 255
          header->fcf.data) >> IEEE154_FCF_ACK_REQ) & 0x01) == 1
           && (__nesc_ntoh_leuint16(header->dest.data) == CC2420ReceiveP$CC2420Config$getShortAddr()
           || __nesc_ntoh_leuint16(header->dest.data) == AM_BROADCAST_ADDR)
           && ((__nesc_ntoh_leuint16(header->fcf.data) >> IEEE154_FCF_FRAME_TYPE) & 7) == IEEE154_TYPE_DATA) {

              CC2420ReceiveP$CSN$set();
              CC2420ReceiveP$CSN$clr();
              CC2420ReceiveP$SACK$strobe();
              CC2420ReceiveP$CSN$set();
              CC2420ReceiveP$CSN$clr();
              CC2420ReceiveP$RXFIFO$beginRead(buf + 1 + CC2420ReceiveP$SACK_HEADER_LENGTH, 
              CC2420ReceiveP$rxFrameLength - CC2420ReceiveP$SACK_HEADER_LENGTH);
              return;
            }
        }


      CC2420ReceiveP$RXFIFO$continueRead(buf + 1 + CC2420ReceiveP$SACK_HEADER_LENGTH, 
      CC2420ReceiveP$rxFrameLength - CC2420ReceiveP$SACK_HEADER_LENGTH);
      break;

      case CC2420ReceiveP$S_RX_PAYLOAD: 
        CC2420ReceiveP$CSN$set();

      if (!CC2420ReceiveP$m_missed_packets) {

          CC2420ReceiveP$SpiResource$release();
        }

      if (CC2420ReceiveP$m_timestamp_size) {
          if (CC2420ReceiveP$rxFrameLength > 10) {
              CC2420ReceiveP$PacketTimeStamp$set(CC2420ReceiveP$m_p_rx_buf, CC2420ReceiveP$m_timestamp_queue[CC2420ReceiveP$m_timestamp_head]);
              CC2420ReceiveP$m_timestamp_head = (CC2420ReceiveP$m_timestamp_head + 1) % CC2420ReceiveP$TIMESTAMP_QUEUE_SIZE;
              CC2420ReceiveP$m_timestamp_size--;
            }
        }
      else 
#line 290
        {
          CC2420ReceiveP$PacketTimeStamp$clear(CC2420ReceiveP$m_p_rx_buf);
        }



      if (buf[CC2420ReceiveP$rxFrameLength] >> 7 && rx_buf) {
          uint8_t type = (__nesc_ntoh_leuint16(header->fcf.data) >> IEEE154_FCF_FRAME_TYPE) & 7;

#line 298
          CC2420ReceiveP$CC2420Receive$receive(type, CC2420ReceiveP$m_p_rx_buf);
          if (type == IEEE154_TYPE_DATA) {
              CC2420ReceiveP$receiveDone_task$postTask();
              return;
            }
        }

      CC2420ReceiveP$waitForNextPacket();
      break;

      default: /* atomic removed: atomic calls only */
        CC2420ReceiveP$receivingPacket = FALSE;
      CC2420ReceiveP$CSN$set();
      CC2420ReceiveP$SpiResource$release();
      break;
    }
}

# 370 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc"
static inline void CC2420SpiP$Fifo$default$readDone(uint8_t addr, uint8_t *rx_buf, uint8_t rx_len, error_t error)
#line 370
{
}

# 71 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Fifo.nc"
inline static void CC2420SpiP$Fifo$readDone(uint8_t arg_0x7ded1280, uint8_t * data, uint8_t length, error_t error){
#line 71
  switch (arg_0x7ded1280) {
#line 71
    case CC2420_TXFIFO:
#line 71
      CC2420TransmitP$TXFIFO$readDone(data, length, error);
#line 71
      break;
#line 71
    case CC2420_RXFIFO:
#line 71
      CC2420ReceiveP$RXFIFO$readDone(data, length, error);
#line 71
      break;
#line 71
    default:
#line 71
      CC2420SpiP$Fifo$default$readDone(arg_0x7ded1280, data, length, error);
#line 71
      break;
#line 71
    }
#line 71
}
#line 71
# 45 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Strobe.nc"
inline static cc2420_status_t CC2420ReceiveP$SFLUSHRX$strobe(void ){
#line 45
  unsigned char result;
#line 45

#line 45
  result = CC2420SpiP$Strobe$strobe(CC2420_SFLUSHRX);
#line 45

#line 45
  return result;
#line 45
}
#line 45
# 102 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc"
static inline error_t CC2420SpiP$ChipSpiResource$attemptRelease(void )
#line 102
{
  return CC2420SpiP$attemptRelease();
}

# 39 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/cc2420/interfaces/ChipSpiResource.nc"
inline static error_t CC2420TransmitP$ChipSpiResource$attemptRelease(void ){
#line 39
  unsigned char result;
#line 39

#line 39
  result = CC2420SpiP$ChipSpiResource$attemptRelease();
#line 39

#line 39
  return result;
#line 39
}
#line 39
# 53 "/cygdrive/c/Dropbox/tinyos-2.x/tos/lib/timer/Counter.nc"
inline static /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$Counter$size_type /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$Counter$get(void ){
#line 53
  unsigned long result;
#line 53

#line 53
  result = /*Counter32khz32C.Transform32*/TransformCounterC$1$Counter$get();
#line 53

#line 53
  return result;
#line 53
}
#line 53
# 75 "/cygdrive/c/Dropbox/tinyos-2.x/tos/lib/timer/TransformAlarmC.nc"
static inline /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$to_size_type /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$Alarm$getNow(void )
{
  return /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$Counter$get();
}

#line 146
static inline void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$Alarm$start(/*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$to_size_type dt)
{
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$Alarm$startAt(/*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$Alarm$getNow(), dt);
}

# 55 "/cygdrive/c/Dropbox/tinyos-2.x/tos/lib/timer/Alarm.nc"
inline static void CC2420TransmitP$BackoffTimer$start(CC2420TransmitP$BackoffTimer$size_type dt){
#line 55
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$Alarm$start(dt);
#line 55
}
#line 55
# 250 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/cc2420/CC2420ActiveMessageP.nc"
static inline void CC2420ActiveMessageP$RadioBackoff$default$requestInitialBackoff(am_id_t id, 
message_t *msg)
#line 251
{
}

# 81 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/cc2420/interfaces/RadioBackoff.nc"
inline static void CC2420ActiveMessageP$RadioBackoff$requestInitialBackoff(am_id_t arg_0x7e2d7230, message_t * msg){
#line 81
    CC2420ActiveMessageP$RadioBackoff$default$requestInitialBackoff(arg_0x7e2d7230, msg);
#line 81
}
#line 81
# 197 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/cc2420/CC2420ActiveMessageP.nc"
static inline void CC2420ActiveMessageP$SubBackoff$requestInitialBackoff(message_t *msg)
#line 197
{
  CC2420ActiveMessageP$RadioBackoff$requestInitialBackoff(__nesc_ntoh_leuint8(((cc2420_header_t * )((uint8_t *)msg + (unsigned short )& ((message_t *)0)->data - sizeof(cc2420_header_t )))->type.data), msg);
}

# 81 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/cc2420/interfaces/RadioBackoff.nc"
inline static void CC2420CsmaP$RadioBackoff$requestInitialBackoff(message_t * msg){
#line 81
  CC2420ActiveMessageP$SubBackoff$requestInitialBackoff(msg);
#line 81
}
#line 81
# 78 "/cygdrive/c/Dropbox/tinyos-2.x/tos/system/RandomMlcgC.nc"
static inline uint16_t RandomMlcgC$Random$rand16(void )
#line 78
{
  return (uint16_t )RandomMlcgC$Random$rand32();
}

# 41 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/Random.nc"
inline static uint16_t CC2420CsmaP$Random$rand16(void ){
#line 41
  unsigned short result;
#line 41

#line 41
  result = RandomMlcgC$Random$rand16();
#line 41

#line 41
  return result;
#line 41
}
#line 41
# 223 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/cc2420/transmit/CC2420TransmitP.nc"
static inline void CC2420TransmitP$RadioBackoff$setInitialBackoff(uint16_t backoffTime)
#line 223
{
  CC2420TransmitP$myInitialBackoff = backoffTime + 1;
}

# 60 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/cc2420/interfaces/RadioBackoff.nc"
inline static void CC2420CsmaP$SubBackoff$setInitialBackoff(uint16_t backoffTime){
#line 60
  CC2420TransmitP$RadioBackoff$setInitialBackoff(backoffTime);
#line 60
}
#line 60
# 217 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/cc2420/csma/CC2420CsmaP.nc"
static inline void CC2420CsmaP$SubBackoff$requestInitialBackoff(message_t *msg)
#line 217
{
  CC2420CsmaP$SubBackoff$setInitialBackoff(CC2420CsmaP$Random$rand16()
   % (0x1F * CC2420_BACKOFF_PERIOD) + CC2420_MIN_BACKOFF);



  CC2420CsmaP$RadioBackoff$requestInitialBackoff(msg);
}

# 81 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/cc2420/interfaces/RadioBackoff.nc"
inline static void CC2420TransmitP$RadioBackoff$requestInitialBackoff(message_t * msg){
#line 81
  CC2420CsmaP$SubBackoff$requestInitialBackoff(msg);
#line 81
}
#line 81
# 110 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/Resource.nc"
inline static error_t CC2420TransmitP$SpiResource$release(void ){
#line 110
  unsigned char result;
#line 110

#line 110
  result = CC2420SpiP$Resource$release(/*CC2420TransmitC.Spi*/CC2420SpiC$3$CLIENT_ID);
#line 110

#line 110
  return result;
#line 110
}
#line 110
# 638 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/cc2420/transmit/CC2420TransmitP.nc"
static inline error_t CC2420TransmitP$releaseSpiResource(void )
#line 638
{
  CC2420TransmitP$SpiResource$release();
  return SUCCESS;
}

# 56 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static error_t CC2420CsmaP$sendDone_task$postTask(void ){
#line 56
  unsigned char result;
#line 56

#line 56
  result = SchedulerBasicP$TaskBasic$postTask(CC2420CsmaP$sendDone_task);
#line 56

#line 56
  return result;
#line 56
}
#line 56
# 199 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/cc2420/csma/CC2420CsmaP.nc"
static inline void CC2420CsmaP$CC2420Transmit$sendDone(message_t *p_msg, error_t err)
#line 199
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 200
    CC2420CsmaP$sendErr = err;
#line 200
    __nesc_atomic_end(__nesc_atomic); }
  CC2420CsmaP$sendDone_task$postTask();
}

# 73 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Transmit.nc"
inline static void CC2420TransmitP$Send$sendDone(message_t * p_msg, error_t error){
#line 73
  CC2420CsmaP$CC2420Transmit$sendDone(p_msg, error);
#line 73
}
#line 73
# 29 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void CC2420TransmitP$CSN$set(void ){
#line 29
  /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP$8$IO$set();
#line 29
}
#line 29
# 45 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Strobe.nc"
inline static cc2420_status_t CC2420TransmitP$SFLUSHTX$strobe(void ){
#line 45
  unsigned char result;
#line 45

#line 45
  result = CC2420SpiP$Strobe$strobe(CC2420_SFLUSHTX);
#line 45

#line 45
  return result;
#line 45
}
#line 45
# 30 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void CC2420TransmitP$CSN$clr(void ){
#line 30
  /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP$8$IO$clr();
#line 30
}
#line 30
# 420 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/cc2420/transmit/CC2420TransmitP.nc"
static inline void CC2420TransmitP$TXFIFO$writeDone(uint8_t *tx_buf, uint8_t tx_len, 
error_t error)
#line 421
{

  CC2420TransmitP$CSN$set();
  if (CC2420TransmitP$m_state == CC2420TransmitP$S_CANCEL) {
      /* atomic removed: atomic calls only */
#line 425
      {
        CC2420TransmitP$CSN$clr();
        CC2420TransmitP$SFLUSHTX$strobe();
        CC2420TransmitP$CSN$set();
      }
      CC2420TransmitP$releaseSpiResource();
      CC2420TransmitP$m_state = CC2420TransmitP$S_STARTED;
      CC2420TransmitP$Send$sendDone(CC2420TransmitP$m_msg, ECANCEL);
    }
  else {
#line 434
    if (!CC2420TransmitP$m_cca) {
        /* atomic removed: atomic calls only */
#line 435
        {
          CC2420TransmitP$m_state = CC2420TransmitP$S_BEGIN_TRANSMIT;
        }
        CC2420TransmitP$attemptSend();
      }
    else {
        CC2420TransmitP$releaseSpiResource();
        /* atomic removed: atomic calls only */
#line 442
        {
          CC2420TransmitP$m_state = CC2420TransmitP$S_SAMPLE_CCA;
        }

        CC2420TransmitP$RadioBackoff$requestInitialBackoff(CC2420TransmitP$m_msg);
        CC2420TransmitP$BackoffTimer$start(CC2420TransmitP$myInitialBackoff);
      }
    }
}

# 318 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/cc2420/receive/CC2420ReceiveP.nc"
static inline void CC2420ReceiveP$RXFIFO$writeDone(uint8_t *tx_buf, uint8_t tx_len, error_t error)
#line 318
{
}

# 373 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc"
static inline void CC2420SpiP$Fifo$default$writeDone(uint8_t addr, uint8_t *tx_buf, uint8_t tx_len, error_t error)
#line 373
{
}

# 91 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Fifo.nc"
inline static void CC2420SpiP$Fifo$writeDone(uint8_t arg_0x7ded1280, uint8_t * data, uint8_t length, error_t error){
#line 91
  switch (arg_0x7ded1280) {
#line 91
    case CC2420_TXFIFO:
#line 91
      CC2420TransmitP$TXFIFO$writeDone(data, length, error);
#line 91
      break;
#line 91
    case CC2420_RXFIFO:
#line 91
      CC2420ReceiveP$RXFIFO$writeDone(data, length, error);
#line 91
      break;
#line 91
    default:
#line 91
      CC2420SpiP$Fifo$default$writeDone(arg_0x7ded1280, data, length, error);
#line 91
      break;
#line 91
    }
#line 91
}
#line 91
# 45 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Strobe.nc"
inline static cc2420_status_t CC2420TransmitP$STXONCCA$strobe(void ){
#line 45
  unsigned char result;
#line 45

#line 45
  result = CC2420SpiP$Strobe$strobe(CC2420_STXONCCA);
#line 45

#line 45
  return result;
#line 45
}
#line 45
inline static cc2420_status_t CC2420TransmitP$STXON$strobe(void ){
#line 45
  unsigned char result;
#line 45

#line 45
  result = CC2420SpiP$Strobe$strobe(CC2420_STXON);
#line 45

#line 45
  return result;
#line 45
}
#line 45
inline static cc2420_status_t CC2420TransmitP$SNOP$strobe(void ){
#line 45
  unsigned char result;
#line 45

#line 45
  result = CC2420SpiP$Strobe$strobe(CC2420_SNOP);
#line 45

#line 45
  return result;
#line 45
}
#line 45
# 254 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/cc2420/CC2420ActiveMessageP.nc"
static inline void CC2420ActiveMessageP$RadioBackoff$default$requestCongestionBackoff(am_id_t id, 
message_t *msg)
#line 255
{
}

# 88 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/cc2420/interfaces/RadioBackoff.nc"
inline static void CC2420ActiveMessageP$RadioBackoff$requestCongestionBackoff(am_id_t arg_0x7e2d7230, message_t * msg){
#line 88
    CC2420ActiveMessageP$RadioBackoff$default$requestCongestionBackoff(arg_0x7e2d7230, msg);
#line 88
}
#line 88
# 202 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/cc2420/CC2420ActiveMessageP.nc"
static inline void CC2420ActiveMessageP$SubBackoff$requestCongestionBackoff(message_t *msg)
#line 202
{
  CC2420ActiveMessageP$RadioBackoff$requestCongestionBackoff(__nesc_ntoh_leuint8(((cc2420_header_t * )((uint8_t *)msg + (unsigned short )& ((message_t *)0)->data - sizeof(cc2420_header_t )))->type.data), msg);
}

# 88 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/cc2420/interfaces/RadioBackoff.nc"
inline static void CC2420CsmaP$RadioBackoff$requestCongestionBackoff(message_t * msg){
#line 88
  CC2420ActiveMessageP$SubBackoff$requestCongestionBackoff(msg);
#line 88
}
#line 88
# 232 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/cc2420/transmit/CC2420TransmitP.nc"
static inline void CC2420TransmitP$RadioBackoff$setCongestionBackoff(uint16_t backoffTime)
#line 232
{
  CC2420TransmitP$myCongestionBackoff = backoffTime + 1;
}

# 66 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/cc2420/interfaces/RadioBackoff.nc"
inline static void CC2420CsmaP$SubBackoff$setCongestionBackoff(uint16_t backoffTime){
#line 66
  CC2420TransmitP$RadioBackoff$setCongestionBackoff(backoffTime);
#line 66
}
#line 66
# 226 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/cc2420/csma/CC2420CsmaP.nc"
static inline void CC2420CsmaP$SubBackoff$requestCongestionBackoff(message_t *msg)
#line 226
{
  CC2420CsmaP$SubBackoff$setCongestionBackoff(CC2420CsmaP$Random$rand16()
   % (0x7 * CC2420_BACKOFF_PERIOD) + CC2420_MIN_BACKOFF);

  CC2420CsmaP$RadioBackoff$requestCongestionBackoff(msg);
}

# 88 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/cc2420/interfaces/RadioBackoff.nc"
inline static void CC2420TransmitP$RadioBackoff$requestCongestionBackoff(message_t * msg){
#line 88
  CC2420CsmaP$SubBackoff$requestCongestionBackoff(msg);
#line 88
}
#line 88
# 49 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer1P.nc"
static inline uint16_t HplAtm128Timer1P$Timer$get(void )
#line 49
{
#line 49
  return * (volatile uint16_t *)(0x2C + 0x20);
}

# 52 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
inline static /*CounterOne16C.NCounter*/Atm128CounterC$1$Timer$timer_size /*CounterOne16C.NCounter*/Atm128CounterC$1$Timer$get(void ){
#line 52
  unsigned short result;
#line 52

#line 52
  result = HplAtm128Timer1P$Timer$get();
#line 52

#line 52
  return result;
#line 52
}
#line 52
# 41 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/timer/Atm128CounterC.nc"
static inline /*CounterOne16C.NCounter*/Atm128CounterC$1$timer_size /*CounterOne16C.NCounter*/Atm128CounterC$1$Counter$get(void )
{
  return /*CounterOne16C.NCounter*/Atm128CounterC$1$Timer$get();
}

# 53 "/cygdrive/c/Dropbox/tinyos-2.x/tos/lib/timer/Counter.nc"
inline static /*Counter32khz32C.Transform32*/TransformCounterC$1$CounterFrom$size_type /*Counter32khz32C.Transform32*/TransformCounterC$1$CounterFrom$get(void ){
#line 53
  unsigned short result;
#line 53

#line 53
  result = /*CounterOne16C.NCounter*/Atm128CounterC$1$Counter$get();
#line 53

#line 53
  return result;
#line 53
}
#line 53
# 44 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/timer/HplAtm128TimerCtrl8.nc"
inline static Atm128_TIFR_t HplAtm128Timer1P$Timer0Ctrl$getInterruptFlag(void ){
#line 44
  union __nesc_unnamed4273 result;
#line 44

#line 44
  result = HplAtm128Timer0AsyncP$TimerCtrl$getInterruptFlag();
#line 44

#line 44
  return result;
#line 44
}
#line 44
# 144 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer1P.nc"
static inline bool HplAtm128Timer1P$Timer$test(void )
#line 144
{
  return HplAtm128Timer1P$Timer0Ctrl$getInterruptFlag().bits.tov1;
}

# 78 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
inline static bool /*CounterOne16C.NCounter*/Atm128CounterC$1$Timer$test(void ){
#line 78
  unsigned char result;
#line 78

#line 78
  result = HplAtm128Timer1P$Timer$test();
#line 78

#line 78
  return result;
#line 78
}
#line 78
# 46 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/timer/Atm128CounterC.nc"
static inline bool /*CounterOne16C.NCounter*/Atm128CounterC$1$Counter$isOverflowPending(void )
{
  return /*CounterOne16C.NCounter*/Atm128CounterC$1$Timer$test();
}

# 60 "/cygdrive/c/Dropbox/tinyos-2.x/tos/lib/timer/Counter.nc"
inline static bool /*Counter32khz32C.Transform32*/TransformCounterC$1$CounterFrom$isOverflowPending(void ){
#line 60
  unsigned char result;
#line 60

#line 60
  result = /*CounterOne16C.NCounter*/Atm128CounterC$1$Counter$isOverflowPending();
#line 60

#line 60
  return result;
#line 60
}
#line 60
# 133 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer1P.nc"
static inline void HplAtm128Timer1P$CompareA$start(void )
#line 133
{
#line 133
  * (volatile uint8_t *)(0x37 + 0x20) |= 1 << 4;
}

# 56 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$0$HplAtm128Compare$start(void ){
#line 56
  HplAtm128Timer1P$CompareA$start();
#line 56
}
#line 56
# 127 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer1P.nc"
static inline void HplAtm128Timer1P$CompareA$reset(void )
#line 127
{
#line 127
  * (volatile uint8_t *)(0x36 + 0x20) = 1 << 4;
}

# 53 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$0$HplAtm128Compare$reset(void ){
#line 53
  HplAtm128Timer1P$CompareA$reset();
#line 53
}
#line 53
# 183 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer1P.nc"
static inline void HplAtm128Timer1P$CompareA$set(uint16_t t)
#line 183
{
#line 183
  * (volatile uint16_t *)(0x2A + 0x20) = t;
}

# 45 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$0$HplAtm128Compare$set(/*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$0$HplAtm128Compare$size_type t){
#line 45
  HplAtm128Timer1P$CompareA$set(t);
#line 45
}
#line 45
# 52 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
inline static /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$0$HplAtm128Timer$timer_size /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$0$HplAtm128Timer$get(void ){
#line 52
  unsigned short result;
#line 52

#line 52
  result = HplAtm128Timer1P$Timer$get();
#line 52

#line 52
  return result;
#line 52
}
#line 52
# 74 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/timer/Atm128AlarmC.nc"
static inline void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$0$Alarm$startAt(/*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$0$timer_size t0, /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$0$timer_size dt)
#line 74
{
  /* atomic removed: atomic calls only */






  {
    /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$0$timer_size now;
#line 83
    /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$0$timer_size elapsed;
#line 83
    /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$0$timer_size expires;

    ;


    now = /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$0$HplAtm128Timer$get();
    elapsed = now + 3 - t0;
    if (elapsed >= dt) {
      expires = now + 3;
      }
    else {
#line 93
      expires = t0 + dt;
      }



    if (expires == 0) {
      expires = 1;
      }



    /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$0$HplAtm128Compare$set(expires - 1);
    /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$0$HplAtm128Compare$reset();
    /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$0$HplAtm128Compare$start();
  }
}

# 92 "/cygdrive/c/Dropbox/tinyos-2.x/tos/lib/timer/Alarm.nc"
inline static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$AlarmFrom$startAt(/*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$AlarmFrom$size_type t0, /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$AlarmFrom$size_type dt){
#line 92
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$0$Alarm$startAt(t0, dt);
#line 92
}
#line 92
# 55 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Register.nc"
inline static cc2420_status_t CC2420ControlP$RXCTRL1$write(uint16_t data){
#line 55
  unsigned char result;
#line 55

#line 55
  result = CC2420SpiP$Reg$write(CC2420_RXCTRL1, data);
#line 55

#line 55
  return result;
#line 55
}
#line 55
inline static cc2420_status_t CC2420ControlP$IOCFG0$write(uint16_t data){
#line 55
  unsigned char result;
#line 55

#line 55
  result = CC2420SpiP$Reg$write(CC2420_IOCFG0, data);
#line 55

#line 55
  return result;
#line 55
}
#line 55
# 45 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Strobe.nc"
inline static cc2420_status_t CC2420ControlP$SXOSCON$strobe(void ){
#line 45
  unsigned char result;
#line 45

#line 45
  result = CC2420SpiP$Strobe$strobe(CC2420_SXOSCON);
#line 45

#line 45
  return result;
#line 45
}
#line 45
# 56 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static error_t HplCC2420InterruptsP$CCATask$postTask(void ){
#line 56
  unsigned char result;
#line 56

#line 56
  result = SchedulerBasicP$TaskBasic$postTask(HplCC2420InterruptsP$CCATask);
#line 56

#line 56
  return result;
#line 56
}
#line 56
# 45 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline bool /*HplAtm128GeneralIOC.PortD.Bit6*/HplAtm128GeneralIOPinP$30$IO$get(void )
#line 45
{
#line 45
  return (* (volatile uint8_t * )48U & (1 << 6)) != 0;
}

# 32 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static bool HplCC2420InterruptsP$CC_CCA$get(void ){
#line 32
  unsigned char result;
#line 32

#line 32
  result = /*HplAtm128GeneralIOC.PortD.Bit6*/HplAtm128GeneralIOPinP$30$IO$get();
#line 32

#line 32
  return result;
#line 32
}
#line 32
# 89 "/cygdrive/c/Dropbox/tinyos-2.x/tos/platforms/micaz/chips/cc2420/HplCC2420InterruptsP.nc"
static inline error_t HplCC2420InterruptsP$CCA$enableRisingEdge(void )
#line 89
{
  /* atomic removed: atomic calls only */
#line 90
  HplCC2420InterruptsP$ccaWaitForState = TRUE;
  /* atomic removed: atomic calls only */
#line 91
  HplCC2420InterruptsP$ccaCheckDisabled = FALSE;
  HplCC2420InterruptsP$ccaLastState = HplCC2420InterruptsP$CC_CCA$get();
  HplCC2420InterruptsP$CCATask$postTask();
  return SUCCESS;
}

# 42 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/GpioInterrupt.nc"
inline static error_t CC2420ControlP$InterruptCCA$enableRisingEdge(void ){
#line 42
  unsigned char result;
#line 42

#line 42
  result = HplCC2420InterruptsP$CCA$enableRisingEdge();
#line 42

#line 42
  return result;
#line 42
}
#line 42
# 55 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Register.nc"
inline static cc2420_status_t CC2420ControlP$IOCFG1$write(uint16_t data){
#line 55
  unsigned char result;
#line 55

#line 55
  result = CC2420SpiP$Reg$write(CC2420_IOCFG1, data);
#line 55

#line 55
  return result;
#line 55
}
#line 55
# 207 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/cc2420/control/CC2420ControlP.nc"
static inline error_t CC2420ControlP$CC2420Power$startOscillator(void )
#line 207
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 208
    {
      if (CC2420ControlP$m_state != CC2420ControlP$S_VREG_STARTED) {
          {
            unsigned char __nesc_temp = 
#line 210
            FAIL;

            {
#line 210
              __nesc_atomic_end(__nesc_atomic); 
#line 210
              return __nesc_temp;
            }
          }
        }
#line 213
      CC2420ControlP$m_state = CC2420ControlP$S_XOSC_STARTING;
      CC2420ControlP$IOCFG1$write(CC2420_SFDMUX_XOSC16M_STABLE << 
      CC2420_IOCFG1_CCAMUX);

      CC2420ControlP$InterruptCCA$enableRisingEdge();
      CC2420ControlP$SXOSCON$strobe();

      CC2420ControlP$IOCFG0$write((1 << CC2420_IOCFG0_FIFOP_POLARITY) | (
      127 << CC2420_IOCFG0_FIFOP_THR));

      CC2420ControlP$writeFsctrl();
      CC2420ControlP$writeMdmctrl0();

      CC2420ControlP$RXCTRL1$write(((((((1 << CC2420_RXCTRL1_RXBPF_LOCUR) | (
      1 << CC2420_RXCTRL1_LOW_LOWGAIN)) | (
      1 << CC2420_RXCTRL1_HIGH_HGM)) | (
      1 << CC2420_RXCTRL1_LNA_CAP_ARRAY)) | (
      1 << CC2420_RXCTRL1_RXMIX_TAIL)) | (
      1 << CC2420_RXCTRL1_RXMIX_VCM)) | (
      2 << CC2420_RXCTRL1_RXMIX_CURRENT));
    }
#line 233
    __nesc_atomic_end(__nesc_atomic); }
  return SUCCESS;
}

# 71 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Power.nc"
inline static error_t CC2420CsmaP$CC2420Power$startOscillator(void ){
#line 71
  unsigned char result;
#line 71

#line 71
  result = CC2420ControlP$CC2420Power$startOscillator();
#line 71

#line 71
  return result;
#line 71
}
#line 71
# 208 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/cc2420/csma/CC2420CsmaP.nc"
static inline void CC2420CsmaP$Resource$granted(void )
#line 208
{
  CC2420CsmaP$CC2420Power$startOscillator();
}

# 92 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/Resource.nc"
inline static void CC2420ControlP$Resource$granted(void ){
#line 92
  CC2420CsmaP$Resource$granted();
#line 92
}
#line 92
# 30 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void CC2420ControlP$CSN$clr(void ){
#line 30
  /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP$8$IO$clr();
#line 30
}
#line 30
# 390 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/cc2420/control/CC2420ControlP.nc"
static inline void CC2420ControlP$SpiResource$granted(void )
#line 390
{
  CC2420ControlP$CSN$clr();
  CC2420ControlP$Resource$granted();
}

# 56 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static error_t CC2420ControlP$syncDone$postTask(void ){
#line 56
  unsigned char result;
#line 56

#line 56
  result = SchedulerBasicP$TaskBasic$postTask(CC2420ControlP$syncDone);
#line 56

#line 56
  return result;
#line 56
}
#line 56
# 110 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/Resource.nc"
inline static error_t CC2420ControlP$SyncResource$release(void ){
#line 110
  unsigned char result;
#line 110

#line 110
  result = CC2420SpiP$Resource$release(/*CC2420ControlC.SyncSpiC*/CC2420SpiC$1$CLIENT_ID);
#line 110

#line 110
  return result;
#line 110
}
#line 110
# 29 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void CC2420ControlP$CSN$set(void ){
#line 29
  /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP$8$IO$set();
#line 29
}
#line 29
# 45 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Strobe.nc"
inline static cc2420_status_t CC2420ControlP$SRXON$strobe(void ){
#line 45
  unsigned char result;
#line 45

#line 45
  result = CC2420SpiP$Strobe$strobe(CC2420_SRXON);
#line 45

#line 45
  return result;
#line 45
}
#line 45
inline static cc2420_status_t CC2420ControlP$SRFOFF$strobe(void ){
#line 45
  unsigned char result;
#line 45

#line 45
  result = CC2420SpiP$Strobe$strobe(CC2420_SRFOFF);
#line 45

#line 45
  return result;
#line 45
}
#line 45
# 376 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/cc2420/control/CC2420ControlP.nc"
static inline void CC2420ControlP$SyncResource$granted(void )
#line 376
{
  CC2420ControlP$CSN$clr();
  CC2420ControlP$SRFOFF$strobe();
  CC2420ControlP$writeFsctrl();
  CC2420ControlP$writeMdmctrl0();
  CC2420ControlP$writeId();
  CC2420ControlP$CSN$set();
  CC2420ControlP$CSN$clr();
  CC2420ControlP$SRXON$strobe();
  CC2420ControlP$CSN$set();
  CC2420ControlP$SyncResource$release();
  CC2420ControlP$syncDone$postTask();
}

#line 510
static inline void CC2420ControlP$ReadRssi$default$readDone(error_t error, uint16_t data)
#line 510
{
}

# 63 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/Read.nc"
inline static void CC2420ControlP$ReadRssi$readDone(error_t result, CC2420ControlP$ReadRssi$val_t val){
#line 63
  CC2420ControlP$ReadRssi$default$readDone(result, val);
#line 63
}
#line 63
# 110 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/Resource.nc"
inline static error_t CC2420ControlP$RssiResource$release(void ){
#line 110
  unsigned char result;
#line 110

#line 110
  result = CC2420SpiP$Resource$release(/*CC2420ControlC.RssiResource*/CC2420SpiC$2$CLIENT_ID);
#line 110

#line 110
  return result;
#line 110
}
#line 110
# 287 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc"
static inline cc2420_status_t CC2420SpiP$Reg$read(uint8_t addr, uint16_t *data)
#line 287
{

  cc2420_status_t status = 0;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 291
    {
      if (CC2420SpiP$WorkingState$isIdle()) {
          {
            unsigned char __nesc_temp = 
#line 293
            status;

            {
#line 293
              __nesc_atomic_end(__nesc_atomic); 
#line 293
              return __nesc_temp;
            }
          }
        }
    }
#line 297
    __nesc_atomic_end(__nesc_atomic); }
#line 297
  status = CC2420SpiP$SpiByte$write(addr | 0x40);
  *data = (uint16_t )CC2420SpiP$SpiByte$write(0) << 8;
  *data |= CC2420SpiP$SpiByte$write(0);

  return status;
}

# 47 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Register.nc"
inline static cc2420_status_t CC2420ControlP$RSSI$read(uint16_t *data){
#line 47
  unsigned char result;
#line 47

#line 47
  result = CC2420SpiP$Reg$read(CC2420_RSSI, data);
#line 47

#line 47
  return result;
#line 47
}
#line 47
# 395 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/cc2420/control/CC2420ControlP.nc"
static inline void CC2420ControlP$RssiResource$granted(void )
#line 395
{
  uint16_t data;

#line 397
  CC2420ControlP$CSN$clr();
  CC2420ControlP$RSSI$read(&data);
  CC2420ControlP$CSN$set();

  CC2420ControlP$RssiResource$release();
  data += 0x7f;
  data &= 0x00ff;
  CC2420ControlP$ReadRssi$readDone(SUCCESS, data);
}

# 382 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/cc2420/transmit/CC2420TransmitP.nc"
static inline void CC2420TransmitP$SpiResource$granted(void )
#line 382
{
  uint8_t cur_state;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 385
    {
      cur_state = CC2420TransmitP$m_state;
    }
#line 387
    __nesc_atomic_end(__nesc_atomic); }

  switch (cur_state) {
      case CC2420TransmitP$S_LOAD: 
        CC2420TransmitP$loadTXFIFO();
      break;

      case CC2420TransmitP$S_BEGIN_TRANSMIT: 
        CC2420TransmitP$attemptSend();
      break;

      case CC2420TransmitP$S_CANCEL: 
        CC2420TransmitP$CSN$clr();
      CC2420TransmitP$SFLUSHTX$strobe();
      CC2420TransmitP$CSN$set();
      CC2420TransmitP$releaseSpiResource();
      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 403
        {
          CC2420TransmitP$m_state = CC2420TransmitP$S_STARTED;
        }
#line 405
        __nesc_atomic_end(__nesc_atomic); }
      CC2420TransmitP$Send$sendDone(CC2420TransmitP$m_msg, ECANCEL);
      break;

      default: 
        CC2420TransmitP$releaseSpiResource();
      break;
    }
}

# 186 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/cc2420/receive/CC2420ReceiveP.nc"
static inline void CC2420ReceiveP$SpiResource$granted(void )
#line 186
{
  CC2420ReceiveP$receive();
}

# 367 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc"
static inline void CC2420SpiP$Resource$default$granted(uint8_t id)
#line 367
{
}

# 92 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/Resource.nc"
inline static void CC2420SpiP$Resource$granted(uint8_t arg_0x7ded2818){
#line 92
  switch (arg_0x7ded2818) {
#line 92
    case /*CC2420ControlC.Spi*/CC2420SpiC$0$CLIENT_ID:
#line 92
      CC2420ControlP$SpiResource$granted();
#line 92
      break;
#line 92
    case /*CC2420ControlC.SyncSpiC*/CC2420SpiC$1$CLIENT_ID:
#line 92
      CC2420ControlP$SyncResource$granted();
#line 92
      break;
#line 92
    case /*CC2420ControlC.RssiResource*/CC2420SpiC$2$CLIENT_ID:
#line 92
      CC2420ControlP$RssiResource$granted();
#line 92
      break;
#line 92
    case /*CC2420TransmitC.Spi*/CC2420SpiC$3$CLIENT_ID:
#line 92
      CC2420TransmitP$SpiResource$granted();
#line 92
      break;
#line 92
    case /*CC2420ReceiveC.Spi*/CC2420SpiC$4$CLIENT_ID:
#line 92
      CC2420ReceiveP$SpiResource$granted();
#line 92
      break;
#line 92
    default:
#line 92
      CC2420SpiP$Resource$default$granted(arg_0x7ded2818);
#line 92
      break;
#line 92
    }
#line 92
}
#line 92
# 358 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc"
static inline void CC2420SpiP$grant$runTask(void )
#line 358
{
  uint8_t holder;

#line 360
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 360
    {
      holder = CC2420SpiP$m_holder;
    }
#line 362
    __nesc_atomic_end(__nesc_atomic); }
  CC2420SpiP$Resource$granted(holder);
}

# 55 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Register.nc"
inline static cc2420_status_t CC2420ControlP$FSCTRL$write(uint16_t data){
#line 55
  unsigned char result;
#line 55

#line 55
  result = CC2420SpiP$Reg$write(CC2420_FSCTRL, data);
#line 55

#line 55
  return result;
#line 55
}
#line 55
inline static cc2420_status_t CC2420ControlP$MDMCTRL0$write(uint16_t data){
#line 55
  unsigned char result;
#line 55

#line 55
  result = CC2420SpiP$Reg$write(CC2420_MDMCTRL0, data);
#line 55

#line 55
  return result;
#line 55
}
#line 55
# 63 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Ram.nc"
inline static cc2420_status_t CC2420ControlP$PANID$write(uint8_t offset, uint8_t * data, uint8_t length){
#line 63
  unsigned char result;
#line 63

#line 63
  result = CC2420SpiP$Ram$write(CC2420_RAM_PANID, offset, data, length);
#line 63

#line 63
  return result;
#line 63
}
#line 63
# 56 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static error_t CC2420CsmaP$startDone_task$postTask(void ){
#line 56
  unsigned char result;
#line 56

#line 56
  result = SchedulerBasicP$TaskBasic$postTask(CC2420CsmaP$startDone_task);
#line 56

#line 56
  return result;
#line 56
}
#line 56
# 212 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/cc2420/csma/CC2420CsmaP.nc"
static inline void CC2420CsmaP$CC2420Power$startOscillatorDone(void )
#line 212
{
  CC2420CsmaP$startDone_task$postTask();
}

# 76 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Power.nc"
inline static void CC2420ControlP$CC2420Power$startOscillatorDone(void ){
#line 76
  CC2420CsmaP$CC2420Power$startOscillatorDone();
#line 76
}
#line 76
# 105 "/cygdrive/c/Dropbox/tinyos-2.x/tos/platforms/micaz/chips/cc2420/HplCC2420InterruptsP.nc"
static inline error_t HplCC2420InterruptsP$CCA$disable(void )
#line 105
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 106
    HplCC2420InterruptsP$ccaCheckDisabled = TRUE;
#line 106
    __nesc_atomic_end(__nesc_atomic); }
  return SUCCESS;
}

# 50 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/GpioInterrupt.nc"
inline static error_t CC2420ControlP$InterruptCCA$disable(void ){
#line 50
  unsigned char result;
#line 50

#line 50
  result = HplCC2420InterruptsP$CCA$disable();
#line 50

#line 50
  return result;
#line 50
}
#line 50
# 418 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/cc2420/control/CC2420ControlP.nc"
static inline void CC2420ControlP$InterruptCCA$fired(void )
#line 418
{
  CC2420ControlP$m_state = CC2420ControlP$S_XOSC_STARTED;
  CC2420ControlP$InterruptCCA$disable();
  CC2420ControlP$IOCFG1$write(0);
  CC2420ControlP$writeId();
  CC2420ControlP$CSN$set();
  CC2420ControlP$CSN$clr();
  CC2420ControlP$CC2420Power$startOscillatorDone();
}

# 57 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/GpioInterrupt.nc"
inline static void HplCC2420InterruptsP$CCA$fired(void ){
#line 57
  CC2420ControlP$InterruptCCA$fired();
#line 57
}
#line 57
# 69 "/cygdrive/c/Dropbox/tinyos-2.x/tos/platforms/micaz/chips/cc2420/HplCC2420InterruptsP.nc"
static inline void HplCC2420InterruptsP$CCATask$runTask(void )
#line 69
{
  uint8_t CCAState;

#line 71
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 71
    {
      if (HplCC2420InterruptsP$ccaCheckDisabled) {
          {
#line 73
            __nesc_atomic_end(__nesc_atomic); 
#line 73
            return;
          }
        }
    }
#line 76
    __nesc_atomic_end(__nesc_atomic); }

  CCAState = HplCC2420InterruptsP$CC_CCA$get();
  if (HplCC2420InterruptsP$ccaLastState != HplCC2420InterruptsP$ccaWaitForState && CCAState == HplCC2420InterruptsP$ccaWaitForState) {
      HplCC2420InterruptsP$CCA$fired();
    }



  HplCC2420InterruptsP$ccaLastState = CCAState;
  HplCC2420InterruptsP$CCATask$postTask();
}

# 64 "BlinkToRadioC.nc"
static inline void BlinkToRadioC$CC2420Config$syncDone(error_t error)
#line 64
{
}

# 191 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/cc2420/CC2420ActiveMessageP.nc"
static inline void CC2420ActiveMessageP$CC2420Config$syncDone(error_t error)
#line 191
{
}

# 347 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/cc2420/receive/CC2420ReceiveP.nc"
static inline void CC2420ReceiveP$CC2420Config$syncDone(error_t error)
#line 347
{
}

# 53 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Config.nc"
inline static void CC2420ControlP$CC2420Config$syncDone(error_t error){
#line 53
  CC2420ReceiveP$CC2420Config$syncDone(error);
#line 53
  CC2420ActiveMessageP$CC2420Config$syncDone(error);
#line 53
  BlinkToRadioC$CC2420Config$syncDone(error);
#line 53
}
#line 53
# 446 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/cc2420/control/CC2420ControlP.nc"
static inline void CC2420ControlP$syncDone$runTask(void )
#line 446
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 447
    CC2420ControlP$m_sync_busy = FALSE;
#line 447
    __nesc_atomic_end(__nesc_atomic); }
  CC2420ControlP$CC2420Config$syncDone(SUCCESS);
}

# 78 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/Resource.nc"
inline static error_t CC2420ControlP$SyncResource$request(void ){
#line 78
  unsigned char result;
#line 78

#line 78
  result = CC2420SpiP$Resource$request(/*CC2420ControlC.SyncSpiC*/CC2420SpiC$1$CLIENT_ID);
#line 78

#line 78
  return result;
#line 78
}
#line 78
# 300 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/cc2420/control/CC2420ControlP.nc"
static inline error_t CC2420ControlP$CC2420Config$sync(void )
#line 300
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 301
    {
      if (CC2420ControlP$m_sync_busy) {
          {
            unsigned char __nesc_temp = 
#line 303
            FAIL;

            {
#line 303
              __nesc_atomic_end(__nesc_atomic); 
#line 303
              return __nesc_temp;
            }
          }
        }
#line 306
      CC2420ControlP$m_sync_busy = TRUE;
      if (CC2420ControlP$m_state == CC2420ControlP$S_XOSC_STARTED) {
          CC2420ControlP$SyncResource$request();
        }
      else 
#line 309
        {
          CC2420ControlP$syncDone$postTask();
        }
    }
#line 312
    __nesc_atomic_end(__nesc_atomic); }
  return SUCCESS;
}

#line 442
static inline void CC2420ControlP$sync$runTask(void )
#line 442
{
  CC2420ControlP$CC2420Config$sync();
}

# 181 "/cygdrive/c/Dropbox/tinyos-2.x/tos/system/AMQueueImplP.nc"
static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP$1$AMSend$sendDone(am_id_t id, message_t *msg, error_t err)
#line 181
{





  if (/*AMQueueP.AMQueueImplP*/AMQueueImplP$1$current >= 1) {
      return;
    }
  if (/*AMQueueP.AMQueueImplP*/AMQueueImplP$1$queue[/*AMQueueP.AMQueueImplP*/AMQueueImplP$1$current].msg == msg) {
      /*AMQueueP.AMQueueImplP*/AMQueueImplP$1$sendDone(/*AMQueueP.AMQueueImplP*/AMQueueImplP$1$current, msg, err);
    }
  else {
      ;
    }
}

# 99 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/AMSend.nc"
inline static void CC2420ActiveMessageP$AMSend$sendDone(am_id_t arg_0x7e2db0c0, message_t * msg, error_t error){
#line 99
  /*AMQueueP.AMQueueImplP*/AMQueueImplP$1$AMSend$sendDone(arg_0x7e2db0c0, msg, error);
#line 99
}
#line 99
# 165 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/cc2420/CC2420ActiveMessageP.nc"
static inline void CC2420ActiveMessageP$SubSend$sendDone(message_t *msg, error_t result)
#line 165
{
  CC2420ActiveMessageP$AMSend$sendDone(CC2420ActiveMessageP$AMPacket$type(msg), msg, result);
}

# 89 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/Send.nc"
inline static void UniqueSendP$Send$sendDone(message_t * msg, error_t error){
#line 89
  CC2420ActiveMessageP$SubSend$sendDone(msg, error);
#line 89
}
#line 89
# 104 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/cc2420/unique/UniqueSendP.nc"
static inline void UniqueSendP$SubSend$sendDone(message_t *msg, error_t error)
#line 104
{
  UniqueSendP$State$toIdle();
  UniqueSendP$Send$sendDone(msg, error);
}

# 89 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/Send.nc"
inline static void CC2420TinyosNetworkP$Send$sendDone(message_t * msg, error_t error){
#line 89
  UniqueSendP$SubSend$sendDone(msg, error);
#line 89
}
#line 89
# 79 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/cc2420/lowpan/CC2420TinyosNetworkP.nc"
static inline void CC2420TinyosNetworkP$SubSend$sendDone(message_t *msg, error_t error)
#line 79
{
  CC2420TinyosNetworkP$Send$sendDone(msg, error);
}

# 89 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/Send.nc"
inline static void CC2420CsmaP$Send$sendDone(message_t * msg, error_t error){
#line 89
  CC2420TinyosNetworkP$SubSend$sendDone(msg, error);
#line 89
}
#line 89
# 56 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static error_t CC2420CsmaP$stopDone_task$postTask(void ){
#line 56
  unsigned char result;
#line 56

#line 56
  result = SchedulerBasicP$TaskBasic$postTask(CC2420CsmaP$stopDone_task);
#line 56

#line 56
  return result;
#line 56
}
#line 56
# 46 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit6*/HplAtm128GeneralIOPinP$6$IO$set(void )
#line 46
{
#line 46
  * (volatile uint8_t * )59U |= 1 << 6;
}

# 29 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void CC2420ControlP$RSTN$set(void ){
#line 29
  /*HplAtm128GeneralIOC.PortA.Bit6*/HplAtm128GeneralIOPinP$6$IO$set();
#line 29
}
#line 29
# 47 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit5*/HplAtm128GeneralIOPinP$5$IO$clr(void )
#line 47
{
#line 47
  * (volatile uint8_t * )59U &= ~(1 << 5);
}

# 30 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void CC2420ControlP$VREN$clr(void ){
#line 30
  /*HplAtm128GeneralIOC.PortA.Bit5*/HplAtm128GeneralIOPinP$5$IO$clr();
#line 30
}
#line 30
# 47 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit6*/HplAtm128GeneralIOPinP$6$IO$clr(void )
#line 47
{
#line 47
  * (volatile uint8_t * )59U &= ~(1 << 6);
}

# 30 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void CC2420ControlP$RSTN$clr(void ){
#line 30
  /*HplAtm128GeneralIOC.PortA.Bit6*/HplAtm128GeneralIOPinP$6$IO$clr();
#line 30
}
#line 30
# 199 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/cc2420/control/CC2420ControlP.nc"
static inline error_t CC2420ControlP$CC2420Power$stopVReg(void )
#line 199
{
  CC2420ControlP$m_state = CC2420ControlP$S_VREG_STOPPED;
  CC2420ControlP$RSTN$clr();
  CC2420ControlP$VREN$clr();
  CC2420ControlP$RSTN$set();
  return SUCCESS;
}

# 63 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Power.nc"
inline static error_t CC2420CsmaP$CC2420Power$stopVReg(void ){
#line 63
  unsigned char result;
#line 63

#line 63
  result = CC2420ControlP$CC2420Power$stopVReg();
#line 63

#line 63
  return result;
#line 63
}
#line 63
# 43 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static __inline void /*HplAtm128InterruptC.IntPin6*/HplAtm128InterruptPinP$6$Irq$disable(void )
#line 43
{
#line 43
  * (volatile uint8_t *)(0x39 + 0x20) &= ~(1 << 6);
}

# 40 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
inline static void /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC$0$Atm128Interrupt$disable(void ){
#line 40
  /*HplAtm128InterruptC.IntPin6*/HplAtm128InterruptPinP$6$Irq$disable();
#line 40
}
#line 40
# 33 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/pins/Atm128GpioInterruptC.nc"
static inline error_t /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC$0$Interrupt$disable(void )
#line 33
{
  /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC$0$Atm128Interrupt$disable();
  return SUCCESS;
}

# 50 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/GpioInterrupt.nc"
inline static error_t CC2420ReceiveP$InterruptFIFOP$disable(void ){
#line 50
  unsigned char result;
#line 50

#line 50
  result = /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC$0$Interrupt$disable();
#line 50

#line 50
  return result;
#line 50
}
#line 50
# 134 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/cc2420/receive/CC2420ReceiveP.nc"
static inline error_t CC2420ReceiveP$StdControl$stop(void )
#line 134
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 135
    {
      CC2420ReceiveP$m_state = CC2420ReceiveP$S_STOPPED;
      CC2420ReceiveP$reset_state();
      CC2420ReceiveP$CSN$set();
      CC2420ReceiveP$InterruptFIFOP$disable();
    }
#line 140
    __nesc_atomic_end(__nesc_atomic); }
  return SUCCESS;
}

# 138 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer1P.nc"
static inline void HplAtm128Timer1P$Capture$stop(void )
#line 138
{
#line 138
  * (volatile uint8_t *)(0x37 + 0x20) &= ~(1 << 5);
}

# 61 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Capture.nc"
inline static void /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC$0$Atm128Capture$stop(void ){
#line 61
  HplAtm128Timer1P$Capture$stop();
#line 61
}
#line 61
# 60 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/timer/Atm128GpioCaptureC.nc"
static inline void /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC$0$Capture$disable(void )
#line 60
{
  /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC$0$Atm128Capture$stop();
}

# 55 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/GpioCapture.nc"
inline static void CC2420TransmitP$CaptureSFD$disable(void ){
#line 55
  /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC$0$Capture$disable();
#line 55
}
#line 55
# 159 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/cc2420/transmit/CC2420TransmitP.nc"
static inline error_t CC2420TransmitP$StdControl$stop(void )
#line 159
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 160
    {
      CC2420TransmitP$m_state = CC2420TransmitP$S_STOPPED;
      CC2420TransmitP$BackoffTimer$stop();
      CC2420TransmitP$CaptureSFD$disable();
      CC2420TransmitP$SpiResource$release();
      CC2420TransmitP$CSN$set();
    }
#line 166
    __nesc_atomic_end(__nesc_atomic); }
  return SUCCESS;
}

# 84 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/StdControl.nc"
inline static error_t CC2420CsmaP$SubControl$stop(void ){
#line 84
  unsigned char result;
#line 84

#line 84
  result = CC2420TransmitP$StdControl$stop();
#line 84
  result = ecombine(result, CC2420ReceiveP$StdControl$stop());
#line 84

#line 84
  return result;
#line 84
}
#line 84
# 271 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/cc2420/csma/CC2420CsmaP.nc"
static inline void CC2420CsmaP$shutdown(void )
#line 271
{
  CC2420CsmaP$SubControl$stop();
  CC2420CsmaP$CC2420Power$stopVReg();
  CC2420CsmaP$stopDone_task$postTask();
}

#line 240
static inline void CC2420CsmaP$sendDone_task$runTask(void )
#line 240
{
  error_t packetErr;

#line 242
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 242
    packetErr = CC2420CsmaP$sendErr;
#line 242
    __nesc_atomic_end(__nesc_atomic); }
  if (CC2420CsmaP$SplitControlState$isState(CC2420CsmaP$S_STOPPING)) {
      CC2420CsmaP$shutdown();
    }
  else {
      CC2420CsmaP$SplitControlState$forceState(CC2420CsmaP$S_STARTED);
    }

  CC2420CsmaP$Send$sendDone(CC2420CsmaP$m_msg, packetErr);
}

# 59 "BlinkToRadioC.nc"
static inline void BlinkToRadioC$AMControl$stopDone(error_t err)
#line 59
{
}

# 117 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/SplitControl.nc"
inline static void CC2420CsmaP$SplitControl$stopDone(error_t error){
#line 117
  BlinkToRadioC$AMControl$stopDone(error);
#line 117
}
#line 117
# 261 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/cc2420/csma/CC2420CsmaP.nc"
static inline void CC2420CsmaP$stopDone_task$runTask(void )
#line 261
{
  CC2420CsmaP$SplitControlState$forceState(CC2420CsmaP$S_STOPPED);
  CC2420CsmaP$SplitControl$stopDone(SUCCESS);
}

# 83 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/SplitControl.nc"
inline static error_t BlinkToRadioC$AMControl$start(void ){
#line 83
  unsigned char result;
#line 83

#line 83
  result = CC2420CsmaP$SplitControl$start();
#line 83

#line 83
  return result;
#line 83
}
#line 83
# 143 "/cygdrive/c/Dropbox/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$startPeriodic(uint8_t num, uint32_t dt)
{
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$startTimer(num, /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$getNow(), dt, FALSE);
}

# 53 "/cygdrive/c/Dropbox/tinyos-2.x/tos/lib/timer/Timer.nc"
inline static void BlinkToRadioC$Timer0$startPeriodic(uint32_t dt){
#line 53
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$startPeriodic(0U, dt);
#line 53
}
#line 53
# 47 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP$1$IO$clr(void )
#line 47
{
#line 47
  * (volatile uint8_t * )59U &= ~(1 << 1);
}

# 30 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void LedsP$Led1$clr(void ){
#line 30
  /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP$1$IO$clr();
#line 30
}
#line 30
# 78 "/cygdrive/c/Dropbox/tinyos-2.x/tos/system/LedsP.nc"
static inline void LedsP$Leds$led1On(void )
#line 78
{
  LedsP$Led1$clr();
  ;
#line 80
  ;
}

# 61 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/Leds.nc"
inline static void BlinkToRadioC$Leds$led1On(void ){
#line 61
  LedsP$Leds$led1On();
#line 61
}
#line 61
# 68 "/cygdrive/c/Dropbox/tinyos-2.x/tos/system/LedsP.nc"
static inline void LedsP$Leds$led0Off(void )
#line 68
{
  LedsP$Led0$set();
  ;
#line 70
  ;
}

# 50 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/Leds.nc"
inline static void BlinkToRadioC$Leds$led0Off(void ){
#line 50
  LedsP$Leds$led0Off();
#line 50
}
#line 50
# 46 "BlinkToRadioC.nc"
static inline void BlinkToRadioC$AMControl$startDone(error_t err)
#line 46
{
  if (err == SUCCESS) 
    {
#line 48
      BlinkToRadioC$Leds$led0Off();
      BlinkToRadioC$Leds$led1On();
      BlinkToRadioC$Timer0$startPeriodic(TIMER_PERIOD_MILLI);
    }
  else {
#line 52
    BlinkToRadioC$AMControl$start();
    }
}

# 92 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/SplitControl.nc"
inline static void CC2420CsmaP$SplitControl$startDone(error_t error){
#line 92
  BlinkToRadioC$AMControl$startDone(error);
#line 92
}
#line 92
# 110 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/Resource.nc"
inline static error_t CC2420ControlP$SpiResource$release(void ){
#line 110
  unsigned char result;
#line 110

#line 110
  result = CC2420SpiP$Resource$release(/*CC2420ControlC.Spi*/CC2420SpiC$0$CLIENT_ID);
#line 110

#line 110
  return result;
#line 110
}
#line 110
# 179 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/cc2420/control/CC2420ControlP.nc"
static inline error_t CC2420ControlP$Resource$release(void )
#line 179
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 180
    {
      CC2420ControlP$CSN$set();
      {
        unsigned char __nesc_temp = 
#line 182
        CC2420ControlP$SpiResource$release();

        {
#line 182
          __nesc_atomic_end(__nesc_atomic); 
#line 182
          return __nesc_temp;
        }
      }
    }
#line 185
    __nesc_atomic_end(__nesc_atomic); }
}

# 110 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/Resource.nc"
inline static error_t CC2420CsmaP$Resource$release(void ){
#line 110
  unsigned char result;
#line 110

#line 110
  result = CC2420ControlP$Resource$release();
#line 110

#line 110
  return result;
#line 110
}
#line 110
# 249 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/cc2420/control/CC2420ControlP.nc"
static inline error_t CC2420ControlP$CC2420Power$rxOn(void )
#line 249
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 250
    {
      if (CC2420ControlP$m_state != CC2420ControlP$S_XOSC_STARTED) {
          {
            unsigned char __nesc_temp = 
#line 252
            FAIL;

            {
#line 252
              __nesc_atomic_end(__nesc_atomic); 
#line 252
              return __nesc_temp;
            }
          }
        }
#line 254
      CC2420ControlP$SRXON$strobe();
    }
#line 255
    __nesc_atomic_end(__nesc_atomic); }
  return SUCCESS;
}

# 90 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Power.nc"
inline static error_t CC2420CsmaP$CC2420Power$rxOn(void ){
#line 90
  unsigned char result;
#line 90

#line 90
  result = CC2420ControlP$CC2420Power$rxOn();
#line 90

#line 90
  return result;
#line 90
}
#line 90
# 42 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static __inline void /*HplAtm128InterruptC.IntPin6*/HplAtm128InterruptPinP$6$Irq$enable(void )
#line 42
{
#line 42
  * (volatile uint8_t *)(0x39 + 0x20) |= 1 << 6;
}

# 35 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
inline static void /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC$0$Atm128Interrupt$enable(void ){
#line 35
  /*HplAtm128InterruptC.IntPin6*/HplAtm128InterruptPinP$6$Irq$enable();
#line 35
}
#line 35
# 47 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static __inline void /*HplAtm128InterruptC.IntPin6*/HplAtm128InterruptPinP$6$Irq$edge(bool low_to_high)
#line 47
{
  * (volatile uint8_t * )90U |= 1 << 5;

  if (low_to_high) {
    * (volatile uint8_t * )90U |= 1 << 4;
    }
  else {
#line 53
    * (volatile uint8_t * )90U &= ~(1 << 4);
    }
}

# 59 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
inline static void /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC$0$Atm128Interrupt$edge(bool low_to_high){
#line 59
  /*HplAtm128InterruptC.IntPin6*/HplAtm128InterruptPinP$6$Irq$edge(low_to_high);
#line 59
}
#line 59
# 41 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static __inline void /*HplAtm128InterruptC.IntPin6*/HplAtm128InterruptPinP$6$Irq$clear(void )
#line 41
{
#line 41
  * (volatile uint8_t *)(0x38 + 0x20) = 1 << 6;
}

# 45 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
inline static void /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC$0$Atm128Interrupt$clear(void ){
#line 45
  /*HplAtm128InterruptC.IntPin6*/HplAtm128InterruptPinP$6$Irq$clear();
#line 45
}
#line 45
# 15 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/pins/Atm128GpioInterruptC.nc"
static inline error_t /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC$0$enable(bool rising)
#line 15
{
  /* atomic removed: atomic calls only */
#line 16
  {
    /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC$0$Atm128Interrupt$disable();
    /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC$0$Atm128Interrupt$clear();
    /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC$0$Atm128Interrupt$edge(rising);
    /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC$0$Atm128Interrupt$enable();
  }
  return SUCCESS;
}





static inline error_t /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC$0$Interrupt$enableFallingEdge(void )
#line 29
{
  return /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC$0$enable(FALSE);
}

# 43 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/GpioInterrupt.nc"
inline static error_t CC2420ReceiveP$InterruptFIFOP$enableFallingEdge(void ){
#line 43
  unsigned char result;
#line 43

#line 43
  result = /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC$0$Interrupt$enableFallingEdge();
#line 43

#line 43
  return result;
#line 43
}
#line 43
# 124 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/cc2420/receive/CC2420ReceiveP.nc"
static inline error_t CC2420ReceiveP$StdControl$start(void )
#line 124
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 125
    {
      CC2420ReceiveP$reset_state();
      CC2420ReceiveP$m_state = CC2420ReceiveP$S_STARTED;
      CC2420ReceiveP$receivingPacket = FALSE;
      CC2420ReceiveP$InterruptFIFOP$enableFallingEdge();
    }
#line 130
    __nesc_atomic_end(__nesc_atomic); }
  return SUCCESS;
}

# 52 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/timer/Atm128GpioCaptureC.nc"
static inline error_t /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC$0$Capture$captureRisingEdge(void )
#line 52
{
  return /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC$0$enableCapture(TRUE);
}

# 42 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/GpioCapture.nc"
inline static error_t CC2420TransmitP$CaptureSFD$captureRisingEdge(void ){
#line 42
  unsigned char result;
#line 42

#line 42
  result = /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC$0$Capture$captureRisingEdge();
#line 42

#line 42
  return result;
#line 42
}
#line 42
# 148 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/cc2420/transmit/CC2420TransmitP.nc"
static inline error_t CC2420TransmitP$StdControl$start(void )
#line 148
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 149
    {
      CC2420TransmitP$CaptureSFD$captureRisingEdge();
      CC2420TransmitP$m_state = CC2420TransmitP$S_STARTED;
      CC2420TransmitP$m_receiving = FALSE;
      CC2420TransmitP$abortSpiRelease = FALSE;
      CC2420TransmitP$m_tx_power = 0;
    }
#line 155
    __nesc_atomic_end(__nesc_atomic); }
  return SUCCESS;
}

# 74 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/StdControl.nc"
inline static error_t CC2420CsmaP$SubControl$start(void ){
#line 74
  unsigned char result;
#line 74

#line 74
  result = CC2420TransmitP$StdControl$start();
#line 74
  result = ecombine(result, CC2420ReceiveP$StdControl$start());
#line 74

#line 74
  return result;
#line 74
}
#line 74
# 253 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/cc2420/csma/CC2420CsmaP.nc"
static inline void CC2420CsmaP$startDone_task$runTask(void )
#line 253
{
  CC2420CsmaP$SubControl$start();
  CC2420CsmaP$CC2420Power$rxOn();
  CC2420CsmaP$Resource$release();
  CC2420CsmaP$SplitControlState$forceState(CC2420CsmaP$S_STARTED);
  CC2420CsmaP$SplitControl$startDone(SUCCESS);
}

# 122 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer1P.nc"
static inline void HplAtm128Timer1P$Capture$setEdge(bool up)
#line 122
{
#line 122
  if (up) {
#line 122
    * (volatile uint8_t *)(0x2E + 0x20) |= 1 << 6;
    }
  else {
#line 122
    * (volatile uint8_t *)(0x2E + 0x20) &= ~(1 << 6);
    }
}

# 79 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Capture.nc"
inline static void /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC$0$Atm128Capture$setEdge(bool up){
#line 79
  HplAtm128Timer1P$Capture$setEdge(up);
#line 79
}
#line 79
# 132 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer1P.nc"
static inline void HplAtm128Timer1P$Capture$start(void )
#line 132
{
#line 132
  * (volatile uint8_t *)(0x37 + 0x20) |= 1 << 5;
}

# 58 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Capture.nc"
inline static void /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC$0$Atm128Capture$start(void ){
#line 58
  HplAtm128Timer1P$Capture$start();
#line 58
}
#line 58
# 45 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/State.nc"
inline static error_t CC2420CsmaP$SplitControlState$requestState(uint8_t reqState){
#line 45
  unsigned char result;
#line 45

#line 45
  result = StateImplP$State$requestState(1U, reqState);
#line 45

#line 45
  return result;
#line 45
}
#line 45
# 55 "/cygdrive/c/Dropbox/tinyos-2.x/tos/lib/timer/Alarm.nc"
inline static void CC2420ControlP$StartupTimer$start(CC2420ControlP$StartupTimer$size_type dt){
#line 55
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$Alarm$start(dt);
#line 55
}
#line 55
# 46 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit5*/HplAtm128GeneralIOPinP$5$IO$set(void )
#line 46
{
#line 46
  * (volatile uint8_t * )59U |= 1 << 5;
}

# 29 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void CC2420ControlP$VREN$set(void ){
#line 29
  /*HplAtm128GeneralIOC.PortA.Bit5*/HplAtm128GeneralIOPinP$5$IO$set();
#line 29
}
#line 29
# 187 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/cc2420/control/CC2420ControlP.nc"
static inline error_t CC2420ControlP$CC2420Power$startVReg(void )
#line 187
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 188
    {
      if (CC2420ControlP$m_state != CC2420ControlP$S_VREG_STOPPED) {
          {
            unsigned char __nesc_temp = 
#line 190
            FAIL;

            {
#line 190
              __nesc_atomic_end(__nesc_atomic); 
#line 190
              return __nesc_temp;
            }
          }
        }
#line 192
      CC2420ControlP$m_state = CC2420ControlP$S_VREG_STARTING;
    }
#line 193
    __nesc_atomic_end(__nesc_atomic); }
  CC2420ControlP$VREN$set();
  CC2420ControlP$StartupTimer$start(CC2420_TIME_VREN);
  return SUCCESS;
}

# 51 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Power.nc"
inline static error_t CC2420CsmaP$CC2420Power$startVReg(void ){
#line 51
  unsigned char result;
#line 51

#line 51
  result = CC2420ControlP$CC2420Power$startVReg();
#line 51

#line 51
  return result;
#line 51
}
#line 51
# 56 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static error_t PrintfP$retrySend$postTask(void ){
#line 56
  unsigned char result;
#line 56

#line 56
  result = SchedulerBasicP$TaskBasic$postTask(PrintfP$retrySend);
#line 56

#line 56
  return result;
#line 56
}
#line 56
# 69 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/AMSend.nc"
inline static error_t PrintfP$AMSend$send(am_addr_t addr, message_t * msg, uint8_t len){
#line 69
  unsigned char result;
#line 69

#line 69
  result = /*PrintfC.SerialAMSenderC.AMQueueEntryP*/AMQueueEntryP$0$AMSend$send(addr, msg, len);
#line 69

#line 69
  return result;
#line 69
}
#line 69
# 114 "/cygdrive/c/Dropbox/tinyos-2.x/tos/lib/printf/PrintfP.nc"
static inline void PrintfP$retrySend$runTask(void )
#line 114
{
  if (PrintfP$AMSend$send(AM_BROADCAST_ADDR, &PrintfP$printfMsg, sizeof(printf_msg_t )) != SUCCESS) {
    PrintfP$retrySend$postTask();
    }
}

# 99 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/AMSend.nc"
inline static void /*PrintfC.SerialAMSenderC.AMQueueEntryP*/AMQueueEntryP$0$AMSend$sendDone(message_t * msg, error_t error){
#line 99
  PrintfP$AMSend$sendDone(msg, error);
#line 99
}
#line 99
# 57 "/cygdrive/c/Dropbox/tinyos-2.x/tos/system/AMQueueEntryP.nc"
static inline void /*PrintfC.SerialAMSenderC.AMQueueEntryP*/AMQueueEntryP$0$Send$sendDone(message_t *m, error_t err)
#line 57
{
  /*PrintfC.SerialAMSenderC.AMQueueEntryP*/AMQueueEntryP$0$AMSend$sendDone(m, err);
}

# 207 "/cygdrive/c/Dropbox/tinyos-2.x/tos/system/AMQueueImplP.nc"
static inline void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$0$Send$default$sendDone(uint8_t id, message_t *msg, error_t err)
#line 207
{
}

# 89 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/Send.nc"
inline static void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$0$Send$sendDone(uint8_t arg_0x7e7066b0, message_t * msg, error_t error){
#line 89
  switch (arg_0x7e7066b0) {
#line 89
    case 0U:
#line 89
      /*PrintfC.SerialAMSenderC.AMQueueEntryP*/AMQueueEntryP$0$Send$sendDone(msg, error);
#line 89
      break;
#line 89
    default:
#line 89
      /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$0$Send$default$sendDone(arg_0x7e7066b0, msg, error);
#line 89
      break;
#line 89
    }
#line 89
}
#line 89
# 155 "/cygdrive/c/Dropbox/tinyos-2.x/tos/system/AMQueueImplP.nc"
static inline void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$0$sendDone(uint8_t last, message_t * msg, error_t err)
#line 155
{
  /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$0$queue[last].msg = (void *)0;
  /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$0$tryToSend();
  /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$0$Send$sendDone(last, msg, err);
}

#line 181
static inline void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$0$AMSend$sendDone(am_id_t id, message_t *msg, error_t err)
#line 181
{





  if (/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$0$current >= 1) {
      return;
    }
  if (/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$0$queue[/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$0$current].msg == msg) {
      /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$0$sendDone(/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$0$current, msg, err);
    }
  else {
      ;
    }
}

# 99 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/AMSend.nc"
inline static void /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$AMSend$sendDone(am_id_t arg_0x7e6c1e70, message_t * msg, error_t error){
#line 99
  /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$0$AMSend$sendDone(arg_0x7e6c1e70, msg, error);
#line 99
}
#line 99
# 85 "/cygdrive/c/Dropbox/tinyos-2.x/tos/lib/serial/SerialActiveMessageP.nc"
static inline void /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$SubSend$sendDone(message_t *msg, error_t result)
#line 85
{
  /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$AMSend$sendDone(/*SerialActiveMessageC.AM*/SerialActiveMessageP$0$AMPacket$type(msg), msg, result);
}

# 362 "/cygdrive/c/Dropbox/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$Send$default$sendDone(uart_id_t idxxx, message_t *msg, error_t error)
#line 362
{
  return;
}

# 89 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/Send.nc"
inline static void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$Send$sendDone(uart_id_t arg_0x7e5a9ba8, message_t * msg, error_t error){
#line 89
  switch (arg_0x7e5a9ba8) {
#line 89
    case TOS_SERIAL_ACTIVE_MESSAGE_ID:
#line 89
      /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$SubSend$sendDone(msg, error);
#line 89
      break;
#line 89
    default:
#line 89
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$Send$default$sendDone(arg_0x7e5a9ba8, msg, error);
#line 89
      break;
#line 89
    }
#line 89
}
#line 89
# 147 "/cygdrive/c/Dropbox/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$signalSendDone$runTask(void )
#line 147
{
  error_t error;

  /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$sendState = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$SEND_STATE_IDLE;
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 151
    error = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$sendError;
#line 151
    __nesc_atomic_end(__nesc_atomic); }

  if (/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$sendCancelled) {
#line 153
    error = ECANCEL;
    }
#line 154
  /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$Send$sendDone(/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$sendId, (message_t *)/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$sendBuffer, error);
}

# 57 "/cygdrive/c/Dropbox/tinyos-2.x/tos/system/AMQueueImplP.nc"
static inline void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$0$nextPacket(void )
#line 57
{
  uint8_t i;

#line 59
  /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$0$current = (/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$0$current + 1) % 1;
  for (i = 0; i < 1; i++) {
      if (/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$0$queue[/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$0$current].msg == (void *)0 || 
      /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$0$cancelMask[/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$0$current / 8] & (1 << /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$0$current % 8)) 
        {
          /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$0$current = (/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$0$current + 1) % 1;
        }
      else {
          break;
        }
    }
  if (i >= 1) {
#line 70
    /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$0$current = 1;
    }
}

# 106 "/cygdrive/c/Dropbox/tinyos-2.x/tos/lib/serial/SerialActiveMessageP.nc"
static inline uint8_t /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$Packet$payloadLength(message_t *msg)
#line 106
{
  serial_header_t *header = /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$getHeader(msg);

#line 108
  return __nesc_ntoh_uint8(header->length.data);
}

# 67 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/Packet.nc"
inline static uint8_t /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$0$Packet$payloadLength(message_t * msg){
#line 67
  unsigned char result;
#line 67

#line 67
  result = /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$Packet$payloadLength(msg);
#line 67

#line 67
  return result;
#line 67
}
#line 67
# 56 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static error_t /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$0$errorTask$postTask(void ){
#line 56
  unsigned char result;
#line 56

#line 56
  result = SchedulerBasicP$TaskBasic$postTask(/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$0$errorTask);
#line 56

#line 56
  return result;
#line 56
}
#line 56
# 201 "/cygdrive/c/Dropbox/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$unlockBuffer(uint8_t which)
#line 201
{
  if (which) {
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$receiveState.bufOneLocked = 0;
    }
  else {
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$receiveState.bufZeroLocked = 0;
    }
}

# 93 "/cygdrive/c/Dropbox/tinyos-2.x/tos/lib/serial/SerialActiveMessageP.nc"
static inline message_t */*SerialActiveMessageC.AM*/SerialActiveMessageP$0$Receive$default$receive(uint8_t id, message_t *msg, void *payload, uint8_t len)
#line 93
{
  return msg;
}

# 67 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/Receive.nc"
inline static message_t * /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$Receive$receive(am_id_t arg_0x7e6b88e0, message_t * msg, void * payload, uint8_t len){
#line 67
  nx_struct message_t *result;
#line 67

#line 67
    result = /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$Receive$default$receive(arg_0x7e6b88e0, msg, payload, len);
#line 67

#line 67
  return result;
#line 67
}
#line 67
# 97 "/cygdrive/c/Dropbox/tinyos-2.x/tos/lib/serial/SerialActiveMessageP.nc"
static inline message_t */*SerialActiveMessageC.AM*/SerialActiveMessageP$0$SubReceive$receive(message_t *msg, void *payload, uint8_t len)
#line 97
{
  return /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$Receive$receive(/*SerialActiveMessageC.AM*/SerialActiveMessageP$0$AMPacket$type(msg), msg, msg->data, len);
}

# 357 "/cygdrive/c/Dropbox/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
static inline message_t */*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$Receive$default$receive(uart_id_t idxxx, message_t *msg, 
void *payload, 
uint8_t len)
#line 359
{
  return msg;
}

# 67 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/Receive.nc"
inline static message_t * /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$Receive$receive(uart_id_t arg_0x7e5a9568, message_t * msg, void * payload, uint8_t len){
#line 67
  nx_struct message_t *result;
#line 67

#line 67
  switch (arg_0x7e5a9568) {
#line 67
    case TOS_SERIAL_ACTIVE_MESSAGE_ID:
#line 67
      result = /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$SubReceive$receive(msg, payload, len);
#line 67
      break;
#line 67
    default:
#line 67
      result = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$Receive$default$receive(arg_0x7e5a9568, msg, payload, len);
#line 67
      break;
#line 67
    }
#line 67

#line 67
  return result;
#line 67
}
#line 67
# 46 "/cygdrive/c/Dropbox/tinyos-2.x/tos/lib/serial/SerialPacketInfoActiveMessageP.nc"
static inline uint8_t SerialPacketInfoActiveMessageP$Info$upperLength(message_t *msg, uint8_t dataLinkLen)
#line 46
{
  return dataLinkLen - sizeof(serial_header_t );
}

# 351 "/cygdrive/c/Dropbox/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
static inline uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$PacketInfo$default$upperLength(uart_id_t id, message_t *msg, 
uint8_t dataLinkLen)
#line 352
{
  return 0;
}

# 31 "/cygdrive/c/Dropbox/tinyos-2.x/tos/lib/serial/SerialPacketInfo.nc"
inline static uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$PacketInfo$upperLength(uart_id_t arg_0x7e5a8768, message_t *msg, uint8_t dataLinkLen){
#line 31
  unsigned char result;
#line 31

#line 31
  switch (arg_0x7e5a8768) {
#line 31
    case TOS_SERIAL_ACTIVE_MESSAGE_ID:
#line 31
      result = SerialPacketInfoActiveMessageP$Info$upperLength(msg, dataLinkLen);
#line 31
      break;
#line 31
    default:
#line 31
      result = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$PacketInfo$default$upperLength(arg_0x7e5a8768, msg, dataLinkLen);
#line 31
      break;
#line 31
    }
#line 31

#line 31
  return result;
#line 31
}
#line 31
# 264 "/cygdrive/c/Dropbox/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$receiveTask$runTask(void )
#line 264
{
  uart_id_t myType;
  message_t *myBuf;
  uint8_t mySize;
  uint8_t myWhich;

#line 269
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 269
    {
      myType = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$receiveTaskType;
      myBuf = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$receiveTaskBuf;
      mySize = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$receiveTaskSize;
      myWhich = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$receiveTaskWhich;
    }
#line 274
    __nesc_atomic_end(__nesc_atomic); }
  mySize -= /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$PacketInfo$offset(myType);
  mySize = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$PacketInfo$upperLength(myType, myBuf, mySize);
  myBuf = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$Receive$receive(myType, myBuf, myBuf, mySize);
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 278
    {
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$messagePtrs[myWhich] = myBuf;
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$unlockBuffer(myWhich);
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$receiveTaskPending = FALSE;
    }
#line 282
    __nesc_atomic_end(__nesc_atomic); }
}

# 49 "/cygdrive/c/Dropbox/tinyos-2.x/tos/lib/printf/SerialStartP.nc"
static inline void SerialStartP$SerialControl$stopDone(error_t error)
#line 49
{
}

# 117 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/SplitControl.nc"
inline static void SerialP$SplitControl$stopDone(error_t error){
#line 117
  SerialStartP$SerialControl$stopDone(error);
#line 117
}
#line 117
# 44 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/McuPowerState.nc"
inline static void HplAtm128UartP$McuPowerState$update(void ){
#line 44
  McuSleepC$McuPowerState$update();
#line 44
}
#line 44
# 125 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/HplAtm128UartP.nc"
static inline error_t HplAtm128UartP$Uart0RxControl$stop(void )
#line 125
{
  * (volatile uint8_t *)(0x0A + 0x20) &= ~(1 << 4);
  HplAtm128UartP$McuPowerState$update();
  return SUCCESS;
}

# 84 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/StdControl.nc"
inline static error_t /*Atm128Uart0C.UartP*/Atm128UartP$0$HplUartRxControl$stop(void ){
#line 84
  unsigned char result;
#line 84

#line 84
  result = HplAtm128UartP$Uart0RxControl$stop();
#line 84

#line 84
  return result;
#line 84
}
#line 84
# 113 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/HplAtm128UartP.nc"
static inline error_t HplAtm128UartP$Uart0TxControl$stop(void )
#line 113
{
  * (volatile uint8_t *)(0x0A + 0x20) &= ~(1 << 3);
  HplAtm128UartP$McuPowerState$update();
  return SUCCESS;
}

# 84 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/StdControl.nc"
inline static error_t /*Atm128Uart0C.UartP*/Atm128UartP$0$HplUartTxControl$stop(void ){
#line 84
  unsigned char result;
#line 84

#line 84
  result = HplAtm128UartP$Uart0TxControl$stop();
#line 84

#line 84
  return result;
#line 84
}
#line 84
# 93 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/Atm128UartP.nc"
static inline error_t /*Atm128Uart0C.UartP*/Atm128UartP$0$StdControl$stop(void )
#line 93
{
  /*Atm128Uart0C.UartP*/Atm128UartP$0$HplUartTxControl$stop();
  /*Atm128Uart0C.UartP*/Atm128UartP$0$HplUartRxControl$stop();
  return SUCCESS;
}

# 84 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/StdControl.nc"
inline static error_t SerialP$SerialControl$stop(void ){
#line 84
  unsigned char result;
#line 84

#line 84
  result = /*Atm128Uart0C.UartP*/Atm128UartP$0$StdControl$stop();
#line 84

#line 84
  return result;
#line 84
}
#line 84
# 330 "/cygdrive/c/Dropbox/tinyos-2.x/tos/lib/serial/SerialP.nc"
static inline void SerialP$SerialFlush$flushDone(void )
#line 330
{
  SerialP$SerialControl$stop();
  SerialP$SplitControl$stopDone(SUCCESS);
}

static inline void SerialP$defaultSerialFlushTask$runTask(void )
#line 335
{
  SerialP$SerialFlush$flushDone();
}

# 56 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static error_t SerialP$defaultSerialFlushTask$postTask(void ){
#line 56
  unsigned char result;
#line 56

#line 56
  result = SchedulerBasicP$TaskBasic$postTask(SerialP$defaultSerialFlushTask);
#line 56

#line 56
  return result;
#line 56
}
#line 56
# 338 "/cygdrive/c/Dropbox/tinyos-2.x/tos/lib/serial/SerialP.nc"
static inline void SerialP$SerialFlush$default$flush(void )
#line 338
{
  SerialP$defaultSerialFlushTask$postTask();
}

# 38 "/cygdrive/c/Dropbox/tinyos-2.x/tos/lib/serial/SerialFlush.nc"
inline static void SerialP$SerialFlush$flush(void ){
#line 38
  SerialP$SerialFlush$default$flush();
#line 38
}
#line 38
# 326 "/cygdrive/c/Dropbox/tinyos-2.x/tos/lib/serial/SerialP.nc"
static inline void SerialP$stopDoneTask$runTask(void )
#line 326
{
  SerialP$SerialFlush$flush();
}

# 48 "/cygdrive/c/Dropbox/tinyos-2.x/tos/lib/printf/SerialStartP.nc"
static inline void SerialStartP$SerialControl$startDone(error_t error)
#line 48
{
}

# 92 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/SplitControl.nc"
inline static void SerialP$SplitControl$startDone(error_t error){
#line 92
  SerialStartP$SerialControl$startDone(error);
#line 92
}
#line 92
# 142 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/HplAtm128UartP.nc"
static inline error_t HplAtm128UartP$HplUart0$enableRxIntr(void )
#line 142
{
  * (volatile uint8_t *)(0x0A + 0x20) |= 1 << 7;
  return SUCCESS;
}

# 42 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/HplAtm128Uart.nc"
inline static error_t /*Atm128Uart0C.UartP*/Atm128UartP$0$HplUart$enableRxIntr(void ){
#line 42
  unsigned char result;
#line 42

#line 42
  result = HplAtm128UartP$HplUart0$enableRxIntr();
#line 42

#line 42
  return result;
#line 42
}
#line 42
# 119 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/HplAtm128UartP.nc"
static inline error_t HplAtm128UartP$Uart0RxControl$start(void )
#line 119
{
  * (volatile uint8_t *)(0x0A + 0x20) |= 1 << 4;
  HplAtm128UartP$McuPowerState$update();
  return SUCCESS;
}

# 74 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/StdControl.nc"
inline static error_t /*Atm128Uart0C.UartP*/Atm128UartP$0$HplUartRxControl$start(void ){
#line 74
  unsigned char result;
#line 74

#line 74
  result = HplAtm128UartP$Uart0RxControl$start();
#line 74

#line 74
  return result;
#line 74
}
#line 74
# 107 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/HplAtm128UartP.nc"
static inline error_t HplAtm128UartP$Uart0TxControl$start(void )
#line 107
{
  * (volatile uint8_t *)(0x0A + 0x20) |= 1 << 3;
  HplAtm128UartP$McuPowerState$update();
  return SUCCESS;
}

# 74 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/StdControl.nc"
inline static error_t /*Atm128Uart0C.UartP*/Atm128UartP$0$HplUartTxControl$start(void ){
#line 74
  unsigned char result;
#line 74

#line 74
  result = HplAtm128UartP$Uart0TxControl$start();
#line 74

#line 74
  return result;
#line 74
}
#line 74
# 147 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/HplAtm128UartP.nc"
static inline error_t HplAtm128UartP$HplUart0$disableRxIntr(void )
#line 147
{
  * (volatile uint8_t *)(0x0A + 0x20) &= ~(1 << 7);
  return SUCCESS;
}

# 43 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/HplAtm128Uart.nc"
inline static error_t /*Atm128Uart0C.UartP*/Atm128UartP$0$HplUart$disableRxIntr(void ){
#line 43
  unsigned char result;
#line 43

#line 43
  result = HplAtm128UartP$HplUart0$disableRxIntr();
#line 43

#line 43
  return result;
#line 43
}
#line 43
# 137 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/HplAtm128UartP.nc"
static inline error_t HplAtm128UartP$HplUart0$disableTxIntr(void )
#line 137
{
  * (volatile uint8_t *)(0x0A + 0x20) &= ~(1 << 6);
  return SUCCESS;
}

# 41 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/HplAtm128Uart.nc"
inline static error_t /*Atm128Uart0C.UartP*/Atm128UartP$0$HplUart$disableTxIntr(void ){
#line 41
  unsigned char result;
#line 41

#line 41
  result = HplAtm128UartP$HplUart0$disableTxIntr();
#line 41

#line 41
  return result;
#line 41
}
#line 41
# 77 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/Atm128UartP.nc"
static inline error_t /*Atm128Uart0C.UartP*/Atm128UartP$0$StdControl$start(void )
#line 77
{

  /*Atm128Uart0C.UartP*/Atm128UartP$0$HplUart$disableTxIntr();
  /*Atm128Uart0C.UartP*/Atm128UartP$0$HplUart$disableRxIntr();
  /*Atm128Uart0C.UartP*/Atm128UartP$0$m_rx_intr = 0;
  /*Atm128Uart0C.UartP*/Atm128UartP$0$m_tx_intr = 0;


  /*Atm128Uart0C.UartP*/Atm128UartP$0$HplUartTxControl$start();
  /*Atm128Uart0C.UartP*/Atm128UartP$0$HplUartRxControl$start();


  /*Atm128Uart0C.UartP*/Atm128UartP$0$HplUart$enableRxIntr();
  return SUCCESS;
}

# 74 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/StdControl.nc"
inline static error_t SerialP$SerialControl$start(void ){
#line 74
  unsigned char result;
#line 74

#line 74
  result = /*Atm128Uart0C.UartP*/Atm128UartP$0$StdControl$start();
#line 74

#line 74
  return result;
#line 74
}
#line 74
# 320 "/cygdrive/c/Dropbox/tinyos-2.x/tos/lib/serial/SerialP.nc"
static inline void SerialP$startDoneTask$runTask(void )
#line 320
{
  SerialP$SerialControl$start();
  SerialP$SplitControl$startDone(SUCCESS);
}

# 45 "/cygdrive/c/Dropbox/tinyos-2.x/tos/lib/serial/SerialFrameComm.nc"
inline static error_t SerialP$SerialFrameComm$putDelimiter(void ){
#line 45
  unsigned char result;
#line 45

#line 45
  result = HdlcTranslateC$SerialFrameComm$putDelimiter();
#line 45

#line 45
  return result;
#line 45
}
#line 45
# 56 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$signalSendDone$postTask(void ){
#line 56
  unsigned char result;
#line 56

#line 56
  result = SchedulerBasicP$TaskBasic$postTask(/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$signalSendDone);
#line 56

#line 56
  return result;
#line 56
}
#line 56
# 183 "/cygdrive/c/Dropbox/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$SendBytePacket$sendCompleted(error_t error)
#line 183
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 184
    /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$sendError = error;
#line 184
    __nesc_atomic_end(__nesc_atomic); }
  /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$signalSendDone$postTask();
}

# 80 "/cygdrive/c/Dropbox/tinyos-2.x/tos/lib/serial/SendBytePacket.nc"
inline static void SerialP$SendBytePacket$sendCompleted(error_t error){
#line 80
  /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$SendBytePacket$sendCompleted(error);
#line 80
}
#line 80
# 242 "/cygdrive/c/Dropbox/tinyos-2.x/tos/lib/serial/SerialP.nc"
static __inline bool SerialP$ack_queue_is_empty(void )
#line 242
{
  bool ret;

#line 244
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 244
    ret = SerialP$ackQ.writePtr == SerialP$ackQ.readPtr;
#line 244
    __nesc_atomic_end(__nesc_atomic); }
  return ret;
}











static __inline uint8_t SerialP$ack_queue_top(void )
#line 258
{
  uint8_t tmp = 0;

  /* atomic removed: atomic calls only */
#line 260
  {
    if (!SerialP$ack_queue_is_empty()) {
        tmp = SerialP$ackQ.buf[SerialP$ackQ.readPtr];
      }
  }
  return tmp;
}

static inline uint8_t SerialP$ack_queue_pop(void )
#line 268
{
  uint8_t retval = 0;

#line 270
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 270
    {
      if (SerialP$ackQ.writePtr != SerialP$ackQ.readPtr) {
          retval = SerialP$ackQ.buf[SerialP$ackQ.readPtr];
          if (++ SerialP$ackQ.readPtr > SerialP$ACK_QUEUE_SIZE) {
#line 273
            SerialP$ackQ.readPtr = 0;
            }
        }
    }
#line 276
    __nesc_atomic_end(__nesc_atomic); }
#line 276
  return retval;
}

#line 539
static inline void SerialP$RunTx$runTask(void )
#line 539
{
  uint8_t idle;
  uint8_t done;
  uint8_t fail;









  error_t result = SUCCESS;
  bool send_completed = FALSE;
  bool start_it = FALSE;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 556
    {
      SerialP$txPending = 0;
      idle = SerialP$txState == SerialP$TXSTATE_IDLE;
      done = SerialP$txState == SerialP$TXSTATE_FINISH;
      fail = SerialP$txState == SerialP$TXSTATE_ERROR;
      if (done || fail) {
          SerialP$txState = SerialP$TXSTATE_IDLE;
          SerialP$txBuf[SerialP$txIndex].state = SerialP$BUFFER_AVAILABLE;
        }
    }
#line 565
    __nesc_atomic_end(__nesc_atomic); }


  if (done || fail) {
      SerialP$txSeqno++;
      if (SerialP$txProto == SERIAL_PROTO_ACK) {
          SerialP$ack_queue_pop();
        }
      else {
          result = done ? SUCCESS : FAIL;
          send_completed = TRUE;
        }
      idle = TRUE;
    }


  if (idle) {
      bool goInactive;

#line 583
      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 583
        goInactive = SerialP$offPending;
#line 583
        __nesc_atomic_end(__nesc_atomic); }
      if (goInactive) {
          { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 585
            SerialP$txState = SerialP$TXSTATE_INACTIVE;
#line 585
            __nesc_atomic_end(__nesc_atomic); }
        }
      else {

          uint8_t myAckState;
          uint8_t myDataState;

#line 591
          { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 591
            {
              myAckState = SerialP$txBuf[SerialP$TX_ACK_INDEX].state;
              myDataState = SerialP$txBuf[SerialP$TX_DATA_INDEX].state;
            }
#line 594
            __nesc_atomic_end(__nesc_atomic); }
          if (!SerialP$ack_queue_is_empty() && myAckState == SerialP$BUFFER_AVAILABLE) {
              { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 596
                {
                  SerialP$txBuf[SerialP$TX_ACK_INDEX].state = SerialP$BUFFER_COMPLETE;
                  SerialP$txBuf[SerialP$TX_ACK_INDEX].buf = SerialP$ack_queue_top();
                }
#line 599
                __nesc_atomic_end(__nesc_atomic); }
              SerialP$txProto = SERIAL_PROTO_ACK;
              SerialP$txIndex = SerialP$TX_ACK_INDEX;
              start_it = TRUE;
            }
          else {
#line 604
            if (myDataState == SerialP$BUFFER_FILLING || myDataState == SerialP$BUFFER_COMPLETE) {
                SerialP$txProto = SERIAL_PROTO_PACKET_NOACK;
                SerialP$txIndex = SerialP$TX_DATA_INDEX;
                start_it = TRUE;
              }
            else {
              }
            }
        }
    }
  else {
    }


  if (send_completed) {
      SerialP$SendBytePacket$sendCompleted(result);
    }

  if (SerialP$txState == SerialP$TXSTATE_INACTIVE) {
      SerialP$testOff();
      return;
    }

  if (start_it) {

      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 629
        {
          SerialP$txCRC = 0;
          SerialP$txByteCnt = 0;
          SerialP$txState = SerialP$TXSTATE_PROTO;
        }
#line 633
        __nesc_atomic_end(__nesc_atomic); }
      if (SerialP$SerialFrameComm$putDelimiter() != SUCCESS) {
          { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 635
            SerialP$txState = SerialP$TXSTATE_ERROR;
#line 635
            __nesc_atomic_end(__nesc_atomic); }
          SerialP$MaybeScheduleTx();
        }
    }
}

# 56 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static error_t SerialP$stopDoneTask$postTask(void ){
#line 56
  unsigned char result;
#line 56

#line 56
  result = SchedulerBasicP$TaskBasic$postTask(SerialP$stopDoneTask);
#line 56

#line 56
  return result;
#line 56
}
#line 56
# 131 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/HplAtm128UartP.nc"
static inline error_t HplAtm128UartP$HplUart0$enableTxIntr(void )
#line 131
{
  * (volatile uint8_t *)(0x0B + 0x20) |= 1 << 6;
  * (volatile uint8_t *)(0x0A + 0x20) |= 1 << 6;
  return SUCCESS;
}

# 40 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/HplAtm128Uart.nc"
inline static error_t /*Atm128Uart0C.UartP*/Atm128UartP$0$HplUart$enableTxIntr(void ){
#line 40
  unsigned char result;
#line 40

#line 40
  result = HplAtm128UartP$HplUart0$enableTxIntr();
#line 40

#line 40
  return result;
#line 40
}
#line 40
# 118 "/cygdrive/c/Dropbox/tinyos-2.x/tos/system/AMQueueImplP.nc"
static inline void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$0$CancelTask$runTask(void )
#line 118
{
  uint8_t i;
#line 119
  uint8_t j;
#line 119
  uint8_t mask;
#line 119
  uint8_t last;
  message_t *msg;

#line 121
  for (i = 0; i < 1 / 8 + 1; i++) {
      if (/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$0$cancelMask[i]) {
          for (mask = 1, j = 0; j < 8; j++) {
              if (/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$0$cancelMask[i] & mask) {
                  last = i * 8 + j;
                  msg = /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$0$queue[last].msg;
                  /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$0$queue[last].msg = (void *)0;
                  /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$0$cancelMask[i] &= ~mask;
                  /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$0$Send$sendDone(last, msg, ECANCEL);
                }
              mask <<= 1;
            }
        }
    }
}

#line 161
static inline void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$0$errorTask$runTask(void )
#line 161
{
  /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$0$sendDone(/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$0$current, /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$0$queue[/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$0$current].msg, FAIL);
}

# 92 "/cygdrive/c/Dropbox/tinyos-2.x/tos/lib/timer/Alarm.nc"
inline static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$startAt(/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$size_type t0, /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$size_type dt){
#line 92
  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$startAt(t0, dt);
#line 92
}
#line 92
# 47 "/cygdrive/c/Dropbox/tinyos-2.x/tos/lib/timer/AlarmToTimerC.nc"
static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$start(uint32_t t0, uint32_t dt, bool oneshot)
{
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$m_dt = dt;
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$m_oneshot = oneshot;
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$startAt(t0, dt);
}

#line 82
static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$startOneShotAt(uint32_t t0, uint32_t dt)
{
#line 83
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$start(t0, dt, TRUE);
}

# 118 "/cygdrive/c/Dropbox/tinyos-2.x/tos/lib/timer/Timer.nc"
inline static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$startOneShotAt(uint32_t t0, uint32_t dt){
#line 118
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$startOneShotAt(t0, dt);
#line 118
}
#line 118
# 204 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/timer/Atm128AlarmAsyncP.nc"
static inline void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$stop(void )
#line 204
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 205
    /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$set = FALSE;
#line 205
    __nesc_atomic_end(__nesc_atomic); }
}

# 62 "/cygdrive/c/Dropbox/tinyos-2.x/tos/lib/timer/Alarm.nc"
inline static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$stop(void ){
#line 62
  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$stop();
#line 62
}
#line 62
# 60 "/cygdrive/c/Dropbox/tinyos-2.x/tos/lib/timer/AlarmToTimerC.nc"
static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$stop(void )
{
#line 61
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$stop();
}

# 67 "/cygdrive/c/Dropbox/tinyos-2.x/tos/lib/timer/Timer.nc"
inline static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$stop(void ){
#line 67
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$stop();
#line 67
}
#line 67
# 89 "/cygdrive/c/Dropbox/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$updateFromTimer$runTask(void )
{




  uint32_t now = /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$getNow();
  int32_t min_remaining = (1UL << 31) - 1;
  bool min_remaining_isset = FALSE;
  uint8_t num;

  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$stop();

  for (num = 0; num < /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$NUM_TIMERS; num++) 
    {
      /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer_t *timer = &/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$m_timers[num];

      if (timer->isrunning) 
        {
          uint32_t elapsed = now - timer->t0;
          int32_t remaining = timer->dt - elapsed;

          if (remaining < min_remaining) 
            {
              min_remaining = remaining;
              min_remaining_isset = TRUE;
            }
        }
    }

  if (min_remaining_isset) 
    {
      if (min_remaining <= 0) {
        /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$fireTimers(now);
        }
      else {
#line 124
        /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$startOneShotAt(now, min_remaining);
        }
    }
}

# 69 "BlinkToRadioC.nc"
static inline void BlinkToRadioC$Timer0$fired(void )
#line 69
{



  BlinkToRadioC$counter++;




  BlinkToRadioC$DestAdd = AM_BROADCAST_ADDR;
  BlinkToRadioC$ack = FALSE;
  BlinkToRadioC$AMSendTask$postTask();
}

# 339 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/at45db/BlockStorageP.nc"
static inline error_t BlockStorageP$BlockRead$read(uint8_t id, storage_addr_t addr, void *buf, storage_len_t len)
#line 339
{
  return BlockStorageP$newRequest(BlockStorageP$R_READ, id, addr, buf, len);
}

# 56 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/BlockRead.nc"
inline static error_t BlinkToRadioC$BlockRead$read(storage_addr_t addr, void * buf, storage_len_t len){
#line 56
  unsigned char result;
#line 56

#line 56
  result = BlockStorageP$BlockRead$read(/*BlinkToRadioAppC.BlockStorageC*/BlockStorageC$0$BLOCK_ID, addr, buf, len);
#line 56

#line 56
  return result;
#line 56
}
#line 56
# 151 "BlinkToRadioC.nc"
static inline void BlinkToRadioC$Timer1$fired(void )
#line 151
{

  if (BlinkToRadioC$ReadLogAddrs < MAX_FLASH_ADDR) {
#line 153
    BlinkToRadioC$BlockRead$read(BlinkToRadioC$ReadLogAddrs, &BlinkToRadioC$ReadLogMsg, sizeof(BlinkToRadioMsg ));
    }
  else {
#line 154
    BlinkToRadioC$AMControl$start();
    }
}

# 193 "/cygdrive/c/Dropbox/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$default$fired(uint8_t num)
{
}

# 72 "/cygdrive/c/Dropbox/tinyos-2.x/tos/lib/timer/Timer.nc"
inline static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$fired(uint8_t arg_0x7e798260){
#line 72
  switch (arg_0x7e798260) {
#line 72
    case 0U:
#line 72
      BlinkToRadioC$Timer0$fired();
#line 72
      break;
#line 72
    case 1U:
#line 72
      BlinkToRadioC$Timer1$fired();
#line 72
      break;
#line 72
    default:
#line 72
      /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$default$fired(arg_0x7e798260);
#line 72
      break;
#line 72
    }
#line 72
}
#line 72
# 135 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer0AsyncP.nc"
static inline void HplAtm128Timer0AsyncP$Compare$set(uint8_t t)
#line 135
{
  * (volatile uint8_t *)(0x31 + 0x20) = t;
}

# 45 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Compare$set(/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Compare$size_type t){
#line 45
  HplAtm128Timer0AsyncP$Compare$set(t);
#line 45
}
#line 45
# 50 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer0AsyncP.nc"
static inline uint8_t HplAtm128Timer0AsyncP$Timer$get(void )
#line 50
{
#line 50
  return * (volatile uint8_t *)(0x32 + 0x20);
}

# 52 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
inline static /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Timer$timer_size /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Timer$get(void ){
#line 52
  unsigned char result;
#line 52

#line 52
  result = HplAtm128Timer0AsyncP$Timer$get();
#line 52

#line 52
  return result;
#line 52
}
#line 52
# 206 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer0AsyncP.nc"
static inline int HplAtm128Timer0AsyncP$TimerAsync$compareBusy(void )
#line 206
{
  return (* (volatile uint8_t *)(0x30 + 0x20) & (1 << 1)) != 0;
}

# 44 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/timer/HplAtm128TimerAsync.nc"
inline static int /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$TimerAsync$compareBusy(void ){
#line 44
  int result;
#line 44

#line 44
  result = HplAtm128Timer0AsyncP$TimerAsync$compareBusy();
#line 44

#line 44
  return result;
#line 44
}
#line 44
# 74 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/timer/Atm128AlarmAsyncP.nc"
static inline void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$setOcr0(uint8_t n)
#line 74
{
  while (/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$TimerAsync$compareBusy()) 
    ;
  if (n == /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Timer$get()) {
    n++;
    }


  if (/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$base + n + 1 < /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$base) {
    n = -/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$base - 1;
    }
#line 84
  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Compare$set(n);
}

# 56 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static error_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$fired$postTask(void ){
#line 56
  unsigned char result;
#line 56

#line 56
  result = SchedulerBasicP$TaskBasic$postTask(/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$fired);
#line 56

#line 56
  return result;
#line 56
}
#line 56
# 70 "/cygdrive/c/Dropbox/tinyos-2.x/tos/lib/timer/AlarmToTimerC.nc"
static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$fired(void )
{
#line 71
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$fired$postTask();
}

# 67 "/cygdrive/c/Dropbox/tinyos-2.x/tos/lib/timer/Alarm.nc"
inline static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$fired(void ){
#line 67
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$fired();
#line 67
}
#line 67
# 128 "/cygdrive/c/Dropbox/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$fired(void )
{
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$fireTimers(/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$getNow());
}

# 72 "/cygdrive/c/Dropbox/tinyos-2.x/tos/lib/timer/Timer.nc"
inline static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$fired(void ){
#line 72
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$fired();
#line 72
}
#line 72
# 226 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/timer/Atm128AlarmAsyncP.nc"
static inline uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$getAlarm(void )
#line 226
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 227
    {
      unsigned long __nesc_temp = 
#line 227
      /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$t0 + /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$dt;

      {
#line 227
        __nesc_atomic_end(__nesc_atomic); 
#line 227
        return __nesc_temp;
      }
    }
#line 229
    __nesc_atomic_end(__nesc_atomic); }
}

# 105 "/cygdrive/c/Dropbox/tinyos-2.x/tos/lib/timer/Alarm.nc"
inline static /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$size_type /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$getAlarm(void ){
#line 105
  unsigned long result;
#line 105

#line 105
  result = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$getAlarm();
#line 105

#line 105
  return result;
#line 105
}
#line 105
# 63 "/cygdrive/c/Dropbox/tinyos-2.x/tos/lib/timer/AlarmToTimerC.nc"
static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$fired$runTask(void )
{
  if (/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$m_oneshot == FALSE) {
    /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$start(/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$getAlarm(), /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$m_dt, FALSE);
    }
#line 67
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$fired();
}

# 177 "BlinkToRadioC.nc"
static inline void BlinkToRadioC$EraseFlash$runTask(void )
#line 177
{
}

# 151 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/cc2420/CC2420ActiveMessageP.nc"
static inline void CC2420ActiveMessageP$Packet$setPayloadLength(message_t *msg, uint8_t len)
#line 151
{
  __nesc_hton_leuint8(CC2420ActiveMessageP$CC2420PacketBody$getHeader(msg)->length.data, len + CC2420_SIZE);
}

# 83 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/Packet.nc"
inline static void /*AMQueueP.AMQueueImplP*/AMQueueImplP$1$Packet$setPayloadLength(message_t * msg, uint8_t len){
#line 83
  CC2420ActiveMessageP$Packet$setPayloadLength(msg, len);
#line 83
}
#line 83
# 82 "/cygdrive/c/Dropbox/tinyos-2.x/tos/system/AMQueueImplP.nc"
static inline error_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$1$Send$send(uint8_t clientId, message_t *msg, 
uint8_t len)
#line 83
{
  if (clientId >= 1) {
      return FAIL;
    }
  if (/*AMQueueP.AMQueueImplP*/AMQueueImplP$1$queue[clientId].msg != (void *)0) {
      return EBUSY;
    }
  ;

  /*AMQueueP.AMQueueImplP*/AMQueueImplP$1$queue[clientId].msg = msg;
  /*AMQueueP.AMQueueImplP*/AMQueueImplP$1$Packet$setPayloadLength(msg, len);

  if (/*AMQueueP.AMQueueImplP*/AMQueueImplP$1$current >= 1) {
      error_t err;
      am_id_t amId = /*AMQueueP.AMQueueImplP*/AMQueueImplP$1$AMPacket$type(msg);
      am_addr_t dest = /*AMQueueP.AMQueueImplP*/AMQueueImplP$1$AMPacket$destination(msg);

      ;
      /*AMQueueP.AMQueueImplP*/AMQueueImplP$1$current = clientId;

      err = /*AMQueueP.AMQueueImplP*/AMQueueImplP$1$AMSend$send(amId, dest, msg, len);
      if (err != SUCCESS) {
          ;
          /*AMQueueP.AMQueueImplP*/AMQueueImplP$1$current = 1;
          /*AMQueueP.AMQueueImplP*/AMQueueImplP$1$queue[clientId].msg = (void *)0;
        }

      return err;
    }
  else {
      ;
    }
  return SUCCESS;
}

# 64 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/Send.nc"
inline static error_t /*BlinkToRadioAppC.AMSenderC.AMQueueEntryP*/AMQueueEntryP$1$Send$send(message_t * msg, uint8_t len){
#line 64
  unsigned char result;
#line 64

#line 64
  result = /*AMQueueP.AMQueueImplP*/AMQueueImplP$1$Send$send(0U, msg, len);
#line 64

#line 64
  return result;
#line 64
}
#line 64
# 122 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/cc2420/CC2420ActiveMessageP.nc"
static inline void CC2420ActiveMessageP$AMPacket$setType(message_t *amsg, am_id_t type)
#line 122
{
  cc2420_header_t *header = CC2420ActiveMessageP$CC2420PacketBody$getHeader(amsg);

#line 124
  __nesc_hton_leuint8(header->type.data, type);
}

# 151 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/AMPacket.nc"
inline static void /*BlinkToRadioAppC.AMSenderC.AMQueueEntryP*/AMQueueEntryP$1$AMPacket$setType(message_t * amsg, am_id_t t){
#line 151
  CC2420ActiveMessageP$AMPacket$setType(amsg, t);
#line 151
}
#line 151
# 102 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/cc2420/CC2420ActiveMessageP.nc"
static inline void CC2420ActiveMessageP$AMPacket$setDestination(message_t *amsg, am_addr_t addr)
#line 102
{
  cc2420_header_t *header = CC2420ActiveMessageP$CC2420PacketBody$getHeader(amsg);

#line 104
  __nesc_hton_leuint16(header->dest.data, addr);
}

# 92 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/AMPacket.nc"
inline static void /*BlinkToRadioAppC.AMSenderC.AMQueueEntryP*/AMQueueEntryP$1$AMPacket$setDestination(message_t * amsg, am_addr_t addr){
#line 92
  CC2420ActiveMessageP$AMPacket$setDestination(amsg, addr);
#line 92
}
#line 92
# 45 "/cygdrive/c/Dropbox/tinyos-2.x/tos/system/AMQueueEntryP.nc"
static inline error_t /*BlinkToRadioAppC.AMSenderC.AMQueueEntryP*/AMQueueEntryP$1$AMSend$send(am_addr_t dest, 
message_t *msg, 
uint8_t len)
#line 47
{
  /*BlinkToRadioAppC.AMSenderC.AMQueueEntryP*/AMQueueEntryP$1$AMPacket$setDestination(msg, dest);
  /*BlinkToRadioAppC.AMSenderC.AMQueueEntryP*/AMQueueEntryP$1$AMPacket$setType(msg, 6L);
  return /*BlinkToRadioAppC.AMSenderC.AMQueueEntryP*/AMQueueEntryP$1$Send$send(msg, len);
}

# 69 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/AMSend.nc"
inline static error_t BlinkToRadioC$AMSend$send(am_addr_t addr, message_t * msg, uint8_t len){
#line 69
  unsigned char result;
#line 69

#line 69
  result = /*BlinkToRadioAppC.AMSenderC.AMQueueEntryP*/AMQueueEntryP$1$AMSend$send(addr, msg, len);
#line 69

#line 69
  return result;
#line 69
}
#line 69
# 48 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static inline void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP$1$IO$toggle(void )
#line 48
{
#line 48
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 48
    * (volatile uint8_t * )59U ^= 1 << 1;
#line 48
    __nesc_atomic_end(__nesc_atomic); }
}

# 31 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void LedsP$Led1$toggle(void ){
#line 31
  /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP$1$IO$toggle();
#line 31
}
#line 31
# 88 "/cygdrive/c/Dropbox/tinyos-2.x/tos/system/LedsP.nc"
static inline void LedsP$Leds$led1Toggle(void )
#line 88
{
  LedsP$Led1$toggle();
  ;
#line 90
  ;
}

# 72 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/Leds.nc"
inline static void BlinkToRadioC$Leds$led1Toggle(void ){
#line 72
  LedsP$Leds$led1Toggle();
#line 72
}
#line 72
# 114 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/Send.nc"
inline static void * CC2420TinyosNetworkP$SubSend$getPayload(message_t * msg, uint8_t len){
#line 114
  void *result;
#line 114

#line 114
  result = CC2420CsmaP$Send$getPayload(msg, len);
#line 114

#line 114
  return result;
#line 114
}
#line 114
# 74 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/cc2420/lowpan/CC2420TinyosNetworkP.nc"
static inline void *CC2420TinyosNetworkP$Send$getPayload(message_t *msg, uint8_t len)
#line 74
{
  return CC2420TinyosNetworkP$SubSend$getPayload(msg, len);
}

# 114 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/Send.nc"
inline static void * UniqueSendP$SubSend$getPayload(message_t * msg, uint8_t len){
#line 114
  void *result;
#line 114

#line 114
  result = CC2420TinyosNetworkP$Send$getPayload(msg, len);
#line 114

#line 114
  return result;
#line 114
}
#line 114
# 99 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/cc2420/unique/UniqueSendP.nc"
static inline void *UniqueSendP$Send$getPayload(message_t *msg, uint8_t len)
#line 99
{
  return UniqueSendP$SubSend$getPayload(msg, len);
}

# 114 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/Send.nc"
inline static void * CC2420ActiveMessageP$SubSend$getPayload(message_t * msg, uint8_t len){
#line 114
  void *result;
#line 114

#line 114
  result = UniqueSendP$Send$getPayload(msg, len);
#line 114

#line 114
  return result;
#line 114
}
#line 114
# 159 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/cc2420/CC2420ActiveMessageP.nc"
static inline void *CC2420ActiveMessageP$Packet$getPayload(message_t *msg, uint8_t len)
#line 159
{
  return CC2420ActiveMessageP$SubSend$getPayload(msg, len);
}

# 115 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/Packet.nc"
inline static void * BlinkToRadioC$Packet$getPayload(message_t * msg, uint8_t len){
#line 115
  void *result;
#line 115

#line 115
  result = CC2420ActiveMessageP$Packet$getPayload(msg, len);
#line 115

#line 115
  return result;
#line 115
}
#line 115
# 133 "BlinkToRadioC.nc"
static inline void BlinkToRadioC$AMSendTask$runTask(void )
#line 133
{
  if (!BlinkToRadioC$busy) {
      BlinkToRadioMsg *btrpkt;

#line 136
      btrpkt = (BlinkToRadioMsg *)BlinkToRadioC$Packet$getPayload(&BlinkToRadioC$pkt, sizeof(BlinkToRadioMsg ));
      if (!BlinkToRadioC$ack) {
          __nesc_hton_uint8(btrpkt->nodeid.data, TOS_NODE_ID);
          BlinkToRadioC$Leds$led1Toggle();
        }
      else {
#line 140
        __nesc_hton_uint8(btrpkt->nodeid.data, ACK_MSG);
        }
#line 141
      __nesc_hton_uint16(btrpkt->seq_number_coord.data, BlinkToRadioC$counter);



      if (BlinkToRadioC$AMSend$send(BlinkToRadioC$DestAdd, &BlinkToRadioC$pkt, sizeof(BlinkToRadioMsg )) == SUCCESS) {
          BlinkToRadioC$busy = TRUE;
        }
    }
}

# 167 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/cc2420/csma/CC2420CsmaP.nc"
static inline uint8_t CC2420CsmaP$Send$maxPayloadLength(void )
#line 167
{
  return 28;
}

# 122 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer0AsyncP.nc"
static inline void HplAtm128Timer0AsyncP$Compare$start(void )
#line 122
{
#line 122
  * (volatile uint8_t *)(0x37 + 0x20) |= 1 << 1;
}

# 56 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Compare$start(void ){
#line 56
  HplAtm128Timer0AsyncP$Compare$start();
#line 56
}
#line 56
# 76 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer0AsyncP.nc"
static inline void HplAtm128Timer0AsyncP$TimerCtrl$setControl(Atm128TimerControl_t x)
#line 76
{
  * (volatile uint8_t *)(0x33 + 0x20) = x.flat;
}

# 37 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/timer/HplAtm128TimerCtrl8.nc"
inline static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$TimerCtrl$setControl(Atm128TimerControl_t control){
#line 37
  HplAtm128Timer0AsyncP$TimerCtrl$setControl(control);
#line 37
}
#line 37
# 198 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer0AsyncP.nc"
static inline void HplAtm128Timer0AsyncP$TimerAsync$setTimer0Asynchronous(void )
#line 198
{
  * (volatile uint8_t *)(0x30 + 0x20) |= 1 << 3;
}

# 32 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/timer/HplAtm128TimerAsync.nc"
inline static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$TimerAsync$setTimer0Asynchronous(void ){
#line 32
  HplAtm128Timer0AsyncP$TimerAsync$setTimer0Asynchronous();
#line 32
}
#line 32
# 54 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/timer/Atm128AlarmAsyncP.nc"
static inline error_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Init$init(void )
#line 54
{
  /* atomic removed: atomic calls only */
  {
    Atm128TimerControl_t x;

    /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$TimerAsync$setTimer0Asynchronous();
    x.flat = 0;
    x.bits.cs = 3;
    x.bits.wgm1 = 1;
    /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$TimerCtrl$setControl(x);
    /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Compare$set(/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$MAXT);
    /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Compare$start();
  }
  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$setInterrupt();
  return SUCCESS;
}

# 109 "/cygdrive/c/Dropbox/tinyos-2.x/tos/lib/printf/PrintfP.nc"
static inline error_t PrintfP$Init$init(void )
#line 109
{
  /* atomic removed: atomic calls only */
#line 110
  PrintfP$state = PrintfP$S_STARTED;
  return SUCCESS;
}

# 214 "/cygdrive/c/Dropbox/tinyos-2.x/tos/lib/serial/SerialP.nc"
static __inline void SerialP$ackInit(void )
#line 214
{
  SerialP$ackQ.writePtr = SerialP$ackQ.readPtr = 0;
}

#line 205
static __inline void SerialP$rxInit(void )
#line 205
{
  SerialP$rxBuf.writePtr = SerialP$rxBuf.readPtr = 0;
  SerialP$rxState = SerialP$RXSTATE_NOSYNC;
  SerialP$rxByteCnt = 0;
  SerialP$rxProto = 0;
  SerialP$rxSeqno = 0;
  SerialP$rxCRC = 0;
}

#line 193
static __inline void SerialP$txInit(void )
#line 193
{
  uint8_t i;

  /* atomic removed: atomic calls only */
#line 195
  for (i = 0; i < SerialP$TX_BUFFER_COUNT; i++) SerialP$txBuf[i].state = SerialP$BUFFER_AVAILABLE;
  SerialP$txState = SerialP$TXSTATE_IDLE;
  SerialP$txByteCnt = 0;
  SerialP$txProto = 0;
  SerialP$txSeqno = 0;
  SerialP$txCRC = 0;
  SerialP$txPending = FALSE;
  SerialP$txIndex = 0;
}

#line 218
static inline error_t SerialP$Init$init(void )
#line 218
{

  SerialP$txInit();
  SerialP$rxInit();
  SerialP$ackInit();

  return SUCCESS;
}

# 69 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/Atm128UartP.nc"
static inline error_t /*Atm128Uart0C.UartP*/Atm128UartP$0$Init$init(void )
#line 69
{
  if (PLATFORM_BAUDRATE == 19200UL) {
    /*Atm128Uart0C.UartP*/Atm128UartP$0$m_byte_time = 200;
    }
  else {
#line 72
    if (PLATFORM_BAUDRATE == 57600UL) {
      /*Atm128Uart0C.UartP*/Atm128UartP$0$m_byte_time = 68;
      }
    }
#line 74
  return SUCCESS;
}

# 120 "/cygdrive/c/Dropbox/tinyos-2.x/tos/platforms/mica/MeasureClockC.nc"
static inline uint16_t MeasureClockC$Atm128Calibrate$baudrateRegister(uint32_t baudrate)
#line 120
{

  return ((uint32_t )MeasureClockC$cycles << 12) / baudrate - 1;
}

# 60 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/timer/Atm128Calibrate.nc"
inline static uint16_t HplAtm128UartP$Atm128Calibrate$baudrateRegister(uint32_t baudrate){
#line 60
  unsigned short result;
#line 60

#line 60
  result = MeasureClockC$Atm128Calibrate$baudrateRegister(baudrate);
#line 60

#line 60
  return result;
#line 60
}
#line 60
# 181 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/HplAtm128UartP.nc"
static inline error_t HplAtm128UartP$Uart1Init$init(void )
#line 181
{
  Atm128UartMode_t mode;
  Atm128UartStatus_t stts;
  Atm128UartControl_t ctrl;
  uint16_t ubrr1;

  ctrl.bits = (struct Atm128_UCSRB_t ){ .rxcie = 0, .txcie = 0, .rxen = 0, .txen = 0 };
  stts.bits = (struct Atm128_UCSRA_t ){ .u2x = 1 };
  mode.bits = (struct Atm128_UCSRC_t ){ .ucsz = ATM128_UART_DATA_SIZE_8_BITS };

  ubrr1 = HplAtm128UartP$Atm128Calibrate$baudrateRegister(PLATFORM_BAUDRATE);
  * (volatile uint8_t *)0x99 = ubrr1;
  * (volatile uint8_t *)0x98 = ubrr1 >> 8;
  * (volatile uint8_t *)0x9B = stts.flat;
  * (volatile uint8_t *)0x9D = mode.flat;
  * (volatile uint8_t *)0x9A = ctrl.flat;

  return SUCCESS;
}

#line 87
static inline error_t HplAtm128UartP$Uart0Init$init(void )
#line 87
{
  Atm128UartMode_t mode;
  Atm128UartStatus_t stts;
  Atm128UartControl_t ctrl;
  uint16_t ubrr0;

  ctrl.bits = (struct Atm128_UCSRB_t ){ .rxcie = 0, .txcie = 0, .rxen = 0, .txen = 0 };
  stts.bits = (struct Atm128_UCSRA_t ){ .u2x = 1 };
  mode.bits = (struct Atm128_UCSRC_t ){ .ucsz = ATM128_UART_DATA_SIZE_8_BITS };

  ubrr0 = HplAtm128UartP$Atm128Calibrate$baudrateRegister(PLATFORM_BAUDRATE);
  * (volatile uint8_t *)(0x09 + 0x20) = ubrr0;
  * (volatile uint8_t *)0x90 = ubrr0 >> 8;
  * (volatile uint8_t *)(0x0B + 0x20) = stts.flat;
  * (volatile uint8_t *)0x95 = mode.flat;
  * (volatile uint8_t *)(0x0A + 0x20) = ctrl.flat;

  return SUCCESS;
}

# 98 "/cygdrive/c/Dropbox/tinyos-2.x/tos/lib/printf/PutcharP.nc"
static inline error_t PutcharP$Init$init(void )
#line 98
{
  error_t rv = SUCCESS;

  __iob[1] = &atm128_stdout;

  return rv;
}

# 82 "/cygdrive/c/Dropbox/tinyos-2.x/tos/system/ActiveMessageAddressC.nc"
static inline am_group_t ActiveMessageAddressC$ActiveMessageAddress$amGroup(void )
#line 82
{
  am_group_t myGroup;

  /* atomic removed: atomic calls only */
#line 84
  myGroup = ActiveMessageAddressC$group;
  return myGroup;
}

# 55 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/ActiveMessageAddress.nc"
inline static am_group_t CC2420ControlP$ActiveMessageAddress$amGroup(void ){
#line 55
  unsigned char result;
#line 55

#line 55
  result = ActiveMessageAddressC$ActiveMessageAddress$amGroup();
#line 55

#line 55
  return result;
#line 55
}
#line 55
#line 50
inline static am_addr_t CC2420ControlP$ActiveMessageAddress$amAddress(void ){
#line 50
  unsigned short result;
#line 50

#line 50
  result = ActiveMessageAddressC$ActiveMessageAddress$amAddress();
#line 50

#line 50
  return result;
#line 50
}
#line 50
# 52 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit5*/HplAtm128GeneralIOPinP$5$IO$makeOutput(void )
#line 52
{
#line 52
  * (volatile uint8_t * )58U |= 1 << 5;
}

# 35 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void CC2420ControlP$VREN$makeOutput(void ){
#line 35
  /*HplAtm128GeneralIOC.PortA.Bit5*/HplAtm128GeneralIOPinP$5$IO$makeOutput();
#line 35
}
#line 35
# 52 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit6*/HplAtm128GeneralIOPinP$6$IO$makeOutput(void )
#line 52
{
#line 52
  * (volatile uint8_t * )58U |= 1 << 6;
}

# 35 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void CC2420ControlP$RSTN$makeOutput(void ){
#line 35
  /*HplAtm128GeneralIOC.PortA.Bit6*/HplAtm128GeneralIOPinP$6$IO$makeOutput();
#line 35
}
#line 35
inline static void CC2420ControlP$CSN$makeOutput(void ){
#line 35
  /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP$8$IO$makeOutput();
#line 35
}
#line 35
# 121 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/cc2420/control/CC2420ControlP.nc"
static inline error_t CC2420ControlP$Init$init(void )
#line 121
{
  CC2420ControlP$CSN$makeOutput();
  CC2420ControlP$RSTN$makeOutput();
  CC2420ControlP$VREN$makeOutput();

  CC2420ControlP$m_short_addr = CC2420ControlP$ActiveMessageAddress$amAddress();
  CC2420ControlP$m_pan = CC2420ControlP$ActiveMessageAddress$amGroup();
  CC2420ControlP$m_tx_power = 31;
  CC2420ControlP$m_channel = 9;





  CC2420ControlP$addressRecognition = TRUE;





  CC2420ControlP$hwAddressRecognition = FALSE;






  CC2420ControlP$autoAckEnabled = TRUE;






  CC2420ControlP$hwAutoAckDefault = FALSE;



  return SUCCESS;
}

# 81 "/cygdrive/c/Dropbox/tinyos-2.x/tos/system/StateImplP.nc"
static inline error_t StateImplP$Init$init(void )
#line 81
{
  int i;

#line 83
  for (i = 0; i < 4U; i++) {
      StateImplP$state[i] = StateImplP$S_IDLE;
    }
  return SUCCESS;
}

# 45 "/cygdrive/c/Dropbox/tinyos-2.x/tos/system/FcfsResourceQueueC.nc"
static inline error_t /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$Init$init(void )
#line 45
{
  memset(/*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$resQ, /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$NO_ENTRY, sizeof /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$resQ);
  return SUCCESS;
}

# 22 "/cygdrive/c/Dropbox/tinyos-2.x/tos/system/NoInitC.nc"
static inline error_t NoInitC$Init$init(void )
#line 22
{
  return SUCCESS;
}

# 50 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortD.Bit4*/HplAtm128GeneralIOPinP$28$IO$makeInput(void )
#line 50
{
#line 50
  * (volatile uint8_t * )49U &= ~(1 << 4);
}

# 33 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void CC2420TransmitP$SFD$makeInput(void ){
#line 33
  /*HplAtm128GeneralIOC.PortD.Bit4*/HplAtm128GeneralIOPinP$28$IO$makeInput();
#line 33
}
#line 33


inline static void CC2420TransmitP$CSN$makeOutput(void ){
#line 35
  /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP$8$IO$makeOutput();
#line 35
}
#line 35
# 50 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortD.Bit6*/HplAtm128GeneralIOPinP$30$IO$makeInput(void )
#line 50
{
#line 50
  * (volatile uint8_t * )49U &= ~(1 << 6);
}

# 33 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void CC2420TransmitP$CCA$makeInput(void ){
#line 33
  /*HplAtm128GeneralIOC.PortD.Bit6*/HplAtm128GeneralIOPinP$30$IO$makeInput();
#line 33
}
#line 33
# 140 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/cc2420/transmit/CC2420TransmitP.nc"
static inline error_t CC2420TransmitP$Init$init(void )
#line 140
{
  CC2420TransmitP$CCA$makeInput();
  CC2420TransmitP$CSN$makeOutput();
  CC2420TransmitP$SFD$makeInput();
  return SUCCESS;
}

# 118 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/cc2420/receive/CC2420ReceiveP.nc"
static inline error_t CC2420ReceiveP$Init$init(void )
#line 118
{
  CC2420ReceiveP$m_p_rx_buf = &CC2420ReceiveP$m_rx_buf;
  return SUCCESS;
}

# 44 "/cygdrive/c/Dropbox/tinyos-2.x/tos/system/RandomMlcgC.nc"
static inline error_t RandomMlcgC$Init$init(void )
#line 44
{
  /* atomic removed: atomic calls only */
#line 45
  RandomMlcgC$seed = (uint32_t )(TOS_NODE_ID + 1);

  return SUCCESS;
}

# 41 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/Random.nc"
inline static uint16_t UniqueSendP$Random$rand16(void ){
#line 41
  unsigned short result;
#line 41

#line 41
  result = RandomMlcgC$Random$rand16();
#line 41

#line 41
  return result;
#line 41
}
#line 41
# 62 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/cc2420/unique/UniqueSendP.nc"
static inline error_t UniqueSendP$Init$init(void )
#line 62
{
  UniqueSendP$localSendId = UniqueSendP$Random$rand16();
  return SUCCESS;
}

# 71 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/cc2420/unique/UniqueReceiveP.nc"
static inline error_t UniqueReceiveP$Init$init(void )
#line 71
{
  int i;

#line 73
  for (i = 0; i < 4; i++) {
      UniqueReceiveP$receivedMessages[i].source = (am_addr_t )0xFFFF;
      UniqueReceiveP$receivedMessages[i].dsn = 0;
    }
  return SUCCESS;
}

# 113 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/at45db/At45dbP.nc"
static inline error_t At45dbP$Init$init(void )
#line 113
{
  At45dbP$request = At45dbP$IDLE;
  At45dbP$flashBusy = TRUE;


  At45dbP$buffer[0].page = At45dbP$buffer[1].page = AT45_MAX_PAGES;
  At45dbP$buffer[0].busy = At45dbP$buffer[1].busy = FALSE;
  At45dbP$buffer[0].clean = At45dbP$buffer[1].clean = TRUE;
  At45dbP$buffer[0].unchecked = At45dbP$buffer[1].unchecked = 0;
  At45dbP$buffer[0].erased = At45dbP$buffer[1].erased = FALSE;

  return SUCCESS;
}

# 45 "/cygdrive/c/Dropbox/tinyos-2.x/tos/system/FcfsResourceQueueC.nc"
static inline error_t /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC$1$Init$init(void )
#line 45
{
  memset(/*At45dbC.Arbiter.Queue*/FcfsResourceQueueC$1$resQ, /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC$1$NO_ENTRY, sizeof /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC$1$resQ);
  return SUCCESS;
}

# 51 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/Init.nc"
inline static error_t RealMainP$SoftwareInit$init(void ){
#line 51
  unsigned char result;
#line 51

#line 51
  result = /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC$1$Init$init();
#line 51
  result = ecombine(result, At45dbP$Init$init());
#line 51
  result = ecombine(result, UniqueReceiveP$Init$init());
#line 51
  result = ecombine(result, UniqueSendP$Init$init());
#line 51
  result = ecombine(result, RandomMlcgC$Init$init());
#line 51
  result = ecombine(result, CC2420ReceiveP$Init$init());
#line 51
  result = ecombine(result, CC2420TransmitP$Init$init());
#line 51
  result = ecombine(result, NoInitC$Init$init());
#line 51
  result = ecombine(result, /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$Init$init());
#line 51
  result = ecombine(result, StateImplP$Init$init());
#line 51
  result = ecombine(result, CC2420ControlP$Init$init());
#line 51
  result = ecombine(result, PutcharP$Init$init());
#line 51
  result = ecombine(result, HplAtm128UartP$Uart0Init$init());
#line 51
  result = ecombine(result, HplAtm128UartP$Uart1Init$init());
#line 51
  result = ecombine(result, /*Atm128Uart0C.UartP*/Atm128UartP$0$Init$init());
#line 51
  result = ecombine(result, SerialP$Init$init());
#line 51
  result = ecombine(result, PrintfP$Init$init());
#line 51
  result = ecombine(result, /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Init$init());
#line 51

#line 51
  return result;
#line 51
}
#line 51
# 47 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP$2$IO$clr(void )
#line 47
{
#line 47
  * (volatile uint8_t * )59U &= ~(1 << 2);
}

# 30 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void LedsP$Led0$clr(void ){
#line 30
  /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP$2$IO$clr();
#line 30
}
#line 30
# 63 "/cygdrive/c/Dropbox/tinyos-2.x/tos/system/LedsP.nc"
static inline void LedsP$Leds$led0On(void )
#line 63
{
  LedsP$Led0$clr();
  ;
#line 65
  ;
}

# 45 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/Leds.nc"
inline static void BlinkToRadioC$Leds$led0On(void ){
#line 45
  LedsP$Leds$led0On();
#line 45
}
#line 45
# 38 "BlinkToRadioC.nc"
static inline void BlinkToRadioC$Boot$booted(void )
#line 38
{
  BlinkToRadioC$Leds$led0On();
  BlinkToRadioC$BlockRead$read(BlinkToRadioC$ReadLogAddrs, &BlinkToRadioC$ReadLogMsg, sizeof(BlinkToRadioMsg ));
}

# 56 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static error_t SerialP$startDoneTask$postTask(void ){
#line 56
  unsigned char result;
#line 56

#line 56
  result = SchedulerBasicP$TaskBasic$postTask(SerialP$startDoneTask);
#line 56

#line 56
  return result;
#line 56
}
#line 56
# 342 "/cygdrive/c/Dropbox/tinyos-2.x/tos/lib/serial/SerialP.nc"
static inline error_t SerialP$SplitControl$start(void )
#line 342
{
  SerialP$startDoneTask$postTask();
  return SUCCESS;
}

# 83 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/SplitControl.nc"
inline static error_t SerialStartP$SerialControl$start(void ){
#line 83
  unsigned char result;
#line 83

#line 83
  result = SerialP$SplitControl$start();
#line 83

#line 83
  return result;
#line 83
}
#line 83
# 44 "/cygdrive/c/Dropbox/tinyos-2.x/tos/lib/printf/SerialStartP.nc"
static inline void SerialStartP$Boot$booted(void )
#line 44
{
  SerialStartP$SerialControl$start();
}

# 49 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/Boot.nc"
inline static void RealMainP$Boot$booted(void ){
#line 49
  SerialStartP$Boot$booted();
#line 49
  BlinkToRadioC$Boot$booted();
#line 49
}
#line 49
# 155 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer0AsyncP.nc"
static inline mcu_power_t HplAtm128Timer0AsyncP$McuPowerOverride$lowestState(void )
#line 155
{
  uint8_t diff;


  if (* (volatile uint8_t *)(0x37 + 0x20) & ((1 << 1) | (1 << 0))) {




      while (* (volatile uint8_t *)(0x30 + 0x20) & (((1 << 2) | (1 << 1)) | (1 << 0))) 
        ;
      diff = * (volatile uint8_t *)(0x31 + 0x20) - * (volatile uint8_t *)(0x32 + 0x20);
      if (diff < EXT_STANDBY_T0_THRESHOLD || 
      * (volatile uint8_t *)(0x32 + 0x20) > 256 - EXT_STANDBY_T0_THRESHOLD) {
        return ATM128_POWER_EXT_STANDBY;
        }
#line 170
      return ATM128_POWER_SAVE;
    }
  else {
      return ATM128_POWER_DOWN;
    }
}

# 54 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/McuPowerOverride.nc"
inline static mcu_power_t McuSleepC$McuPowerOverride$lowestState(void ){
#line 54
  unsigned char result;
#line 54

#line 54
  result = HplAtm128Timer0AsyncP$McuPowerOverride$lowestState();
#line 54

#line 54
  return result;
#line 54
}
#line 54
# 66 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/McuSleepC.nc"
static inline mcu_power_t McuSleepC$getPowerState(void )
#line 66
{





  if (* (volatile uint8_t *)(0x37 + 0x20) & ~((((1 << 1) | (1 << 0)) | (1 << 2)) | (1 << 6)) || 
  * (volatile uint8_t *)0x7D & ~(1 << 2)) {
      return ATM128_POWER_IDLE;
    }
  else {
    if (* (volatile uint8_t *)(uint16_t )& * (volatile uint8_t *)(0x0D + 0x20) & (1 << 6)) {
        return ATM128_POWER_IDLE;
      }
    else {
      if ((* (volatile uint8_t *)(0x0A + 0x20) | * (volatile uint8_t *)0x9A) & ((1 << 6) | (1 << 7))) {
          return ATM128_POWER_IDLE;
        }
      else {
        if (* (volatile uint8_t *)(uint16_t )& * (volatile uint8_t *)0x74 & (1 << 2)) {
            return ATM128_POWER_IDLE;
          }
        else {
          if (* (volatile uint8_t *)(uint16_t )& * (volatile uint8_t *)(0x06 + 0x20) & (1 << 7)) {
              return ATM128_POWER_ADC_NR;
            }
          else {
              return ATM128_POWER_DOWN;
            }
          }
        }
      }
    }
}

# 134 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/atm128hardware.h"
static inline  mcu_power_t mcombine(mcu_power_t m1, mcu_power_t m2)
#line 134
{
  return m1 < m2 ? m1 : m2;
}

# 97 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/McuSleepC.nc"
static inline void McuSleepC$McuSleep$sleep(void )
#line 97
{
  uint8_t powerState;

  powerState = mcombine(McuSleepC$getPowerState(), McuSleepC$McuPowerOverride$lowestState());
  * (volatile uint8_t *)(0x35 + 0x20) = ((
  * (volatile uint8_t *)(0x35 + 0x20) & 0xe3) | (1 << 5)) | __extension__ ({
#line 102
    uint16_t __addr16 = (uint16_t )(uint16_t )&McuSleepC$atm128PowerBits[powerState];
#line 102
    uint8_t __result;

#line 102
     __asm ("lpm""\n\t""mov %0, r0""\n\t" : "=r"(__result) : "z"(__addr16) : "r0");__result;
  }
  );
#line 104
   __asm volatile ("sei");

   __asm volatile ("sleep" :  :  : "memory");
   __asm volatile ("cli");}

# 59 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/McuSleep.nc"
inline static void SchedulerBasicP$McuSleep$sleep(void ){
#line 59
  McuSleepC$McuSleep$sleep();
#line 59
}
#line 59
# 67 "/cygdrive/c/Dropbox/tinyos-2.x/tos/system/SchedulerBasicP.nc"
static __inline uint8_t SchedulerBasicP$popTask(void )
{
  if (SchedulerBasicP$m_head != SchedulerBasicP$NO_TASK) 
    {
      uint8_t id = SchedulerBasicP$m_head;

#line 72
      SchedulerBasicP$m_head = SchedulerBasicP$m_next[SchedulerBasicP$m_head];
      if (SchedulerBasicP$m_head == SchedulerBasicP$NO_TASK) 
        {
          SchedulerBasicP$m_tail = SchedulerBasicP$NO_TASK;
        }
      SchedulerBasicP$m_next[id] = SchedulerBasicP$NO_TASK;
      return id;
    }
  else 
    {
      return SchedulerBasicP$NO_TASK;
    }
}

#line 138
static inline void SchedulerBasicP$Scheduler$taskLoop(void )
{
  for (; ; ) 
    {
      uint8_t nextTask;

      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
        {
          while ((nextTask = SchedulerBasicP$popTask()) == SchedulerBasicP$NO_TASK) 
            {
              SchedulerBasicP$McuSleep$sleep();
            }
        }
#line 150
        __nesc_atomic_end(__nesc_atomic); }
      SchedulerBasicP$TaskBasic$runTask(nextTask);
    }
}

# 61 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/Scheduler.nc"
inline static void RealMainP$Scheduler$taskLoop(void ){
#line 61
  SchedulerBasicP$Scheduler$taskLoop();
#line 61
}
#line 61
# 140 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer0AsyncP.nc"
static __inline void HplAtm128Timer0AsyncP$stabiliseTimer0(void )
#line 140
{
  * (volatile uint8_t *)(0x33 + 0x20) = * (volatile uint8_t *)(0x33 + 0x20);
  while (* (volatile uint8_t *)(0x30 + 0x20) & (1 << 0)) 
    ;
}

# 47 "/cygdrive/c/Dropbox/tinyos-2.x/tos/lib/timer/CounterToLocalTimeC.nc"
static inline void /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC$0$Counter$overflow(void )
{
}

# 71 "/cygdrive/c/Dropbox/tinyos-2.x/tos/lib/timer/Counter.nc"
inline static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Counter$overflow(void ){
#line 71
  /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC$0$Counter$overflow();
#line 71
}
#line 71
# 82 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/atm128hardware.h"
static __inline  void __nesc_enable_interrupt()
#line 82
{
   __asm volatile ("sei");}

# 132 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer0AsyncP.nc"
static inline uint8_t HplAtm128Timer0AsyncP$Compare$get(void )
#line 132
{
#line 132
  return * (volatile uint8_t *)(0x31 + 0x20);
}

# 39 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Compare$size_type /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Compare$get(void ){
#line 39
  unsigned char result;
#line 39

#line 39
  result = HplAtm128Timer0AsyncP$Compare$get();
#line 39

#line 39
  return result;
#line 39
}
#line 39
# 149 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/timer/Atm128AlarmAsyncP.nc"
static inline void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Compare$fired(void )
#line 149
{
  int overflowed;


  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$base += /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Compare$get() + 1U;
  overflowed = !/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$base;
  __nesc_enable_interrupt();
  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$setInterrupt();
  if (overflowed) {
    /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Counter$overflow();
    }
}

# 49 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static void HplAtm128Timer0AsyncP$Compare$fired(void ){
#line 49
  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Compare$fired();
#line 49
}
#line 49
# 230 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/timer/Atm128AlarmAsyncP.nc"
static inline void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Timer$overflow(void )
#line 230
{
}

# 61 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
inline static void HplAtm128Timer0AsyncP$Timer$overflow(void ){
#line 61
  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Timer$overflow();
#line 61
}
#line 61
# 387 "/cygdrive/c/Dropbox/tinyos-2.x/tos/lib/serial/SerialP.nc"
static inline void SerialP$SerialFrameComm$dataReceived(uint8_t data)
#line 387
{
  SerialP$rx_state_machine(FALSE, data);
}

# 83 "/cygdrive/c/Dropbox/tinyos-2.x/tos/lib/serial/SerialFrameComm.nc"
inline static void HdlcTranslateC$SerialFrameComm$dataReceived(uint8_t data){
#line 83
  SerialP$SerialFrameComm$dataReceived(data);
#line 83
}
#line 83
# 384 "/cygdrive/c/Dropbox/tinyos-2.x/tos/lib/serial/SerialP.nc"
static inline void SerialP$SerialFrameComm$delimiterReceived(void )
#line 384
{
  SerialP$rx_state_machine(TRUE, 0);
}

# 74 "/cygdrive/c/Dropbox/tinyos-2.x/tos/lib/serial/SerialFrameComm.nc"
inline static void HdlcTranslateC$SerialFrameComm$delimiterReceived(void ){
#line 74
  SerialP$SerialFrameComm$delimiterReceived();
#line 74
}
#line 74
# 61 "/cygdrive/c/Dropbox/tinyos-2.x/tos/lib/serial/HdlcTranslateC.nc"
static inline void HdlcTranslateC$UartStream$receivedByte(uint8_t data)
#line 61
{






  if (data == HDLC_FLAG_BYTE) {

      HdlcTranslateC$SerialFrameComm$delimiterReceived();
      return;
    }
  else {
#line 73
    if (data == HDLC_CTLESC_BYTE) {

        HdlcTranslateC$state.receiveEscape = 1;
        return;
      }
    else {
#line 78
      if (HdlcTranslateC$state.receiveEscape) {

          HdlcTranslateC$state.receiveEscape = 0;
          data = data ^ 0x20;
        }
      }
    }
#line 83
  HdlcTranslateC$SerialFrameComm$dataReceived(data);
}

# 79 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/UartStream.nc"
inline static void /*Atm128Uart0C.UartP*/Atm128UartP$0$UartStream$receivedByte(uint8_t byte){
#line 79
  HdlcTranslateC$UartStream$receivedByte(byte);
#line 79
}
#line 79
# 116 "/cygdrive/c/Dropbox/tinyos-2.x/tos/lib/serial/HdlcTranslateC.nc"
static inline void HdlcTranslateC$UartStream$receiveDone(uint8_t *buf, uint16_t len, error_t error)
#line 116
{
}

# 99 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/UartStream.nc"
inline static void /*Atm128Uart0C.UartP*/Atm128UartP$0$UartStream$receiveDone(uint8_t * buf, uint16_t len, error_t error){
#line 99
  HdlcTranslateC$UartStream$receiveDone(buf, len, error);
#line 99
}
#line 99
# 133 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/Atm128UartP.nc"
static inline void /*Atm128Uart0C.UartP*/Atm128UartP$0$HplUart$rxDone(uint8_t data)
#line 133
{

  if (/*Atm128Uart0C.UartP*/Atm128UartP$0$m_rx_buf) {
      /*Atm128Uart0C.UartP*/Atm128UartP$0$m_rx_buf[/*Atm128Uart0C.UartP*/Atm128UartP$0$m_rx_pos++] = data;
      if (/*Atm128Uart0C.UartP*/Atm128UartP$0$m_rx_pos >= /*Atm128Uart0C.UartP*/Atm128UartP$0$m_rx_len) {
          uint8_t *buf = /*Atm128Uart0C.UartP*/Atm128UartP$0$m_rx_buf;

          /* atomic removed: atomic calls only */
#line 139
          {
            /*Atm128Uart0C.UartP*/Atm128UartP$0$m_rx_buf = (void *)0;
            if (/*Atm128Uart0C.UartP*/Atm128UartP$0$m_rx_intr != 3) {
                /*Atm128Uart0C.UartP*/Atm128UartP$0$HplUart$disableRxIntr();
                /*Atm128Uart0C.UartP*/Atm128UartP$0$m_rx_intr = 0;
              }
          }
          /*Atm128Uart0C.UartP*/Atm128UartP$0$UartStream$receiveDone(buf, /*Atm128Uart0C.UartP*/Atm128UartP$0$m_rx_len, SUCCESS);
        }
    }
  else {
      /*Atm128Uart0C.UartP*/Atm128UartP$0$UartStream$receivedByte(data);
    }
}

# 49 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/HplAtm128Uart.nc"
inline static void HplAtm128UartP$HplUart0$rxDone(uint8_t data){
#line 49
  /*Atm128Uart0C.UartP*/Atm128UartP$0$HplUart$rxDone(data);
#line 49
}
#line 49
# 391 "/cygdrive/c/Dropbox/tinyos-2.x/tos/lib/serial/SerialP.nc"
static inline bool SerialP$valid_rx_proto(uint8_t proto)
#line 391
{
  switch (proto) {
      case SERIAL_PROTO_PACKET_ACK: 
        return TRUE;
      case SERIAL_PROTO_ACK: 
        case SERIAL_PROTO_PACKET_NOACK: 
          default: 
            return FALSE;
    }
}

# 192 "/cygdrive/c/Dropbox/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$lockCurrentBuffer(void )
#line 192
{
  if (/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$receiveState.which) {
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$receiveState.bufOneLocked = 1;
    }
  else {
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$receiveState.bufZeroLocked = 1;
    }
}

#line 188
static inline bool /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$isCurrentBufferLocked(void )
#line 188
{
  return /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$receiveState.which ? /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$receiveState.bufZeroLocked : /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$receiveState.bufOneLocked;
}

#line 215
static inline error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$ReceiveBytePacket$startPacket(void )
#line 215
{
  error_t result = SUCCESS;

  /* atomic removed: atomic calls only */
#line 217
  {
    if (!/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$isCurrentBufferLocked()) {


        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$lockCurrentBuffer();
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$receiveState.state = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$RECV_STATE_BEGIN;
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$recvIndex = 0;
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$recvType = TOS_SERIAL_UNKNOWN_ID;
      }
    else {
        result = EBUSY;
      }
  }
  return result;
}

# 51 "/cygdrive/c/Dropbox/tinyos-2.x/tos/lib/serial/ReceiveBytePacket.nc"
inline static error_t SerialP$ReceiveBytePacket$startPacket(void ){
#line 51
  unsigned char result;
#line 51

#line 51
  result = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$ReceiveBytePacket$startPacket();
#line 51

#line 51
  return result;
#line 51
}
#line 51
# 309 "/cygdrive/c/Dropbox/tinyos-2.x/tos/lib/serial/SerialP.nc"
static __inline uint16_t SerialP$rx_current_crc(void )
#line 309
{
  uint16_t crc;
  uint8_t tmp = SerialP$rxBuf.writePtr;

#line 312
  tmp = tmp == 0 ? SerialP$RX_DATA_BUFFER_SIZE : tmp - 1;
  crc = SerialP$rxBuf.buf[tmp] & 0x00ff;
  crc = (crc << 8) & 0xFF00;
  tmp = tmp == 0 ? SerialP$RX_DATA_BUFFER_SIZE : tmp - 1;
  crc |= SerialP$rxBuf.buf[tmp] & 0x00FF;
  return crc;
}

# 69 "/cygdrive/c/Dropbox/tinyos-2.x/tos/lib/serial/ReceiveBytePacket.nc"
inline static void SerialP$ReceiveBytePacket$endPacket(error_t result){
#line 69
  /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$ReceiveBytePacket$endPacket(result);
#line 69
}
#line 69
# 210 "/cygdrive/c/Dropbox/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$receiveBufferSwap(void )
#line 210
{
  /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$receiveState.which = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$receiveState.which ? 0 : 1;
  /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$receiveBuffer = (uint8_t *)/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$messagePtrs[/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$receiveState.which];
}

# 56 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$receiveTask$postTask(void ){
#line 56
  unsigned char result;
#line 56

#line 56
  result = SchedulerBasicP$TaskBasic$postTask(/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$receiveTask);
#line 56

#line 56
  return result;
#line 56
}
#line 56
# 232 "/cygdrive/c/Dropbox/tinyos-2.x/tos/lib/serial/SerialP.nc"
static __inline bool SerialP$ack_queue_is_full(void )
#line 232
{
  uint8_t tmp;
#line 233
  uint8_t tmp2;

  /* atomic removed: atomic calls only */
#line 234
  {
    tmp = SerialP$ackQ.writePtr;
    tmp2 = SerialP$ackQ.readPtr;
  }
  if (++tmp > SerialP$ACK_QUEUE_SIZE) {
#line 238
    tmp = 0;
    }
#line 239
  return tmp == tmp2;
}







static __inline void SerialP$ack_queue_push(uint8_t token)
#line 248
{
  if (!SerialP$ack_queue_is_full()) {
      /* atomic removed: atomic calls only */
#line 250
      {
        SerialP$ackQ.buf[SerialP$ackQ.writePtr] = token;
        if (++ SerialP$ackQ.writePtr > SerialP$ACK_QUEUE_SIZE) {
#line 252
          SerialP$ackQ.writePtr = 0;
          }
      }
#line 254
      SerialP$MaybeScheduleTx();
    }
}

# 233 "/cygdrive/c/Dropbox/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$ReceiveBytePacket$byteReceived(uint8_t b)
#line 233
{
  /* atomic removed: atomic calls only */
#line 234
  {
    switch (/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$receiveState.state) {
        case /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$RECV_STATE_BEGIN: 
          /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$receiveState.state = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$RECV_STATE_DATA;
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$recvIndex = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$PacketInfo$offset(b);
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$recvType = b;
        break;

        case /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$RECV_STATE_DATA: 
          if (/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$recvIndex < sizeof(message_t )) {
              /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$receiveBuffer[/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$recvIndex] = b;
              /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$recvIndex++;
            }
          else {
            }




        break;

        case /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$RECV_STATE_IDLE: 
          default: 
#line 255
            ;
      }
  }
}

# 58 "/cygdrive/c/Dropbox/tinyos-2.x/tos/lib/serial/ReceiveBytePacket.nc"
inline static void SerialP$ReceiveBytePacket$byteReceived(uint8_t data){
#line 58
  /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$ReceiveBytePacket$byteReceived(data);
#line 58
}
#line 58
# 299 "/cygdrive/c/Dropbox/tinyos-2.x/tos/lib/serial/SerialP.nc"
static __inline uint8_t SerialP$rx_buffer_top(void )
#line 299
{
  uint8_t tmp = SerialP$rxBuf.buf[SerialP$rxBuf.readPtr];

#line 301
  return tmp;
}

#line 303
static __inline uint8_t SerialP$rx_buffer_pop(void )
#line 303
{
  uint8_t tmp = SerialP$rxBuf.buf[SerialP$rxBuf.readPtr];

#line 305
  if (++ SerialP$rxBuf.readPtr > SerialP$RX_DATA_BUFFER_SIZE) {
#line 305
    SerialP$rxBuf.readPtr = 0;
    }
#line 306
  return tmp;
}

#line 295
static __inline void SerialP$rx_buffer_push(uint8_t data)
#line 295
{
  SerialP$rxBuf.buf[SerialP$rxBuf.writePtr] = data;
  if (++ SerialP$rxBuf.writePtr > SerialP$RX_DATA_BUFFER_SIZE) {
#line 297
    SerialP$rxBuf.writePtr = 0;
    }
}

# 55 "/cygdrive/c/Dropbox/tinyos-2.x/tos/lib/serial/HdlcTranslateC.nc"
static inline void HdlcTranslateC$SerialFrameComm$resetReceive(void )
#line 55
{
  HdlcTranslateC$state.receiveEscape = 0;
}

# 68 "/cygdrive/c/Dropbox/tinyos-2.x/tos/lib/serial/SerialFrameComm.nc"
inline static void SerialP$SerialFrameComm$resetReceive(void ){
#line 68
  HdlcTranslateC$SerialFrameComm$resetReceive();
#line 68
}
#line 68
#line 54
inline static error_t SerialP$SerialFrameComm$putData(uint8_t data){
#line 54
  unsigned char result;
#line 54

#line 54
  result = HdlcTranslateC$SerialFrameComm$putData(data);
#line 54

#line 54
  return result;
#line 54
}
#line 54
# 513 "/cygdrive/c/Dropbox/tinyos-2.x/tos/lib/serial/SerialP.nc"
static inline error_t SerialP$SendBytePacket$completeSend(void )
#line 513
{
  bool ret = FAIL;

  /* atomic removed: atomic calls only */
#line 515
  {
    SerialP$txBuf[SerialP$TX_DATA_INDEX].state = SerialP$BUFFER_COMPLETE;
    ret = SUCCESS;
  }
  return ret;
}

# 60 "/cygdrive/c/Dropbox/tinyos-2.x/tos/lib/serial/SendBytePacket.nc"
inline static error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$SendBytePacket$completeSend(void ){
#line 60
  unsigned char result;
#line 60

#line 60
  result = SerialP$SendBytePacket$completeSend();
#line 60

#line 60
  return result;
#line 60
}
#line 60
# 167 "/cygdrive/c/Dropbox/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
static inline uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$SendBytePacket$nextByte(void )
#line 167
{
  uint8_t b;
  uint8_t indx;

  /* atomic removed: atomic calls only */
#line 170
  {
    b = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$sendBuffer[/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$sendIndex];
    /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$sendIndex++;
    indx = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$sendIndex;
  }
  if (indx > /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$sendLen) {
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$SendBytePacket$completeSend();
      return 0;
    }
  else {
      return b;
    }
}

# 70 "/cygdrive/c/Dropbox/tinyos-2.x/tos/lib/serial/SendBytePacket.nc"
inline static uint8_t SerialP$SendBytePacket$nextByte(void ){
#line 70
  unsigned char result;
#line 70

#line 70
  result = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$SendBytePacket$nextByte();
#line 70

#line 70
  return result;
#line 70
}
#line 70
# 642 "/cygdrive/c/Dropbox/tinyos-2.x/tos/lib/serial/SerialP.nc"
static inline void SerialP$SerialFrameComm$putDone(void )
#line 642
{
  {
    error_t txResult = SUCCESS;

    switch (SerialP$txState) {

        case SerialP$TXSTATE_PROTO: 

          txResult = SerialP$SerialFrameComm$putData(SerialP$txProto);

        SerialP$txState = SerialP$TXSTATE_INFO;



        SerialP$txCRC = crcByte(SerialP$txCRC, SerialP$txProto);
        break;

        case SerialP$TXSTATE_SEQNO: 
          txResult = SerialP$SerialFrameComm$putData(SerialP$txSeqno);
        SerialP$txState = SerialP$TXSTATE_INFO;
        SerialP$txCRC = crcByte(SerialP$txCRC, SerialP$txSeqno);
        break;

        case SerialP$TXSTATE_INFO: 
          { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 666
            {
              txResult = SerialP$SerialFrameComm$putData(SerialP$txBuf[SerialP$txIndex].buf);
              SerialP$txCRC = crcByte(SerialP$txCRC, SerialP$txBuf[SerialP$txIndex].buf);
              ++SerialP$txByteCnt;

              if (SerialP$txIndex == SerialP$TX_DATA_INDEX) {
                  uint8_t nextByte;

#line 673
                  nextByte = SerialP$SendBytePacket$nextByte();
                  if (SerialP$txBuf[SerialP$txIndex].state == SerialP$BUFFER_COMPLETE || SerialP$txByteCnt >= SerialP$SERIAL_MTU) {
                      SerialP$txState = SerialP$TXSTATE_FCS1;
                    }
                  else {
                      SerialP$txBuf[SerialP$txIndex].buf = nextByte;
                    }
                }
              else {
                  SerialP$txState = SerialP$TXSTATE_FCS1;
                }
            }
#line 684
            __nesc_atomic_end(__nesc_atomic); }
        break;

        case SerialP$TXSTATE_FCS1: 
          txResult = SerialP$SerialFrameComm$putData(SerialP$txCRC & 0xff);
        SerialP$txState = SerialP$TXSTATE_FCS2;
        break;

        case SerialP$TXSTATE_FCS2: 
          txResult = SerialP$SerialFrameComm$putData((SerialP$txCRC >> 8) & 0xff);
        SerialP$txState = SerialP$TXSTATE_ENDFLAG;
        break;

        case SerialP$TXSTATE_ENDFLAG: 
          txResult = SerialP$SerialFrameComm$putDelimiter();
        SerialP$txState = SerialP$TXSTATE_ENDWAIT;
        break;

        case SerialP$TXSTATE_ENDWAIT: 
          SerialP$txState = SerialP$TXSTATE_FINISH;
        case SerialP$TXSTATE_FINISH: 
          SerialP$MaybeScheduleTx();
        break;
        case SerialP$TXSTATE_ERROR: 
          default: 
            txResult = FAIL;
        break;
      }

    if (txResult != SUCCESS) {
        SerialP$txState = SerialP$TXSTATE_ERROR;
        SerialP$MaybeScheduleTx();
      }
  }
}

# 89 "/cygdrive/c/Dropbox/tinyos-2.x/tos/lib/serial/SerialFrameComm.nc"
inline static void HdlcTranslateC$SerialFrameComm$putDone(void ){
#line 89
  SerialP$SerialFrameComm$putDone();
#line 89
}
#line 89
# 48 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/UartStream.nc"
inline static error_t HdlcTranslateC$UartStream$send(uint8_t * buf, uint16_t len){
#line 48
  unsigned char result;
#line 48

#line 48
  result = /*Atm128Uart0C.UartP*/Atm128UartP$0$UartStream$send(buf, len);
#line 48

#line 48
  return result;
#line 48
}
#line 48
# 104 "/cygdrive/c/Dropbox/tinyos-2.x/tos/lib/serial/HdlcTranslateC.nc"
static inline void HdlcTranslateC$UartStream$sendDone(uint8_t *buf, uint16_t len, 
error_t error)
#line 105
{
  if (HdlcTranslateC$state.sendEscape) {
      HdlcTranslateC$state.sendEscape = 0;
      HdlcTranslateC$m_data = HdlcTranslateC$txTemp;
      HdlcTranslateC$UartStream$send(&HdlcTranslateC$m_data, 1);
    }
  else {
      HdlcTranslateC$SerialFrameComm$putDone();
    }
}

# 57 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/UartStream.nc"
inline static void /*Atm128Uart0C.UartP*/Atm128UartP$0$UartStream$sendDone(uint8_t * buf, uint16_t len, error_t error){
#line 57
  HdlcTranslateC$UartStream$sendDone(buf, len, error);
#line 57
}
#line 57
# 46 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/HplAtm128Uart.nc"
inline static void /*Atm128Uart0C.UartP*/Atm128UartP$0$HplUart$tx(uint8_t data){
#line 46
  HplAtm128UartP$HplUart0$tx(data);
#line 46
}
#line 46
# 173 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/Atm128UartP.nc"
static inline void /*Atm128Uart0C.UartP*/Atm128UartP$0$HplUart$txDone(void )
#line 173
{

  if (/*Atm128Uart0C.UartP*/Atm128UartP$0$m_tx_pos < /*Atm128Uart0C.UartP*/Atm128UartP$0$m_tx_len) {
      /*Atm128Uart0C.UartP*/Atm128UartP$0$HplUart$tx(/*Atm128Uart0C.UartP*/Atm128UartP$0$m_tx_buf[/*Atm128Uart0C.UartP*/Atm128UartP$0$m_tx_pos++]);
    }
  else {
      uint8_t *buf = /*Atm128Uart0C.UartP*/Atm128UartP$0$m_tx_buf;

#line 180
      /*Atm128Uart0C.UartP*/Atm128UartP$0$m_tx_buf = (void *)0;
      /*Atm128Uart0C.UartP*/Atm128UartP$0$m_tx_intr = 0;
      /*Atm128Uart0C.UartP*/Atm128UartP$0$HplUart$disableTxIntr();
      /*Atm128Uart0C.UartP*/Atm128UartP$0$UartStream$sendDone(buf, /*Atm128Uart0C.UartP*/Atm128UartP$0$m_tx_len, SUCCESS);
    }
}

# 47 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/HplAtm128Uart.nc"
inline static void HplAtm128UartP$HplUart0$txDone(void ){
#line 47
  /*Atm128Uart0C.UartP*/Atm128UartP$0$HplUart$txDone();
#line 47
}
#line 47
# 277 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/HplAtm128UartP.nc"
static inline void HplAtm128UartP$HplUart1$default$rxDone(uint8_t data)
#line 277
{
}

# 49 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/HplAtm128Uart.nc"
inline static void HplAtm128UartP$HplUart1$rxDone(uint8_t data){
#line 49
  HplAtm128UartP$HplUart1$default$rxDone(data);
#line 49
}
#line 49
# 276 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/HplAtm128UartP.nc"
static inline void HplAtm128UartP$HplUart1$default$txDone(void )
#line 276
{
}

# 47 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/HplAtm128Uart.nc"
inline static void HplAtm128UartP$HplUart1$txDone(void ){
#line 47
  HplAtm128UartP$HplUart1$default$txDone();
#line 47
}
#line 47
# 188 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer3P.nc"
static inline void HplAtm128Timer3P$CompareA$default$fired(void )
#line 188
{
}

# 49 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static void HplAtm128Timer3P$CompareA$fired(void ){
#line 49
  HplAtm128Timer3P$CompareA$default$fired();
#line 49
}
#line 49
# 192 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer3P.nc"
static inline void HplAtm128Timer3P$CompareB$default$fired(void )
#line 192
{
}

# 49 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static void HplAtm128Timer3P$CompareB$fired(void ){
#line 49
  HplAtm128Timer3P$CompareB$default$fired();
#line 49
}
#line 49
# 196 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer3P.nc"
static inline void HplAtm128Timer3P$CompareC$default$fired(void )
#line 196
{
}

# 49 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static void HplAtm128Timer3P$CompareC$fired(void ){
#line 49
  HplAtm128Timer3P$CompareC$default$fired();
#line 49
}
#line 49
# 200 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer3P.nc"
static inline void HplAtm128Timer3P$Capture$default$captured(uint16_t time)
#line 200
{
}

# 51 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Capture.nc"
inline static void HplAtm128Timer3P$Capture$captured(HplAtm128Timer3P$Capture$size_type t){
#line 51
  HplAtm128Timer3P$Capture$default$captured(t);
#line 51
}
#line 51
# 47 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer3P.nc"
static inline uint16_t HplAtm128Timer3P$Timer$get(void )
#line 47
{
#line 47
  return * (volatile uint16_t *)0x88;
}

# 216 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/Atm128UartP.nc"
static inline void /*Atm128Uart0C.UartP*/Atm128UartP$0$Counter$overflow(void )
#line 216
{
}

# 71 "/cygdrive/c/Dropbox/tinyos-2.x/tos/lib/timer/Counter.nc"
inline static void /*CounterMicro32C.Transform32*/TransformCounterC$0$Counter$overflow(void ){
#line 71
  /*Atm128Uart0C.UartP*/Atm128UartP$0$Counter$overflow();
#line 71
}
#line 71
# 122 "/cygdrive/c/Dropbox/tinyos-2.x/tos/lib/timer/TransformCounterC.nc"
static inline void /*CounterMicro32C.Transform32*/TransformCounterC$0$CounterFrom$overflow(void )
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      /*CounterMicro32C.Transform32*/TransformCounterC$0$m_upper++;
      if ((/*CounterMicro32C.Transform32*/TransformCounterC$0$m_upper & /*CounterMicro32C.Transform32*/TransformCounterC$0$OVERFLOW_MASK) == 0) {
        /*CounterMicro32C.Transform32*/TransformCounterC$0$Counter$overflow();
        }
    }
#line 130
    __nesc_atomic_end(__nesc_atomic); }
}

# 71 "/cygdrive/c/Dropbox/tinyos-2.x/tos/lib/timer/Counter.nc"
inline static void /*CounterThree16C.NCounter*/Atm128CounterC$0$Counter$overflow(void ){
#line 71
  /*CounterMicro32C.Transform32*/TransformCounterC$0$CounterFrom$overflow();
#line 71
}
#line 71
# 56 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/timer/Atm128CounterC.nc"
static inline void /*CounterThree16C.NCounter*/Atm128CounterC$0$Timer$overflow(void )
{
  /*CounterThree16C.NCounter*/Atm128CounterC$0$Counter$overflow();
}

# 51 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/timer/Atm128TimerInitC.nc"
static inline void /*InitThreeP.InitThree*/Atm128TimerInitC$0$Timer$overflow(void )
#line 51
{
}

# 61 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
inline static void HplAtm128Timer3P$Timer$overflow(void ){
#line 61
  /*InitThreeP.InitThree*/Atm128TimerInitC$0$Timer$overflow();
#line 61
  /*CounterThree16C.NCounter*/Atm128CounterC$0$Timer$overflow();
#line 61
}
#line 61
# 61 "/cygdrive/c/Dropbox/tinyos-2.x/tos/system/QueueC.nc"
static inline uint8_t /*PrintfC.QueueC*/QueueC$0$Queue$maxSize(void )
#line 61
{
  return 250;
}

#line 57
static inline uint8_t /*PrintfC.QueueC*/QueueC$0$Queue$size(void )
#line 57
{
  return /*PrintfC.QueueC*/QueueC$0$size;
}

#line 97
static inline error_t /*PrintfC.QueueC*/QueueC$0$Queue$enqueue(/*PrintfC.QueueC*/QueueC$0$queue_t newVal)
#line 97
{
  if (/*PrintfC.QueueC*/QueueC$0$Queue$size() < /*PrintfC.QueueC*/QueueC$0$Queue$maxSize()) {
      ;
      /*PrintfC.QueueC*/QueueC$0$queue[/*PrintfC.QueueC*/QueueC$0$tail] = newVal;
      /*PrintfC.QueueC*/QueueC$0$tail++;
      if (/*PrintfC.QueueC*/QueueC$0$tail == 250) {
#line 102
        /*PrintfC.QueueC*/QueueC$0$tail = 0;
        }
#line 103
      /*PrintfC.QueueC*/QueueC$0$size++;
      /*PrintfC.QueueC*/QueueC$0$printQueue();
      return SUCCESS;
    }
  else {
      return FAIL;
    }
}

# 90 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/Queue.nc"
inline static error_t PrintfP$Queue$enqueue(PrintfP$Queue$t  newVal){
#line 90
  unsigned char result;
#line 90

#line 90
  result = /*PrintfC.QueueC*/QueueC$0$Queue$enqueue(newVal);
#line 90

#line 90
  return result;
#line 90
}
#line 90
#line 58
inline static uint8_t PrintfP$Queue$size(void ){
#line 58
  unsigned char result;
#line 58

#line 58
  result = /*PrintfC.QueueC*/QueueC$0$Queue$size();
#line 58

#line 58
  return result;
#line 58
}
#line 58
# 152 "/cygdrive/c/Dropbox/tinyos-2.x/tos/lib/printf/PrintfP.nc"
static inline int PrintfP$Putchar$putchar(int c)
{
  if (PrintfP$state == PrintfP$S_STARTED && PrintfP$Queue$size() >= 250 / 2) {
      PrintfP$state = PrintfP$S_FLUSHING;
      PrintfP$sendNext();
    }
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 158
    {
      if (PrintfP$Queue$enqueue(c) == SUCCESS) 
        {
          int __nesc_temp = 
#line 160
          0;

          {
#line 160
            __nesc_atomic_end(__nesc_atomic); 
#line 160
            return __nesc_temp;
          }
        }
      else 
#line 161
        {
          int __nesc_temp = 
#line 161
          -1;

          {
#line 161
            __nesc_atomic_end(__nesc_atomic); 
#line 161
            return __nesc_temp;
          }
        }
    }
#line 164
    __nesc_atomic_end(__nesc_atomic); }
}

# 49 "/cygdrive/c/Dropbox/tinyos-2.x/tos/lib/printf/Putchar.nc"
inline static int PutcharP$Putchar$putchar(int c){
#line 49
  int result;
#line 49

#line 49
  result = PrintfP$Putchar$putchar(c);
#line 49

#line 49
  return result;
#line 49
}
#line 49
# 78 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/Resource.nc"
inline static error_t CC2420ControlP$SpiResource$request(void ){
#line 78
  unsigned char result;
#line 78

#line 78
  result = CC2420SpiP$Resource$request(/*CC2420ControlC.Spi*/CC2420SpiC$0$CLIENT_ID);
#line 78

#line 78
  return result;
#line 78
}
#line 78
# 171 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/cc2420/control/CC2420ControlP.nc"
static inline error_t CC2420ControlP$Resource$request(void )
#line 171
{
  return CC2420ControlP$SpiResource$request();
}

# 78 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/Resource.nc"
inline static error_t CC2420CsmaP$Resource$request(void ){
#line 78
  unsigned char result;
#line 78

#line 78
  result = CC2420ControlP$Resource$request();
#line 78

#line 78
  return result;
#line 78
}
#line 78
# 204 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/cc2420/csma/CC2420CsmaP.nc"
static inline void CC2420CsmaP$CC2420Power$startVRegDone(void )
#line 204
{
  CC2420CsmaP$Resource$request();
}

# 56 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Power.nc"
inline static void CC2420ControlP$CC2420Power$startVRegDone(void ){
#line 56
  CC2420CsmaP$CC2420Power$startVRegDone();
#line 56
}
#line 56
# 408 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/cc2420/control/CC2420ControlP.nc"
static inline void CC2420ControlP$StartupTimer$fired(void )
#line 408
{
  if (CC2420ControlP$m_state == CC2420ControlP$S_VREG_STARTING) {
      CC2420ControlP$m_state = CC2420ControlP$S_VREG_STARTED;
      CC2420ControlP$RSTN$clr();
      CC2420ControlP$RSTN$set();
      CC2420ControlP$CC2420Power$startVRegDone();
    }
}

# 32 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static bool CC2420TransmitP$CCA$get(void ){
#line 32
  unsigned char result;
#line 32

#line 32
  result = /*HplAtm128GeneralIOC.PortD.Bit6*/HplAtm128GeneralIOPinP$30$IO$get();
#line 32

#line 32
  return result;
#line 32
}
#line 32
# 464 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/cc2420/transmit/CC2420TransmitP.nc"
static inline void CC2420TransmitP$BackoffTimer$fired(void )
#line 464
{
  /* atomic removed: atomic calls only */
#line 465
  {
    switch (CC2420TransmitP$m_state) {

        case CC2420TransmitP$S_SAMPLE_CCA: 


          if (CC2420TransmitP$CCA$get()) {
              CC2420TransmitP$m_state = CC2420TransmitP$S_BEGIN_TRANSMIT;
              CC2420TransmitP$BackoffTimer$start(CC2420_TIME_ACK_TURNAROUND);
            }
          else {
              CC2420TransmitP$congestionBackoff();
            }
        break;

        case CC2420TransmitP$S_BEGIN_TRANSMIT: 
          case CC2420TransmitP$S_CANCEL: 
            if (CC2420TransmitP$acquireSpiResource() == SUCCESS) {
                CC2420TransmitP$attemptSend();
              }
        break;

        case CC2420TransmitP$S_ACK_WAIT: 
          CC2420TransmitP$signalDone(SUCCESS);
        break;

        case CC2420TransmitP$S_SFD: 


          CC2420TransmitP$SFLUSHTX$strobe();
        CC2420TransmitP$CaptureSFD$captureRisingEdge();
        CC2420TransmitP$releaseSpiResource();
        CC2420TransmitP$signalDone(ERETRY);
        break;

        default: 
          break;
      }
  }
}

# 67 "/cygdrive/c/Dropbox/tinyos-2.x/tos/lib/timer/Alarm.nc"
inline static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$Alarm$fired(void ){
#line 67
  CC2420TransmitP$BackoffTimer$fired();
#line 67
  CC2420ControlP$StartupTimer$fired();
#line 67
}
#line 67
# 151 "/cygdrive/c/Dropbox/tinyos-2.x/tos/lib/timer/TransformAlarmC.nc"
static inline void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$AlarmFrom$fired(void )
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      if (/*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$m_dt == 0) 
        {
          /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$Alarm$fired();
        }
      else 
        {
          /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$set_alarm();
        }
    }
#line 163
    __nesc_atomic_end(__nesc_atomic); }
}

# 67 "/cygdrive/c/Dropbox/tinyos-2.x/tos/lib/timer/Alarm.nc"
inline static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$0$Alarm$fired(void ){
#line 67
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$AlarmFrom$fired();
#line 67
}
#line 67
# 110 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/timer/Atm128AlarmC.nc"
static inline void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$0$HplAtm128Compare$fired(void )
#line 110
{
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$0$HplAtm128Compare$stop();
  ;
  __nesc_enable_interrupt();
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$0$Alarm$fired();
}

# 49 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static void HplAtm128Timer1P$CompareA$fired(void ){
#line 49
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$0$HplAtm128Compare$fired();
#line 49
}
#line 49
# 198 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer1P.nc"
static inline void HplAtm128Timer1P$CompareB$default$fired(void )
#line 198
{
}

# 49 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static void HplAtm128Timer1P$CompareB$fired(void ){
#line 49
  HplAtm128Timer1P$CompareB$default$fired();
#line 49
}
#line 49
# 202 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer1P.nc"
static inline void HplAtm128Timer1P$CompareC$default$fired(void )
#line 202
{
}

# 49 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static void HplAtm128Timer1P$CompareC$fired(void ){
#line 49
  HplAtm128Timer1P$CompareC$default$fired();
#line 49
}
#line 49
# 294 "/usr/lib/ncc/nesc_nx.h"
static __inline  uint32_t __nesc_ntoh_uint32(const void * source)
#line 294
{
  const uint8_t *base = source;

#line 296
  return ((((uint32_t )base[0] << 24) | (
  (uint32_t )base[1] << 16)) | (
  (uint32_t )base[2] << 8)) | base[3];
}

# 59 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/PacketTimeStamp.nc"
inline static void CC2420TransmitP$PacketTimeStamp$clear(message_t * msg){
#line 59
  CC2420PacketP$PacketTimeStamp32khz$clear(msg);
#line 59
}
#line 59
# 158 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/cc2420/receive/CC2420ReceiveP.nc"
static inline void CC2420ReceiveP$CC2420Receive$sfd_dropped(void )
#line 158
{
  if (CC2420ReceiveP$m_timestamp_size) {
      CC2420ReceiveP$m_timestamp_size--;
    }
}

# 55 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Receive.nc"
inline static void CC2420TransmitP$CC2420Receive$sfd_dropped(void ){
#line 55
  CC2420ReceiveP$CC2420Receive$sfd_dropped();
#line 55
}
#line 55
# 45 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline bool /*HplAtm128GeneralIOC.PortD.Bit4*/HplAtm128GeneralIOPinP$28$IO$get(void )
#line 45
{
#line 45
  return (* (volatile uint8_t * )48U & (1 << 4)) != 0;
}

# 32 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static bool CC2420TransmitP$SFD$get(void ){
#line 32
  unsigned char result;
#line 32

#line 32
  result = /*HplAtm128GeneralIOC.PortD.Bit4*/HplAtm128GeneralIOPinP$28$IO$get();
#line 32

#line 32
  return result;
#line 32
}
#line 32
# 149 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/cc2420/receive/CC2420ReceiveP.nc"
static inline void CC2420ReceiveP$CC2420Receive$sfd(uint32_t time)
#line 149
{
  if (CC2420ReceiveP$m_timestamp_size < CC2420ReceiveP$TIMESTAMP_QUEUE_SIZE) {
      uint8_t tail = (CC2420ReceiveP$m_timestamp_head + CC2420ReceiveP$m_timestamp_size) % 
      CC2420ReceiveP$TIMESTAMP_QUEUE_SIZE;

#line 153
      CC2420ReceiveP$m_timestamp_queue[tail] = time;
      CC2420ReceiveP$m_timestamp_size++;
    }
}

# 49 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Receive.nc"
inline static void CC2420TransmitP$CC2420Receive$sfd(uint32_t time){
#line 49
  CC2420ReceiveP$CC2420Receive$sfd(time);
#line 49
}
#line 49
# 56 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/timer/Atm128GpioCaptureC.nc"
static inline error_t /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC$0$Capture$captureFallingEdge(void )
#line 56
{
  return /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC$0$enableCapture(FALSE);
}

# 43 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/GpioCapture.nc"
inline static error_t CC2420TransmitP$CaptureSFD$captureFallingEdge(void ){
#line 43
  unsigned char result;
#line 43

#line 43
  result = /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC$0$Capture$captureFallingEdge();
#line 43

#line 43
  return result;
#line 43
}
#line 43
# 67 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/PacketTimeStamp.nc"
inline static void CC2420TransmitP$PacketTimeStamp$set(message_t * msg, CC2420TransmitP$PacketTimeStamp$size_type value){
#line 67
  CC2420PacketP$PacketTimeStamp32khz$set(msg, value);
#line 67
}
#line 67
# 47 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/cc2420/interfaces/PacketTimeSyncOffset.nc"
inline static uint8_t CC2420TransmitP$PacketTimeSyncOffset$get(message_t * msg){
#line 47
  unsigned char result;
#line 47

#line 47
  result = CC2420PacketP$PacketTimeSyncOffset$get(msg);
#line 47

#line 47
  return result;
#line 47
}
#line 47
# 63 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Ram.nc"
inline static cc2420_status_t CC2420TransmitP$TXFIFO_RAM$write(uint8_t offset, uint8_t * data, uint8_t length){
#line 63
  unsigned char result;
#line 63

#line 63
  result = CC2420SpiP$Ram$write(CC2420_RAM_TXFIFO, offset, data, length);
#line 63

#line 63
  return result;
#line 63
}
#line 63
# 158 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/cc2420/packet/CC2420PacketP.nc"
static inline bool CC2420PacketP$PacketTimeSyncOffset$isSet(message_t *msg)
{
  return __nesc_ntoh_int8(CC2420PacketP$CC2420PacketBody$getMetadata(msg)->timesync.data);
}

# 39 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/cc2420/interfaces/PacketTimeSyncOffset.nc"
inline static bool CC2420TransmitP$PacketTimeSyncOffset$isSet(message_t * msg){
#line 39
  unsigned char result;
#line 39

#line 39
  result = CC2420PacketP$PacketTimeSyncOffset$isSet(msg);
#line 39

#line 39
  return result;
#line 39
}
#line 39
# 98 "/cygdrive/c/Dropbox/tinyos-2.x/tos/lib/timer/Alarm.nc"
inline static CC2420TransmitP$BackoffTimer$size_type CC2420TransmitP$BackoffTimer$getNow(void ){
#line 98
  unsigned long result;
#line 98

#line 98
  result = /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$Alarm$getNow();
#line 98

#line 98
  return result;
#line 98
}
#line 98
# 240 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/cc2420/transmit/CC2420TransmitP.nc"
static __inline uint32_t CC2420TransmitP$time16to32(uint16_t time, uint32_t recent_time)
{
  if ((recent_time & 0xFFFF) < time) {
    return ((recent_time - 0x10000UL) & 0xFFFF0000UL) | time;
    }
  else {
#line 245
    return (recent_time & 0xFFFF0000UL) | time;
    }
}

#line 261
static inline void CC2420TransmitP$CaptureSFD$captured(uint16_t time)
#line 261
{
  unsigned char *__nesc_temp44;
#line 262
  uint32_t time32 = CC2420TransmitP$time16to32(time, CC2420TransmitP$BackoffTimer$getNow());

#line 263
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 263
    {
      switch (CC2420TransmitP$m_state) {

          case CC2420TransmitP$S_SFD: 
            CC2420TransmitP$m_state = CC2420TransmitP$S_EFD;
          CC2420TransmitP$sfdHigh = TRUE;
          CC2420TransmitP$CaptureSFD$captureFallingEdge();
          CC2420TransmitP$PacketTimeStamp$set(CC2420TransmitP$m_msg, time32);
          if (CC2420TransmitP$PacketTimeSyncOffset$isSet(CC2420TransmitP$m_msg)) {
              nx_uint8_t *taddr = CC2420TransmitP$m_msg->data + (CC2420TransmitP$PacketTimeSyncOffset$get(CC2420TransmitP$m_msg) - sizeof(cc2420_header_t ));
              timesync_radio_t *timesync = (timesync_radio_t *)taddr;

              (__nesc_temp44 = (*timesync).data, __nesc_hton_uint32(__nesc_temp44, __nesc_ntoh_uint32(__nesc_temp44) - time32));
              CC2420TransmitP$CSN$clr();
              CC2420TransmitP$TXFIFO_RAM$write(CC2420TransmitP$PacketTimeSyncOffset$get(CC2420TransmitP$m_msg), (uint8_t *)timesync, sizeof(timesync_radio_t ));
              CC2420TransmitP$CSN$set();
            }

          if (__nesc_ntoh_leuint16(CC2420TransmitP$CC2420PacketBody$getHeader(CC2420TransmitP$m_msg)->fcf.data) & (1 << IEEE154_FCF_ACK_REQ)) {

              CC2420TransmitP$abortSpiRelease = TRUE;
            }
          CC2420TransmitP$releaseSpiResource();
          CC2420TransmitP$BackoffTimer$stop();


          if (((__nesc_ntoh_leuint16(CC2420TransmitP$CC2420PacketBody$getHeader(CC2420TransmitP$m_msg)->fcf.data) >> IEEE154_FCF_FRAME_TYPE) & 7) == IEEE154_TYPE_DATA) {
              CC2420TransmitP$PacketTimeStamp$set(CC2420TransmitP$m_msg, time32);
            }

          if (CC2420TransmitP$SFD$get()) {
              break;
            }


          case CC2420TransmitP$S_EFD: 
            CC2420TransmitP$sfdHigh = FALSE;
          CC2420TransmitP$CaptureSFD$captureRisingEdge();

          if (__nesc_ntoh_leuint16(CC2420TransmitP$CC2420PacketBody$getHeader(CC2420TransmitP$m_msg)->fcf.data) & (1 << IEEE154_FCF_ACK_REQ)) {
              CC2420TransmitP$m_state = CC2420TransmitP$S_ACK_WAIT;
              CC2420TransmitP$BackoffTimer$start(CC2420_ACK_WAIT_DELAY);
            }
          else 
#line 305
            {
              CC2420TransmitP$signalDone(SUCCESS);
            }

          if (!CC2420TransmitP$SFD$get()) {
              break;
            }


          default: 
            if (!CC2420TransmitP$m_receiving) {
                CC2420TransmitP$sfdHigh = TRUE;
                CC2420TransmitP$CaptureSFD$captureFallingEdge();
                CC2420TransmitP$CC2420Receive$sfd(time32);
                CC2420TransmitP$m_receiving = TRUE;
                CC2420TransmitP$m_prev_time = time;
                if (CC2420TransmitP$SFD$get()) {
                    {
                      __nesc_atomic_end(__nesc_atomic); 
#line 323
                      return;
                    }
                  }
              }
          CC2420TransmitP$sfdHigh = FALSE;
          CC2420TransmitP$CaptureSFD$captureRisingEdge();
          CC2420TransmitP$m_receiving = FALSE;
          if (time - CC2420TransmitP$m_prev_time < 10) {
              CC2420TransmitP$CC2420Receive$sfd_dropped();
              if (CC2420TransmitP$m_msg) {
                CC2420TransmitP$PacketTimeStamp$clear(CC2420TransmitP$m_msg);
                }
            }
#line 335
          break;
        }
    }
#line 337
    __nesc_atomic_end(__nesc_atomic); }
}

# 50 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/GpioCapture.nc"
inline static void /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC$0$Capture$captured(uint16_t time){
#line 50
  CC2420TransmitP$CaptureSFD$captured(time);
#line 50
}
#line 50
# 126 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer1P.nc"
static inline void HplAtm128Timer1P$Capture$reset(void )
#line 126
{
#line 126
  * (volatile uint8_t *)(0x36 + 0x20) = 1 << 5;
}

# 55 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Capture.nc"
inline static void /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC$0$Atm128Capture$reset(void ){
#line 55
  HplAtm128Timer1P$Capture$reset();
#line 55
}
#line 55
# 64 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/timer/Atm128GpioCaptureC.nc"
static inline void /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC$0$Atm128Capture$captured(uint16_t time)
#line 64
{
  /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC$0$Atm128Capture$reset();
  /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC$0$Capture$captured(time);
}

# 51 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Capture.nc"
inline static void HplAtm128Timer1P$Capture$captured(HplAtm128Timer1P$Capture$size_type t){
#line 51
  /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC$0$Atm128Capture$captured(t);
#line 51
}
#line 51
# 117 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/timer/Atm128AlarmC.nc"
static inline void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$0$HplAtm128Timer$overflow(void )
#line 117
{
}

# 51 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/timer/Atm128TimerInitC.nc"
static inline void /*InitOneP.InitOne*/Atm128TimerInitC$1$Timer$overflow(void )
#line 51
{
}

# 166 "/cygdrive/c/Dropbox/tinyos-2.x/tos/lib/timer/TransformAlarmC.nc"
static inline void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$Counter$overflow(void )
{
}

# 47 "/cygdrive/c/Dropbox/tinyos-2.x/tos/lib/timer/CounterToLocalTimeC.nc"
static inline void /*CC2420PacketC.CounterToLocalTimeC*/CounterToLocalTimeC$1$Counter$overflow(void )
{
}

# 71 "/cygdrive/c/Dropbox/tinyos-2.x/tos/lib/timer/Counter.nc"
inline static void /*Counter32khz32C.Transform32*/TransformCounterC$1$Counter$overflow(void ){
#line 71
  /*CC2420PacketC.CounterToLocalTimeC*/CounterToLocalTimeC$1$Counter$overflow();
#line 71
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$Counter$overflow();
#line 71
}
#line 71
# 122 "/cygdrive/c/Dropbox/tinyos-2.x/tos/lib/timer/TransformCounterC.nc"
static inline void /*Counter32khz32C.Transform32*/TransformCounterC$1$CounterFrom$overflow(void )
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      /*Counter32khz32C.Transform32*/TransformCounterC$1$m_upper++;
      if ((/*Counter32khz32C.Transform32*/TransformCounterC$1$m_upper & /*Counter32khz32C.Transform32*/TransformCounterC$1$OVERFLOW_MASK) == 0) {
        /*Counter32khz32C.Transform32*/TransformCounterC$1$Counter$overflow();
        }
    }
#line 130
    __nesc_atomic_end(__nesc_atomic); }
}

# 71 "/cygdrive/c/Dropbox/tinyos-2.x/tos/lib/timer/Counter.nc"
inline static void /*CounterOne16C.NCounter*/Atm128CounterC$1$Counter$overflow(void ){
#line 71
  /*Counter32khz32C.Transform32*/TransformCounterC$1$CounterFrom$overflow();
#line 71
}
#line 71
# 56 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/timer/Atm128CounterC.nc"
static inline void /*CounterOne16C.NCounter*/Atm128CounterC$1$Timer$overflow(void )
{
  /*CounterOne16C.NCounter*/Atm128CounterC$1$Counter$overflow();
}

# 61 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
inline static void HplAtm128Timer1P$Timer$overflow(void ){
#line 61
  /*CounterOne16C.NCounter*/Atm128CounterC$1$Timer$overflow();
#line 61
  /*InitOneP.InitOne*/Atm128TimerInitC$1$Timer$overflow();
#line 61
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$0$HplAtm128Timer$overflow();
#line 61
}
#line 61
# 63 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static inline void /*HplAtm128InterruptC.IntPin0*/HplAtm128InterruptPinP$0$Irq$default$fired(void )
#line 63
{
}

# 64 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
inline static void /*HplAtm128InterruptC.IntPin0*/HplAtm128InterruptPinP$0$Irq$fired(void ){
#line 64
  /*HplAtm128InterruptC.IntPin0*/HplAtm128InterruptPinP$0$Irq$default$fired();
#line 64
}
#line 64
# 61 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static inline void /*HplAtm128InterruptC.IntPin0*/HplAtm128InterruptPinP$0$IrqSignal$fired(void )
#line 61
{
#line 61
  /*HplAtm128InterruptC.IntPin0*/HplAtm128InterruptPinP$0$Irq$fired();
}

# 41 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptSig.nc"
inline static void HplAtm128InterruptSigP$IntSig0$fired(void ){
#line 41
  /*HplAtm128InterruptC.IntPin0*/HplAtm128InterruptPinP$0$IrqSignal$fired();
#line 41
}
#line 41
# 63 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static inline void /*HplAtm128InterruptC.IntPin1*/HplAtm128InterruptPinP$1$Irq$default$fired(void )
#line 63
{
}

# 64 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
inline static void /*HplAtm128InterruptC.IntPin1*/HplAtm128InterruptPinP$1$Irq$fired(void ){
#line 64
  /*HplAtm128InterruptC.IntPin1*/HplAtm128InterruptPinP$1$Irq$default$fired();
#line 64
}
#line 64
# 61 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static inline void /*HplAtm128InterruptC.IntPin1*/HplAtm128InterruptPinP$1$IrqSignal$fired(void )
#line 61
{
#line 61
  /*HplAtm128InterruptC.IntPin1*/HplAtm128InterruptPinP$1$Irq$fired();
}

# 41 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptSig.nc"
inline static void HplAtm128InterruptSigP$IntSig1$fired(void ){
#line 41
  /*HplAtm128InterruptC.IntPin1*/HplAtm128InterruptPinP$1$IrqSignal$fired();
#line 41
}
#line 41
# 64 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
inline static void /*HplAtm128InterruptC.IntPin2*/HplAtm128InterruptPinP$2$Irq$fired(void ){
#line 64
  HplAt45dbIOP$InInterrupt$fired();
#line 64
}
#line 64
# 61 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static inline void /*HplAtm128InterruptC.IntPin2*/HplAtm128InterruptPinP$2$IrqSignal$fired(void )
#line 61
{
#line 61
  /*HplAtm128InterruptC.IntPin2*/HplAtm128InterruptPinP$2$Irq$fired();
}

# 41 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptSig.nc"
inline static void HplAtm128InterruptSigP$IntSig2$fired(void ){
#line 41
  /*HplAtm128InterruptC.IntPin2*/HplAtm128InterruptPinP$2$IrqSignal$fired();
#line 41
}
#line 41
# 63 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static inline void /*HplAtm128InterruptC.IntPin3*/HplAtm128InterruptPinP$3$Irq$default$fired(void )
#line 63
{
}

# 64 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
inline static void /*HplAtm128InterruptC.IntPin3*/HplAtm128InterruptPinP$3$Irq$fired(void ){
#line 64
  /*HplAtm128InterruptC.IntPin3*/HplAtm128InterruptPinP$3$Irq$default$fired();
#line 64
}
#line 64
# 61 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static inline void /*HplAtm128InterruptC.IntPin3*/HplAtm128InterruptPinP$3$IrqSignal$fired(void )
#line 61
{
#line 61
  /*HplAtm128InterruptC.IntPin3*/HplAtm128InterruptPinP$3$Irq$fired();
}

# 41 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptSig.nc"
inline static void HplAtm128InterruptSigP$IntSig3$fired(void ){
#line 41
  /*HplAtm128InterruptC.IntPin3*/HplAtm128InterruptPinP$3$IrqSignal$fired();
#line 41
}
#line 41
# 63 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static inline void /*HplAtm128InterruptC.IntPin4*/HplAtm128InterruptPinP$4$Irq$default$fired(void )
#line 63
{
}

# 64 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
inline static void /*HplAtm128InterruptC.IntPin4*/HplAtm128InterruptPinP$4$Irq$fired(void ){
#line 64
  /*HplAtm128InterruptC.IntPin4*/HplAtm128InterruptPinP$4$Irq$default$fired();
#line 64
}
#line 64
# 61 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static inline void /*HplAtm128InterruptC.IntPin4*/HplAtm128InterruptPinP$4$IrqSignal$fired(void )
#line 61
{
#line 61
  /*HplAtm128InterruptC.IntPin4*/HplAtm128InterruptPinP$4$Irq$fired();
}

# 41 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptSig.nc"
inline static void HplAtm128InterruptSigP$IntSig4$fired(void ){
#line 41
  /*HplAtm128InterruptC.IntPin4*/HplAtm128InterruptPinP$4$IrqSignal$fired();
#line 41
}
#line 41
# 63 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static inline void /*HplAtm128InterruptC.IntPin5*/HplAtm128InterruptPinP$5$Irq$default$fired(void )
#line 63
{
}

# 64 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
inline static void /*HplAtm128InterruptC.IntPin5*/HplAtm128InterruptPinP$5$Irq$fired(void ){
#line 64
  /*HplAtm128InterruptC.IntPin5*/HplAtm128InterruptPinP$5$Irq$default$fired();
#line 64
}
#line 64
# 61 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static inline void /*HplAtm128InterruptC.IntPin5*/HplAtm128InterruptPinP$5$IrqSignal$fired(void )
#line 61
{
#line 61
  /*HplAtm128InterruptC.IntPin5*/HplAtm128InterruptPinP$5$Irq$fired();
}

# 41 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptSig.nc"
inline static void HplAtm128InterruptSigP$IntSig5$fired(void ){
#line 41
  /*HplAtm128InterruptC.IntPin5*/HplAtm128InterruptPinP$5$IrqSignal$fired();
#line 41
}
#line 41
# 175 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/cc2420/receive/CC2420ReceiveP.nc"
static inline void CC2420ReceiveP$InterruptFIFOP$fired(void )
#line 175
{
  if (CC2420ReceiveP$m_state == CC2420ReceiveP$S_STARTED) {
      CC2420ReceiveP$beginReceive();
    }
  else {
      CC2420ReceiveP$m_missed_packets++;
    }
}

# 57 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/GpioInterrupt.nc"
inline static void /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC$0$Interrupt$fired(void ){
#line 57
  CC2420ReceiveP$InterruptFIFOP$fired();
#line 57
}
#line 57
# 38 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/pins/Atm128GpioInterruptC.nc"
static inline void /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC$0$Atm128Interrupt$fired(void )
#line 38
{
  /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC$0$Interrupt$fired();
}

# 64 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
inline static void /*HplAtm128InterruptC.IntPin6*/HplAtm128InterruptPinP$6$Irq$fired(void ){
#line 64
  /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC$0$Atm128Interrupt$fired();
#line 64
}
#line 64
# 61 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static inline void /*HplAtm128InterruptC.IntPin6*/HplAtm128InterruptPinP$6$IrqSignal$fired(void )
#line 61
{
#line 61
  /*HplAtm128InterruptC.IntPin6*/HplAtm128InterruptPinP$6$Irq$fired();
}

# 41 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptSig.nc"
inline static void HplAtm128InterruptSigP$IntSig6$fired(void ){
#line 41
  /*HplAtm128InterruptC.IntPin6*/HplAtm128InterruptPinP$6$IrqSignal$fired();
#line 41
}
#line 41
# 63 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static inline void /*HplAtm128InterruptC.IntPin7*/HplAtm128InterruptPinP$7$Irq$default$fired(void )
#line 63
{
}

# 64 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
inline static void /*HplAtm128InterruptC.IntPin7*/HplAtm128InterruptPinP$7$Irq$fired(void ){
#line 64
  /*HplAtm128InterruptC.IntPin7*/HplAtm128InterruptPinP$7$Irq$default$fired();
#line 64
}
#line 64
# 61 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static inline void /*HplAtm128InterruptC.IntPin7*/HplAtm128InterruptPinP$7$IrqSignal$fired(void )
#line 61
{
#line 61
  /*HplAtm128InterruptC.IntPin7*/HplAtm128InterruptPinP$7$Irq$fired();
}

# 41 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptSig.nc"
inline static void HplAtm128InterruptSigP$IntSig7$fired(void ){
#line 41
  /*HplAtm128InterruptC.IntPin7*/HplAtm128InterruptPinP$7$IrqSignal$fired();
#line 41
}
#line 41
# 98 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/spi/HplAtm128SpiP.nc"
static inline uint8_t HplAtm128SpiP$SPI$read(void )
#line 98
{
#line 98
  return * (volatile uint8_t *)(0x0F + 0x20);
}

# 80 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/spi/Atm128Spi.nc"
inline static uint8_t Atm128SpiP$Spi$read(void ){
#line 80
  unsigned char result;
#line 80

#line 80
  result = HplAtm128SpiP$SPI$read();
#line 80

#line 80
  return result;
#line 80
}
#line 80
#line 96
inline static void Atm128SpiP$Spi$enableInterrupt(bool enabled){
#line 96
  HplAtm128SpiP$SPI$enableInterrupt(enabled);
#line 96
}
#line 96
# 265 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/spi/Atm128SpiP.nc"
static inline void Atm128SpiP$Spi$dataReady(uint8_t data)
#line 265
{
  bool again;

  /* atomic removed: atomic calls only */
#line 268
  {
    if (Atm128SpiP$rxBuffer != (void *)0) {
        Atm128SpiP$rxBuffer[Atm128SpiP$pos] = data;
      }

    Atm128SpiP$pos++;
  }
  Atm128SpiP$Spi$enableInterrupt(FALSE);
  /* atomic removed: atomic calls only */
  {
    again = Atm128SpiP$pos < Atm128SpiP$len;
  }

  if (again) {
      Atm128SpiP$sendNextPart();
    }
  else {
      uint8_t discard;
      uint16_t myLen;
      uint8_t * rx;
      uint8_t * tx;

      /* atomic removed: atomic calls only */
#line 290
      {
        myLen = Atm128SpiP$len;
        rx = Atm128SpiP$rxBuffer;
        tx = Atm128SpiP$txBuffer;
        Atm128SpiP$rxBuffer = (void *)0;
        Atm128SpiP$txBuffer = (void *)0;
        Atm128SpiP$len = 0;
        Atm128SpiP$pos = 0;
      }
      discard = Atm128SpiP$Spi$read();

      Atm128SpiP$SpiPacket$sendDone(tx, rx, myLen, SUCCESS);
    }
}

# 92 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/spi/Atm128Spi.nc"
inline static void HplAtm128SpiP$SPI$dataReady(uint8_t data){
#line 92
  Atm128SpiP$Spi$dataReady(data);
#line 92
}
#line 92
# 52 "/cygdrive/c/Dropbox/tinyos-2.x/tos/system/RealMainP.nc"
  int main(void )
#line 52
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {





      {
      }
#line 60
      ;

      RealMainP$Scheduler$init();





      RealMainP$PlatformInit$init();
      while (RealMainP$Scheduler$runNextTask()) ;





      RealMainP$SoftwareInit$init();
      while (RealMainP$Scheduler$runNextTask()) ;
    }
#line 77
    __nesc_atomic_end(__nesc_atomic); }


  __nesc_enable_interrupt();

  RealMainP$Boot$booted();


  RealMainP$Scheduler$taskLoop();




  return -1;
}

# 123 "/cygdrive/c/Dropbox/tinyos-2.x/tos/system/SchedulerBasicP.nc"
static bool SchedulerBasicP$Scheduler$runNextTask(void )
{
  uint8_t nextTask;

  /* atomic removed: atomic calls only */
#line 127
  {
    nextTask = SchedulerBasicP$popTask();
    if (nextTask == SchedulerBasicP$NO_TASK) 
      {
        {
          unsigned char __nesc_temp = 
#line 131
          FALSE;

#line 131
          return __nesc_temp;
        }
      }
  }
#line 134
  SchedulerBasicP$TaskBasic$runTask(nextTask);
  return TRUE;
}

#line 164
static void SchedulerBasicP$TaskBasic$default$runTask(uint8_t id)
{
}

# 64 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void SchedulerBasicP$TaskBasic$runTask(uint8_t arg_0x7ef008d8){
#line 64
  switch (arg_0x7ef008d8) {
#line 64
    case BlinkToRadioC$AMSendTask:
#line 64
      BlinkToRadioC$AMSendTask$runTask();
#line 64
      break;
#line 64
    case BlinkToRadioC$EraseFlash:
#line 64
      BlinkToRadioC$EraseFlash$runTask();
#line 64
      break;
#line 64
    case /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$fired:
#line 64
      /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$fired$runTask();
#line 64
      break;
#line 64
    case /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$updateFromTimer:
#line 64
      /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$updateFromTimer$runTask();
#line 64
      break;
#line 64
    case /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$0$CancelTask:
#line 64
      /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$0$CancelTask$runTask();
#line 64
      break;
#line 64
    case /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$0$errorTask:
#line 64
      /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$0$errorTask$runTask();
#line 64
      break;
#line 64
    case SerialP$RunTx:
#line 64
      SerialP$RunTx$runTask();
#line 64
      break;
#line 64
    case SerialP$startDoneTask:
#line 64
      SerialP$startDoneTask$runTask();
#line 64
      break;
#line 64
    case SerialP$stopDoneTask:
#line 64
      SerialP$stopDoneTask$runTask();
#line 64
      break;
#line 64
    case SerialP$defaultSerialFlushTask:
#line 64
      SerialP$defaultSerialFlushTask$runTask();
#line 64
      break;
#line 64
    case /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$signalSendDone:
#line 64
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$signalSendDone$runTask();
#line 64
      break;
#line 64
    case /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$receiveTask:
#line 64
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$receiveTask$runTask();
#line 64
      break;
#line 64
    case PrintfP$retrySend:
#line 64
      PrintfP$retrySend$runTask();
#line 64
      break;
#line 64
    case CC2420CsmaP$startDone_task:
#line 64
      CC2420CsmaP$startDone_task$runTask();
#line 64
      break;
#line 64
    case CC2420CsmaP$stopDone_task:
#line 64
      CC2420CsmaP$stopDone_task$runTask();
#line 64
      break;
#line 64
    case CC2420CsmaP$sendDone_task:
#line 64
      CC2420CsmaP$sendDone_task$runTask();
#line 64
      break;
#line 64
    case CC2420ControlP$sync:
#line 64
      CC2420ControlP$sync$runTask();
#line 64
      break;
#line 64
    case CC2420ControlP$syncDone:
#line 64
      CC2420ControlP$syncDone$runTask();
#line 64
      break;
#line 64
    case HplCC2420InterruptsP$CCATask:
#line 64
      HplCC2420InterruptsP$CCATask$runTask();
#line 64
      break;
#line 64
    case CC2420SpiP$grant:
#line 64
      CC2420SpiP$grant$runTask();
#line 64
      break;
#line 64
    case Atm128SpiP$zeroTask:
#line 64
      Atm128SpiP$zeroTask$runTask();
#line 64
      break;
#line 64
    case /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$grantedTask:
#line 64
      /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$grantedTask$runTask();
#line 64
      break;
#line 64
    case CC2420ReceiveP$receiveDone_task:
#line 64
      CC2420ReceiveP$receiveDone_task$runTask();
#line 64
      break;
#line 64
    case /*AMQueueP.AMQueueImplP*/AMQueueImplP$1$CancelTask:
#line 64
      /*AMQueueP.AMQueueImplP*/AMQueueImplP$1$CancelTask$runTask();
#line 64
      break;
#line 64
    case /*AMQueueP.AMQueueImplP*/AMQueueImplP$1$errorTask:
#line 64
      /*AMQueueP.AMQueueImplP*/AMQueueImplP$1$errorTask$runTask();
#line 64
      break;
#line 64
    case BlockStorageP$erasetask:
#line 64
      BlockStorageP$erasetask$runTask();
#line 64
      break;
#line 64
    case At45dbP$taskSuccess:
#line 64
      At45dbP$taskSuccess$runTask();
#line 64
      break;
#line 64
    case At45dbP$taskFail:
#line 64
      At45dbP$taskFail$runTask();
#line 64
      break;
#line 64
    case HplAt45dbIOP$avail:
#line 64
      HplAt45dbIOP$avail$runTask();
#line 64
      break;
#line 64
    case /*HplAt45dbIOC.NoArbiterC*/NoArbiterC$0$granted:
#line 64
      /*HplAt45dbIOC.NoArbiterC*/NoArbiterC$0$granted$runTask();
#line 64
      break;
#line 64
    case /*At45dbC.Arbiter.Arbiter*/ArbiterP$0$grantedTask:
#line 64
      /*At45dbC.Arbiter.Arbiter*/ArbiterP$0$grantedTask$runTask();
#line 64
      break;
#line 64
    default:
#line 64
      SchedulerBasicP$TaskBasic$default$runTask(arg_0x7ef008d8);
#line 64
      break;
#line 64
    }
#line 64
}
#line 64
# 366 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/at45db/At45dbP.nc"
static void At45dbP$newRequest(uint8_t req, at45page_t page, at45pageoffset_t offset, 
void * reqdata, at45pageoffset_t n)
#line 367
{
  At45dbP$request = req;

  At45dbP$reqBuf = (void *)0;
  At45dbP$reqBytes = n;
  At45dbP$reqBuf = reqdata;
  At45dbP$reqPage = page;
  At45dbP$reqOffset = offset;

  if (page == At45dbP$buffer[0].page) {
    At45dbP$selected = 0;
    }
  else {
#line 378
    if (page == At45dbP$buffer[1].page) {
      At45dbP$selected = 1;
      }
    else {
#line 381
      At45dbP$selected = !At45dbP$selected;
      }
    }

  if (((
#line 384
  page >= AT45_MAX_PAGES || offset >= AT45_PAGE_SIZE) || 
  n > AT45_PAGE_SIZE) || offset + n > AT45_PAGE_SIZE) {
    At45dbP$taskFail$postTask();
    }
  else {
    At45dbP$handleRWRequest();
    }
}

# 159 "/cygdrive/c/Dropbox/tinyos-2.x/tos/system/SchedulerBasicP.nc"
static error_t SchedulerBasicP$TaskBasic$postTask(uint8_t id)
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 161
    {
#line 161
      {
        unsigned char __nesc_temp = 
#line 161
        SchedulerBasicP$pushTask(id) ? SUCCESS : EBUSY;

        {
#line 161
          __nesc_atomic_end(__nesc_atomic); 
#line 161
          return __nesc_temp;
        }
      }
    }
#line 164
    __nesc_atomic_end(__nesc_atomic); }
}

# 244 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/at45db/At45dbP.nc"
static void At45dbP$handleRWRequest(void )
#line 244
{
  if (At45dbP$reqPage == At45dbP$buffer[At45dbP$selected].page) {
    switch (At45dbP$request) 
      {
        case At45dbP$R_ERASE: 
          switch (At45dbP$reqOffset) 
            {
              case AT45_ERASE: 
                if (At45dbP$flashBusy) {
                  At45dbP$HplAt45db$waitIdle();
                  }
                else {
#line 255
                  At45dbP$HplAt45db$erase(AT45_C_ERASE_PAGE, At45dbP$reqPage);
                  }
#line 256
              break;
              case AT45_PREVIOUSLY_ERASED: 

                At45dbP$buffer[At45dbP$selected].erased = TRUE;

              case AT45_DONT_ERASE: 



                At45dbP$buffer[At45dbP$selected].clean = TRUE;
              At45dbP$requestDone(SUCCESS, 0, At45dbP$IDLE);
              break;
            }
        break;

        case At45dbP$R_COPY: 
          if (! At45dbP$buffer[At45dbP$selected].clean) {
            At45dbP$flushBuffer();
            }
          else {


              At45dbP$buffer[At45dbP$selected].page = At45dbP$reqOffset;
              At45dbP$buffer[At45dbP$selected].clean = FALSE;
              At45dbP$taskSuccess$postTask();
            }
        break;

        case At45dbP$R_SYNC: case At45dbP$R_SYNCALL: 
            if (At45dbP$buffer[At45dbP$selected].clean && At45dbP$buffer[At45dbP$selected].unchecked) 
              {
                At45dbP$checkBuffer(At45dbP$selected);
                return;
              }

        case At45dbP$R_FLUSH: case At45dbP$R_FLUSHALL: 
            if (! At45dbP$buffer[At45dbP$selected].clean) {
              At45dbP$flushBuffer();
              }
            else {
#line 294
              if (At45dbP$request == At45dbP$R_FLUSH || At45dbP$request == At45dbP$R_SYNC) {
                At45dbP$taskSuccess$postTask();
                }
              else {

                  uint8_t oreq = At45dbP$request;

                  At45dbP$request = At45dbP$IDLE;
                  At45dbP$syncOrFlushAll(oreq);
                }
              }
#line 304
        break;

        case At45dbP$R_READ: 
          if (At45dbP$buffer[At45dbP$selected].busy) {
            At45dbP$HplAt45db$waitIdle();
            }
          else {
#line 310
            At45dbP$HplAt45db$readBuffer(At45dbP$selected ? AT45_C_READ_BUFFER1 : AT45_C_READ_BUFFER2, At45dbP$reqOffset, 
            At45dbP$reqBuf, At45dbP$reqBytes);
            }
#line 312
        break;

        case At45dbP$R_READCRC: 
          if (At45dbP$buffer[At45dbP$selected].busy) {
            At45dbP$HplAt45db$waitIdle();
            }
          else {
            At45dbP$HplAt45db$crc(At45dbP$selected ? AT45_C_READ_BUFFER1 : AT45_C_READ_BUFFER2, 0, At45dbP$reqOffset, At45dbP$reqBytes, 
            (uint16_t )At45dbP$reqBuf);
            }
#line 321
        break;

        case At45dbP$R_WRITE: 
          if (At45dbP$buffer[At45dbP$selected].busy) {
            At45dbP$HplAt45db$waitIdle();
            }
          else {
#line 327
            At45dbP$HplAt45db$write(At45dbP$selected ? AT45_C_WRITE_BUFFER1 : AT45_C_WRITE_BUFFER2, 0, At45dbP$reqOffset, 
            At45dbP$reqBuf, At45dbP$reqBytes);
            }
#line 329
        break;
      }
    }
  else {
#line 331
    if (! At45dbP$buffer[At45dbP$selected].clean) {
      At45dbP$flushBuffer();
      }
    else {
#line 333
      if (At45dbP$buffer[At45dbP$selected].unchecked) {
        At45dbP$checkBuffer(At45dbP$selected);
        }
      else {

          if (At45dbP$request == At45dbP$R_ERASE) 
            {
              At45dbP$buffer[At45dbP$selected].page = At45dbP$reqPage;
              At45dbP$handleRWRequest();
            }
          else {
#line 343
            if (At45dbP$flashBusy) {
              At45dbP$HplAt45db$waitIdle();
              }
            else {
#line 346
              At45dbP$HplAt45db$fill(At45dbP$selected ? AT45_C_FILL_BUFFER1 : AT45_C_FILL_BUFFER2, At45dbP$reqPage);
              }
            }
        }
      }
    }
}

# 173 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/at45db/HplAt45dbByteC.nc"
static void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$execCommand(uint8_t op, uint8_t reqCmd, uint8_t reqDontCare, 
at45page_t reqPage, at45pageoffset_t reqOffset, 
uint8_t * reqData, at45pageoffset_t reqCount)
#line 175
{
  /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$status = op;


  /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$flashCmd[0] = reqCmd;
  /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$flashCmd[1] = reqPage >> (16 - 9);
  /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$flashCmd[2] = (reqPage << (9 - 8)) | (reqOffset >> 8);
  /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$flashCmd[3] = reqOffset;
  /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$data = (void *)0;
  /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$dataCount = reqCount;
  /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$data = reqData;
  /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$dontCare = reqDontCare;

  /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC$0$Resource$request();
}

# 350 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/at45db/At45dbP.nc"
static void At45dbP$requestDone(error_t result, uint16_t computedCrc, uint8_t newState)
#line 350
{
  uint8_t orequest = At45dbP$request;

  At45dbP$request = newState;
  switch (orequest) 
    {
      case At45dbP$R_READ: At45dbP$At45db$readDone(result);
#line 356
      break;
      case At45dbP$R_READCRC: At45dbP$At45db$computeCrcDone(result, computedCrc);
#line 357
      break;
      case At45dbP$R_WRITE: At45dbP$At45db$writeDone(result);
#line 358
      break;
      case At45dbP$R_SYNC: case At45dbP$R_SYNCALL: At45dbP$At45db$syncDone(result);
#line 359
      break;
      case At45dbP$R_FLUSH: case At45dbP$R_FLUSHALL: At45dbP$At45db$flushDone(result);
#line 360
      break;
      case At45dbP$R_ERASE: At45dbP$At45db$eraseDone(result);
#line 361
      break;
      case At45dbP$R_COPY: At45dbP$At45db$copyPageDone(result);
#line 362
      break;
    }
}

# 163 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/at45db/BlockStorageP.nc"
static void BlockStorageP$endRequest(error_t result, uint16_t crc)
#line 163
{
  uint8_t c = BlockStorageP$client;
  uint8_t tmpState = BlockStorageP$s[c].request;

  BlockStorageP$client = BlockStorageP$NO_CLIENT;
  BlockStorageP$s[c].request = BlockStorageP$R_IDLE;
  BlockStorageP$Resource$release(c);

  switch (tmpState) 
    {
      case BlockStorageP$R_READ: 
        BlockStorageP$BlockRead$readDone(c, BlockStorageP$s[c].addr, BlockStorageP$s[c].buf, BlockStorageP$currentOffset, result);
      break;
      case BlockStorageP$R_WRITE: 
        BlockStorageP$BlockWrite$writeDone(c, BlockStorageP$s[c].addr, BlockStorageP$s[c].buf, BlockStorageP$currentOffset, result);
      break;
      case BlockStorageP$R_ERASE: 
        BlockStorageP$BlockWrite$eraseDone(c, result);
      break;
      case BlockStorageP$R_CRC: 
        BlockStorageP$BlockRead$computeCrcDone(c, BlockStorageP$s[c].addr, BlockStorageP$currentOffset, crc, result);
      break;
      case BlockStorageP$R_SYNC: 
        BlockStorageP$BlockWrite$syncDone(c, result);
      break;
    }
}

# 130 "/cygdrive/c/Dropbox/tinyos-2.x/tos/lib/printf/PrintfP.nc"
  int printfflush(void )
#line 130
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 131
    {
      if (PrintfP$state == PrintfP$S_FLUSHING) 
        {
          int __nesc_temp = 
#line 133
          SUCCESS;

          {
#line 133
            __nesc_atomic_end(__nesc_atomic); 
#line 133
            return __nesc_temp;
          }
        }
#line 134
      if (PrintfP$Queue$empty()) 
        {
          int __nesc_temp = 
#line 135
          FAIL;

          {
#line 135
            __nesc_atomic_end(__nesc_atomic); 
#line 135
            return __nesc_temp;
          }
        }
#line 136
      PrintfP$state = PrintfP$S_FLUSHING;
    }
#line 137
    __nesc_atomic_end(__nesc_atomic); }
  PrintfP$sendNext();
  return SUCCESS;
}

#line 119
static void PrintfP$sendNext(void )
#line 119
{
  int i;
  printf_msg_t *m = (printf_msg_t *)PrintfP$Packet$getPayload(&PrintfP$printfMsg, sizeof(printf_msg_t ));
  uint16_t length_to_send = PrintfP$Queue$size() < sizeof(printf_msg_t ) ? PrintfP$Queue$size() : sizeof(printf_msg_t );

#line 123
  memset(m->buffer, 0, sizeof(printf_msg_t ));
  for (i = 0; i < length_to_send; i++) 
    __nesc_hton_uint8(m->buffer[i].data, PrintfP$Queue$dequeue());
  if (PrintfP$AMSend$send(AM_BROADCAST_ADDR, &PrintfP$printfMsg, sizeof(printf_msg_t )) != SUCCESS) {
    PrintfP$retrySend$postTask();
    }
}

# 119 "/cygdrive/c/Dropbox/tinyos-2.x/tos/lib/serial/SerialActiveMessageP.nc"
static void */*SerialActiveMessageC.AM*/SerialActiveMessageP$0$Packet$getPayload(message_t *msg, uint8_t len)
#line 119
{
  if (len > /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$Packet$maxPayloadLength()) {
      return (void *)0;
    }
  else {
      return (void * )msg->data;
    }
}

# 45 "/cygdrive/c/Dropbox/tinyos-2.x/tos/system/AMQueueEntryP.nc"
static error_t /*PrintfC.SerialAMSenderC.AMQueueEntryP*/AMQueueEntryP$0$AMSend$send(am_addr_t dest, 
message_t *msg, 
uint8_t len)
#line 47
{
  /*PrintfC.SerialAMSenderC.AMQueueEntryP*/AMQueueEntryP$0$AMPacket$setDestination(msg, dest);
  /*PrintfC.SerialAMSenderC.AMQueueEntryP*/AMQueueEntryP$0$AMPacket$setType(msg, 100);
  return /*PrintfC.SerialAMSenderC.AMQueueEntryP*/AMQueueEntryP$0$Send$send(msg, len);
}

# 156 "/cygdrive/c/Dropbox/tinyos-2.x/tos/lib/serial/SerialActiveMessageP.nc"
static am_id_t /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$AMPacket$type(message_t *amsg)
#line 156
{
  serial_header_t *header = /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$getHeader(amsg);

#line 158
  return __nesc_ntoh_uint8(header->type.data);
}

#line 132
static am_addr_t /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$AMPacket$destination(message_t *amsg)
#line 132
{
  serial_header_t *header = /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$getHeader(amsg);

#line 134
  return __nesc_ntoh_uint16(header->dest.data);
}

#line 57
static error_t /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$AMSend$send(am_id_t id, am_addr_t dest, 
message_t *msg, 
uint8_t len)
#line 59
{
  serial_header_t *header = /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$getHeader(msg);

#line 61
  __nesc_hton_uint16(header->dest.data, dest);





  __nesc_hton_uint8(header->type.data, id);
  __nesc_hton_uint8(header->length.data, len);

  return /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$SubSend$send(msg, len);
}

# 502 "/cygdrive/c/Dropbox/tinyos-2.x/tos/lib/serial/SerialP.nc"
static void SerialP$MaybeScheduleTx(void )
#line 502
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 503
    {
      if (SerialP$txPending == 0) {
          if (SerialP$RunTx$postTask() == SUCCESS) {
              SerialP$txPending = 1;
            }
        }
    }
#line 509
    __nesc_atomic_end(__nesc_atomic); }
}

# 133 "/cygdrive/c/Dropbox/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$startTimer(uint8_t num, uint32_t t0, uint32_t dt, bool isoneshot)
{
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer_t *timer = &/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$m_timers[num];

#line 136
  timer->t0 = t0;
  timer->dt = dt;
  timer->isoneshot = isoneshot;
  timer->isrunning = TRUE;
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$updateFromTimer$postTask();
}

# 161 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/timer/Atm128AlarmAsyncP.nc"
static uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Counter$get(void )
#line 161
{
  uint32_t now;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {


      uint8_t now8 = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Timer$get();

      if (/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$TimerCtrl$getInterruptFlag().bits.ocf0) {


        now = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$base + /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Compare$get() + 1 + /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Timer$get();
        }
      else {

        now = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$base + now8;
        }
    }
#line 179
    __nesc_atomic_end(__nesc_atomic); }
#line 179
  return now;
}

# 48 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP$0$IO$toggle(void )
#line 48
{
#line 48
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 48
    * (volatile uint8_t * )59U ^= 1 << 0;
#line 48
    __nesc_atomic_end(__nesc_atomic); }
}

# 248 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/at45db/BlockStorageP.nc"
static void BlockStorageP$multipageContinue(uint16_t crc)
#line 248
{
  storage_addr_t remaining = BlockStorageP$s[BlockStorageP$client].len - BlockStorageP$currentOffset;
#line 249
  storage_addr_t addr;
  at45page_t page;
  at45pageoffset_t pageOffset;
#line 251
  at45pageoffset_t count;
  uint8_t *buf = BlockStorageP$s[BlockStorageP$client].buf;

  if (remaining == 0) 
    {
      BlockStorageP$endRequest(SUCCESS, crc);
      return;
    }

  addr = BlockStorageP$s[BlockStorageP$client].addr + BlockStorageP$currentOffset;
  page = BlockStorageP$pageRemap(addr >> AT45_PAGE_SIZE_LOG2);
  pageOffset = addr & ((1 << AT45_PAGE_SIZE_LOG2) - 1);
  count = (1 << AT45_PAGE_SIZE_LOG2) - pageOffset;
  if (remaining < count) {
    count = remaining;
    }
  switch (BlockStorageP$s[BlockStorageP$client].request) 
    {
      case BlockStorageP$R_WRITE: 
        BlockStorageP$At45db$write(page, pageOffset, buf + BlockStorageP$currentOffset, count);
      break;
      case BlockStorageP$R_READ: 
        BlockStorageP$At45db$read(page, pageOffset, buf + BlockStorageP$currentOffset, count);
      break;
      case BlockStorageP$R_CRC: 
        BlockStorageP$At45db$computeCrc(page, pageOffset, count, crc);
      break;
    }
  BlockStorageP$currentOffset += count;
}

#line 126
static at45page_t BlockStorageP$BConfig$remap(uint8_t id, at45page_t page)
#line 126
{
  if (BlockStorageP$BConfig$isConfig(id) && BlockStorageP$BConfig$flipped(id)) {
    page += BlockStorageP$BConfig$npages(id);
    }
#line 129
  return BlockStorageP$At45dbVolume$remap(id, page);
}

# 151 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/at45db/At45dbP.nc"
static void At45dbP$flushBuffer(void )
#line 151
{
  if (At45dbP$flashBusy) 
    {
      At45dbP$HplAt45db$waitIdle();
      return;
    }
  At45dbP$HplAt45db$flush(At45dbP$buffer[At45dbP$selected].erased ? 
  At45dbP$selected ? AT45_C_QFLUSH_BUFFER1 : AT45_C_QFLUSH_BUFFER2 : 
  At45dbP$selected ? AT45_C_FLUSH_BUFFER1 : AT45_C_FLUSH_BUFFER2, 
  At45dbP$buffer[At45dbP$selected].page);
}

#line 141
static void At45dbP$checkBuffer(uint8_t buf)
#line 141
{
  if (At45dbP$flashBusy) 
    {
      At45dbP$HplAt45db$waitIdle();
      return;
    }
  At45dbP$HplAt45db$compare(buf ? AT45_C_COMPARE_BUFFER1 : AT45_C_COMPARE_BUFFER2, At45dbP$buffer[buf].page);
  At45dbP$checking = buf;
}

#line 445
static void At45dbP$syncOrFlushAll(uint8_t newReq)
#line 445
{
  At45dbP$request = newReq;

  if (! At45dbP$buffer[0].clean) {
    At45dbP$selected = 0;
    }
  else {
#line 450
    if (! At45dbP$buffer[1].clean) {
      At45dbP$selected = 1;
      }
    else {
        At45dbP$taskSuccess$postTask();
        return;
      }
    }
  At45dbP$buffer[At45dbP$selected].unchecked = 0;
  At45dbP$handleRWRequest();
}

# 102 "/cygdrive/c/Dropbox/tinyos-2.x/tos/platforms/mica2/chips/at45db/HplAt45dbIOP.nc"
static uint8_t HplAt45dbIOP$FlashSpi$write(uint8_t spiOut)
#line 102
{
  uint8_t spiIn = 0;


  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      uint8_t clrClkAndData = * (volatile uint8_t *)(0x12 + 0x20) & ~0x28;

      * (volatile uint8_t *)(0x12 + 0x20) = clrClkAndData;
#line 110
       __asm volatile ("sbrc %2,""7""\n""\tsbi 18,3\n""\tsbi 18,5\n""\tsbic 16,2\n""\tori %0,1<<""7""\n" : "=d"(spiIn) : "0"(spiIn), "r"(spiOut));
      * (volatile uint8_t *)(0x12 + 0x20) = clrClkAndData;
#line 111
       __asm volatile ("sbrc %2,""6""\n""\tsbi 18,3\n""\tsbi 18,5\n""\tsbic 16,2\n""\tori %0,1<<""6""\n" : "=d"(spiIn) : "0"(spiIn), "r"(spiOut));
      * (volatile uint8_t *)(0x12 + 0x20) = clrClkAndData;
#line 112
       __asm volatile ("sbrc %2,""5""\n""\tsbi 18,3\n""\tsbi 18,5\n""\tsbic 16,2\n""\tori %0,1<<""5""\n" : "=d"(spiIn) : "0"(spiIn), "r"(spiOut));
      * (volatile uint8_t *)(0x12 + 0x20) = clrClkAndData;
#line 113
       __asm volatile ("sbrc %2,""4""\n""\tsbi 18,3\n""\tsbi 18,5\n""\tsbic 16,2\n""\tori %0,1<<""4""\n" : "=d"(spiIn) : "0"(spiIn), "r"(spiOut));
      * (volatile uint8_t *)(0x12 + 0x20) = clrClkAndData;
#line 114
       __asm volatile ("sbrc %2,""3""\n""\tsbi 18,3\n""\tsbi 18,5\n""\tsbic 16,2\n""\tori %0,1<<""3""\n" : "=d"(spiIn) : "0"(spiIn), "r"(spiOut));
      * (volatile uint8_t *)(0x12 + 0x20) = clrClkAndData;
#line 115
       __asm volatile ("sbrc %2,""2""\n""\tsbi 18,3\n""\tsbi 18,5\n""\tsbic 16,2\n""\tori %0,1<<""2""\n" : "=d"(spiIn) : "0"(spiIn), "r"(spiOut));
      * (volatile uint8_t *)(0x12 + 0x20) = clrClkAndData;
#line 116
       __asm volatile ("sbrc %2,""1""\n""\tsbi 18,3\n""\tsbi 18,5\n""\tsbic 16,2\n""\tori %0,1<<""1""\n" : "=d"(spiIn) : "0"(spiIn), "r"(spiOut));
      * (volatile uint8_t *)(0x12 + 0x20) = clrClkAndData;
#line 117
       __asm volatile ("sbrc %2,""0""\n""\tsbi 18,3\n""\tsbi 18,5\n""\tsbic 16,2\n""\tori %0,1<<""0""\n" : "=d"(spiIn) : "0"(spiIn), "r"(spiOut));}
#line 117
    __nesc_atomic_end(__nesc_atomic); }


  return spiIn;
}

# 81 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/crc.h"
static __attribute((noinline))  uint16_t crcByte(uint16_t oldCrc, uint8_t byte)
{

  uint16_t *table = crcTable;
  uint16_t newCrc;

   __asm ("eor %1,%B3\n"
  "\tlsl %1\n"
  "\tadc %B2, __zero_reg__\n"
  "\tadd %A2, %1\n"
  "\tadc %B2, __zero_reg__\n"
  "\tlpm\n"
  "\tmov %B0, %A3\n"
  "\tmov %A0, r0\n"
  "\tadiw r30,1\n"
  "\tlpm\n"
  "\teor %B0, r0" : 
  "=r"(newCrc), "+r"(byte), "+z"(table) : "r"(oldCrc));
  return newCrc;
}

# 127 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/at45db/At45dbP.nc"
static void At45dbP$flashIdle(void )
#line 127
{
  At45dbP$flashBusy = At45dbP$buffer[0].busy = At45dbP$buffer[1].busy = FALSE;
}

# 48 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP$2$IO$toggle(void )
#line 48
{
#line 48
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 48
    * (volatile uint8_t * )59U ^= 1 << 2;
#line 48
    __nesc_atomic_end(__nesc_atomic); }
}

# 155 "/cygdrive/c/Dropbox/tinyos-2.x/tos/system/AMQueueImplP.nc"
static void /*AMQueueP.AMQueueImplP*/AMQueueImplP$1$sendDone(uint8_t last, message_t * msg, error_t err)
#line 155
{
  /*AMQueueP.AMQueueImplP*/AMQueueImplP$1$queue[last].msg = (void *)0;
  /*AMQueueP.AMQueueImplP*/AMQueueImplP$1$tryToSend();
  /*AMQueueP.AMQueueImplP*/AMQueueImplP$1$Send$sendDone(last, msg, err);
}

# 92 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/cc2420/CC2420ActiveMessageP.nc"
static am_addr_t CC2420ActiveMessageP$AMPacket$destination(message_t *amsg)
#line 92
{
  cc2420_header_t *header = CC2420ActiveMessageP$CC2420PacketBody$getHeader(amsg);

#line 94
  return __nesc_ntoh_leuint16(header->dest.data);
}

#line 61
static error_t CC2420ActiveMessageP$AMSend$send(am_id_t id, am_addr_t addr, 
message_t *msg, 
uint8_t len)
#line 63
{
  cc2420_header_t *header = CC2420ActiveMessageP$CC2420PacketBody$getHeader(msg);

#line 65
  __nesc_hton_leuint8(header->type.data, id);
  __nesc_hton_leuint16(header->dest.data, addr);
  __nesc_hton_leuint16(header->destpan.data, CC2420ActiveMessageP$CC2420Config$getPanAddr());
  __nesc_hton_leuint16(header->src.data, CC2420ActiveMessageP$AMPacket$address());

  CC2420ActiveMessageP$SendNotifier$aboutToSend(id, addr, msg);

  return CC2420ActiveMessageP$SubSend$send(msg, len);
}

# 95 "/cygdrive/c/Dropbox/tinyos-2.x/tos/system/ActiveMessageAddressC.nc"
static am_addr_t ActiveMessageAddressC$amAddress(void )
#line 95
{
  am_addr_t myAddr;

#line 97
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 97
    myAddr = ActiveMessageAddressC$addr;
#line 97
    __nesc_atomic_end(__nesc_atomic); }
  return myAddr;
}

# 96 "/cygdrive/c/Dropbox/tinyos-2.x/tos/system/StateImplP.nc"
static error_t StateImplP$State$requestState(uint8_t id, uint8_t reqState)
#line 96
{
  error_t returnVal = FAIL;

#line 98
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 98
    {
      if (reqState == StateImplP$S_IDLE || StateImplP$state[id] == StateImplP$S_IDLE) {
          StateImplP$state[id] = reqState;
          returnVal = SUCCESS;
        }
    }
#line 103
    __nesc_atomic_end(__nesc_atomic); }
  return returnVal;
}

#line 133
static bool StateImplP$State$isState(uint8_t id, uint8_t myState)
#line 133
{
  bool isState;

#line 135
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 135
    isState = StateImplP$state[id] == myState;
#line 135
    __nesc_atomic_end(__nesc_atomic); }
  return isState;
}

# 630 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/cc2420/transmit/CC2420TransmitP.nc"
static error_t CC2420TransmitP$acquireSpiResource(void )
#line 630
{
  error_t error = CC2420TransmitP$SpiResource$immediateRequest();

#line 632
  if (error != SUCCESS) {
      CC2420TransmitP$SpiResource$request();
    }
  return error;
}

# 126 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc"
static error_t CC2420SpiP$Resource$immediateRequest(uint8_t id)
#line 126
{
  error_t error;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 129
    {
      if (CC2420SpiP$WorkingState$requestState(CC2420SpiP$S_BUSY) != SUCCESS) {
          {
            unsigned char __nesc_temp = 
#line 131
            EBUSY;

            {
#line 131
              __nesc_atomic_end(__nesc_atomic); 
#line 131
              return __nesc_temp;
            }
          }
        }
      if (CC2420SpiP$SpiResource$isOwner()) {
          CC2420SpiP$m_holder = id;
          error = SUCCESS;
        }
      else {
#line 139
        if ((error = CC2420SpiP$SpiResource$immediateRequest()) == SUCCESS) {
            CC2420SpiP$m_holder = id;
          }
        else {
            CC2420SpiP$WorkingState$toIdle();
          }
        }
    }
#line 146
    __nesc_atomic_end(__nesc_atomic); }
#line 146
  return error;
}

# 147 "/cygdrive/c/Dropbox/tinyos-2.x/tos/system/SimpleArbiterP.nc"
static uint8_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$Resource$isOwner(uint8_t id)
#line 147
{
  /* atomic removed: atomic calls only */
#line 148
  {
    if (/*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$resId == id && /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$state == /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$RES_BUSY) {
        unsigned char __nesc_temp = 
#line 149
        TRUE;

#line 149
        return __nesc_temp;
      }
    else 
#line 150
      {
        unsigned char __nesc_temp = 
#line 150
        FALSE;

#line 150
        return __nesc_temp;
      }
  }
}

# 105 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/spi/Atm128SpiP.nc"
static void Atm128SpiP$startSpi(void )
#line 105
{
  Atm128SpiP$Spi$enableSpi(FALSE);
  /* atomic removed: atomic calls only */
#line 107
  {
    Atm128SpiP$Spi$initMaster();
    Atm128SpiP$Spi$enableInterrupt(FALSE);
    Atm128SpiP$Spi$setMasterDoubleSpeed(TRUE);
    Atm128SpiP$Spi$setClockPolarity(FALSE);
    Atm128SpiP$Spi$setClockPhase(FALSE);
    Atm128SpiP$Spi$setClock(0);
    Atm128SpiP$Spi$enableSpi(TRUE);
  }
  Atm128SpiP$McuPowerState$update();
}

# 130 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/spi/HplAtm128SpiP.nc"
static void HplAtm128SpiP$SPI$enableSpi(bool enabled)
#line 130
{
  if (enabled) {
      * (volatile uint8_t *)(0x0D + 0x20) |= 1 << 6;
      HplAtm128SpiP$Mcu$update();
    }
  else {
      * (volatile uint8_t *)(0x0D + 0x20) &= ~(1 << 6);
      HplAtm128SpiP$Mcu$update();
    }
}

#line 115
static void HplAtm128SpiP$SPI$enableInterrupt(bool enabled)
#line 115
{
  if (enabled) {
      * (volatile uint8_t *)(0x0D + 0x20) |= 1 << 7;
      HplAtm128SpiP$Mcu$update();
    }
  else {
      * (volatile uint8_t *)(0x0D + 0x20) &= ~(1 << 7);
      HplAtm128SpiP$Mcu$update();
    }
}

# 107 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc"
static error_t CC2420SpiP$Resource$request(uint8_t id)
#line 107
{

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 109
    {
      if (CC2420SpiP$WorkingState$requestState(CC2420SpiP$S_BUSY) == SUCCESS) {
          CC2420SpiP$m_holder = id;
          if (CC2420SpiP$SpiResource$isOwner()) {
              CC2420SpiP$grant$postTask();
            }
          else {
              CC2420SpiP$SpiResource$request();
            }
        }
      else {
          CC2420SpiP$m_requests |= 1 << id;
        }
    }
#line 122
    __nesc_atomic_end(__nesc_atomic); }
  return SUCCESS;
}

# 123 "/cygdrive/c/Dropbox/tinyos-2.x/tos/system/SimpleArbiterP.nc"
static bool /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$ArbiterInfo$inUse(void )
#line 123
{
  /* atomic removed: atomic calls only */
#line 124
  {
    if (/*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$state == /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$RES_IDLE) 
      {
        unsigned char __nesc_temp = 
#line 126
        FALSE;

#line 126
        return __nesc_temp;
      }
  }
#line 128
  return TRUE;
}

# 660 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/cc2420/transmit/CC2420TransmitP.nc"
static void CC2420TransmitP$loadTXFIFO(void )
#line 660
{
  cc2420_header_t *header = CC2420TransmitP$CC2420PacketBody$getHeader(CC2420TransmitP$m_msg);
  uint8_t tx_power = __nesc_ntoh_uint8(CC2420TransmitP$CC2420PacketBody$getMetadata(CC2420TransmitP$m_msg)->tx_power.data);

  if (!tx_power) {
      tx_power = 31;
    }

  CC2420TransmitP$CSN$clr();

  if (CC2420TransmitP$m_tx_power != tx_power) {
      CC2420TransmitP$TXCTRL$write((((2 << CC2420_TXCTRL_TXMIXBUF_CUR) | (
      3 << CC2420_TXCTRL_PA_CURRENT)) | (
      1 << CC2420_TXCTRL_RESERVED)) | ((
      tx_power & 0x1F) << CC2420_TXCTRL_PA_LEVEL));
    }

  CC2420TransmitP$m_tx_power = tx_power;

  {
    uint8_t tmpLen __attribute((unused))  = __nesc_ntoh_leuint8(header->length.data) - 1;

#line 681
    CC2420TransmitP$TXFIFO$write((uint8_t * )header, __nesc_ntoh_leuint8(header->length.data) - 1);
  }
}

# 305 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc"
static cc2420_status_t CC2420SpiP$Reg$write(uint8_t addr, uint16_t data)
#line 305
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 306
    {
      if (CC2420SpiP$WorkingState$isIdle()) {
          {
            unsigned char __nesc_temp = 
#line 308
            0;

            {
#line 308
              __nesc_atomic_end(__nesc_atomic); 
#line 308
              return __nesc_temp;
            }
          }
        }
    }
#line 312
    __nesc_atomic_end(__nesc_atomic); }
#line 311
  CC2420SpiP$SpiByte$write(addr);
  CC2420SpiP$SpiByte$write(data >> 8);
  return CC2420SpiP$SpiByte$write(data & 0xff);
}

# 127 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/spi/Atm128SpiP.nc"
static uint8_t Atm128SpiP$SpiByte$write(uint8_t tx)
#line 127
{
  Atm128SpiP$Spi$enableSpi(TRUE);
  Atm128SpiP$McuPowerState$update();
  Atm128SpiP$Spi$write(tx);
  while (!(* (volatile uint8_t *)(0x0E + 0x20) & 0x80)) ;
  return Atm128SpiP$Spi$read();
}

#line 241
static error_t Atm128SpiP$SpiPacket$send(uint8_t *writeBuf, 
uint8_t *readBuf, 
uint16_t bufLen)
#line 243
{
  uint8_t discard;

#line 245
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 245
    {
      Atm128SpiP$len = bufLen;
      Atm128SpiP$txBuffer = writeBuf;
      Atm128SpiP$rxBuffer = readBuf;
      Atm128SpiP$pos = 0;
    }
#line 250
    __nesc_atomic_end(__nesc_atomic); }
  if (bufLen > 0) {
      discard = Atm128SpiP$Spi$read();
      return Atm128SpiP$sendNextPart();
    }
  else {
      Atm128SpiP$zeroTask$postTask();
      return SUCCESS;
    }
}

#line 162
static error_t Atm128SpiP$sendNextPart(void )
#line 162
{
  uint16_t end;
  uint16_t tmpPos;
  uint16_t myLen;
  uint8_t * tx;
  uint8_t * rx;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 169
    {
      myLen = Atm128SpiP$len;
      tx = Atm128SpiP$txBuffer;
      rx = Atm128SpiP$rxBuffer;
      tmpPos = Atm128SpiP$pos;
      end = Atm128SpiP$pos + Atm128SpiP$SPI_ATOMIC_SIZE;
      end = end > Atm128SpiP$len ? Atm128SpiP$len : end;
    }
#line 176
    __nesc_atomic_end(__nesc_atomic); }

  for (; tmpPos < end - 1; tmpPos++) {
      uint8_t val;

#line 180
      if (tx != (void *)0) {
        val = Atm128SpiP$SpiByte$write(tx[tmpPos]);
        }
      else {
#line 183
        val = Atm128SpiP$SpiByte$write(0);
        }
      if (rx != (void *)0) {
          rx[tmpPos] = val;
        }
    }



  Atm128SpiP$Spi$enableInterrupt(TRUE);
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 193
    {
      if (tx != (void *)0) {
        Atm128SpiP$Spi$write(tx[tmpPos]);
        }
      else {
#line 197
        Atm128SpiP$Spi$write(0);
        }
      Atm128SpiP$pos = tmpPos;
    }
#line 200
    __nesc_atomic_end(__nesc_atomic); }


  return SUCCESS;
}

# 56 "/cygdrive/c/Dropbox/tinyos-2.x/tos/interfaces/State.nc"
static void UniqueSendP$State$toIdle(void ){
#line 56
  StateImplP$State$toIdle(2U);
#line 56
}
#line 56
# 279 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/cc2420/control/CC2420ControlP.nc"
static uint16_t CC2420ControlP$CC2420Config$getShortAddr(void )
#line 279
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 280
    {
      unsigned short __nesc_temp = 
#line 280
      CC2420ControlP$m_short_addr;

      {
#line 280
        __nesc_atomic_end(__nesc_atomic); 
#line 280
        return __nesc_temp;
      }
    }
#line 282
    __nesc_atomic_end(__nesc_atomic); }
}

# 191 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/at45db/BlockStorageP.nc"
static error_t BlockStorageP$newRequest(uint8_t newState, uint8_t id, 
storage_addr_t addr, uint8_t * buf, storage_len_t len)
#line 192
{
  storage_len_t vsize;

  if (BlockStorageP$s[id].request != BlockStorageP$R_IDLE) {
    return EBUSY;
    }
  vsize = BlockStorageP$BlockRead$getSize(id);
  if (addr > vsize || len > vsize - addr) {
    return EINVAL;
    }
  BlockStorageP$s[id].request = newState;
  BlockStorageP$s[id].addr = addr;




  BlockStorageP$s[id].buf = (void *)0;
  BlockStorageP$s[id].len = len;
  BlockStorageP$s[id].buf = buf;

  BlockStorageP$Resource$request(id);

  return SUCCESS;
}

# 399 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/cc2420/receive/CC2420ReceiveP.nc"
static void CC2420ReceiveP$waitForNextPacket(void )
#line 399
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 400
    {
      if (CC2420ReceiveP$m_state == CC2420ReceiveP$S_STOPPED) {
          CC2420ReceiveP$SpiResource$release();
          {
#line 403
            __nesc_atomic_end(__nesc_atomic); 
#line 403
            return;
          }
        }
      CC2420ReceiveP$receivingPacket = FALSE;










      if ((CC2420ReceiveP$m_missed_packets && CC2420ReceiveP$FIFO$get()) || !CC2420ReceiveP$FIFOP$get()) {

          if (CC2420ReceiveP$m_missed_packets) {
              CC2420ReceiveP$m_missed_packets--;
            }

          CC2420ReceiveP$beginReceive();
        }
      else {

          CC2420ReceiveP$m_state = CC2420ReceiveP$S_STARTED;
          CC2420ReceiveP$m_missed_packets = 0;
          CC2420ReceiveP$SpiResource$release();
        }
    }
#line 431
    __nesc_atomic_end(__nesc_atomic); }
}

# 149 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc"
static error_t CC2420SpiP$Resource$release(uint8_t id)
#line 149
{
  uint8_t i;

#line 151
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 151
    {
      if (CC2420SpiP$m_holder != id) {
          {
            unsigned char __nesc_temp = 
#line 153
            FAIL;

            {
#line 153
              __nesc_atomic_end(__nesc_atomic); 
#line 153
              return __nesc_temp;
            }
          }
        }
#line 156
      CC2420SpiP$m_holder = CC2420SpiP$NO_HOLDER;
      if (!CC2420SpiP$m_requests) {
          CC2420SpiP$WorkingState$toIdle();
          CC2420SpiP$attemptRelease();
        }
      else {
          for (i = CC2420SpiP$m_holder + 1; ; i++) {
              i %= CC2420SpiP$RESOURCE_COUNT;

              if (CC2420SpiP$m_requests & (1 << i)) {
                  CC2420SpiP$m_holder = i;
                  CC2420SpiP$m_requests &= ~(1 << i);
                  CC2420SpiP$grant$postTask();
                  {
                    unsigned char __nesc_temp = 
#line 169
                    SUCCESS;

                    {
#line 169
                      __nesc_atomic_end(__nesc_atomic); 
#line 169
                      return __nesc_temp;
                    }
                  }
                }
            }
        }
    }
#line 175
    __nesc_atomic_end(__nesc_atomic); }
#line 175
  return SUCCESS;
}

#line 339
static error_t CC2420SpiP$attemptRelease(void )
#line 339
{


  if ((
#line 340
  CC2420SpiP$m_requests > 0
   || CC2420SpiP$m_holder != CC2420SpiP$NO_HOLDER)
   || !CC2420SpiP$WorkingState$isIdle()) {
      return FAIL;
    }
  /* atomic removed: atomic calls only */
  CC2420SpiP$release = TRUE;
  CC2420SpiP$ChipSpiResource$releasing();
  /* atomic removed: atomic calls only */
#line 348
  {
    if (CC2420SpiP$release) {
        CC2420SpiP$SpiResource$release();
        {
          unsigned char __nesc_temp = 
#line 351
          SUCCESS;

#line 351
          return __nesc_temp;
        }
      }
  }
  return EBUSY;
}

# 354 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/cc2420/receive/CC2420ReceiveP.nc"
static void CC2420ReceiveP$beginReceive(void )
#line 354
{
  CC2420ReceiveP$m_state = CC2420ReceiveP$S_RX_LENGTH;
  /* atomic removed: atomic calls only */
  CC2420ReceiveP$receivingPacket = TRUE;
  if (CC2420ReceiveP$SpiResource$isOwner()) {
      CC2420ReceiveP$receive();
    }
  else {
#line 361
    if (CC2420ReceiveP$SpiResource$immediateRequest() == SUCCESS) {
        CC2420ReceiveP$receive();
      }
    else {
        CC2420ReceiveP$SpiResource$request();
      }
    }
}

#line 389
static void CC2420ReceiveP$receive(void )
#line 389
{
  CC2420ReceiveP$CSN$clr();
  CC2420ReceiveP$RXFIFO$beginRead((uint8_t *)CC2420ReceiveP$CC2420PacketBody$getHeader(CC2420ReceiveP$m_p_rx_buf), 1);
}

# 189 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc"
static cc2420_status_t CC2420SpiP$Fifo$beginRead(uint8_t addr, uint8_t *data, 
uint8_t len)
#line 190
{

  cc2420_status_t status = 0;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 194
    {
      if (CC2420SpiP$WorkingState$isIdle()) {
          {
            unsigned char __nesc_temp = 
#line 196
            status;

            {
#line 196
              __nesc_atomic_end(__nesc_atomic); 
#line 196
              return __nesc_temp;
            }
          }
        }
    }
#line 200
    __nesc_atomic_end(__nesc_atomic); }
#line 200
  CC2420SpiP$m_addr = addr | 0x40;

  status = CC2420SpiP$SpiByte$write(CC2420SpiP$m_addr);
  CC2420SpiP$Fifo$continueRead(addr, data, len);

  return status;
}

#line 329
static void CC2420SpiP$SpiPacket$sendDone(uint8_t *tx_buf, uint8_t *rx_buf, 
uint16_t len, error_t error)
#line 330
{
  if (CC2420SpiP$m_addr & 0x40) {
      CC2420SpiP$Fifo$readDone(CC2420SpiP$m_addr & ~0x40, rx_buf, len, error);
    }
  else 
#line 333
    {
      CC2420SpiP$Fifo$writeDone(CC2420SpiP$m_addr, tx_buf, len, error);
    }
}

# 372 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/cc2420/receive/CC2420ReceiveP.nc"
static void CC2420ReceiveP$flush(void )
#line 372
{
  CC2420ReceiveP$reset_state();
  CC2420ReceiveP$CSN$set();
  CC2420ReceiveP$CSN$clr();
  CC2420ReceiveP$SFLUSHRX$strobe();
  CC2420ReceiveP$SFLUSHRX$strobe();
  CC2420ReceiveP$CSN$set();
  CC2420ReceiveP$SpiResource$release();
  CC2420ReceiveP$waitForNextPacket();
}

#line 437
static void CC2420ReceiveP$reset_state(void )
#line 437
{
  CC2420ReceiveP$m_bytes_left = CC2420ReceiveP$RXFIFO_SIZE;
  /* atomic removed: atomic calls only */
#line 439
  CC2420ReceiveP$receivingPacket = FALSE;
  CC2420ReceiveP$m_timestamp_head = 0;
  CC2420ReceiveP$m_timestamp_size = 0;
  CC2420ReceiveP$m_missed_packets = 0;
}

# 318 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc"
static cc2420_status_t CC2420SpiP$Strobe$strobe(uint8_t addr)
#line 318
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 319
    {
      if (CC2420SpiP$WorkingState$isIdle()) {
          {
            unsigned char __nesc_temp = 
#line 321
            0;

            {
#line 321
              __nesc_atomic_end(__nesc_atomic); 
#line 321
              return __nesc_temp;
            }
          }
        }
    }
#line 325
    __nesc_atomic_end(__nesc_atomic); }
#line 325
  return CC2420SpiP$SpiByte$write(addr);
}

# 122 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/cc2420/packet/CC2420PacketP.nc"
static void CC2420PacketP$PacketTimeStamp32khz$clear(message_t *msg)
{
  __nesc_hton_int8(CC2420PacketP$CC2420PacketBody$getMetadata(msg)->timesync.data, FALSE);
  __nesc_hton_uint32(CC2420PacketP$CC2420PacketBody$getMetadata(msg)->timestamp.data, CC2420_INVALID_TIMESTAMP);
}

# 685 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/cc2420/transmit/CC2420TransmitP.nc"
static void CC2420TransmitP$signalDone(error_t err)
#line 685
{
  /* atomic removed: atomic calls only */
#line 686
  CC2420TransmitP$m_state = CC2420TransmitP$S_STARTED;
  CC2420TransmitP$abortSpiRelease = FALSE;
  CC2420TransmitP$ChipSpiResource$attemptRelease();
  CC2420TransmitP$Send$sendDone(CC2420TransmitP$m_msg, err);
}

#line 581
static void CC2420TransmitP$attemptSend(void )
#line 581
{
  uint8_t status;
  bool congestion = TRUE;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 585
    {
      if (CC2420TransmitP$m_state == CC2420TransmitP$S_CANCEL) {
          CC2420TransmitP$SFLUSHTX$strobe();
          CC2420TransmitP$releaseSpiResource();
          CC2420TransmitP$CSN$set();
          CC2420TransmitP$m_state = CC2420TransmitP$S_STARTED;
          CC2420TransmitP$Send$sendDone(CC2420TransmitP$m_msg, ECANCEL);
          {
#line 592
            __nesc_atomic_end(__nesc_atomic); 
#line 592
            return;
          }
        }

      CC2420TransmitP$CSN$clr();

      status = CC2420TransmitP$m_cca ? CC2420TransmitP$STXONCCA$strobe() : CC2420TransmitP$STXON$strobe();
      if (!(status & CC2420_STATUS_TX_ACTIVE)) {
          status = CC2420TransmitP$SNOP$strobe();
          if (status & CC2420_STATUS_TX_ACTIVE) {
              congestion = FALSE;
            }
        }

      CC2420TransmitP$m_state = congestion ? CC2420TransmitP$S_SAMPLE_CCA : CC2420TransmitP$S_SFD;
      CC2420TransmitP$CSN$set();
    }
#line 608
    __nesc_atomic_end(__nesc_atomic); }

  if (congestion) {
      CC2420TransmitP$totalCcaChecks = 0;
      CC2420TransmitP$releaseSpiResource();
      CC2420TransmitP$congestionBackoff();
    }
  else 
#line 614
    {
      CC2420TransmitP$BackoffTimer$start(CC2420TransmitP$CC2420_ABORT_PERIOD);
    }
}





static void CC2420TransmitP$congestionBackoff(void )
#line 623
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 624
    {
      CC2420TransmitP$RadioBackoff$requestCongestionBackoff(CC2420TransmitP$m_msg);
      CC2420TransmitP$BackoffTimer$start(CC2420TransmitP$myCongestionBackoff);
    }
#line 627
    __nesc_atomic_end(__nesc_atomic); }
}

# 58 "/cygdrive/c/Dropbox/tinyos-2.x/tos/system/RandomMlcgC.nc"
static uint32_t RandomMlcgC$Random$rand32(void )
#line 58
{
  uint32_t mlcg;
#line 59
  uint32_t p;
#line 59
  uint32_t q;
  uint64_t tmpseed;

  /* atomic removed: atomic calls only */
#line 62
  {
    tmpseed = (uint64_t )33614U * (uint64_t )RandomMlcgC$seed;
    q = tmpseed;
    q = q >> 1;
    p = tmpseed >> 32;
    mlcg = p + q;
    if (mlcg & 0x80000000) {
        mlcg = mlcg & 0x7FFFFFFF;
        mlcg++;
      }
    RandomMlcgC$seed = mlcg;
  }
  return mlcg;
}

# 136 "/cygdrive/c/Dropbox/tinyos-2.x/tos/lib/timer/TransformAlarmC.nc"
static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$Alarm$startAt(/*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$to_size_type t0, /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$to_size_type dt)
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$m_t0 = t0;
      /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$m_dt = dt;
      /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$set_alarm();
    }
#line 143
    __nesc_atomic_end(__nesc_atomic); }
}

#line 96
static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$set_alarm(void )
{
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$to_size_type now = /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$Counter$get();
#line 98
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$to_size_type expires;
#line 98
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$to_size_type remaining;




  expires = /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$m_t0 + /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$m_dt;


  remaining = (/*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$to_size_type )(expires - now);


  if (/*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$m_t0 <= now) 
    {
      if (expires >= /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$m_t0 && 
      expires <= now) {
        remaining = 0;
        }
    }
  else {
      if (expires >= /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$m_t0 || 
      expires <= now) {
        remaining = 0;
        }
    }
#line 121
  if (remaining > /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$MAX_DELAY) 
    {
      /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$m_t0 = now + /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$MAX_DELAY;
      /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$m_dt = remaining - /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$MAX_DELAY;
      remaining = /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$MAX_DELAY;
    }
  else 
    {
      /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$m_t0 += /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$m_dt;
      /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$m_dt = 0;
    }
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$AlarmFrom$startAt((/*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$from_size_type )now << 0, 
  (/*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$from_size_type )remaining << 0);
}

# 69 "/cygdrive/c/Dropbox/tinyos-2.x/tos/lib/timer/TransformCounterC.nc"
static /*Counter32khz32C.Transform32*/TransformCounterC$1$to_size_type /*Counter32khz32C.Transform32*/TransformCounterC$1$Counter$get(void )
{
  /*Counter32khz32C.Transform32*/TransformCounterC$1$to_size_type rv = 0;

#line 72
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      /*Counter32khz32C.Transform32*/TransformCounterC$1$upper_count_type high = /*Counter32khz32C.Transform32*/TransformCounterC$1$m_upper;
      /*Counter32khz32C.Transform32*/TransformCounterC$1$from_size_type low = /*Counter32khz32C.Transform32*/TransformCounterC$1$CounterFrom$get();

#line 76
      if (/*Counter32khz32C.Transform32*/TransformCounterC$1$CounterFrom$isOverflowPending()) 
        {






          high++;
          low = /*Counter32khz32C.Transform32*/TransformCounterC$1$CounterFrom$get();
        }
      {
        /*Counter32khz32C.Transform32*/TransformCounterC$1$to_size_type high_to = high;
        /*Counter32khz32C.Transform32*/TransformCounterC$1$to_size_type low_to = low >> /*Counter32khz32C.Transform32*/TransformCounterC$1$LOW_SHIFT_RIGHT;

#line 90
        rv = (high_to << /*Counter32khz32C.Transform32*/TransformCounterC$1$HIGH_SHIFT_LEFT) | low_to;
      }
    }
#line 92
    __nesc_atomic_end(__nesc_atomic); }
  return rv;
}

# 456 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/cc2420/control/CC2420ControlP.nc"
static void CC2420ControlP$writeFsctrl(void )
#line 456
{
  uint8_t channel;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 459
    {
      channel = CC2420ControlP$m_channel;
    }
#line 461
    __nesc_atomic_end(__nesc_atomic); }

  CC2420ControlP$FSCTRL$write((1 << CC2420_FSCTRL_LOCK_THR) | ((

  channel * 5 + 302) << CC2420_FSCTRL_FREQ));
}







static void CC2420ControlP$writeMdmctrl0(void )
#line 474
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 475
    {
      CC2420ControlP$MDMCTRL0$write((((((((1 << CC2420_MDMCTRL0_RESERVED_FRAME_MODE) | ((
      CC2420ControlP$addressRecognition && CC2420ControlP$hwAddressRecognition) << CC2420_MDMCTRL0_ADR_DECODE)) | (
      2 << CC2420_MDMCTRL0_CCA_HYST)) | (
      3 << CC2420_MDMCTRL0_CCA_MOD)) | (
      1 << CC2420_MDMCTRL0_AUTOCRC)) | ((
      CC2420ControlP$autoAckEnabled && CC2420ControlP$hwAutoAckDefault) << CC2420_MDMCTRL0_AUTOACK)) | (
      0 << CC2420_MDMCTRL0_AUTOACK)) | (
      2 << CC2420_MDMCTRL0_PREAMBLE_LENGTH));
    }
#line 484
    __nesc_atomic_end(__nesc_atomic); }
}







static void CC2420ControlP$writeId(void )
#line 493
{
  nxle_uint16_t id[2];

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 496
    {
      __nesc_hton_leuint16(id[0].data, CC2420ControlP$m_pan);
      __nesc_hton_leuint16(id[1].data, CC2420ControlP$m_short_addr);
    }
#line 499
    __nesc_atomic_end(__nesc_atomic); }

  CC2420ControlP$PANID$write(0, (uint8_t *)&id, sizeof id);
}

# 260 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc"
static cc2420_status_t CC2420SpiP$Ram$write(uint16_t addr, uint8_t offset, 
uint8_t *data, 
uint8_t len)
#line 262
{

  cc2420_status_t status = 0;
  uint8_t tmpLen = len;
  uint8_t * tmpData = (uint8_t * )data;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 268
    {
      if (CC2420SpiP$WorkingState$isIdle()) {
          {
            unsigned char __nesc_temp = 
#line 270
            status;

            {
#line 270
              __nesc_atomic_end(__nesc_atomic); 
#line 270
              return __nesc_temp;
            }
          }
        }
    }
#line 274
    __nesc_atomic_end(__nesc_atomic); }
#line 274
  addr += offset;

  status = CC2420SpiP$SpiByte$write(addr | 0x80);
  CC2420SpiP$SpiByte$write((addr >> 1) & 0xc0);
  for (; len; len--) {
      CC2420SpiP$SpiByte$write(tmpData[tmpLen - len]);
    }

  return status;
}

# 42 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/timer/Atm128GpioCaptureC.nc"
static error_t /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC$0$enableCapture(uint8_t mode)
#line 42
{
  /* atomic removed: atomic calls only */
#line 43
  {
    /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC$0$Atm128Capture$stop();
    /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC$0$Atm128Capture$reset();
    /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC$0$Atm128Capture$setEdge(mode);
    /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC$0$Atm128Capture$start();
  }
  return SUCCESS;
}

# 82 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/cc2420/csma/CC2420CsmaP.nc"
static error_t CC2420CsmaP$SplitControl$start(void )
#line 82
{
  if (CC2420CsmaP$SplitControlState$requestState(CC2420CsmaP$S_STARTING) == SUCCESS) {
      CC2420CsmaP$CC2420Power$startVReg();
      return SUCCESS;
    }
  else {
#line 87
    if (CC2420CsmaP$SplitControlState$isState(CC2420CsmaP$S_STARTED)) {
        return EALREADY;
      }
    else {
#line 90
      if (CC2420CsmaP$SplitControlState$isState(CC2420CsmaP$S_STARTING)) {
          return SUCCESS;
        }
      }
    }
#line 94
  return EBUSY;
}

# 166 "/cygdrive/c/Dropbox/tinyos-2.x/tos/system/AMQueueImplP.nc"
static void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$0$tryToSend(void )
#line 166
{
  /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$0$nextPacket();
  if (/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$0$current < 1) {
      error_t nextErr;
      message_t *nextMsg = /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$0$queue[/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$0$current].msg;
      am_id_t nextId = /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$0$AMPacket$type(nextMsg);
      am_addr_t nextDest = /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$0$AMPacket$destination(nextMsg);
      uint8_t len = /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$0$Packet$payloadLength(nextMsg);

#line 174
      nextErr = /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$0$AMSend$send(nextId, nextDest, nextMsg, len);
      if (nextErr != SUCCESS) {
          /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP$0$errorTask$postTask();
        }
    }
}

# 142 "/cygdrive/c/Dropbox/tinyos-2.x/tos/lib/printf/PrintfP.nc"
static void PrintfP$AMSend$sendDone(message_t *msg, error_t error)
#line 142
{
  if (error == SUCCESS) {
      if (PrintfP$Queue$size() > 0) {
        PrintfP$sendNext();
        }
      else {
#line 146
        PrintfP$state = PrintfP$S_STARTED;
        }
    }
  else {
#line 148
    PrintfP$retrySend$postTask();
    }
}

# 347 "/cygdrive/c/Dropbox/tinyos-2.x/tos/lib/serial/SerialP.nc"
static void SerialP$testOff(void )
#line 347
{
  bool turnOff = FALSE;

#line 349
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 349
    {
      if (SerialP$txState == SerialP$TXSTATE_INACTIVE && 
      SerialP$rxState == SerialP$RXSTATE_INACTIVE) {
          turnOff = TRUE;
        }
    }
#line 354
    __nesc_atomic_end(__nesc_atomic); }
  if (turnOff) {
      SerialP$stopDoneTask$postTask();
      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 357
        SerialP$offPending = FALSE;
#line 357
        __nesc_atomic_end(__nesc_atomic); }
    }
  else {
      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 360
        SerialP$offPending = TRUE;
#line 360
        __nesc_atomic_end(__nesc_atomic); }
    }
}

# 86 "/cygdrive/c/Dropbox/tinyos-2.x/tos/lib/serial/HdlcTranslateC.nc"
static error_t HdlcTranslateC$SerialFrameComm$putDelimiter(void )
#line 86
{
  HdlcTranslateC$state.sendEscape = 0;
  HdlcTranslateC$m_data = HDLC_FLAG_BYTE;
  return HdlcTranslateC$UartStream$send(&HdlcTranslateC$m_data, 1);
}

# 155 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/Atm128UartP.nc"
static error_t /*Atm128Uart0C.UartP*/Atm128UartP$0$UartStream$send(uint8_t *buf, uint16_t len)
#line 155
{

  if (len == 0) {
    return FAIL;
    }
  else {
#line 159
    if (/*Atm128Uart0C.UartP*/Atm128UartP$0$m_tx_buf) {
      return EBUSY;
      }
    }
#line 162
  /*Atm128Uart0C.UartP*/Atm128UartP$0$m_tx_len = len;
  /*Atm128Uart0C.UartP*/Atm128UartP$0$m_tx_buf = buf;
  /*Atm128Uart0C.UartP*/Atm128UartP$0$m_tx_pos = 0;
  /*Atm128Uart0C.UartP*/Atm128UartP$0$m_tx_intr = 1;
  /*Atm128Uart0C.UartP*/Atm128UartP$0$HplUart$enableTxIntr();
  /*Atm128Uart0C.UartP*/Atm128UartP$0$HplUart$tx(buf[/*Atm128Uart0C.UartP*/Atm128UartP$0$m_tx_pos++]);

  return SUCCESS;
}

# 164 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/HplAtm128UartP.nc"
static void HplAtm128UartP$HplUart0$tx(uint8_t data)
#line 164
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 165
    {
      * (volatile uint8_t *)(0x0C + 0x20) = data;
      * (volatile uint8_t *)(0x0B + 0x20) |= 1 << 6;
    }
#line 168
    __nesc_atomic_end(__nesc_atomic); }
}

# 62 "/cygdrive/c/Dropbox/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$fireTimers(uint32_t now)
{
  uint8_t num;

  for (num = 0; num < /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$NUM_TIMERS; num++) 
    {
      /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer_t *timer = &/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$m_timers[num];

      if (timer->isrunning) 
        {
          uint32_t elapsed = now - timer->t0;

          if (elapsed >= timer->dt) 
            {
              if (timer->isoneshot) {
                timer->isrunning = FALSE;
                }
              else {
#line 79
                timer->t0 += timer->dt;
                }
              /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$fired(num);
              break;
            }
        }
    }
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$updateFromTimer$postTask();
}

# 212 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/timer/Atm128AlarmAsyncP.nc"
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$startAt(uint32_t nt0, uint32_t ndt)
#line 212
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$set = TRUE;
      /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$t0 = nt0;
      /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$dt = ndt;
    }
#line 218
    __nesc_atomic_end(__nesc_atomic); }
  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$setInterrupt();
}

#line 90
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$setInterrupt(void )
#line 90
{
  bool fired = FALSE;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {



      uint8_t interrupt_in = 1 + /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Compare$get() - /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Timer$get();
      uint8_t newOcr0;
      uint8_t tifr = (uint8_t )/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$TimerCtrl$getInterruptFlag().flat;

#line 101
      ;
      if ((interrupt_in != 0 && interrupt_in < /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$MINDT) || tifr & (1 << 1)) {
          if (interrupt_in < /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$MINDT) {
              ;
            }
          else {
              ;
            }
          {
#line 109
            __nesc_atomic_end(__nesc_atomic); 
#line 109
            return;
          }
        }

      if (!/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$set) {
          newOcr0 = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$MAXT;
          ;
        }
      else 
        {
          uint32_t now = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Counter$get();

#line 120
          ;

          if ((uint32_t )(now - /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$t0) >= /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$dt) 
            {
              /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$set = FALSE;
              fired = TRUE;
              newOcr0 = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$MAXT;
            }
          else 
            {


              uint32_t alarm_in = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$t0 + /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$dt - /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$base;

              if (alarm_in > /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$MAXT) {
                newOcr0 = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$MAXT;
                }
              else {
#line 136
                if ((uint8_t )alarm_in < /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$MINDT) {
                  newOcr0 = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$MINDT;
                  }
                else {
#line 139
                  newOcr0 = alarm_in;
                  }
                }
            }
        }
#line 142
      newOcr0--;
      /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$setOcr0(newOcr0);
    }
#line 144
    __nesc_atomic_end(__nesc_atomic); }
  if (fired) {
    /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$fired();
    }
}

# 158 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/cc2420/csma/CC2420CsmaP.nc"
static void *CC2420CsmaP$Send$getPayload(message_t *m, uint8_t len)
#line 158
{
  if (len <= CC2420CsmaP$Send$maxPayloadLength()) {
      return (void * )m->data;
    }
  else {
      return (void *)0;
    }
}

# 178 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer0AsyncP.nc"
__attribute((signal))   void __vector_15(void )
#line 178
{
  HplAtm128Timer0AsyncP$stabiliseTimer0();
  HplAtm128Timer0AsyncP$Compare$fired();
}


__attribute((signal))   void __vector_16(void )
#line 184
{
  HplAtm128Timer0AsyncP$stabiliseTimer0();
  HplAtm128Timer0AsyncP$Timer$overflow();
}

# 171 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/HplAtm128UartP.nc"
__attribute((signal))   void __vector_18(void )
#line 171
{
  if ((* (volatile uint8_t *)(0x0B + 0x20) & (1 << 7)) != 0) {
      HplAtm128UartP$HplUart0$rxDone(* (volatile uint8_t *)(0x0C + 0x20));
    }
}

# 402 "/cygdrive/c/Dropbox/tinyos-2.x/tos/lib/serial/SerialP.nc"
static void SerialP$rx_state_machine(bool isDelimeter, uint8_t data)
#line 402
{

  switch (SerialP$rxState) {

      case SerialP$RXSTATE_NOSYNC: 
        if (isDelimeter) {
            SerialP$rxInit();
            SerialP$rxState = SerialP$RXSTATE_PROTO;
          }
      break;

      case SerialP$RXSTATE_PROTO: 
        if (!isDelimeter) {
            SerialP$rxCRC = crcByte(SerialP$rxCRC, data);
            SerialP$rxState = SerialP$RXSTATE_TOKEN;
            SerialP$rxProto = data;
            if (!SerialP$valid_rx_proto(SerialP$rxProto)) {
              goto nosync;
              }
            if (SerialP$rxProto != SERIAL_PROTO_PACKET_ACK) {
                goto nosync;
              }
            if (SerialP$ReceiveBytePacket$startPacket() != SUCCESS) {
                goto nosync;
              }
          }
      break;

      case SerialP$RXSTATE_TOKEN: 
        if (isDelimeter) {
            goto nosync;
          }
        else {
            SerialP$rxSeqno = data;
            SerialP$rxCRC = crcByte(SerialP$rxCRC, SerialP$rxSeqno);
            SerialP$rxState = SerialP$RXSTATE_INFO;
          }
      break;

      case SerialP$RXSTATE_INFO: 
        if (SerialP$rxByteCnt < SerialP$SERIAL_MTU) {
            if (isDelimeter) {
                if (SerialP$rxByteCnt >= 2) {
                    if (SerialP$rx_current_crc() == SerialP$rxCRC) {
                        SerialP$ReceiveBytePacket$endPacket(SUCCESS);
                        SerialP$ack_queue_push(SerialP$rxSeqno);
                        goto nosync;
                      }
                    else {
                        goto nosync;
                      }
                  }
                else {
                    goto nosync;
                  }
              }
            else {
                if (SerialP$rxByteCnt >= 2) {
                    SerialP$ReceiveBytePacket$byteReceived(SerialP$rx_buffer_top());
                    SerialP$rxCRC = crcByte(SerialP$rxCRC, SerialP$rx_buffer_pop());
                  }
                SerialP$rx_buffer_push(data);
                SerialP$rxByteCnt++;
              }
          }
        else 

          {
            goto nosync;
          }
      break;

      default: 
        goto nosync;
    }
  goto done;

  nosync: 

    SerialP$rxInit();
  SerialP$SerialFrameComm$resetReceive();
  SerialP$ReceiveBytePacket$endPacket(FAIL);
  if (SerialP$offPending) {
      SerialP$rxState = SerialP$RXSTATE_INACTIVE;
      SerialP$testOff();
    }
  else {
    if (isDelimeter) {
        SerialP$rxState = SerialP$RXSTATE_PROTO;
      }
    }
  done: ;
}

# 285 "/cygdrive/c/Dropbox/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
static void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$ReceiveBytePacket$endPacket(error_t result)
#line 285
{
  uint8_t postsignalreceive = FALSE;

  /* atomic removed: atomic calls only */
#line 287
  {
    if (!/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$receiveTaskPending && result == SUCCESS) {
        postsignalreceive = TRUE;
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$receiveTaskPending = TRUE;
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$receiveTaskType = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$recvType;
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$receiveTaskWhich = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$receiveState.which;
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$receiveTaskBuf = (message_t *)/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$receiveBuffer;
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$receiveTaskSize = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$recvIndex;
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$receiveBufferSwap();
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$receiveState.state = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$RECV_STATE_IDLE;
      }
  }
  if (postsignalreceive) {
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$receiveTask$postTask();
    }
}

# 177 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/HplAtm128UartP.nc"
__attribute((interrupt))   void __vector_20(void )
#line 177
{
  HplAtm128UartP$HplUart0$txDone();
}

# 92 "/cygdrive/c/Dropbox/tinyos-2.x/tos/lib/serial/HdlcTranslateC.nc"
static error_t HdlcTranslateC$SerialFrameComm$putData(uint8_t data)
#line 92
{
  if (data == HDLC_CTLESC_BYTE || data == HDLC_FLAG_BYTE) {
      HdlcTranslateC$state.sendEscape = 1;
      HdlcTranslateC$txTemp = data ^ 0x20;
      HdlcTranslateC$m_data = HDLC_CTLESC_BYTE;
    }
  else {
      HdlcTranslateC$m_data = data;
    }
  return HdlcTranslateC$UartStream$send(&HdlcTranslateC$m_data, 1);
}

# 265 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/HplAtm128UartP.nc"
__attribute((signal))   void __vector_30(void )
#line 265
{
  if ((* (volatile uint8_t *)0x9B & (1 << 7)) != 0) {
    HplAtm128UartP$HplUart1$rxDone(* (volatile uint8_t *)0x9C);
    }
}

#line 270
__attribute((interrupt))   void __vector_32(void )
#line 270
{
  HplAtm128UartP$HplUart1$txDone();
}

# 189 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer3P.nc"
__attribute((interrupt))   void __vector_26(void )
#line 189
{
  HplAtm128Timer3P$CompareA$fired();
}

__attribute((interrupt))   void __vector_27(void )
#line 193
{
  HplAtm128Timer3P$CompareB$fired();
}

__attribute((interrupt))   void __vector_28(void )
#line 197
{
  HplAtm128Timer3P$CompareC$fired();
}

__attribute((interrupt))   void __vector_25(void )
#line 201
{
  HplAtm128Timer3P$Capture$captured(HplAtm128Timer3P$Timer$get());
}

__attribute((interrupt))   void __vector_29(void )
#line 205
{
  HplAtm128Timer3P$Timer$overflow();
}

# 110 "/cygdrive/c/Dropbox/tinyos-2.x/tos/lib/printf/PutcharP.nc"
__attribute((noinline))   int uart_putchar(char c, struct __file *stream)
#line 110
{








  return PutcharP$Putchar$putchar(c);
}

# 195 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer1P.nc"
__attribute((interrupt))   void __vector_12(void )
#line 195
{
  HplAtm128Timer1P$CompareA$fired();
}

__attribute((interrupt))   void __vector_13(void )
#line 199
{
  HplAtm128Timer1P$CompareB$fired();
}

__attribute((interrupt))   void __vector_24(void )
#line 203
{
  HplAtm128Timer1P$CompareC$fired();
}

__attribute((interrupt))   void __vector_11(void )
#line 207
{
  HplAtm128Timer1P$Capture$captured(HplAtm128Timer1P$Timer$get());
}

# 167 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/cc2420/packet/CC2420PacketP.nc"
static uint8_t CC2420PacketP$PacketTimeSyncOffset$get(message_t *msg)
{
  return __nesc_ntoh_leuint8(CC2420PacketP$CC2420PacketBody$getHeader(msg)->length.data)
   + (sizeof(cc2420_header_t ) - MAC_HEADER_SIZE)
   - MAC_FOOTER_SIZE
   - sizeof(timesync_radio_t );
}

# 211 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer1P.nc"
__attribute((interrupt))   void __vector_14(void )
#line 211
{
  HplAtm128Timer1P$Timer$overflow();
}

# 46 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptSigP.nc"
__attribute((signal))   void __vector_1(void )
#line 46
{
  HplAtm128InterruptSigP$IntSig0$fired();
}


__attribute((signal))   void __vector_2(void )
#line 51
{
  HplAtm128InterruptSigP$IntSig1$fired();
}


__attribute((signal))   void __vector_3(void )
#line 56
{
  HplAtm128InterruptSigP$IntSig2$fired();
}


__attribute((signal))   void __vector_4(void )
#line 61
{
  HplAtm128InterruptSigP$IntSig3$fired();
}


__attribute((signal))   void __vector_5(void )
#line 66
{
  HplAtm128InterruptSigP$IntSig4$fired();
}


__attribute((signal))   void __vector_6(void )
#line 71
{
  HplAtm128InterruptSigP$IntSig5$fired();
}


__attribute((signal))   void __vector_7(void )
#line 76
{
  HplAtm128InterruptSigP$IntSig6$fired();
}


__attribute((signal))   void __vector_8(void )
#line 81
{
  HplAtm128InterruptSigP$IntSig7$fired();
}

# 102 "/cygdrive/c/Dropbox/tinyos-2.x/tos/chips/atm128/spi/HplAtm128SpiP.nc"
__attribute((signal))   void __vector_17(void )
#line 102
{
  HplAtm128SpiP$SPI$dataReady(HplAtm128SpiP$SPI$read());
}

