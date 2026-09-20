## Plan: Name And Love Prompt

Replace the existing age-classification behavior in `age.c` with the requested interactive program. It will read a name using CS50's `get_string`, print a warm greeting, ask `Do you love me? (yes/no)`, compare the answer with `strcmp` from `<string.h>`, and print a love message for `yes` or a light humorous message for `no`.

**Steps**
1. Keep the existing `cs50.h` and `stdio.h` includes and add `string.h` for `strcmp`.
2. Replace the current age variable and classification branches with `get_string` calls for the user's name and answer.
3. Print a personalized greeting, then branch on `strcmp(answer, "yes") == 0`; print the requested love response for `yes`, and the humorous heartbroken response for `no`.
4. Add a fallback response for unexpected input so the program has defined behavior beyond the two requested answers.
5. Compile with `clang age.c -lcs50 -o age`, run both `yes` and `no` cases, and check diagnostics for `age.c`.

**Relevant files**
- `/workspaces/140343627/age.c` — replace the current age classifier with the name/love interaction.
- `/workspaces/140343627/README.md` — documents the local CS50 compile convention using `-lcs50`.

**Verification**
1. Build with `clang age.c -lcs50 -o age`.
2. Run with a sample name and `yes`; verify the greeting includes the entered name and the love response appears.
3. Run with a sample name and `no`; verify the humorous response appears.
4. Run diagnostics for `age.c` and confirm there are no reported errors.

**Decisions**
- Use `strcmp`, never `==`, for string comparison.
- Match lowercase `yes` and `no` as requested; unexpected input receives a short fallback message.
- Keep source text ASCII to match the repository editing convention; use ASCII alternatives for the sample emoji messages.
- Scope is limited to `age.c`; do not modify the README or VS Code build task.
