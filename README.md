# Assessment_02
This is the book application provided by [Assessment 02](https://ait.instructure.com/courses/5786/assignments/60281) from [AIT School](https://ait.edu.au/).
---
## Project Diagram

Below it is possible to see the diagram with the plan and dising for the Library project using the diagram tool [mermaid](https://mermaid.js.org/syntax/gantt.html):

```mermaid
gantt
    title Library Morning Star Project
    dateFormat DD/MM/YYYY
    excludes Saturday, Sunday
    
    section Planning Phase
        Requirements Research    :requirements, 03/08/2025, 5d
        Stakeholder Meeting      :sMeeting, after requirements, 1d
        Software Design          :design, after sMeeting, 5d
        User Approval            :uApproval, after prototype, 1d
    section Development Phase
        Prototype                :prototype, after design,5d
        Book Class               :book, after uApproval, 2d
        Helper                   :helper, after book, 2d
        Main Class               :main, after helper, 2d
        Deploy QA Environment    :qaDeploy, after main, 1d
        Deploy Production        :pDeploy, after scenario,1d
    section Test Phase
        Testing Plan             :testPlan, 07/08/2025, 3d
        Creation Documentation   :doc, after testPlan, 5d
        Test Scenario            :scenario, after qaDeploy,5d
    section Go Phase
        Stake Holder Test        :stTest, after pDeploy, 2d
        Go Live!                 :after stTest,1d

```

* 