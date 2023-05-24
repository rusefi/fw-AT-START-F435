/* Specifies palInit() without parameter, required until all platforms will
   be updated to the new style.*/
#define PAL_NEW_INIT

/**
 * @brief   Digital I/O port sized unsigned type.
 */
typedef uint32_t ioportmask_t;

/**
 * @brief   Digital I/O modes.
 */
typedef uint32_t iomode_t;

/**
 * @brief   Type of an I/O line.
 */
typedef uint32_t ioline_t;

/**
 * @brief   Type of an event mode.
 */
typedef uint32_t ioeventmode_t;

typedef gpio_type *ioportid_t;

/**
 * @brief   Type of an pad identifier.
 */
typedef uint32_t iopadid_t;

#define pal_lld_init(config) _pal_lld_init(config)

#ifdef __cplusplus
extern "C" {
#endif
  void _pal_lld_init(void);

#ifdef __cplusplus
}
#endif

//typedef struct {
//} PALConfig;

//extern const PALConfig pal_default_config;