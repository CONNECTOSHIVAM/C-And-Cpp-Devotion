# COMPILER DESIGN — 100% MARKS MASTER BLUEPRINT

## Mission
This roadmap is designed to make you exam-dominating in Compiler Design.
Goal:
- Write topper-level answers.
- Handle ANY question asked in semester exam.
- Build conceptual clarity + presentation skill.
- Prepare for theory + numerical/problem-based questions.
- Score near full marks.

---

# EXAM WINNING STRATEGY

## 1. How Examiner Gives Marks
In Compiler Design, marks are usually divided into:

| Component | Marks Weightage |
|---|---|
| Definition | 1–2 |
| Diagram/Algorithm | 2–5 |
| Explanation | 3–7 |
| Example | 1–3 |
| Comparison/Advantages | 1–2 |

If your answer contains ALL these parts, chances of full marks become very high.

---

# TOPPER ANSWER FORMAT (MANDATORY)

Use this format for EVERY long answer.

## D.E.E.D.C FORMAT

### D → Definition
Write precise textbook definition.

### E → Explanation
Explain concept in simple + technical language.

### E → Example/Algorithm
Give:
- Example
- Steps
- Algorithm
- Grammar
- DFA
- Parsing table
- TAC
according to question.

### D → Diagram
Draw:
- Compiler phases
- Parse tree
- DFA/NFA
- LR items
- DAG
- Syntax tree
etc.

### C → Conclusion
Write 2–3 line conclusion.

---

# MOST IMPORTANT EXAM RULES

## Golden Rule 1
Never write only theory.
Compiler Design is diagram + algorithm subject.

## Golden Rule 2
Always draw diagrams.
Even rough diagram increases marks.

## Golden Rule 3
For parsing questions:
Always show:
- FIRST
- FOLLOW
- Parsing Table
- Stack/Input/Action table

## Golden Rule 4
For lexical analysis:
Always draw:
- RE
- NFA
- DFA

## Golden Rule 5
For code generation:
Always write:
- Quadruple
- Triple
- Indirect Triple
- TAC

---

# UNIT-WISE MASTER PREPARATION

# UNIT 1 — INTRODUCTION & LEXICAL ANALYSIS

## Core Topics
- Compiler phases
- Grouping of phases
- Compiler construction tools
- Lexical analyzer
- Input buffering
- Tokens
- LEX
- Finite automata
- RE to NFA
- NFA to DFA
- DFA minimization

---

# MOST IMPORTANT THEORY QUESTIONS

## VERY IMPORTANT (Repeated in Universities)

### Q1. Explain phases of compiler with neat diagram.
### Q2. Explain role of lexical analyzer.
### Q3. Explain input buffering scheme.
### Q4. Define token, lexeme and pattern.
### Q5. Explain finite automata.
### Q6. Difference between compiler and interpreter.
### Q7. Explain compiler construction tools.
### Q8. Explain error handling in different compiler phases.
### Q9. Explain LEX tool.
### Q10. Explain grouping of compiler phases.

---

# MOST IMPORTANT PROBLEM QUESTIONS

## MUST PRACTICE

### Q1. Convert Regular Expression to NFA.

Practice:
- a|b
- (a|b)*abb
- a*b*
- ab*|ba*

### Q2. Convert NFA to DFA.

### Q3. Minimize DFA.

### Q4. Design DFA for:
- Strings ending with 01
- Binary divisible by 3
- Identifier recognition
- Floating number recognition

### Q5. Write LEX program for:
- Identifier
- Keyword detection
- Number counting
- Vowel counting

---

# HIGH BLOOM LEVEL QUESTIONS

## Analytical Questions

### Q1. Why lexical analysis is separated from syntax analysis?
### Q2. Compare NFA and DFA.
### Q3. Explain why DFA is faster than NFA.
### Q4. Explain importance of buffering in compiler design.
### Q5. Why minimization of DFA is required?

---

# UNIT 1 MASTER DIAGRAMS

You MUST draw these:

1. Phases of Compiler
2. Symbol Table interaction
3. DFA transition diagram
4. NFA construction
5. Input buffering scheme
6. RE → NFA conversion
7. NFA → DFA conversion

---

# UNIT 2 — TOP DOWN PARSING

## Core Topics
- Role of parser
- Context free grammar
- Ambiguity
- Left recursion
- Left factoring
- Recursive descent parser
- Predictive parser
- FIRST and FOLLOW
- LL(1) parsing table
- Error recovery

---

# MOST IMPORTANT THEORY QUESTIONS

### Q1. Explain top-down parsing.
### Q2. Explain predictive parser.
### Q3. Explain recursive descent parser.
### Q4. What is ambiguity? Remove ambiguity.
### Q5. Eliminate left recursion.
### Q6. Explain left factoring.
### Q7. Explain LL(1) parser.
### Q8. Explain error recovery in predictive parsing.
### Q9. Explain construction of predictive parsing table.
### Q10. Difference between top-down and bottom-up parsing.

---

# MOST IMPORTANT PROBLEM QUESTIONS

## MUST PRACTICE DAILY

### Q1. Remove left recursion.

Example:
A → Aα | β

### Q2. Perform left factoring.

### Q3. Find FIRST set.

### Q4. Find FOLLOW set.

### Q5. Construct LL(1) parsing table.

### Q6. Check whether grammar is LL(1).

### Q7. Simulate predictive parsing.

Create stack/input/action table.

---

# MOST IMPORTANT GRAMMARS

Practice repeatedly:

## Grammar 1
E → TE'
E' → +TE' | ε
T → FT'
T' → *FT' | ε
F → (E) | id

## Grammar 2
S → iEtS | iEtSeS | a
E → b

## Grammar 3
A → Aa | b

---

# HIGH BLOOM LEVEL QUESTIONS

### Q1. Why left recursion is problematic?
### Q2. Why LL(1) grammar is preferred?
### Q3. Compare recursive descent and predictive parsing.
### Q4. Explain ambiguity with real examples.
### Q5. Why FIRST and FOLLOW are important?

---

# UNIT 2 MASTER DIAGRAMS

1. Parse tree
2. Predictive parser architecture
3. Stack movement table
4. Derivation tree
5. Recursive descent flow

---

# UNIT 3 — BOTTOM UP PARSING

## Core Topics
- Shift reduce parsing
- Operator precedence parser
- LR parser
- SLR
- CLR
- LALR
- LR(0) items
- Canonical collection
- Parsing table
- YACC

---

# MOST IMPORTANT THEORY QUESTIONS

### Q1. Explain bottom-up parsing.
### Q2. Explain shift reduce parser.
### Q3. Explain handle pruning.
### Q4. Explain LR parser.
### Q5. Explain SLR parser.
### Q6. Explain CLR parser.
### Q7. Explain LALR parser.
### Q8. Explain operator precedence parser.
### Q9. Explain YACC.
### Q10. Difference between SLR, CLR and LALR.

---

# MOST IMPORTANT PROBLEM QUESTIONS

## EXTREMELY IMPORTANT

### Q1. Construct LR(0) items.

### Q2. Construct canonical collection.

### Q3. Construct SLR parsing table.

### Q4. Perform shift-reduce parsing.

### Q5. Detect conflicts:
- Shift reduce conflict
- Reduce reduce conflict

### Q6. Construct CLR parser.

### Q7. Construct LALR parser.

### Q8. Trace stack-input-action.

---

# MOST IMPORTANT COMPARISON QUESTIONS

### Compare:

| Topic | Important |
|---|---|
| LL vs LR | Very Important |
| SLR vs CLR vs LALR | Extremely Important |
| Top-down vs Bottom-up | Extremely Important |
| Operator precedence vs LR | Important |

---

# HIGH BLOOM LEVEL QUESTIONS

### Q1. Why LR parsers are powerful?
### Q2. Why LALR is used in practical compilers?
### Q3. Why bottom-up parsing handles larger grammar class?
### Q4. Explain need of handles in parsing.
### Q5. Why shift-reduce conflicts occur?

---

# UNIT 3 MASTER DIAGRAMS

1. Shift reduce parsing stack
2. LR automaton
3. State transition diagram
4. Parsing table structure
5. Handle pruning process

---

# UNIT 4 — CODE GENERATION

## Core Topics
- Intermediate code generation
- Prefix/Postfix
- Three address code
- Quadruple
- Triple
- Indirect triple
- Syntax directed translation
- Inherited and synthesized attributes
- Boolean expressions
- Backpatching
- Procedure calls
- Runtime storage management
- Code generation algorithm

---

# MOST IMPORTANT THEORY QUESTIONS

### Q1. Explain intermediate code generation.
### Q2. Explain syntax directed translation.
### Q3. Explain synthesized and inherited attributes.
### Q4. Explain three address code.
### Q5. Explain quadruple, triple and indirect triple.
### Q6. Explain backpatching.
### Q7. Explain runtime storage management.
### Q8. Explain code generation algorithm.
### Q9. Explain target machine.
### Q10. Explain procedure calls.

---

# MOST IMPORTANT PROBLEM QUESTIONS

## VERY VERY IMPORTANT

### Q1. Convert infix to postfix.

### Q2. Generate syntax tree.

### Q3. Generate DAG.

### Q4. Generate TAC.

### Q5. Convert TAC into:
- Quadruple
- Triple
- Indirect Triple

### Q6. Solve syntax directed definitions.

### Q7. Generate code for Boolean expressions.

### Q8. Solve backpatching problems.

### Q9. Generate intermediate code.

---

# MUST PRACTICE EXPRESSIONS

## Expression 1
A = B + C * D

## Expression 2
A = B * -C + B * -C

## Expression 3
if (a < b && c < d)

## Expression 4
while (a < b)

---

# HIGH BLOOM LEVEL QUESTIONS

### Q1. Why intermediate code is necessary?
### Q2. Why DAG optimization is useful?
### Q3. Why syntax directed translation is important?
### Q4. Compare quadruple, triple and indirect triple.
### Q5. Explain importance of runtime storage management.

---

# UNIT 4 MASTER DIAGRAMS

1. Syntax tree
2. DAG
3. Runtime memory organization
4. Activation record
5. Backpatching flow
6. Code generation model

---

# UNIT 5 — CODE OPTIMIZATION

## Core Topics
- Principal sources of optimization
- Loop optimization
- Peephole optimization
- DAG
- Basic blocks
- Flow graph
- Global data flow analysis
- Runtime environment
- Storage organization
- Activation records

---

# MOST IMPORTANT THEORY QUESTIONS

### Q1. Explain code optimization.
### Q2. Explain basic blocks.
### Q3. Explain flow graph.
### Q4. Explain loop optimization.
### Q5. Explain peephole optimization.
### Q6. Explain DAG optimization.
### Q7. Explain global data flow analysis.
### Q8. Explain activation records.
### Q9. Explain runtime environment.
### Q10. Explain storage allocation strategies.

---

# MOST IMPORTANT PROBLEM QUESTIONS

### Q1. Construct DAG.

### Q2. Identify basic blocks.

### Q3. Construct flow graph.

### Q4. Apply peephole optimization.

### Q5. Optimize loops.

### Q6. Detect common subexpressions.

### Q7. Eliminate dead code.

### Q8. Optimize TAC.

---

# HIGH BLOOM LEVEL QUESTIONS

### Q1. Why code optimization is important?
### Q2. Why loops are major optimization targets?
### Q3. Explain machine-independent optimization.
### Q4. Explain machine-dependent optimization.
### Q5. Why activation records are necessary?

---

# UNIT 5 MASTER DIAGRAMS

1. Flow graph
2. DAG
3. Activation record layout
4. Loop optimization structure
5. Basic block partitioning

---

# MOST IMPORTANT NUMERICAL/PRACTICAL QUESTIONS

These are HIGH probability:

| Topic | Priority |
|---|---|
| FIRST & FOLLOW | EXTREME |
| LL(1) Parsing Table | EXTREME |
| Left Recursion Removal | EXTREME |
| LR(0) Items | EXTREME |
| SLR Parsing Table | EXTREME |
| DFA Minimization | EXTREME |
| RE → NFA | EXTREME |
| NFA → DFA | EXTREME |
| TAC Generation | EXTREME |
| DAG Optimization | EXTREME |
| Backpatching | VERY HIGH |

---

# WHAT TO MEMORIZE PERFECTLY

## MUST MEMORIZE DEFINITIONS

1. Compiler
2. Token
3. Lexeme
4. Parsing
5. Ambiguous grammar
6. FIRST
7. FOLLOW
8. Handle
9. TAC
10. DAG
11. Basic block
12. Activation record
13. Peephole optimization
14. Backpatching
15. LR parser

---

# ONE NIGHT BEFORE EXAM REVISION STRATEGY

## Revise ONLY:

### Unit 1
- Compiler phases diagram
- DFA/NFA
- Lexical analyzer

### Unit 2
- FIRST/FOLLOW
- LL(1)
- Left recursion

### Unit 3
- LR items
- SLR/CLR/LALR comparison
- Shift reduce parsing

### Unit 4
- TAC
- DAG
- Backpatching
- Syntax tree

### Unit 5
- Basic blocks
- Flow graph
- Optimization techniques

---

# 15 MOST EXPECTED UNIVERSITY EXAM QUESTIONS

## SUPER HIGH PROBABILITY

1. Explain phases of compiler with diagram.
2. Explain lexical analyzer.
3. Convert RE to NFA.
4. Convert NFA to DFA.
5. Eliminate left recursion.
6. Compute FIRST and FOLLOW.
7. Construct LL(1) parsing table.
8. Explain predictive parser.
9. Explain shift-reduce parsing.
10. Construct SLR parsing table.
11. Compare SLR, CLR and LALR.
12. Generate three address code.
13. Explain syntax directed translation.
14. Construct DAG and optimize code.
15. Explain code optimization techniques.

---

# HOW TO WRITE ANSWERS FOR 100% MARKS

## For 2 Marks
- Definition
- One example

## For 5 Marks
- Definition
- Diagram
- Steps
- Example
- Conclusion

## For 10–15 Marks
- Definition
- Diagram
- Detailed explanation
- Algorithm
- Example
- Advantages/disadvantages
- Comparison table
- Conclusion

---

# SECRET TOPPER PRESENTATION TRICKS

## Use:
- Black pen for theory
- Blue pen for headings
- Pencil for diagrams
- Box around definitions
- Underline keywords

---

# HOW TO PREPARE IN FINAL 15 DAYS

## Days 1–3
Unit 1 complete.

## Days 4–6
Unit 2 complete.

## Days 7–9
Unit 3 complete.

## Days 10–11
Unit 4 complete.

## Days 12–13
Unit 5 complete.

## Day 14
Solve previous year questions.

## Day 15
Only revision + formulas + diagrams.

---

# FINAL EXAM HALL STRATEGY

## Step 1
Attempt easiest questions first.

## Step 2
Never leave diagram questions.

## Step 3
For parsing problems:
Show every step clearly.

## Step 4
Write neat tables.

## Step 5
Always end with conclusion.

---

# FINAL MESSAGE

If you master:
- FIRST/FOLLOW
- LL(1)
- LR parsing
- DFA/NFA
- TAC/DAG
- Optimization

then you can handle almost ANY Compiler Design paper.

Compiler Design is not about mugging up.
It is about:
- procedure
- derivation
- tables
- diagrams
- algorithms

Master the workflow.
Practice problems repeatedly.
Write structured answers.

That is the path to 100% performance.

