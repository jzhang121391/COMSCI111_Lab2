#ifndef OSPRD_H
#define OSPRD_H

// ioctl constants
#define OSPRDIOCACQUIRE		42
#define OSPRDIOCTRYACQUIRE	43
#define OSPRDIOCRELEASE		44

struct process_queue {
	pid_t pid;
	struct process_queue *next;
};

typedef struct process_queue *process_queue_t;

#endif
