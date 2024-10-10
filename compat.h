/*	$OpenBSD: time.h,v 1.66 2023/10/17 00:04:02 cheloha Exp $	*/
#define	timespecadd(tsp, usp, vsp)					\
	do {								\
		(vsp)->tv_sec = (tsp)->tv_sec + (usp)->tv_sec;		\
		(vsp)->tv_nsec = (tsp)->tv_nsec + (usp)->tv_nsec;	\
		if ((vsp)->tv_nsec >= 1000000000L) {			\
			(vsp)->tv_sec++;				\
			(vsp)->tv_nsec -= 1000000000L;			\
		}							\
	} while (0)

/*	$OpenBSD: stdlib.h,v 1.78 2024/08/03 20:09:24 guenther Exp $	*/
long long
	 strtonum(const char *, long long, long long, const char **);

/*	$OpenBSD: unistd.h,v 1.111 2024/08/02 22:14:54 guenther Exp $ */
int	 pledge(const char *, const char *) { return 0; }
