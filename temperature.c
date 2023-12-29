#include "app_assert.h"
#include "sl_sensor_rht.h"
#include "stdint.h"

sl_status_t tempfunc(int16_t *temp_BLE){
  uint32_t rh;
  int32_t t;
  sl_status_t sc = sl_sensor_rht_get( &rh, &t);

  app_assert_status(sc);
  *temp_BLE = t/10;

  return sc;
};
