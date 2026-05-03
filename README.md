# 🛡️ Genesis Protocol Research
> A deep dive into low-level systems programming, memory architecture, and kernel-level exploitation.

This repository documents my progression from user-space memory manipulation to achieving Ring 0 dominance in Linux environments.

---

### 📂 [01: User-Space Memory Safety](https://github.com/axiomshadow/Protocol-Research/tree/main/Mission-01)
*Focus: Understanding stack frames and memory corruption.*
- **Concepts:** Stack layout, return address manipulation, variable overwriting.
- **Demo:** [overflow_demo.c](./Mission-01/overflow_demo.c) - A demonstration of unchecked input leading to privilege bypass.

### 📂 [02: Kernel Exploitation (Ring 0)](https://github.com/axiomshadow/Protocol-Research/tree/main/Mission-02)
*Focus: Kernel modules and privilege escalation.*
- **Concepts:** Linux Kernel Module (LKM) architecture, SMEP/KASLR bypass theory, kROP gadgets.
- **Goal:** Invoking `commit_creds(prepare_kernel_cred(0))` to achieve root access.
- **Driver:** [vulnerable_driver.c](./Mission-02/vulnerable_driver.c) - A simulated vulnerable kernel module.
- **Logic:** [exploit_logic.md](./Mission-02/exploit_logic.md) - Theoretical breakdown of modern exploit mitigations.

---
**Disclaimer:** This research is for educational purposes only.
