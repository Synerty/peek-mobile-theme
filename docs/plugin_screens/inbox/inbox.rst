.. _inbox:

=====
Inbox
=====

.. note:: Previously named Active Task


.. _details_screen_nav_tabs:

Nav Tabs
~~~~~~~~

.. image:: ./screen_navigation-tabs.web.jpg
  :align: center


.. _inbox_Tasks:

Tasks
~~~~~

.. image:: ./inbox-tasks.web.jpg
  :align: center


Activity
~~~~~~~~

.. image:: ./inbox-activity.web.jpg
  :align: center


Looks Classes
-------------

The Inbox looks classes are found in the :file:`_inbox.scss`.

The :code:`.peek-inbox` class contain the classes specific to the
Inbox.

::

        .peek-inbox{
        /* Contains the Inbox screen looks classes */
            ...

            container-fluid{
            /* Contains the container looks attributes unique to the Inbox */
                ...

            }
            .row{
            /* Contains the row looks attributes unique to the Inbox */
                ...

            }
            .nav-tabs{
            /* Contains the navigation tabs looks attributes unique to Inbox */
                ...

              .active{
              /* Contains the active tab looks attributes unique to .nav-tabs class */
                  ...

              }
            }
            .inbox{
            /* Contains the inbox table looks classes unique to the Inbox */
                ...

                .table{
                /* Contains the table looks attributes unique to the .inbox class */
                    ...

                    .tr{
                    /* Contains the table row looks attributes unique to the .table class */
                        ...

                    }
                    .td{
                    /* Contains the table row cell looks attributes unique to the .table class */
                        ...

                    }
                }
                .icon{
                /* Contains the icon looks attributes unique to the .inbox class */
                    ...

                }
                .row{
                /* Contains the row looks attributes unique to the .inbox class */
                    ...

                }
                .title{
                /* Contains the title text looks attributes unique to the .inbox class */
                    ...

                }
                .description{
                /* Contains the description text looks attributes unique to the .inbox class */
                    ...

                }
                .date-time{
                /* Contains the date and time looks attributes unique to the .inbox class */
                    ...

                }
                .btn-group{
                /* Contains the button group looks attributes unique to the .inbox class */
                    ...

                }
                .btn{
                /* Contains the button looks attributes unique to the .inbox class
                 */
                    ...

                }
                .read-more{
                /* Contains the read more link looks attributes unique to the .inbox class */
                    ...

                }
            }

            .activity{
            /* Contains the activity table looks classes unique to the Inbox */
                ...

                .table{
                /* Contains the table looks attributes unique to the .activity class */
                    ...

                    .tr{
                    /* Contains the table row looks attributes unique to the .table class */
                        ...

                    }
                    .td{
                    /* Contains the table row cell looks attributes unique to the .table class */
                        ...

                    }
                }
                .icon{
                /* Contains the icon looks attributes unique to the .activity class */
                    ...

                }
                .row{
                /* Contains the row looks attributes unique to the .activity class */
                    ...

                }
                .title{
                /* Contains the title text looks attributes unique to the .activity class */
                    ...

                }
                .description{
                /* Contains the description text looks attributes unique to the .activity class */
                    ...

                }
                .date-time{
                /* Contains the date and time looks attributes unique to the .activity class */
                    ...

                }
                .btn-group{
                /* Contains the button group looks attributes unique to the .activity class */
                    ...

                }
                .btn{
                /* Contains the button looks attributes unique to the .activity class
                 */
                    ...

                }
                .read-more{
                /* Contains the read more link looks attributes unique to the .activity class */
                    ...

                }
            }
        }


HTML
````


plugin-active-task-client
~~~~~~~~~~~~~~~~~~~~~~~~~

::

        <div class="peek-inbox">

            <!-- Nav tabs -->
            <ul class="nav nav-tabs"
                role="tablist">
                <li class="active"
                    role="presentation">
                    <a href="#activeTaskTasks"
                       aria-controls="home"
                       role="tab"
                       data-toggle="tab">
                        Tasks

                    </a>
                </li>
                <li role="presentation">
                    <a href="#activeTaskActivity"
                       aria-controls="profile"
                       role="tab"
                       data-toggle="tab">
                        Activity

                    </a>
                </li>
            </ul>
            <!-- Tab panes -->
            <div class="tab-content">
                <div class="tab-pane active"
                     role="tabpanel"
                     id="activeTaskTasks">
                    <plugin-active-task-task-list></plugin-active-task-task-list>

                </div>
                <div class="tab-pane"
                     role="tabpanel"
                     id="activeTaskActivity">
                    <plugin-active-task-activity-list></plugin-active-task-activity-list>

                </div>
            </div>
        </div>


plugin-active-task-task-list
~~~~~~~~~~~~~~~~~~~~~~~~~~~~

::

        <div class="inbox">
            <table class="table table-striped">
                <tr class="tr"
                    *ngFor="let task of tasks"
                    (click)="taskClicked(task)">
                    <td class="td">
                        <div class="icon">
                            <i class="fa fa-comment"
                               aria-hidden="true">

                            </i>
                        </div>
                        <div class="row">
                            <div class="title">
                                {{task.title}}

                            </div>
                            <div class="description">
                                {{task.description}}

                            </div>
                            <div class="date-time">
                                {{timePast(task)}} ago, {{dateTime(task)}}

                            </div>
                        </div>
                    </td>
                </tr>
            </table>
        </div>


plugin-active-task-activity-list
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

::

        <div class="activity">
            <div class="message"
                 *ngIf="activities.length === 0">
                There is no recent activity.

            </div>
            <table class="table">
                <tr class="tr"
                    *ngFor="let activity of activities"
                    (click)="activityClicked(activity)">
                    <td class="td">
                        <div class="row">
                            <div class="title">
                                {{activity.title}}

                            </div>
                            <div class="description">
                                {{activity.description}}

                            </div>
                            <div class="date-time">
                                {{timePast(activity)}} ago, {{dateTime(activity)}}

                            </div>
                        </div>
                    </td>
                </tr>
            </table>
        </div>


NativeScript
````````````


plugin-active-task-client
~~~~~~~~~~~~~~~~~~~~~~~~~

::

        <StackLayout class="peek-inbox">

            <TabView #tabview [selectedIndex]="tabindex" sdkExampleTitle sdkToggleNavButton>
                <StackLayout *tabItem="{title: 'Tasks'}">
                    <plugin-active-task-task-list></plugin-active-task-task-list>
                </StackLayout>
                <StackLayout *tabItem="{title: 'Activity'}">
                    <plugin-active-task-activity-list></plugin-active-task-activity-list>
                </StackLayout>
            </TabView>
        </StackLayout>


plugin-active-task-task-list
~~~~~~~~~~~~~~~~~~~~~~~~~~~~

::

        <ScrollView class="inbox">
            <label class="message"
                   *ngIf="tasks.length === 0"
                   text="There are no tasks :-)">

            </label>
            <ListView [items]="tasks">
                <ng-template let-item="item" let-i="index">
                    <StackLayout
                            [class.bg-success]="!item.isCompleted() && item.isPrioritySuccess()"
                            [class.bg-info]="!item.isCompleted() && item.isPriorityInfo()"
                            [class.bg-warning]="!item.isCompleted() && item.isPriorityWarning()"
                            [class.bg-danger]="!item.isCompleted() && item.isPriorityDanger()"
                            (tap)="taskClicked(item)">
                        <GridLayout columns="auto,*,auto" rows="*">
                            <Label class="icon"
                                   row="0" col="0"
                                   *ngIf="item.isTask() && !item.isCompleted()"
                                   [text]="'fa-square-o' | fonticon">

                            </Label>

                            <Label class="icon"
                                   row="0" col="0"
                                   *ngIf="item.isTask() && item.isCompleted()"
                                   [text]="'fa-check-square-o' | fonticon">

                            </Label>

                            <Label class="icon"
                                   row="0" col="0"
                                   *ngIf="item.isMessage() && !item.isCompleted()"
                                   [text]="'fa-comment-o' | fonticon">

                            </Label>

                            <Label class="title"
                                   row="0" col="1"
                                   [text]="' ' + item.title"
                                   textWrap="true">

                            </Label>

                            <Label class="read-more"
                                   row="0" col="2" *ngIf="hasRoute(item)"

                                   [text]="'fa-angle-right' | fonticon">

                            </Label>
                        </GridLayout>
                        <label class="description"
                               [text]="item.description"
                               textWrap="true">

                        </label>
                        <label class="date-time"
                               [text]="timePast(item) + ' ago, ' + dateTime(item)"></label>

                        <WrapLayout *ngIf="!item.isActioned()">
                            <Button *ngFor="let action of item.actions"
                                    [text]="action.title"
                                    (tap)="actionClicked(item, action)">

                            </Button>
                        </WrapLayout>
                    </StackLayout>
                </ng-template>
            </ListView>
        </ScrollView>


plugin-active-task-activity-list
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

::

        <ScrollView class="inbox">
            <label class="message"
                   *ngIf="activities.length === 0"
                   text="There is no recent activity">

            </label>

            <ListView [items]="activities"
                      (tap)="activityClicked(activity)">
                <ng-template let-item="item" let-i="index" let-odd="odd" let-even="even">
                    <StackLayout [class.odd]="odd" [class.even]="even"
                                 (tap)="activityClicked(item)">
                        <GridLayout columns="*,auto" rows="*">
                            <label class="title"
                                   row="0" col="0"
                                   [text]="item.title" textWrap="true">

                            </label>
                            <Label class="read-more"
                                   *ngIf="hasRoute(item)"
                                   row="0" col="1"
                                   [text]="'fa-angle-right' | fonticon">

                            </Label>
                        </GridLayout>
                        <label class="description"
                               [text]="item.description">

                        </label>
                        <label class="date-time"
                               [text]="timePast(item) + ' ago, ' + dateTime(item)">

                        </label>
                    </StackLayout>
                </ng-template>
            </ListView>
        </ScrollView>


Layout
------


HTML
````

The Inbox HTML layout classes are found in the
:file:`_inbox.web.scss`.


NativeScript
````````````

The Inbox NativeScript layout classes are found in the
:file:`_inbox.ns.scss`.
