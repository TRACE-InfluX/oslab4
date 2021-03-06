/**
 * @file	console.c
 * @author
 * @version
 *
 * @brief Header file for the commands module
 *
 */


#ifndef COMMANDS_H_
#define COMMANDS_H_

void commands_init(void);
void commands_ls( uint8_t*, uint32_t );
void commands_cat( uint8_t*, uint32_t );
void commands_date( uint8_t*, uint32_t );
void commands_sysinfo( uint8_t*, uint32_t );
void commands_dump( uint8_t*, uint32_t );
void commands_cd( uint8_t*, uint32_t );
void commands_poke( uint8_t*, uint32_t );
void commands_print( uint8_t*, uint32_t );
void commands_goto( uint8_t*, uint32_t );
void commands_interpret(uint8_t*, uint32_t);
void interpret_command(char*);
#endif /* COMMANDS_H_ */
