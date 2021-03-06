
#ifndef LOGGER_H
  #define LOGGER_H

typedef enum {ATK_LOGGER, MONITOR_LOGGER} LoggerType;

/**
 * @brief Initialize logger file.
 *
 * @param p_type[in] Logger type.
 * @return Pointer to file 
 */
FILE * CreateLoggerFile( char *p_file );

void LogInjection( FILE * p_fp, unsigned int p_level, float p_thpCur, unsigned int p_probes );
void LogAttack( FILE *p_fp, float p_thp );

#endif
