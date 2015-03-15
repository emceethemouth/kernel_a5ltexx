#define CAPACITY_MAX			1000
#define CAPACITY_MAX_MARGIN     30
#define CAPACITY_MIN			0

static sec_bat_adc_table_data_t temp_table[] = {
  {26193, 900},
  {26423, 850},
  {26652, 800},
  {26956, 750},
  {27260, 700},
  {27612, 650},
  {27964, 600},
  {28582, 550},
  {29200, 500},
  {30040, 450},
  {30880, 400},
  {31799, 350},
  {32718, 300},
  {33714, 250},
  {34710, 200},
  {35901, 150},
  {37091, 100},
  {38078, 50},
  {39064, 0},
  {39782, -50},
  {40500, -100},
  {40850, -150},
  {41200, -200},
};

static sec_bat_adc_table_data_t temp_table_r05_r06[] = {
  {25018, 900},
  {25209, 850},
  {25501, 800},
  {25761, 750},
  {25875, 700},
  {26170, 650},
  {26392, 600},
  {26687, 550},
  {27013, 500},
  {27383, 450},
  {27775, 400},
  {28202, 350},
  {28652, 300},
  {29178, 250},
  {29629, 200},
  {30175, 150},
  {30794, 100},
  {31272, 50},
  {31672, 0},
  {32056, -50},
  {32486, -100},
  {32719, -150},
  {33032, -200},
};

#define TEMP_HIGH_THRESHOLD_EVENT  600
#define TEMP_HIGH_RECOVERY_EVENT   460
#define TEMP_LOW_THRESHOLD_EVENT   (-50)
#define TEMP_LOW_RECOVERY_EVENT    0
#define TEMP_HIGH_THRESHOLD_NORMAL 600
#define TEMP_HIGH_RECOVERY_NORMAL  460
#define TEMP_LOW_THRESHOLD_NORMAL  (-50)
#define TEMP_LOW_RECOVERY_NORMAL   0
#define TEMP_HIGH_THRESHOLD_LPM    600
#define TEMP_HIGH_RECOVERY_LPM     460
#define TEMP_LOW_THRESHOLD_LPM     (-50)
#define TEMP_LOW_RECOVERY_LPM      0