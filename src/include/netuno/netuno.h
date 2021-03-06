
#ifndef NETUNO_H
  #define NETUNO_H

#define MEGABYTE 1048576
#define NETUNO_MAXLEVEL 10

#define ProbesByLevel( level ) pow(10,(level - 1))

/**
 * @brief Start Netuno injector.
 *
 * @param p_pkt[in] Packet data to inject.
 * @param p_thp[in] Initial throughput. (Just used on FULL attack)
 * @param p_timer[in] Attack execution time.
 * @return Injector handler strcut 
 */
void StartNetunoInjector( Packet *p_pkt, unsigned int p_inithp, unsigned int p_timer, unsigned int p_inc, char *p_file );

#endif
