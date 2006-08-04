/*
 * $Id$
 */

struct cli {
	struct sbuf		*sb;
	unsigned		verbose;
	unsigned		suspend;
	enum cli_status_e	result;
	struct cli_proto	*cli_proto;
};

void cli_suspend(struct cli *cli);
void cli_resume(struct cli *cli);
int cli_writeres(int fd, struct cli *cli);
int cli_readres(int fd, unsigned *status, char **ptr);
extern struct cli_proto CLI_cmds[];

cli_func_t cli_func_ping;
