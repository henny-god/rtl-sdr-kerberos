#ifndef __KERBEROS_SDR_H
#define __KERBEROS_SDR_H

#ifdef __cplusplus
extern "C" {
#endif

#include <stdint.h>
#include <rtl-sdr_export.h>

  typedef struct rtlsdr_dev rtlsdr_dev_t;
  /*!
   * Enable/disable the internal noise source on the kerberossdr for
   * use in sample sync and iq calibration
   * \param dev the device
   * \param enable 1 to turn on, 0 to turn off
   */
  RTLSDR_API int kerberossdr_set_internal_noise(rtlsdr_dev_t *dev, int enable);

  /*!
   * Synchronize samples in time by enabling the internal noise source
   * and measuring subsequent samples with that offset
   * \param dev the device
   */ 

  RTLSDR_API int kerberossdr_sample_sync(rtlsdr_dev_t *dev);
  /*!
   * Calibrate iq offsets of the four kerberossdr channels
   * \param dev the device
   */
  RTLSDR_API int kerberossdr_calibrate_iq(rtlsdr_dev_t *dev);
#ifdef __cplusplus
}
#endif

#endif
