# fair-scheduler-kernel-2.4.27
    Fairness at the User Level:

        Traditional schedulers distribute CPU time among processes, which can lead to unfairness if one user has many processes and another has few.

        Your scheduler ensures that CPU time is distributed equally among users, not processes. For example:

            If there are 2 users, each gets 50% of the CPU time.

            If there are 3 users, each gets 33.33% of the CPU time.

    CPU Time Distribution:

        The scheduler does not consider the number of processes per user.

        Instead, it allocates CPU time equally among users and then distributes that time among their processes.

    Advantages:

        Prevents a single user from monopolizing CPU resources by creating many processes.

        Ensures fairness in multi-user environments (e.g., servers, shared systems).
