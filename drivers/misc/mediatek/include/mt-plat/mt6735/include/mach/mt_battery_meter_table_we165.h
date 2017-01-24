#ifndef _CUST_BATTERY_METER_TABLE_H
#define _CUST_BATTERY_METER_TABLE_H

//#include <mach/mt_typedefs.h>

// ============================================================
// define
// ============================================================
#define BAT_NTC_10 1
#define BAT_NTC_47 0

#if (BAT_NTC_10 == 1)
#define RBAT_PULL_UP_R             16900	
#endif

#if (BAT_NTC_47 == 1)
#define RBAT_PULL_UP_R             61900	
#endif

#define RBAT_PULL_UP_VOLT          1800



// ============================================================
// ENUM
// ============================================================

// ============================================================
// structure
// ============================================================

// ============================================================
// typedef
// ============================================================
typedef struct _BATTERY_PROFILE_STRUCT {
	signed int percentage;
	signed int voltage;
} BATTERY_PROFILE_STRUCT, *BATTERY_PROFILE_STRUCT_P;

typedef struct _R_PROFILE_STRUCT {
	signed int resistance;
	signed int voltage;
} R_PROFILE_STRUCT, *R_PROFILE_STRUCT_P;

typedef enum
{
    T1_0C,
    T2_25C,
    T3_50C
} PROFILE_TEMPERATURE;

// ============================================================
// External Variables
// ============================================================

// ============================================================
// External function
// ============================================================

// ============================================================
// <DOD, Battery_Voltage> Table
// ============================================================
#if (BAT_NTC_10 == 1)
    BATT_TEMPERATURE Batt_Temperature_Table[] = {
        {-20,71955},
        {-15,56002},
        {-10,43975},
        { -5,34822},
        {  0,27794},
        {  5,22351},
        { 10,18102},
        { 15,14760},
        { 20,12112},
        { 25,10000},
        { 30,8304},
        { 35,6933},
        { 40,5819},
        { 45,4909},
        { 50,4160},
        { 55,3542},
        { 60,3029}
    };
#endif

#if (BAT_NTC_47 == 1)
    BATT_TEMPERATURE Batt_Temperature_Table[] = {
        {-20,483954},
        {-15,360850},
        {-10,271697},
        { -5,206463},
        {  0,158214},
        {  5,122259},
        { 10,95227},
        { 15,74730},
        { 20,59065},
        { 25,47000},
        { 30,37643},
        { 35,30334},
        { 40,24591},
        { 45,20048},
        { 50,16433},
        { 55,13539},
        { 60,11210}        
    };
#endif

// T0 -10C
BATTERY_PROFILE_STRUCT battery_profile_t0[] =
{
	{ 0   , 4397 },         
	{ 2   , 4376 },         
	{ 3   , 4354 },         
	{ 5   , 4332 },         
	{ 7   , 4309 },         
	{ 9   , 4288 },         
	{ 10  , 4265 },         
	{ 12  , 4244 },         
	{ 14  , 4221 },         
	{ 16  , 4199 },         
	{ 17  , 4177 },         
	{ 19  , 4154 },         
	{ 21  , 4133 },         
	{ 23  , 4112 },         
	{ 24  , 4091 },         
	{ 26  , 4071 },         
	{ 28  , 4051 },         
	{ 30  , 4031 },         
	{ 31  , 4013 },         
	{ 33  , 3997 },         
	{ 35  , 3976 },         
	{ 37  , 3961 },         
	{ 38  , 3946 },         
	{ 40  , 3930 },         
	{ 42  , 3916 },         
	{ 44  , 3903 },         
	{ 45  , 3895 },         
	{ 47  , 3883 },         
	{ 49  , 3870 },         
	{ 51  , 3855 },         
	{ 52  , 3844 },         
	{ 54  , 3833 },         
	{ 56  , 3826 },         
	{ 58  , 3817 },         
	{ 59  , 3807 },         
	{ 61  , 3800 },         
	{ 63  , 3791 },         
	{ 65  , 3785 },         
	{ 66  , 3779 },         
	{ 68  , 3772 },         
	{ 70  , 3767 },         
	{ 72  , 3761 },         
	{ 73  , 3755 },         
	{ 75  , 3748 },         
	{ 77  , 3740 },         
	{ 78  , 3733 },         
	{ 80  , 3724 },         
	{ 82  , 3714 },         
	{ 84  , 3703 },         
	{ 85  , 3693 },         
	{ 87  , 3682 },         
	{ 89  , 3672 },         
	{ 91  , 3659 },         
	{ 92  , 3645 },         
	{ 100 , 3622 },         
	{ 100 , 3585 },         
	{ 100 , 3569 },         
	{ 100 , 3558 },         
	{ 100 , 3547 },         
      
       

  
};      
        
// T1 0C 
BATTERY_PROFILE_STRUCT battery_profile_t1[] =
{
	{0    ,4396 },         
	{2    ,4380 },         
	{3    ,4360 },         
	{5    ,4340 },         
	{7    ,4322 },         
	{9    ,4301 },         
	{10   ,4281 },         
	{12   ,4261 },         
	{14   ,4237 },         
	{16   ,4219 },         
	{17   ,4198 },         
	{19   ,4177 },         
	{21   ,4157 },         
	{23   ,4134 },         
	{24   ,4116 },         
	{26   ,4096 },         
	{28   ,4075 },         
	{30   ,4055 },         
	{31   ,4033 },         
	{33   ,4014 },         
	{35   ,3996 },         
	{37   ,3977 },         
	{38   ,3961 },         
	{40   ,3946 },         
	{42   ,3930 },         
	{44   ,3916 },         
	{45   ,3904 },         
	{47   ,3893 },         
	{49   ,3880 },         
	{51   ,3870 },         
	{52   ,3860 },         
	{54   ,3850 },         
	{56   ,3842 },         
	{58   ,3833 },         
	{59   ,3826 },         
	{61   ,3817 },         
	{63   ,3810 },         
	{64   ,3803 },         
	{66   ,3797 },         
	{68   ,3791 },         
	{70   ,3786 },         
	{71   ,3781 },         
	{73   ,3776 },         
	{75   ,3771 },         
	{77   ,3765 },         
	{78   ,3760 },         
	{80   ,3752 },         
	{82   ,3745 },         
	{84   ,3735 },         
	{85   ,3724 },         
	{87   ,3712 },         
	{89   ,3695 },         
	{91   ,3682 },         
	{92   ,3669 },         
	{94   ,3656 },         
	{96   ,3633 },         
	{100  ,3578 },         
	{100  ,3514 },         
  {100  ,3476 },
        
         

	      
};           

// T2 25C
BATTERY_PROFILE_STRUCT battery_profile_t2[] =
{
	{0    , 4388 },         
	{2    , 4364 },         
	{3    , 4344 },         
	{5    , 4324 },         
	{7    , 4305 },         
	{9    , 4285 },         
	{10   , 4264 },         
	{12   , 4244 },         
	{14   , 4224 },         
	{16   , 4204 },         
	{17   , 4184 },         
	{19   , 4164 },         
	{21   , 4144 },         
	{23   , 4125 },         
	{24   , 4107 },         
	{26   , 4088 },         
	{28   , 4071 },         
	{30   , 4053 },         
	{31   , 4036 },         
	{33   , 4019 },         
	{35   , 4002 },         
	{37   , 3984 },         
	{38   , 3966 },         
	{40   , 3948 },         
	{42   , 3929 },         
	{44   , 3912 },         
	{45   , 3898 },         
	{47   , 3884 },         
	{49   , 3872 },         
	{50   , 3862 },         
	{52   , 3851 },         
	{54   , 3843 },         
	{56   , 3834 },         
	{57   , 3826 },         
	{59   , 3819 },         
	{61   , 3811 },         
	{63   , 3805 },         
	{64   , 3799 },         
	{66   , 3793 },         
	{68   , 3787 },         
	{70   , 3781 },         
	{71   , 3775 },         
	{73   , 3768 },         
	{75   , 3761 },         
	{77   , 3753 },         
	{78   , 3745 },         
	{80   , 3738 },         
	{82   , 3731 },         
	{84   , 3722 },         
	{85   , 3711 },         
	{87   , 3700 },         
	{89   , 3685 },         
	{91   , 3675 },         
	{92   , 3669 },         
	{94   , 3660 },         
	{96   , 3641 },         
	{97   , 3582 },         
	{99   , 3476 },         
	{100  , 3400 },         
         
          

       
};     

// T3 50C
BATTERY_PROFILE_STRUCT battery_profile_t3[] =
{
	{0    , 4387 },         
	{2    , 4366 },         
	{3    , 4346 },         
	{5    , 4328 },         
	{7    , 4309 },         
	{8    , 4289 },         
	{10   , 4268 },         
	{12   , 4249 },         
	{14   , 4229 },         
	{15   , 4209 },         
	{17   , 4189 },         
	{19   , 4170 },         
	{20   , 4149 },         
	{22   , 4131 },         
	{24   , 4113 },         
	{25   , 4095 },         
	{27   , 4077 },         
	{29   , 4061 },         
	{31   , 4043 },         
	{32   , 4028 },         
	{34   , 4012 },         
	{36   , 3997 },         
	{37   , 3983 },         
	{39   , 3965 },         
	{41   , 3946 },         
	{42   , 3926 },         
	{44   , 3907 },         
	{46   , 3895 },         
	{48   , 3881 },         
	{49   , 3873 },         
	{51   , 3863 },         
	{53   , 3854 },         
	{54   , 3848 },         
	{56   , 3836 },         
	{58   , 3831 },         
	{59   , 3823 },         
	{61   , 3814 },         
	{63   , 3810 },         
	{65   , 3803 },         
	{66   , 3797 },         
	{68   , 3791 },         
	{70   , 3781 },         
	{71   , 3767 },         
	{73   , 3759 },         
	{75   , 3750 },         
	{76   , 3743 },         
	{78   , 3735 },         
	{80   , 3729 },         
	{82   , 3719 },         
	{83   , 3708 },         
	{85   , 3697 },         
	{87   , 3682 },         
	{88   , 3676 },         
	{90   , 3669 },         
	{92   , 3662 },         
	{93   , 3642 },         
	{95   , 3576 },         
	{97   , 3473 },         
	{100  , 3400 },         
         
          

     
};           

// battery profile for actual temperature. The size should be the same as T1, T2 and T3
BATTERY_PROFILE_STRUCT battery_profile_temperature[] =
{
  {0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },  
	{0  , 0 }, 
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },  
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },




	
};    

// ============================================================
// <Rbat, Battery_Voltage> Table
// ============================================================
// T0 -10C
R_PROFILE_STRUCT r_profile_t0[] =
{
	{598   ,4397 },         
	{598   ,4376 },         
	{608   ,4354 },         
	{608   ,4332 },         
	{604   ,4309 },         
	{605   ,4288 },         
	{599   ,4265 },         
	{592   ,4244 },         
	{586   ,4221 },         
	{580   ,4199 },         
	{570   ,4177 },         
	{567   ,4154 },         
	{561   ,4133 },         
	{555   ,4112 },         
	{549   ,4091 },         
	{546   ,4071 },         
	{543   ,4051 },         
	{539   ,4031 },         
	{539   ,4013 },         
	{546   ,3997 },         
	{536   ,3976 },         
	{537   ,3961 },         
	{537   ,3946 },         
	{540   ,3930 },         
	{552   ,3916 },         
	{546   ,3903 },         
	{567   ,3895 },         
	{567   ,3883 },         
	{564   ,3870 },         
	{552   ,3855 },         
	{564   ,3844 },         
	{564   ,3833 },         
	{574   ,3826 },         
	{583   ,3817 },         
	{583   ,3807 },         
	{574   ,3800 },         
	{589   ,3791 },         
	{598   ,3785 },         
	{602   ,3779 },         
	{605   ,3772 },         
	{617   ,3767 },         
	{620   ,3761 },         
	{626   ,3755 },         
	{633   ,3748 },         
	{642   ,3740 },         
	{660   ,3733 },         
	{673   ,3724 },         
	{691   ,3714 },         
	{716   ,3703 },         
	{757   ,3693 },         
	{797   ,3682 },         
	{868   ,3672 },         
	{974   ,3659 },         
	{1150  ,3645 },         
	{1473  ,3622 },         
	{2223  ,3585 },         
	{2424  ,3569 },         
	{2403  ,3558 },         
	{2378  ,3547 },         
       
        

     
};      

// T1 0C
R_PROFILE_STRUCT r_profile_t1[] =
{
	{319    , 4396 },         
	{319    , 4380 },         
	{323    , 4360 },         
	{328    , 4340 },         
	{329    , 4322 },         
	{325    , 4301 },         
	{328    , 4281 },         
	{344    , 4261 },         
	{338    , 4237 },         
	{344    , 4219 },         
	{341    , 4198 },         
	{347    , 4177 },         
	{347    , 4157 },         
	{332    , 4134 },         
	{344    , 4116 },         
	{344    , 4096 },         
	{338    , 4075 },         
	{338    , 4055 },         
	{325    , 4033 },         
	{323    , 4014 },         
	{319    , 3996 },         
	{316    , 3977 },         
	{313    , 3961 },         
	{313    , 3946 },         
	{310    , 3930 },         
	{310    , 3916 },         
	{310    , 3904 },         
	{316    , 3893 },         
	{313    , 3880 },         
	{316    , 3870 },         
	{319    , 3860 },         
	{319    , 3850 },         
	{325    , 3842 },         
	{329    , 3833 },         
	{332    , 3826 },         
	{332    , 3817 },         
	{335    , 3810 },         
	{338    , 3803 },         
	{341    , 3797 },         
	{341    , 3791 },         
	{347    , 3786 },         
	{347    , 3781 },         
	{350    , 3776 },         
	{353    , 3771 },         
	{357    , 3765 },         
	{357    , 3760 },         
	{357    , 3752 },         
	{363    , 3745 },         
	{366    , 3735 },         
	{369    , 3724 },         
	{375    , 3712 },         
	{372    , 3695 },         
	{390    , 3682 },         
	{431    , 3669 },         
	{493    , 3656 },         
	{636    , 3633 },         
	{1259   , 3578 },         
	{2300   , 3514 },         
	{2192   , 3476 },         
	    
	     
  
  
        
};     

// T2 25C
R_PROFILE_STRUCT r_profile_t2[] =
{
	{158    , 4388 },         
	{158    , 4364 },         
	{159    , 4344 },         
	{161    , 4324 },         
	{161    , 4305 },         
	{163    , 4285 },         
	{165    , 4264 },         
	{166    , 4244 },         
	{168    , 4224 },         
	{169    , 4204 },         
	{172    , 4184 },         
	{173    , 4164 },         
	{177    , 4144 },         
	{178    , 4125 },         
	{182    , 4107 },         
	{185    , 4088 },         
	{187    , 4071 },         
	{190    , 4053 },         
	{193    , 4036 },         
	{195    , 4019 },         
	{197    , 4002 },         
	{195    , 3984 },         
	{191    , 3966 },         
	{184    , 3948 },         
	{176    , 3929 },         
	{171    , 3912 },         
	{167    , 3898 },         
	{163    , 3884 },         
	{164    , 3872 },         
	{164    , 3862 },         
	{164    , 3851 },         
	{166    , 3843 },         
	{166    , 3834 },         
	{168    , 3826 },         
	{169    , 3819 },         
	{170    , 3811 },         
	{172    , 3805 },         
	{174    , 3799 },         
	{174    , 3793 },         
	{175    , 3787 },         
	{175    , 3781 },         
	{175    , 3775 },         
	{174    , 3768 },         
	{173    , 3761 },         
	{170    , 3753 },         
	{167    , 3745 },         
	{168    , 3738 },         
	{168    , 3731 },         
	{167    , 3722 },         
	{167    , 3711 },         
	{170    , 3700 },         
	{166    , 3685 },         
	{164    , 3675 },         
	{170    , 3669 },         
	{178    , 3660 },         
	{190    , 3641 },         
	{192    , 3582 },         
	{210    , 3476 },         
	{527    , 3400 },         
	      
	       
  
     
}; 

// T3 50C
R_PROFILE_STRUCT r_profile_t3[] =
{
	{127 , 4387 },         
	{127 , 4366 },         
	{124 , 4346 },         
	{127 , 4328 },         
	{130 , 4309 },         
	{133 , 4289 },         
	{130 , 4268 },         
	{127 , 4249 },         
	{130 , 4229 },         
	{133 , 4209 },         
	{130 , 4189 },         
	{136 , 4170 },         
	{130 , 4149 },         
	{133 , 4131 },         
	{137 , 4113 },         
	{139 , 4095 },         
	{143 , 4077 },         
	{146 , 4061 },         
	{143 , 4043 },         
	{146 , 4028 },         
	{146 , 4012 },         
	{152 , 3997 },         
	{161 , 3983 },         
	{158 , 3965 },         
	{143 , 3946 },         
	{136 , 3926 },         
	{115 , 3907 },         
	{127 , 3895 },         
	{124 , 3881 },         
	{127 , 3873 },         
	{124 , 3863 },         
	{130 , 3854 },         
	{140 , 3848 },         
	{127 , 3836 },         
	{137 , 3831 },         
	{139 , 3823 },         
	{133 , 3814 },         
	{137 , 3810 },         
	{137 , 3803 },         
	{137 , 3797 },         
	{140 , 3791 },         
	{134 , 3781 },         
	{127 , 3767 },         
	{133 , 3759 },         
	{134 , 3750 },         
	{133 , 3743 },         
	{134 , 3735 },         
	{137 , 3729 },         
	{133 , 3719 },         
	{133 , 3708 },         
	{133 , 3697 },         
	{130 , 3682 },         
	{130 , 3676 },         
	{133 , 3669 },         
	{140 , 3662 },         
	{149 , 3642 },         
	{143 , 3576 },         
	{146 , 3473 },         
	{167 , 3400 },         
	     
	      
  
  
}; 

// r-table profile for actual temperature. The size should be the same as T1, T2 and T3
R_PROFILE_STRUCT r_profile_temperature[] =
{
  {0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },  
	{0  , 0 }, 
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },  
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },




};    

// ============================================================
// function prototype
// ============================================================
int fgauge_get_saddles(void);
BATTERY_PROFILE_STRUCT_P fgauge_get_profile(unsigned int temperature);

int fgauge_get_saddles_r_table(void);
R_PROFILE_STRUCT_P fgauge_get_profile_r_table(unsigned int temperature);

#endif	//#ifndef _CUST_BATTERY_METER_TABLE_H
