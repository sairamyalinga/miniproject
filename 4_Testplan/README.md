# TEST PLAN:

## Table no 1: Test plan

| **Test ID** | **Player_Choice**           |     **Computer_Choice **       | **Exp O/P**     | **Actual Out** |   **Status**     | **Type Of Test**  |    
|-------------|-----------------------------|--------------------------------|-----------------|-------------   |------------------|-------------------|
|  H_01       |   Rock                      |     Paper                      |Computer won     | Computer won   | PASS             | Scenario based    |
|  H_02       |   Rock                      |     Scissors                   |Player won       | Player won     | PASS             | Scenario based    |
|  H_03       |   Paper                     |     Rock                       |Player won       | Player won     | PASS             | Scenario based    |
|  H_04       |   Paper                     |     Scissors                   |Computer won     | Computer won   | PASS             | Scenario based    |
|  H_05       |   Scissors                  |     Rock                       |Computer won     | Computer won   | PASS             | Scenario based    |
|  H_06       |   Scissors                  |     Paper                      |Player won       | Player won     | PASS             | Scenario based    |
|  H_07       |   Rock                      |     Rock                       |Draw             | Draw           | PASS             | Boundary based    |
|  H_08       |   Paper                     |     Paper                      |Draw             | Draw           | PASS             | Boundary based    |
|  H_09       |   Scissors                  |     Scissors                   |Draw             | Draw           | PASS             | Boundary based    |
|  H_10       |   Stonexyz                  |      --x--                     |Prompt again     |Prompt useragain| PASS             | Boundary based    |
|  H_11       | Pressing enter without value|     --x--                      |Prompt again     |Prompt useragain| PASS             | Boundary based    |
|  H_12       | Quit                        |    --x--                       | Terminate       | Terminate      | PASS             | Requirement based |
