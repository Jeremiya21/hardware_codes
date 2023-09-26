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
 * \brief Set PA0 pull mode
 *
 * Configure pin to pull up, down or disable pull mode, supported pull
 * modes are defined by device used
 *
 * \param[in] pull_mode Pin pull mode
 */
static inline void PA0_set_pull_mode(const enum port_pull_mode pull_mode)
{
	PORTA_set_pin_pull_mode(0, pull_mode);
}

/**
 * \brief Set PA0 data direction
 *
 * Select if the pin data direction is input, output or disabled.
 * If disabled state is not possible, this function throws an assert.
 *
 * \param[in] direction PORT_DIR_IN  = Data direction in
 *                      PORT_DIR_OUT = Data direction out
 *                      PORT_DIR_OFF = Disables the pin
 *                      (low power state)
 */
static inline void PA0_set_dir(const enum port_dir dir)
{
	PORTA_set_pin_dir(0, dir);
}

/**
 * \brief Set PA0 input/sense configuration
 *
 * Enable/disable PA0 digital input buffer and pin change interrupt,
 * select pin interrupt edge/level sensing mode
 *
 * \param[in] isc PORT_ISC_INTDISABLE_gc    = Iterrupt disabled but input buffer enabled
 *                PORT_ISC_BOTHEDGES_gc     = Sense Both Edges
 *                PORT_ISC_RISING_gc        = Sense Rising Edge
 *                PORT_ISC_FALLING_gc       = Sense Falling Edge
 *                PORT_ISC_INPUT_DISABLE_gc = Digital Input Buffer disabled
 *                PORT_ISC_LEVEL_gc         = Sense low Level
 */
static inline void PA0_set_isc(const PORT_ISC_t isc)
{
	PORTA_pin_set_isc(0, isc);
}

/**
 * \brief Set PA0 inverted mode
 *
 * Enable or disable inverted I/O on a pin
 *
 * \param[in] inverted true  = I/O on PA0 is inverted
 *                     false = I/O on PA0 is not inverted
 */
static inline void PA0_set_inverted(const bool inverted)
{
	PORTA_pin_set_inverted(0, inverted);
}

/**
 * \brief Set PA0 level
 *
 * Sets output level on a pin
 *
 * \param[in] level true  = Pin level set to "high" state
 *                  false = Pin level set to "low" state
 */
static inline void PA0_set_level(const bool level)
{
	PORTA_set_pin_level(0, level);
}

/**
 * \brief Toggle output level on PA0
 *
 * Toggle the pin level
 */
static inline void PA0_toggle_level()
{
	PORTA_toggle_pin_level(0);
}

/**
 * \brief Get level on PA0
 *
 * Reads the level on a pin
 */
static inline bool PA0_get_level()
{
	return PORTA_get_pin_level(0);
}

/**
 * \brief Set BUZZER_MCU pull mode
 *
 * Configure pin to pull up, down or disable pull mode, supported pull
 * modes are defined by device used
 *
 * \param[in] pull_mode Pin pull mode
 */
static inline void BUZZER_MCU_set_pull_mode(const enum port_pull_mode pull_mode)
{
	PORTA_set_pin_pull_mode(2, pull_mode);
}

/**
 * \brief Set BUZZER_MCU data direction
 *
 * Select if the pin data direction is input, output or disabled.
 * If disabled state is not possible, this function throws an assert.
 *
 * \param[in] direction PORT_DIR_IN  = Data direction in
 *                      PORT_DIR_OUT = Data direction out
 *                      PORT_DIR_OFF = Disables the pin
 *                      (low power state)
 */
static inline void BUZZER_MCU_set_dir(const enum port_dir dir)
{
	PORTA_set_pin_dir(2, dir);
}

/**
 * \brief Set BUZZER_MCU input/sense configuration
 *
 * Enable/disable BUZZER_MCU digital input buffer and pin change interrupt,
 * select pin interrupt edge/level sensing mode
 *
 * \param[in] isc PORT_ISC_INTDISABLE_gc    = Iterrupt disabled but input buffer enabled
 *                PORT_ISC_BOTHEDGES_gc     = Sense Both Edges
 *                PORT_ISC_RISING_gc        = Sense Rising Edge
 *                PORT_ISC_FALLING_gc       = Sense Falling Edge
 *                PORT_ISC_INPUT_DISABLE_gc = Digital Input Buffer disabled
 *                PORT_ISC_LEVEL_gc         = Sense low Level
 */
static inline void BUZZER_MCU_set_isc(const PORT_ISC_t isc)
{
	PORTA_pin_set_isc(2, isc);
}

/**
 * \brief Set BUZZER_MCU inverted mode
 *
 * Enable or disable inverted I/O on a pin
 *
 * \param[in] inverted true  = I/O on BUZZER_MCU is inverted
 *                     false = I/O on BUZZER_MCU is not inverted
 */
static inline void BUZZER_MCU_set_inverted(const bool inverted)
{
	PORTA_pin_set_inverted(2, inverted);
}

/**
 * \brief Set BUZZER_MCU level
 *
 * Sets output level on a pin
 *
 * \param[in] level true  = Pin level set to "high" state
 *                  false = Pin level set to "low" state
 */
static inline void BUZZER_MCU_set_level(const bool level)
{
	PORTA_set_pin_level(2, level);
}

/**
 * \brief Toggle output level on BUZZER_MCU
 *
 * Toggle the pin level
 */
static inline void BUZZER_MCU_toggle_level()
{
	PORTA_toggle_pin_level(2);
}

/**
 * \brief Get level on BUZZER_MCU
 *
 * Reads the level on a pin
 */
static inline bool BUZZER_MCU_get_level()
{
	return PORTA_get_pin_level(2);
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
	PORTA_set_pin_pull_mode(3, pull_mode);
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
	PORTA_set_pin_dir(3, dir);
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
	PORTA_pin_set_isc(3, isc);
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
	PORTA_pin_set_inverted(3, inverted);
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
	PORTA_set_pin_level(3, level);
}

/**
 * \brief Toggle output level on W0_MCU
 *
 * Toggle the pin level
 */
static inline void W0_MCU_toggle_level()
{
	PORTA_toggle_pin_level(3);
}

/**
 * \brief Get level on W0_MCU
 *
 * Reads the level on a pin
 */
static inline bool W0_MCU_get_level()
{
	return PORTA_get_pin_level(3);
}

/**
 * \brief Set W1_MCU pull mode
 *
 * Configure pin to pull up, down or disable pull mode, supported pull
 * modes are defined by device used
 *
 * \param[in] pull_mode Pin pull mode
 */
static inline void W1_MCU_set_pull_mode(const enum port_pull_mode pull_mode)
{
	PORTA_set_pin_pull_mode(4, pull_mode);
}

/**
 * \brief Set W1_MCU data direction
 *
 * Select if the pin data direction is input, output or disabled.
 * If disabled state is not possible, this function throws an assert.
 *
 * \param[in] direction PORT_DIR_IN  = Data direction in
 *                      PORT_DIR_OUT = Data direction out
 *                      PORT_DIR_OFF = Disables the pin
 *                      (low power state)
 */
static inline void W1_MCU_set_dir(const enum port_dir dir)
{
	PORTA_set_pin_dir(4, dir);
}

/**
 * \brief Set W1_MCU input/sense configuration
 *
 * Enable/disable W1_MCU digital input buffer and pin change interrupt,
 * select pin interrupt edge/level sensing mode
 *
 * \param[in] isc PORT_ISC_INTDISABLE_gc    = Iterrupt disabled but input buffer enabled
 *                PORT_ISC_BOTHEDGES_gc     = Sense Both Edges
 *                PORT_ISC_RISING_gc        = Sense Rising Edge
 *                PORT_ISC_FALLING_gc       = Sense Falling Edge
 *                PORT_ISC_INPUT_DISABLE_gc = Digital Input Buffer disabled
 *                PORT_ISC_LEVEL_gc         = Sense low Level
 */
static inline void W1_MCU_set_isc(const PORT_ISC_t isc)
{
	PORTA_pin_set_isc(4, isc);
}

/**
 * \brief Set W1_MCU inverted mode
 *
 * Enable or disable inverted I/O on a pin
 *
 * \param[in] inverted true  = I/O on W1_MCU is inverted
 *                     false = I/O on W1_MCU is not inverted
 */
static inline void W1_MCU_set_inverted(const bool inverted)
{
	PORTA_pin_set_inverted(4, inverted);
}

/**
 * \brief Set W1_MCU level
 *
 * Sets output level on a pin
 *
 * \param[in] level true  = Pin level set to "high" state
 *                  false = Pin level set to "low" state
 */
static inline void W1_MCU_set_level(const bool level)
{
	PORTA_set_pin_level(4, level);
}

/**
 * \brief Toggle output level on W1_MCU
 *
 * Toggle the pin level
 */
static inline void W1_MCU_toggle_level()
{
	PORTA_toggle_pin_level(4);
}

/**
 * \brief Get level on W1_MCU
 *
 * Reads the level on a pin
 */
static inline bool W1_MCU_get_level()
{
	return PORTA_get_pin_level(4);
}

/**
 * \brief Set W2_MCU pull mode
 *
 * Configure pin to pull up, down or disable pull mode, supported pull
 * modes are defined by device used
 *
 * \param[in] pull_mode Pin pull mode
 */
static inline void W2_MCU_set_pull_mode(const enum port_pull_mode pull_mode)
{
	PORTA_set_pin_pull_mode(5, pull_mode);
}

/**
 * \brief Set W2_MCU data direction
 *
 * Select if the pin data direction is input, output or disabled.
 * If disabled state is not possible, this function throws an assert.
 *
 * \param[in] direction PORT_DIR_IN  = Data direction in
 *                      PORT_DIR_OUT = Data direction out
 *                      PORT_DIR_OFF = Disables the pin
 *                      (low power state)
 */
static inline void W2_MCU_set_dir(const enum port_dir dir)
{
	PORTA_set_pin_dir(5, dir);
}

/**
 * \brief Set W2_MCU input/sense configuration
 *
 * Enable/disable W2_MCU digital input buffer and pin change interrupt,
 * select pin interrupt edge/level sensing mode
 *
 * \param[in] isc PORT_ISC_INTDISABLE_gc    = Iterrupt disabled but input buffer enabled
 *                PORT_ISC_BOTHEDGES_gc     = Sense Both Edges
 *                PORT_ISC_RISING_gc        = Sense Rising Edge
 *                PORT_ISC_FALLING_gc       = Sense Falling Edge
 *                PORT_ISC_INPUT_DISABLE_gc = Digital Input Buffer disabled
 *                PORT_ISC_LEVEL_gc         = Sense low Level
 */
static inline void W2_MCU_set_isc(const PORT_ISC_t isc)
{
	PORTA_pin_set_isc(5, isc);
}

/**
 * \brief Set W2_MCU inverted mode
 *
 * Enable or disable inverted I/O on a pin
 *
 * \param[in] inverted true  = I/O on W2_MCU is inverted
 *                     false = I/O on W2_MCU is not inverted
 */
static inline void W2_MCU_set_inverted(const bool inverted)
{
	PORTA_pin_set_inverted(5, inverted);
}

/**
 * \brief Set W2_MCU level
 *
 * Sets output level on a pin
 *
 * \param[in] level true  = Pin level set to "high" state
 *                  false = Pin level set to "low" state
 */
static inline void W2_MCU_set_level(const bool level)
{
	PORTA_set_pin_level(5, level);
}

/**
 * \brief Toggle output level on W2_MCU
 *
 * Toggle the pin level
 */
static inline void W2_MCU_toggle_level()
{
	PORTA_toggle_pin_level(5);
}

/**
 * \brief Get level on W2_MCU
 *
 * Reads the level on a pin
 */
static inline bool W2_MCU_get_level()
{
	return PORTA_get_pin_level(5);
}

/**
 * \brief Set W3_MCU pull mode
 *
 * Configure pin to pull up, down or disable pull mode, supported pull
 * modes are defined by device used
 *
 * \param[in] pull_mode Pin pull mode
 */
static inline void W3_MCU_set_pull_mode(const enum port_pull_mode pull_mode)
{
	PORTA_set_pin_pull_mode(6, pull_mode);
}

/**
 * \brief Set W3_MCU data direction
 *
 * Select if the pin data direction is input, output or disabled.
 * If disabled state is not possible, this function throws an assert.
 *
 * \param[in] direction PORT_DIR_IN  = Data direction in
 *                      PORT_DIR_OUT = Data direction out
 *                      PORT_DIR_OFF = Disables the pin
 *                      (low power state)
 */
static inline void W3_MCU_set_dir(const enum port_dir dir)
{
	PORTA_set_pin_dir(6, dir);
}

/**
 * \brief Set W3_MCU input/sense configuration
 *
 * Enable/disable W3_MCU digital input buffer and pin change interrupt,
 * select pin interrupt edge/level sensing mode
 *
 * \param[in] isc PORT_ISC_INTDISABLE_gc    = Iterrupt disabled but input buffer enabled
 *                PORT_ISC_BOTHEDGES_gc     = Sense Both Edges
 *                PORT_ISC_RISING_gc        = Sense Rising Edge
 *                PORT_ISC_FALLING_gc       = Sense Falling Edge
 *                PORT_ISC_INPUT_DISABLE_gc = Digital Input Buffer disabled
 *                PORT_ISC_LEVEL_gc         = Sense low Level
 */
static inline void W3_MCU_set_isc(const PORT_ISC_t isc)
{
	PORTA_pin_set_isc(6, isc);
}

/**
 * \brief Set W3_MCU inverted mode
 *
 * Enable or disable inverted I/O on a pin
 *
 * \param[in] inverted true  = I/O on W3_MCU is inverted
 *                     false = I/O on W3_MCU is not inverted
 */
static inline void W3_MCU_set_inverted(const bool inverted)
{
	PORTA_pin_set_inverted(6, inverted);
}

/**
 * \brief Set W3_MCU level
 *
 * Sets output level on a pin
 *
 * \param[in] level true  = Pin level set to "high" state
 *                  false = Pin level set to "low" state
 */
static inline void W3_MCU_set_level(const bool level)
{
	PORTA_set_pin_level(6, level);
}

/**
 * \brief Toggle output level on W3_MCU
 *
 * Toggle the pin level
 */
static inline void W3_MCU_toggle_level()
{
	PORTA_toggle_pin_level(6);
}

/**
 * \brief Get level on W3_MCU
 *
 * Reads the level on a pin
 */
static inline bool W3_MCU_get_level()
{
	return PORTA_get_pin_level(6);
}

/**
 * \brief Set TXEN pull mode
 *
 * Configure pin to pull up, down or disable pull mode, supported pull
 * modes are defined by device used
 *
 * \param[in] pull_mode Pin pull mode
 */
static inline void TXEN_set_pull_mode(const enum port_pull_mode pull_mode)
{
	PORTA_set_pin_pull_mode(7, pull_mode);
}

/**
 * \brief Set TXEN data direction
 *
 * Select if the pin data direction is input, output or disabled.
 * If disabled state is not possible, this function throws an assert.
 *
 * \param[in] direction PORT_DIR_IN  = Data direction in
 *                      PORT_DIR_OUT = Data direction out
 *                      PORT_DIR_OFF = Disables the pin
 *                      (low power state)
 */
static inline void TXEN_set_dir(const enum port_dir dir)
{
	PORTA_set_pin_dir(7, dir);
}

/**
 * \brief Set TXEN input/sense configuration
 *
 * Enable/disable TXEN digital input buffer and pin change interrupt,
 * select pin interrupt edge/level sensing mode
 *
 * \param[in] isc PORT_ISC_INTDISABLE_gc    = Iterrupt disabled but input buffer enabled
 *                PORT_ISC_BOTHEDGES_gc     = Sense Both Edges
 *                PORT_ISC_RISING_gc        = Sense Rising Edge
 *                PORT_ISC_FALLING_gc       = Sense Falling Edge
 *                PORT_ISC_INPUT_DISABLE_gc = Digital Input Buffer disabled
 *                PORT_ISC_LEVEL_gc         = Sense low Level
 */
static inline void TXEN_set_isc(const PORT_ISC_t isc)
{
	PORTA_pin_set_isc(7, isc);
}

/**
 * \brief Set TXEN inverted mode
 *
 * Enable or disable inverted I/O on a pin
 *
 * \param[in] inverted true  = I/O on TXEN is inverted
 *                     false = I/O on TXEN is not inverted
 */
static inline void TXEN_set_inverted(const bool inverted)
{
	PORTA_pin_set_inverted(7, inverted);
}

/**
 * \brief Set TXEN level
 *
 * Sets output level on a pin
 *
 * \param[in] level true  = Pin level set to "high" state
 *                  false = Pin level set to "low" state
 */
static inline void TXEN_set_level(const bool level)
{
	PORTA_set_pin_level(7, level);
}

/**
 * \brief Toggle output level on TXEN
 *
 * Toggle the pin level
 */
static inline void TXEN_toggle_level()
{
	PORTA_toggle_pin_level(7);
}

/**
 * \brief Get level on TXEN
 *
 * Reads the level on a pin
 */
static inline bool TXEN_get_level()
{
	return PORTA_get_pin_level(7);
}

/**
 * \brief Set TX pull mode
 *
 * Configure pin to pull up, down or disable pull mode, supported pull
 * modes are defined by device used
 *
 * \param[in] pull_mode Pin pull mode
 */
static inline void TX_set_pull_mode(const enum port_pull_mode pull_mode)
{
	PORTC_set_pin_pull_mode(0, pull_mode);
}

/**
 * \brief Set TX data direction
 *
 * Select if the pin data direction is input, output or disabled.
 * If disabled state is not possible, this function throws an assert.
 *
 * \param[in] direction PORT_DIR_IN  = Data direction in
 *                      PORT_DIR_OUT = Data direction out
 *                      PORT_DIR_OFF = Disables the pin
 *                      (low power state)
 */
static inline void TX_set_dir(const enum port_dir dir)
{
	PORTC_set_pin_dir(0, dir);
}

/**
 * \brief Set TX input/sense configuration
 *
 * Enable/disable TX digital input buffer and pin change interrupt,
 * select pin interrupt edge/level sensing mode
 *
 * \param[in] isc PORT_ISC_INTDISABLE_gc    = Iterrupt disabled but input buffer enabled
 *                PORT_ISC_BOTHEDGES_gc     = Sense Both Edges
 *                PORT_ISC_RISING_gc        = Sense Rising Edge
 *                PORT_ISC_FALLING_gc       = Sense Falling Edge
 *                PORT_ISC_INPUT_DISABLE_gc = Digital Input Buffer disabled
 *                PORT_ISC_LEVEL_gc         = Sense low Level
 */
static inline void TX_set_isc(const PORT_ISC_t isc)
{
	PORTC_pin_set_isc(0, isc);
}

/**
 * \brief Set TX inverted mode
 *
 * Enable or disable inverted I/O on a pin
 *
 * \param[in] inverted true  = I/O on TX is inverted
 *                     false = I/O on TX is not inverted
 */
static inline void TX_set_inverted(const bool inverted)
{
	PORTC_pin_set_inverted(0, inverted);
}

/**
 * \brief Set TX level
 *
 * Sets output level on a pin
 *
 * \param[in] level true  = Pin level set to "high" state
 *                  false = Pin level set to "low" state
 */
static inline void TX_set_level(const bool level)
{
	PORTC_set_pin_level(0, level);
}

/**
 * \brief Toggle output level on TX
 *
 * Toggle the pin level
 */
static inline void TX_toggle_level()
{
	PORTC_toggle_pin_level(0);
}

/**
 * \brief Get level on TX
 *
 * Reads the level on a pin
 */
static inline bool TX_get_level()
{
	return PORTC_get_pin_level(0);
}

/**
 * \brief Set RX pull mode
 *
 * Configure pin to pull up, down or disable pull mode, supported pull
 * modes are defined by device used
 *
 * \param[in] pull_mode Pin pull mode
 */
static inline void RX_set_pull_mode(const enum port_pull_mode pull_mode)
{
	PORTC_set_pin_pull_mode(1, pull_mode);
}

/**
 * \brief Set RX data direction
 *
 * Select if the pin data direction is input, output or disabled.
 * If disabled state is not possible, this function throws an assert.
 *
 * \param[in] direction PORT_DIR_IN  = Data direction in
 *                      PORT_DIR_OUT = Data direction out
 *                      PORT_DIR_OFF = Disables the pin
 *                      (low power state)
 */
static inline void RX_set_dir(const enum port_dir dir)
{
	PORTC_set_pin_dir(1, dir);
}

/**
 * \brief Set RX input/sense configuration
 *
 * Enable/disable RX digital input buffer and pin change interrupt,
 * select pin interrupt edge/level sensing mode
 *
 * \param[in] isc PORT_ISC_INTDISABLE_gc    = Iterrupt disabled but input buffer enabled
 *                PORT_ISC_BOTHEDGES_gc     = Sense Both Edges
 *                PORT_ISC_RISING_gc        = Sense Rising Edge
 *                PORT_ISC_FALLING_gc       = Sense Falling Edge
 *                PORT_ISC_INPUT_DISABLE_gc = Digital Input Buffer disabled
 *                PORT_ISC_LEVEL_gc         = Sense low Level
 */
static inline void RX_set_isc(const PORT_ISC_t isc)
{
	PORTC_pin_set_isc(1, isc);
}

/**
 * \brief Set RX inverted mode
 *
 * Enable or disable inverted I/O on a pin
 *
 * \param[in] inverted true  = I/O on RX is inverted
 *                     false = I/O on RX is not inverted
 */
static inline void RX_set_inverted(const bool inverted)
{
	PORTC_pin_set_inverted(1, inverted);
}

/**
 * \brief Set RX level
 *
 * Sets output level on a pin
 *
 * \param[in] level true  = Pin level set to "high" state
 *                  false = Pin level set to "low" state
 */
static inline void RX_set_level(const bool level)
{
	PORTC_set_pin_level(1, level);
}

/**
 * \brief Toggle output level on RX
 *
 * Toggle the pin level
 */
static inline void RX_toggle_level()
{
	PORTC_toggle_pin_level(1);
}

/**
 * \brief Get level on RX
 *
 * Reads the level on a pin
 */
static inline bool RX_get_level()
{
	return PORTC_get_pin_level(1);
}

/**
 * \brief Set PC2 pull mode
 *
 * Configure pin to pull up, down or disable pull mode, supported pull
 * modes are defined by device used
 *
 * \param[in] pull_mode Pin pull mode
 */
static inline void PC2_set_pull_mode(const enum port_pull_mode pull_mode)
{
	PORTC_set_pin_pull_mode(2, pull_mode);
}

/**
 * \brief Set PC2 data direction
 *
 * Select if the pin data direction is input, output or disabled.
 * If disabled state is not possible, this function throws an assert.
 *
 * \param[in] direction PORT_DIR_IN  = Data direction in
 *                      PORT_DIR_OUT = Data direction out
 *                      PORT_DIR_OFF = Disables the pin
 *                      (low power state)
 */
static inline void PC2_set_dir(const enum port_dir dir)
{
	PORTC_set_pin_dir(2, dir);
}

/**
 * \brief Set PC2 input/sense configuration
 *
 * Enable/disable PC2 digital input buffer and pin change interrupt,
 * select pin interrupt edge/level sensing mode
 *
 * \param[in] isc PORT_ISC_INTDISABLE_gc    = Iterrupt disabled but input buffer enabled
 *                PORT_ISC_BOTHEDGES_gc     = Sense Both Edges
 *                PORT_ISC_RISING_gc        = Sense Rising Edge
 *                PORT_ISC_FALLING_gc       = Sense Falling Edge
 *                PORT_ISC_INPUT_DISABLE_gc = Digital Input Buffer disabled
 *                PORT_ISC_LEVEL_gc         = Sense low Level
 */
static inline void PC2_set_isc(const PORT_ISC_t isc)
{
	PORTC_pin_set_isc(2, isc);
}

/**
 * \brief Set PC2 inverted mode
 *
 * Enable or disable inverted I/O on a pin
 *
 * \param[in] inverted true  = I/O on PC2 is inverted
 *                     false = I/O on PC2 is not inverted
 */
static inline void PC2_set_inverted(const bool inverted)
{
	PORTC_pin_set_inverted(2, inverted);
}

/**
 * \brief Set PC2 level
 *
 * Sets output level on a pin
 *
 * \param[in] level true  = Pin level set to "high" state
 *                  false = Pin level set to "low" state
 */
static inline void PC2_set_level(const bool level)
{
	PORTC_set_pin_level(2, level);
}

/**
 * \brief Toggle output level on PC2
 *
 * Toggle the pin level
 */
static inline void PC2_toggle_level()
{
	PORTC_toggle_pin_level(2);
}

/**
 * \brief Get level on PC2
 *
 * Reads the level on a pin
 */
static inline bool PC2_get_level()
{
	return PORTC_get_pin_level(2);
}

/**
 * \brief Set PC3 pull mode
 *
 * Configure pin to pull up, down or disable pull mode, supported pull
 * modes are defined by device used
 *
 * \param[in] pull_mode Pin pull mode
 */
static inline void PC3_set_pull_mode(const enum port_pull_mode pull_mode)
{
	PORTC_set_pin_pull_mode(3, pull_mode);
}

/**
 * \brief Set PC3 data direction
 *
 * Select if the pin data direction is input, output or disabled.
 * If disabled state is not possible, this function throws an assert.
 *
 * \param[in] direction PORT_DIR_IN  = Data direction in
 *                      PORT_DIR_OUT = Data direction out
 *                      PORT_DIR_OFF = Disables the pin
 *                      (low power state)
 */
static inline void PC3_set_dir(const enum port_dir dir)
{
	PORTC_set_pin_dir(3, dir);
}

/**
 * \brief Set PC3 input/sense configuration
 *
 * Enable/disable PC3 digital input buffer and pin change interrupt,
 * select pin interrupt edge/level sensing mode
 *
 * \param[in] isc PORT_ISC_INTDISABLE_gc    = Iterrupt disabled but input buffer enabled
 *                PORT_ISC_BOTHEDGES_gc     = Sense Both Edges
 *                PORT_ISC_RISING_gc        = Sense Rising Edge
 *                PORT_ISC_FALLING_gc       = Sense Falling Edge
 *                PORT_ISC_INPUT_DISABLE_gc = Digital Input Buffer disabled
 *                PORT_ISC_LEVEL_gc         = Sense low Level
 */
static inline void PC3_set_isc(const PORT_ISC_t isc)
{
	PORTC_pin_set_isc(3, isc);
}

/**
 * \brief Set PC3 inverted mode
 *
 * Enable or disable inverted I/O on a pin
 *
 * \param[in] inverted true  = I/O on PC3 is inverted
 *                     false = I/O on PC3 is not inverted
 */
static inline void PC3_set_inverted(const bool inverted)
{
	PORTC_pin_set_inverted(3, inverted);
}

/**
 * \brief Set PC3 level
 *
 * Sets output level on a pin
 *
 * \param[in] level true  = Pin level set to "high" state
 *                  false = Pin level set to "low" state
 */
static inline void PC3_set_level(const bool level)
{
	PORTC_set_pin_level(3, level);
}

/**
 * \brief Toggle output level on PC3
 *
 * Toggle the pin level
 */
static inline void PC3_toggle_level()
{
	PORTC_toggle_pin_level(3);
}

/**
 * \brief Get level on PC3
 *
 * Reads the level on a pin
 */
static inline bool PC3_get_level()
{
	return PORTC_get_pin_level(3);
}

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
 * \brief Set R1_MCU pull mode
 *
 * Configure pin to pull up, down or disable pull mode, supported pull
 * modes are defined by device used
 *
 * \param[in] pull_mode Pin pull mode
 */
static inline void R1_MCU_set_pull_mode(const enum port_pull_mode pull_mode)
{
	PORTD_set_pin_pull_mode(3, pull_mode);
}

/**
 * \brief Set R1_MCU data direction
 *
 * Select if the pin data direction is input, output or disabled.
 * If disabled state is not possible, this function throws an assert.
 *
 * \param[in] direction PORT_DIR_IN  = Data direction in
 *                      PORT_DIR_OUT = Data direction out
 *                      PORT_DIR_OFF = Disables the pin
 *                      (low power state)
 */
static inline void R1_MCU_set_dir(const enum port_dir dir)
{
	PORTD_set_pin_dir(3, dir);
}

/**
 * \brief Set R1_MCU input/sense configuration
 *
 * Enable/disable R1_MCU digital input buffer and pin change interrupt,
 * select pin interrupt edge/level sensing mode
 *
 * \param[in] isc PORT_ISC_INTDISABLE_gc    = Iterrupt disabled but input buffer enabled
 *                PORT_ISC_BOTHEDGES_gc     = Sense Both Edges
 *                PORT_ISC_RISING_gc        = Sense Rising Edge
 *                PORT_ISC_FALLING_gc       = Sense Falling Edge
 *                PORT_ISC_INPUT_DISABLE_gc = Digital Input Buffer disabled
 *                PORT_ISC_LEVEL_gc         = Sense low Level
 */
static inline void R1_MCU_set_isc(const PORT_ISC_t isc)
{
	PORTD_pin_set_isc(3, isc);
}

/**
 * \brief Set R1_MCU inverted mode
 *
 * Enable or disable inverted I/O on a pin
 *
 * \param[in] inverted true  = I/O on R1_MCU is inverted
 *                     false = I/O on R1_MCU is not inverted
 */
static inline void R1_MCU_set_inverted(const bool inverted)
{
	PORTD_pin_set_inverted(3, inverted);
}

/**
 * \brief Set R1_MCU level
 *
 * Sets output level on a pin
 *
 * \param[in] level true  = Pin level set to "high" state
 *                  false = Pin level set to "low" state
 */
static inline void R1_MCU_set_level(const bool level)
{
	PORTD_set_pin_level(3, level);
}

/**
 * \brief Toggle output level on R1_MCU
 *
 * Toggle the pin level
 */
static inline void R1_MCU_toggle_level()
{
	PORTD_toggle_pin_level(3);
}

/**
 * \brief Get level on R1_MCU
 *
 * Reads the level on a pin
 */
static inline bool R1_MCU_get_level()
{
	return PORTD_get_pin_level(3);
}

/**
 * \brief Set G1_MCU pull mode
 *
 * Configure pin to pull up, down or disable pull mode, supported pull
 * modes are defined by device used
 *
 * \param[in] pull_mode Pin pull mode
 */
static inline void G1_MCU_set_pull_mode(const enum port_pull_mode pull_mode)
{
	PORTD_set_pin_pull_mode(4, pull_mode);
}

/**
 * \brief Set G1_MCU data direction
 *
 * Select if the pin data direction is input, output or disabled.
 * If disabled state is not possible, this function throws an assert.
 *
 * \param[in] direction PORT_DIR_IN  = Data direction in
 *                      PORT_DIR_OUT = Data direction out
 *                      PORT_DIR_OFF = Disables the pin
 *                      (low power state)
 */
static inline void G1_MCU_set_dir(const enum port_dir dir)
{
	PORTD_set_pin_dir(4, dir);
}

/**
 * \brief Set G1_MCU input/sense configuration
 *
 * Enable/disable G1_MCU digital input buffer and pin change interrupt,
 * select pin interrupt edge/level sensing mode
 *
 * \param[in] isc PORT_ISC_INTDISABLE_gc    = Iterrupt disabled but input buffer enabled
 *                PORT_ISC_BOTHEDGES_gc     = Sense Both Edges
 *                PORT_ISC_RISING_gc        = Sense Rising Edge
 *                PORT_ISC_FALLING_gc       = Sense Falling Edge
 *                PORT_ISC_INPUT_DISABLE_gc = Digital Input Buffer disabled
 *                PORT_ISC_LEVEL_gc         = Sense low Level
 */
static inline void G1_MCU_set_isc(const PORT_ISC_t isc)
{
	PORTD_pin_set_isc(4, isc);
}

/**
 * \brief Set G1_MCU inverted mode
 *
 * Enable or disable inverted I/O on a pin
 *
 * \param[in] inverted true  = I/O on G1_MCU is inverted
 *                     false = I/O on G1_MCU is not inverted
 */
static inline void G1_MCU_set_inverted(const bool inverted)
{
	PORTD_pin_set_inverted(4, inverted);
}

/**
 * \brief Set G1_MCU level
 *
 * Sets output level on a pin
 *
 * \param[in] level true  = Pin level set to "high" state
 *                  false = Pin level set to "low" state
 */
static inline void G1_MCU_set_level(const bool level)
{
	PORTD_set_pin_level(4, level);
}

/**
 * \brief Toggle output level on G1_MCU
 *
 * Toggle the pin level
 */
static inline void G1_MCU_toggle_level()
{
	PORTD_toggle_pin_level(4);
}

/**
 * \brief Get level on G1_MCU
 *
 * Reads the level on a pin
 */
static inline bool G1_MCU_get_level()
{
	return PORTD_get_pin_level(4);
}

/**
 * \brief Set B1_MCU pull mode
 *
 * Configure pin to pull up, down or disable pull mode, supported pull
 * modes are defined by device used
 *
 * \param[in] pull_mode Pin pull mode
 */
static inline void B1_MCU_set_pull_mode(const enum port_pull_mode pull_mode)
{
	PORTD_set_pin_pull_mode(5, pull_mode);
}

/**
 * \brief Set B1_MCU data direction
 *
 * Select if the pin data direction is input, output or disabled.
 * If disabled state is not possible, this function throws an assert.
 *
 * \param[in] direction PORT_DIR_IN  = Data direction in
 *                      PORT_DIR_OUT = Data direction out
 *                      PORT_DIR_OFF = Disables the pin
 *                      (low power state)
 */
static inline void B1_MCU_set_dir(const enum port_dir dir)
{
	PORTD_set_pin_dir(5, dir);
}

/**
 * \brief Set B1_MCU input/sense configuration
 *
 * Enable/disable B1_MCU digital input buffer and pin change interrupt,
 * select pin interrupt edge/level sensing mode
 *
 * \param[in] isc PORT_ISC_INTDISABLE_gc    = Iterrupt disabled but input buffer enabled
 *                PORT_ISC_BOTHEDGES_gc     = Sense Both Edges
 *                PORT_ISC_RISING_gc        = Sense Rising Edge
 *                PORT_ISC_FALLING_gc       = Sense Falling Edge
 *                PORT_ISC_INPUT_DISABLE_gc = Digital Input Buffer disabled
 *                PORT_ISC_LEVEL_gc         = Sense low Level
 */
static inline void B1_MCU_set_isc(const PORT_ISC_t isc)
{
	PORTD_pin_set_isc(5, isc);
}

/**
 * \brief Set B1_MCU inverted mode
 *
 * Enable or disable inverted I/O on a pin
 *
 * \param[in] inverted true  = I/O on B1_MCU is inverted
 *                     false = I/O on B1_MCU is not inverted
 */
static inline void B1_MCU_set_inverted(const bool inverted)
{
	PORTD_pin_set_inverted(5, inverted);
}

/**
 * \brief Set B1_MCU level
 *
 * Sets output level on a pin
 *
 * \param[in] level true  = Pin level set to "high" state
 *                  false = Pin level set to "low" state
 */
static inline void B1_MCU_set_level(const bool level)
{
	PORTD_set_pin_level(5, level);
}

/**
 * \brief Toggle output level on B1_MCU
 *
 * Toggle the pin level
 */
static inline void B1_MCU_toggle_level()
{
	PORTD_toggle_pin_level(5);
}

/**
 * \brief Get level on B1_MCU
 *
 * Reads the level on a pin
 */
static inline bool B1_MCU_get_level()
{
	return PORTD_get_pin_level(5);
}

/**
 * \brief Set PD6 pull mode
 *
 * Configure pin to pull up, down or disable pull mode, supported pull
 * modes are defined by device used
 *
 * \param[in] pull_mode Pin pull mode
 */
static inline void PD6_set_pull_mode(const enum port_pull_mode pull_mode)
{
	PORTD_set_pin_pull_mode(6, pull_mode);
}

/**
 * \brief Set PD6 data direction
 *
 * Select if the pin data direction is input, output or disabled.
 * If disabled state is not possible, this function throws an assert.
 *
 * \param[in] direction PORT_DIR_IN  = Data direction in
 *                      PORT_DIR_OUT = Data direction out
 *                      PORT_DIR_OFF = Disables the pin
 *                      (low power state)
 */
static inline void PD6_set_dir(const enum port_dir dir)
{
	PORTD_set_pin_dir(6, dir);
}

/**
 * \brief Set PD6 input/sense configuration
 *
 * Enable/disable PD6 digital input buffer and pin change interrupt,
 * select pin interrupt edge/level sensing mode
 *
 * \param[in] isc PORT_ISC_INTDISABLE_gc    = Iterrupt disabled but input buffer enabled
 *                PORT_ISC_BOTHEDGES_gc     = Sense Both Edges
 *                PORT_ISC_RISING_gc        = Sense Rising Edge
 *                PORT_ISC_FALLING_gc       = Sense Falling Edge
 *                PORT_ISC_INPUT_DISABLE_gc = Digital Input Buffer disabled
 *                PORT_ISC_LEVEL_gc         = Sense low Level
 */
static inline void PD6_set_isc(const PORT_ISC_t isc)
{
	PORTD_pin_set_isc(6, isc);
}

/**
 * \brief Set PD6 inverted mode
 *
 * Enable or disable inverted I/O on a pin
 *
 * \param[in] inverted true  = I/O on PD6 is inverted
 *                     false = I/O on PD6 is not inverted
 */
static inline void PD6_set_inverted(const bool inverted)
{
	PORTD_pin_set_inverted(6, inverted);
}

/**
 * \brief Set PD6 level
 *
 * Sets output level on a pin
 *
 * \param[in] level true  = Pin level set to "high" state
 *                  false = Pin level set to "low" state
 */
static inline void PD6_set_level(const bool level)
{
	PORTD_set_pin_level(6, level);
}

/**
 * \brief Toggle output level on PD6
 *
 * Toggle the pin level
 */
static inline void PD6_toggle_level()
{
	PORTD_toggle_pin_level(6);
}

/**
 * \brief Get level on PD6
 *
 * Reads the level on a pin
 */
static inline bool PD6_get_level()
{
	return PORTD_get_pin_level(6);
}

/**
 * \brief Set PD7 pull mode
 *
 * Configure pin to pull up, down or disable pull mode, supported pull
 * modes are defined by device used
 *
 * \param[in] pull_mode Pin pull mode
 */
static inline void PD7_set_pull_mode(const enum port_pull_mode pull_mode)
{
	PORTD_set_pin_pull_mode(7, pull_mode);
}

/**
 * \brief Set PD7 data direction
 *
 * Select if the pin data direction is input, output or disabled.
 * If disabled state is not possible, this function throws an assert.
 *
 * \param[in] direction PORT_DIR_IN  = Data direction in
 *                      PORT_DIR_OUT = Data direction out
 *                      PORT_DIR_OFF = Disables the pin
 *                      (low power state)
 */
static inline void PD7_set_dir(const enum port_dir dir)
{
	PORTD_set_pin_dir(7, dir);
}

/**
 * \brief Set PD7 input/sense configuration
 *
 * Enable/disable PD7 digital input buffer and pin change interrupt,
 * select pin interrupt edge/level sensing mode
 *
 * \param[in] isc PORT_ISC_INTDISABLE_gc    = Iterrupt disabled but input buffer enabled
 *                PORT_ISC_BOTHEDGES_gc     = Sense Both Edges
 *                PORT_ISC_RISING_gc        = Sense Rising Edge
 *                PORT_ISC_FALLING_gc       = Sense Falling Edge
 *                PORT_ISC_INPUT_DISABLE_gc = Digital Input Buffer disabled
 *                PORT_ISC_LEVEL_gc         = Sense low Level
 */
static inline void PD7_set_isc(const PORT_ISC_t isc)
{
	PORTD_pin_set_isc(7, isc);
}

/**
 * \brief Set PD7 inverted mode
 *
 * Enable or disable inverted I/O on a pin
 *
 * \param[in] inverted true  = I/O on PD7 is inverted
 *                     false = I/O on PD7 is not inverted
 */
static inline void PD7_set_inverted(const bool inverted)
{
	PORTD_pin_set_inverted(7, inverted);
}

/**
 * \brief Set PD7 level
 *
 * Sets output level on a pin
 *
 * \param[in] level true  = Pin level set to "high" state
 *                  false = Pin level set to "low" state
 */
static inline void PD7_set_level(const bool level)
{
	PORTD_set_pin_level(7, level);
}

/**
 * \brief Toggle output level on PD7
 *
 * Toggle the pin level
 */
static inline void PD7_toggle_level()
{
	PORTD_toggle_pin_level(7);
}

/**
 * \brief Get level on PD7
 *
 * Reads the level on a pin
 */
static inline bool PD7_get_level()
{
	return PORTD_get_pin_level(7);
}

/**
 * \brief Set R2_MCU pull mode
 *
 * Configure pin to pull up, down or disable pull mode, supported pull
 * modes are defined by device used
 *
 * \param[in] pull_mode Pin pull mode
 */
static inline void R2_MCU_set_pull_mode(const enum port_pull_mode pull_mode)
{
	PORTF_set_pin_pull_mode(0, pull_mode);
}

/**
 * \brief Set R2_MCU data direction
 *
 * Select if the pin data direction is input, output or disabled.
 * If disabled state is not possible, this function throws an assert.
 *
 * \param[in] direction PORT_DIR_IN  = Data direction in
 *                      PORT_DIR_OUT = Data direction out
 *                      PORT_DIR_OFF = Disables the pin
 *                      (low power state)
 */
static inline void R2_MCU_set_dir(const enum port_dir dir)
{
	PORTF_set_pin_dir(0, dir);
}

/**
 * \brief Set R2_MCU input/sense configuration
 *
 * Enable/disable R2_MCU digital input buffer and pin change interrupt,
 * select pin interrupt edge/level sensing mode
 *
 * \param[in] isc PORT_ISC_INTDISABLE_gc    = Iterrupt disabled but input buffer enabled
 *                PORT_ISC_BOTHEDGES_gc     = Sense Both Edges
 *                PORT_ISC_RISING_gc        = Sense Rising Edge
 *                PORT_ISC_FALLING_gc       = Sense Falling Edge
 *                PORT_ISC_INPUT_DISABLE_gc = Digital Input Buffer disabled
 *                PORT_ISC_LEVEL_gc         = Sense low Level
 */
static inline void R2_MCU_set_isc(const PORT_ISC_t isc)
{
	PORTF_pin_set_isc(0, isc);
}

/**
 * \brief Set R2_MCU inverted mode
 *
 * Enable or disable inverted I/O on a pin
 *
 * \param[in] inverted true  = I/O on R2_MCU is inverted
 *                     false = I/O on R2_MCU is not inverted
 */
static inline void R2_MCU_set_inverted(const bool inverted)
{
	PORTF_pin_set_inverted(0, inverted);
}

/**
 * \brief Set R2_MCU level
 *
 * Sets output level on a pin
 *
 * \param[in] level true  = Pin level set to "high" state
 *                  false = Pin level set to "low" state
 */
static inline void R2_MCU_set_level(const bool level)
{
	PORTF_set_pin_level(0, level);
}

/**
 * \brief Toggle output level on R2_MCU
 *
 * Toggle the pin level
 */
static inline void R2_MCU_toggle_level()
{
	PORTF_toggle_pin_level(0);
}

/**
 * \brief Get level on R2_MCU
 *
 * Reads the level on a pin
 */
static inline bool R2_MCU_get_level()
{
	return PORTF_get_pin_level(0);
}

/**
 * \brief Set G2_MCU pull mode
 *
 * Configure pin to pull up, down or disable pull mode, supported pull
 * modes are defined by device used
 *
 * \param[in] pull_mode Pin pull mode
 */
static inline void G2_MCU_set_pull_mode(const enum port_pull_mode pull_mode)
{
	PORTF_set_pin_pull_mode(1, pull_mode);
}

/**
 * \brief Set G2_MCU data direction
 *
 * Select if the pin data direction is input, output or disabled.
 * If disabled state is not possible, this function throws an assert.
 *
 * \param[in] direction PORT_DIR_IN  = Data direction in
 *                      PORT_DIR_OUT = Data direction out
 *                      PORT_DIR_OFF = Disables the pin
 *                      (low power state)
 */
static inline void G2_MCU_set_dir(const enum port_dir dir)
{
	PORTF_set_pin_dir(1, dir);
}

/**
 * \brief Set G2_MCU input/sense configuration
 *
 * Enable/disable G2_MCU digital input buffer and pin change interrupt,
 * select pin interrupt edge/level sensing mode
 *
 * \param[in] isc PORT_ISC_INTDISABLE_gc    = Iterrupt disabled but input buffer enabled
 *                PORT_ISC_BOTHEDGES_gc     = Sense Both Edges
 *                PORT_ISC_RISING_gc        = Sense Rising Edge
 *                PORT_ISC_FALLING_gc       = Sense Falling Edge
 *                PORT_ISC_INPUT_DISABLE_gc = Digital Input Buffer disabled
 *                PORT_ISC_LEVEL_gc         = Sense low Level
 */
static inline void G2_MCU_set_isc(const PORT_ISC_t isc)
{
	PORTF_pin_set_isc(1, isc);
}

/**
 * \brief Set G2_MCU inverted mode
 *
 * Enable or disable inverted I/O on a pin
 *
 * \param[in] inverted true  = I/O on G2_MCU is inverted
 *                     false = I/O on G2_MCU is not inverted
 */
static inline void G2_MCU_set_inverted(const bool inverted)
{
	PORTF_pin_set_inverted(1, inverted);
}

/**
 * \brief Set G2_MCU level
 *
 * Sets output level on a pin
 *
 * \param[in] level true  = Pin level set to "high" state
 *                  false = Pin level set to "low" state
 */
static inline void G2_MCU_set_level(const bool level)
{
	PORTF_set_pin_level(1, level);
}

/**
 * \brief Toggle output level on G2_MCU
 *
 * Toggle the pin level
 */
static inline void G2_MCU_toggle_level()
{
	PORTF_toggle_pin_level(1);
}

/**
 * \brief Get level on G2_MCU
 *
 * Reads the level on a pin
 */
static inline bool G2_MCU_get_level()
{
	return PORTF_get_pin_level(1);
}

/**
 * \brief Set B2_MCU pull mode
 *
 * Configure pin to pull up, down or disable pull mode, supported pull
 * modes are defined by device used
 *
 * \param[in] pull_mode Pin pull mode
 */
static inline void B2_MCU_set_pull_mode(const enum port_pull_mode pull_mode)
{
	PORTF_set_pin_pull_mode(2, pull_mode);
}

/**
 * \brief Set B2_MCU data direction
 *
 * Select if the pin data direction is input, output or disabled.
 * If disabled state is not possible, this function throws an assert.
 *
 * \param[in] direction PORT_DIR_IN  = Data direction in
 *                      PORT_DIR_OUT = Data direction out
 *                      PORT_DIR_OFF = Disables the pin
 *                      (low power state)
 */
static inline void B2_MCU_set_dir(const enum port_dir dir)
{
	PORTF_set_pin_dir(2, dir);
}

/**
 * \brief Set B2_MCU input/sense configuration
 *
 * Enable/disable B2_MCU digital input buffer and pin change interrupt,
 * select pin interrupt edge/level sensing mode
 *
 * \param[in] isc PORT_ISC_INTDISABLE_gc    = Iterrupt disabled but input buffer enabled
 *                PORT_ISC_BOTHEDGES_gc     = Sense Both Edges
 *                PORT_ISC_RISING_gc        = Sense Rising Edge
 *                PORT_ISC_FALLING_gc       = Sense Falling Edge
 *                PORT_ISC_INPUT_DISABLE_gc = Digital Input Buffer disabled
 *                PORT_ISC_LEVEL_gc         = Sense low Level
 */
static inline void B2_MCU_set_isc(const PORT_ISC_t isc)
{
	PORTF_pin_set_isc(2, isc);
}

/**
 * \brief Set B2_MCU inverted mode
 *
 * Enable or disable inverted I/O on a pin
 *
 * \param[in] inverted true  = I/O on B2_MCU is inverted
 *                     false = I/O on B2_MCU is not inverted
 */
static inline void B2_MCU_set_inverted(const bool inverted)
{
	PORTF_pin_set_inverted(2, inverted);
}

/**
 * \brief Set B2_MCU level
 *
 * Sets output level on a pin
 *
 * \param[in] level true  = Pin level set to "high" state
 *                  false = Pin level set to "low" state
 */
static inline void B2_MCU_set_level(const bool level)
{
	PORTF_set_pin_level(2, level);
}

/**
 * \brief Toggle output level on B2_MCU
 *
 * Toggle the pin level
 */
static inline void B2_MCU_toggle_level()
{
	PORTF_toggle_pin_level(2);
}

/**
 * \brief Get level on B2_MCU
 *
 * Reads the level on a pin
 */
static inline bool B2_MCU_get_level()
{
	return PORTF_get_pin_level(2);
}

/**
 * \brief Set R3_MCU pull mode
 *
 * Configure pin to pull up, down or disable pull mode, supported pull
 * modes are defined by device used
 *
 * \param[in] pull_mode Pin pull mode
 */
static inline void R3_MCU_set_pull_mode(const enum port_pull_mode pull_mode)
{
	PORTF_set_pin_pull_mode(3, pull_mode);
}

/**
 * \brief Set R3_MCU data direction
 *
 * Select if the pin data direction is input, output or disabled.
 * If disabled state is not possible, this function throws an assert.
 *
 * \param[in] direction PORT_DIR_IN  = Data direction in
 *                      PORT_DIR_OUT = Data direction out
 *                      PORT_DIR_OFF = Disables the pin
 *                      (low power state)
 */
static inline void R3_MCU_set_dir(const enum port_dir dir)
{
	PORTF_set_pin_dir(3, dir);
}

/**
 * \brief Set R3_MCU input/sense configuration
 *
 * Enable/disable R3_MCU digital input buffer and pin change interrupt,
 * select pin interrupt edge/level sensing mode
 *
 * \param[in] isc PORT_ISC_INTDISABLE_gc    = Iterrupt disabled but input buffer enabled
 *                PORT_ISC_BOTHEDGES_gc     = Sense Both Edges
 *                PORT_ISC_RISING_gc        = Sense Rising Edge
 *                PORT_ISC_FALLING_gc       = Sense Falling Edge
 *                PORT_ISC_INPUT_DISABLE_gc = Digital Input Buffer disabled
 *                PORT_ISC_LEVEL_gc         = Sense low Level
 */
static inline void R3_MCU_set_isc(const PORT_ISC_t isc)
{
	PORTF_pin_set_isc(3, isc);
}

/**
 * \brief Set R3_MCU inverted mode
 *
 * Enable or disable inverted I/O on a pin
 *
 * \param[in] inverted true  = I/O on R3_MCU is inverted
 *                     false = I/O on R3_MCU is not inverted
 */
static inline void R3_MCU_set_inverted(const bool inverted)
{
	PORTF_pin_set_inverted(3, inverted);
}

/**
 * \brief Set R3_MCU level
 *
 * Sets output level on a pin
 *
 * \param[in] level true  = Pin level set to "high" state
 *                  false = Pin level set to "low" state
 */
static inline void R3_MCU_set_level(const bool level)
{
	PORTF_set_pin_level(3, level);
}

/**
 * \brief Toggle output level on R3_MCU
 *
 * Toggle the pin level
 */
static inline void R3_MCU_toggle_level()
{
	PORTF_toggle_pin_level(3);
}

/**
 * \brief Get level on R3_MCU
 *
 * Reads the level on a pin
 */
static inline bool R3_MCU_get_level()
{
	return PORTF_get_pin_level(3);
}

/**
 * \brief Set G3_MCU pull mode
 *
 * Configure pin to pull up, down or disable pull mode, supported pull
 * modes are defined by device used
 *
 * \param[in] pull_mode Pin pull mode
 */
static inline void G3_MCU_set_pull_mode(const enum port_pull_mode pull_mode)
{
	PORTF_set_pin_pull_mode(4, pull_mode);
}

/**
 * \brief Set G3_MCU data direction
 *
 * Select if the pin data direction is input, output or disabled.
 * If disabled state is not possible, this function throws an assert.
 *
 * \param[in] direction PORT_DIR_IN  = Data direction in
 *                      PORT_DIR_OUT = Data direction out
 *                      PORT_DIR_OFF = Disables the pin
 *                      (low power state)
 */
static inline void G3_MCU_set_dir(const enum port_dir dir)
{
	PORTF_set_pin_dir(4, dir);
}

/**
 * \brief Set G3_MCU input/sense configuration
 *
 * Enable/disable G3_MCU digital input buffer and pin change interrupt,
 * select pin interrupt edge/level sensing mode
 *
 * \param[in] isc PORT_ISC_INTDISABLE_gc    = Iterrupt disabled but input buffer enabled
 *                PORT_ISC_BOTHEDGES_gc     = Sense Both Edges
 *                PORT_ISC_RISING_gc        = Sense Rising Edge
 *                PORT_ISC_FALLING_gc       = Sense Falling Edge
 *                PORT_ISC_INPUT_DISABLE_gc = Digital Input Buffer disabled
 *                PORT_ISC_LEVEL_gc         = Sense low Level
 */
static inline void G3_MCU_set_isc(const PORT_ISC_t isc)
{
	PORTF_pin_set_isc(4, isc);
}

/**
 * \brief Set G3_MCU inverted mode
 *
 * Enable or disable inverted I/O on a pin
 *
 * \param[in] inverted true  = I/O on G3_MCU is inverted
 *                     false = I/O on G3_MCU is not inverted
 */
static inline void G3_MCU_set_inverted(const bool inverted)
{
	PORTF_pin_set_inverted(4, inverted);
}

/**
 * \brief Set G3_MCU level
 *
 * Sets output level on a pin
 *
 * \param[in] level true  = Pin level set to "high" state
 *                  false = Pin level set to "low" state
 */
static inline void G3_MCU_set_level(const bool level)
{
	PORTF_set_pin_level(4, level);
}

/**
 * \brief Toggle output level on G3_MCU
 *
 * Toggle the pin level
 */
static inline void G3_MCU_toggle_level()
{
	PORTF_toggle_pin_level(4);
}

/**
 * \brief Get level on G3_MCU
 *
 * Reads the level on a pin
 */
static inline bool G3_MCU_get_level()
{
	return PORTF_get_pin_level(4);
}

/**
 * \brief Set B3_MCU pull mode
 *
 * Configure pin to pull up, down or disable pull mode, supported pull
 * modes are defined by device used
 *
 * \param[in] pull_mode Pin pull mode
 */
static inline void B3_MCU_set_pull_mode(const enum port_pull_mode pull_mode)
{
	PORTF_set_pin_pull_mode(5, pull_mode);
}

/**
 * \brief Set B3_MCU data direction
 *
 * Select if the pin data direction is input, output or disabled.
 * If disabled state is not possible, this function throws an assert.
 *
 * \param[in] direction PORT_DIR_IN  = Data direction in
 *                      PORT_DIR_OUT = Data direction out
 *                      PORT_DIR_OFF = Disables the pin
 *                      (low power state)
 */
static inline void B3_MCU_set_dir(const enum port_dir dir)
{
	PORTF_set_pin_dir(5, dir);
}

/**
 * \brief Set B3_MCU input/sense configuration
 *
 * Enable/disable B3_MCU digital input buffer and pin change interrupt,
 * select pin interrupt edge/level sensing mode
 *
 * \param[in] isc PORT_ISC_INTDISABLE_gc    = Iterrupt disabled but input buffer enabled
 *                PORT_ISC_BOTHEDGES_gc     = Sense Both Edges
 *                PORT_ISC_RISING_gc        = Sense Rising Edge
 *                PORT_ISC_FALLING_gc       = Sense Falling Edge
 *                PORT_ISC_INPUT_DISABLE_gc = Digital Input Buffer disabled
 *                PORT_ISC_LEVEL_gc         = Sense low Level
 */
static inline void B3_MCU_set_isc(const PORT_ISC_t isc)
{
	PORTF_pin_set_isc(5, isc);
}

/**
 * \brief Set B3_MCU inverted mode
 *
 * Enable or disable inverted I/O on a pin
 *
 * \param[in] inverted true  = I/O on B3_MCU is inverted
 *                     false = I/O on B3_MCU is not inverted
 */
static inline void B3_MCU_set_inverted(const bool inverted)
{
	PORTF_pin_set_inverted(5, inverted);
}

/**
 * \brief Set B3_MCU level
 *
 * Sets output level on a pin
 *
 * \param[in] level true  = Pin level set to "high" state
 *                  false = Pin level set to "low" state
 */
static inline void B3_MCU_set_level(const bool level)
{
	PORTF_set_pin_level(5, level);
}

/**
 * \brief Toggle output level on B3_MCU
 *
 * Toggle the pin level
 */
static inline void B3_MCU_toggle_level()
{
	PORTF_toggle_pin_level(5);
}

/**
 * \brief Get level on B3_MCU
 *
 * Reads the level on a pin
 */
static inline bool B3_MCU_get_level()
{
	return PORTF_get_pin_level(5);
}

/**
 * \brief Set RESET pull mode
 *
 * Configure pin to pull up, down or disable pull mode, supported pull
 * modes are defined by device used
 *
 * \param[in] pull_mode Pin pull mode
 */
static inline void RESET_set_pull_mode(const enum port_pull_mode pull_mode)
{
	PORTF_set_pin_pull_mode(6, pull_mode);
}

/**
 * \brief Set RESET data direction
 *
 * Select if the pin data direction is input, output or disabled.
 * If disabled state is not possible, this function throws an assert.
 *
 * \param[in] direction PORT_DIR_IN  = Data direction in
 *                      PORT_DIR_OUT = Data direction out
 *                      PORT_DIR_OFF = Disables the pin
 *                      (low power state)
 */
static inline void RESET_set_dir(const enum port_dir dir)
{
	PORTF_set_pin_dir(6, dir);
}

/**
 * \brief Set RESET input/sense configuration
 *
 * Enable/disable RESET digital input buffer and pin change interrupt,
 * select pin interrupt edge/level sensing mode
 *
 * \param[in] isc PORT_ISC_INTDISABLE_gc    = Iterrupt disabled but input buffer enabled
 *                PORT_ISC_BOTHEDGES_gc     = Sense Both Edges
 *                PORT_ISC_RISING_gc        = Sense Rising Edge
 *                PORT_ISC_FALLING_gc       = Sense Falling Edge
 *                PORT_ISC_INPUT_DISABLE_gc = Digital Input Buffer disabled
 *                PORT_ISC_LEVEL_gc         = Sense low Level
 */
static inline void RESET_set_isc(const PORT_ISC_t isc)
{
	PORTF_pin_set_isc(6, isc);
}

/**
 * \brief Set RESET inverted mode
 *
 * Enable or disable inverted I/O on a pin
 *
 * \param[in] inverted true  = I/O on RESET is inverted
 *                     false = I/O on RESET is not inverted
 */
static inline void RESET_set_inverted(const bool inverted)
{
	PORTF_pin_set_inverted(6, inverted);
}

/**
 * \brief Set RESET level
 *
 * Sets output level on a pin
 *
 * \param[in] level true  = Pin level set to "high" state
 *                  false = Pin level set to "low" state
 */
static inline void RESET_set_level(const bool level)
{
	PORTF_set_pin_level(6, level);
}

/**
 * \brief Toggle output level on RESET
 *
 * Toggle the pin level
 */
static inline void RESET_toggle_level()
{
	PORTF_toggle_pin_level(6);
}

/**
 * \brief Get level on RESET
 *
 * Reads the level on a pin
 */
static inline bool RESET_get_level()
{
	return PORTF_get_pin_level(6);
}

#endif /* ATMEL_START_PINS_H_INCLUDED */
