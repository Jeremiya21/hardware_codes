/*
 * Code generated from START.
 *
 * This file will be overwritten when reconfiguring your START project.
 * Please copy examples or other code you want to keep to a separate file
 * to avoid losing it when reconfiguring.
 */
#ifndef ATMEL_START_PINS_H_INCLUDED
#define ATMEL_START_PINS_H_INCLUDED

#include <port.h>

/**
 * \brief Set R0_MCU pull mode
 *
 * Configure pin to pull up, down or disable pull mode, supported pull
 * modes are defined by device used
 *
 * \param[in] pull_mode Pin pull mode
 */
static inline void R0_MCU_set_pull_mode(const enum port_pull_mode pull_mode)
{
	PORTD_set_pin_pull_mode(0, pull_mode);
}

/**
 * \brief Set R0_MCU data direction
 *
 * Select if the pin data direction is input, output or disabled.
 * If disabled state is not possible, this function throws an assert.
 *
 * \param[in] direction PORT_DIR_IN  = Data direction in
 *                      PORT_DIR_OUT = Data direction out
 *                      PORT_DIR_OFF = Disables the pin
 *                      (low power state)
 */
static inline void R0_MCU_set_dir(const enum port_dir dir)
{
	PORTD_set_pin_dir(0, dir);
}

/**
 * \brief Set R0_MCU input/sense configuration
 *
 * Enable/disable R0_MCU digital input buffer and pin change interrupt,
 * select pin interrupt edge/level sensing mode
 *
 * \param[in] isc PORT_ISC_INTDISABLE_gc    = Iterrupt disabled but input buffer enabled
 *                PORT_ISC_BOTHEDGES_gc     = Sense Both Edges
 *                PORT_ISC_RISING_gc        = Sense Rising Edge
 *                PORT_ISC_FALLING_gc       = Sense Falling Edge
 *                PORT_ISC_INPUT_DISABLE_gc = Digital Input Buffer disabled
 *                PORT_ISC_LEVEL_gc         = Sense low Level
 */
static inline void R0_MCU_set_isc(const PORT_ISC_t isc)
{
	PORTD_pin_set_isc(0, isc);
}

/**
 * \brief Set R0_MCU inverted mode
 *
 * Enable or disable inverted I/O on a pin
 *
 * \param[in] inverted true  = I/O on R0_MCU is inverted
 *                     false = I/O on R0_MCU is not inverted
 */
static inline void R0_MCU_set_inverted(const bool inverted)
{
	PORTD_pin_set_inverted(0, inverted);
}

/**
 * \brief Set R0_MCU level
 *
 * Sets output level on a pin
 *
 * \param[in] level true  = Pin level set to "high" state
 *                  false = Pin level set to "low" state
 */
static inline void R0_MCU_set_level(const bool level)
{
	PORTD_set_pin_level(0, level);
}

/**
 * \brief Toggle output level on R0_MCU
 *
 * Toggle the pin level
 */
static inline void R0_MCU_toggle_level()
{
	PORTD_toggle_pin_level(0);
}

/**
 * \brief Get level on R0_MCU
 *
 * Reads the level on a pin
 */
static inline bool R0_MCU_get_level()
{
	return PORTD_get_pin_level(0);
}

/**
 * \brief Set G0_MCU pull mode
 *
 * Configure pin to pull up, down or disable pull mode, supported pull
 * modes are defined by device used
 *
 * \param[in] pull_mode Pin pull mode
 */
static inline void G0_MCU_set_pull_mode(const enum port_pull_mode pull_mode)
{
	PORTD_set_pin_pull_mode(1, pull_mode);
}

/**
 * \brief Set G0_MCU data direction
 *
 * Select if the pin data direction is input, output or disabled.
 * If disabled state is not possible, this function throws an assert.
 *
 * \param[in] direction PORT_DIR_IN  = Data direction in
 *                      PORT_DIR_OUT = Data direction out
 *                      PORT_DIR_OFF = Disables the pin
 *                      (low power state)
 */
static inline void G0_MCU_set_dir(const enum port_dir dir)
{
	PORTD_set_pin_dir(1, dir);
}

/**
 * \brief Set G0_MCU input/sense configuration
 *
 * Enable/disable G0_MCU digital input buffer and pin change interrupt,
 * select pin interrupt edge/level sensing mode
 *
 * \param[in] isc PORT_ISC_INTDISABLE_gc    = Iterrupt disabled but input buffer enabled
 *                PORT_ISC_BOTHEDGES_gc     = Sense Both Edges
 *                PORT_ISC_RISING_gc        = Sense Rising Edge
 *                PORT_ISC_FALLING_gc       = Sense Falling Edge
 *                PORT_ISC_INPUT_DISABLE_gc = Digital Input Buffer disabled
 *                PORT_ISC_LEVEL_gc         = Sense low Level
 */
static inline void G0_MCU_set_isc(const PORT_ISC_t isc)
{
	PORTD_pin_set_isc(1, isc);
}

/**
 * \brief Set G0_MCU inverted mode
 *
 * Enable or disable inverted I/O on a pin
 *
 * \param[in] inverted true  = I/O on G0_MCU is inverted
 *                     false = I/O on G0_MCU is not inverted
 */
static inline void G0_MCU_set_inverted(const bool inverted)
{
	PORTD_pin_set_inverted(1, inverted);
}

/**
 * \brief Set G0_MCU level
 *
 * Sets output level on a pin
 *
 * \param[in] level true  = Pin level set to "high" state
 *                  false = Pin level set to "low" state
 */
static inline void G0_MCU_set_level(const bool level)
{
	PORTD_set_pin_level(1, level);
}

/**
 * \brief Toggle output level on G0_MCU
 *
 * Toggle the pin level
 */
static inline void G0_MCU_toggle_level()
{
	PORTD_toggle_pin_level(1);
}

/**
 * \brief Get level on G0_MCU
 *
 * Reads the level on a pin
 */
static inline bool G0_MCU_get_level()
{
	return PORTD_get_pin_level(1);
}

/**
 * \brief Set B0_MCU pull mode
 *
 * Configure pin to pull up, down or disable pull mode, supported pull
 * modes are defined by device used
 *
 * \param[in] pull_mode Pin pull mode
 */
static inline void B0_MCU_set_pull_mode(const enum port_pull_mode pull_mode)
{
	PORTD_set_pin_pull_mode(2, pull_mode);
}

/**
 * \brief Set B0_MCU data direction
 *
 * Select if the pin data direction is input, output or disabled.
 * If disabled state is not possible, this function throws an assert.
 *
 * \param[in] direction PORT_DIR_IN  = Data direction in
 *                      PORT_DIR_OUT = Data direction out
 *                      PORT_DIR_OFF = Disables the pin
 *                      (low power state)
 */
static inline void B0_MCU_set_dir(const enum port_dir dir)
{
	PORTD_set_pin_dir(2, dir);
}

/**
 * \brief Set B0_MCU input/sense configuration
 *
 * Enable/disable B0_MCU digital input buffer and pin change interrupt,
 * select pin interrupt edge/level sensing mode
 *
 * \param[in] isc PORT_ISC_INTDISABLE_gc    = Iterrupt disabled but input buffer enabled
 *                PORT_ISC_BOTHEDGES_gc     = Sense Both Edges
 *                PORT_ISC_RISING_gc        = Sense Rising Edge
 *                PORT_ISC_FALLING_gc       = Sense Falling Edge
 *                PORT_ISC_INPUT_DISABLE_gc = Digital Input Buffer disabled
 *                PORT_ISC_LEVEL_gc         = Sense low Level
 */
static inline void B0_MCU_set_isc(const PORT_ISC_t isc)
{
	PORTD_pin_set_isc(2, isc);
}

/**
 * \brief Set B0_MCU inverted mode
 *
 * Enable or disable inverted I/O on a pin
 *
 * \param[in] inverted true  = I/O on B0_MCU is inverted
 *                     false = I/O on B0_MCU is not inverted
 */
static inline void B0_MCU_set_inverted(const bool inverted)
{
	PORTD_pin_set_inverted(2, inverted);
}

/**
 * \brief Set B0_MCU level
 *
 * Sets output level on a pin
 *
 * \param[in] level true  = Pin level set to "high" state
 *                  false = Pin level set to "low" state
 */
static inline void B0_MCU_set_level(const bool level)
{
	PORTD_set_pin_level(2, level);
}

/**
 * \brief Toggle output level on B0_MCU
 *
 * Toggle the pin level
 */
static inline void B0_MCU_toggle_level()
{
	PORTD_toggle_pin_level(2);
}

/**
 * \brief Get level on B0_MCU
 *
 * Reads the level on a pin
 */
static inline bool B0_MCU_get_level()
{
	return PORTD_get_pin_level(2);
}

/**
 * \brief Set W0_MCU pull mode
 *
 * Configure pin to pull up, down or disable pull mode, supported pull
 * modes are defined by device used
 *
 * \param[in] pull_mode Pin pull mode
 */
static inline void W0_MCU_set_pull_mode(const enum port_pull_mode pull_mode)
{
	PORTD_set_pin_pull_mode(3, pull_mode);
}

/**
 * \brief Set W0_MCU data direction
 *
 * Select if the pin data direction is input, output or disabled.
 * If disabled state is not possible, this function throws an assert.
 *
 * \param[in] direction PORT_DIR_IN  = Data direction in
 *                      PORT_DIR_OUT = Data direction out
 *                      PORT_DIR_OFF = Disables the pin
 *                      (low power state)
 */
static inline void W0_MCU_set_dir(const enum port_dir dir)
{
	PORTD_set_pin_dir(3, dir);
}

/**
 * \brief Set W0_MCU input/sense configuration
 *
 * Enable/disable W0_MCU digital input buffer and pin change interrupt,
 * select pin interrupt edge/level sensing mode
 *
 * \param[in] isc PORT_ISC_INTDISABLE_gc    = Iterrupt disabled but input buffer enabled
 *                PORT_ISC_BOTHEDGES_gc     = Sense Both Edges
 *                PORT_ISC_RISING_gc        = Sense Rising Edge
 *                PORT_ISC_FALLING_gc       = Sense Falling Edge
 *                PORT_ISC_INPUT_DISABLE_gc = Digital Input Buffer disabled
 *                PORT_ISC_LEVEL_gc         = Sense low Level
 */
static inline void W0_MCU_set_isc(const PORT_ISC_t isc)
{
	PORTD_pin_set_isc(3, isc);
}

/**
 * \brief Set W0_MCU inverted mode
 *
 * Enable or disable inverted I/O on a pin
 *
 * \param[in] inverted true  = I/O on W0_MCU is inverted
 *                     false = I/O on W0_MCU is not inverted
 */
static inline void W0_MCU_set_inverted(const bool inverted)
{
	PORTD_pin_set_inverted(3, inverted);
}

/**
 * \brief Set W0_MCU level
 *
 * Sets output level on a pin
 *
 * \param[in] level true  = Pin level set to "high" state
 *                  false = Pin level set to "low" state
 */
static inline void W0_MCU_set_level(const bool level)
{
	PORTD_set_pin_level(3, level);
}

/**
 * \brief Toggle output level on W0_MCU
 *
 * Toggle the pin level
 */
static inline void W0_MCU_toggle_level()
{
	PORTD_toggle_pin_level(3);
}

/**
 * \brief Get level on W0_MCU
 *
 * Reads the level on a pin
 */
static inline bool W0_MCU_get_level()
{
	return PORTD_get_pin_level(3);
}

#endif /* ATMEL_START_PINS_H_INCLUDED */
