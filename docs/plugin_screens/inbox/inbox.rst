.. _peek_plugin_inbox:

=================
Peek Plugin Inbox
=================

The Inbox Screen is accessed by the 'Tasks' button in the Title Bar.  The 'Tasks'
button also shows the number of outstanding tasks.
Tabs switch between the components that list items from installed plugins that are
configured to pass items into the peek-plugin-inbox.
The items can use icons, buttons and routing, all configurable.
Background contextual colours and icons can be used to distinguish between levels of
importance or priority.


Components
----------

The **plugin-active-task-client** component builds the navigation tabs.
The tabs route to the components plugin-active-task-task-list and
plugin-active-task-activity-list.

The **plugin-active-task-task-list** component builds rows of outstanding tasks from
plugins configured to issue tasks.

The **plugin-active-task-activity-list** component builds rows of the activity from the
plugins configured to show activity.


Classes
-------

The :code:`.plugin-inbox` class contains the classes specific to the
Peek Plugin Active Task.

::

        .plugin-inbox{
        /* Contains the Inbox screen looks classes */
            ...

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

                }
                .icon{
                /* Contains the icon looks attributes unique to the .inbox class */
                    ...

                }
                .info{
                /* Contains the info looks attributes unique to the .inbox class */
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

                .icon{
                /* Contains the icon looks attributes unique to the .activity class */
                    ...

                }
                .info{
                /* Contains the info looks attributes unique to the .activity class */
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


SCSS Files
----------

The Inbox looks classes are found in the
:file:`_plugin_inbox.scss`.

The Inbox HTML layout classes are found in the
:file:`_plugin_inbox.web.scss`.

The Inbox NativeScript layout classes are found in the
:file:`_plugin_inbox.ns.scss`.


HTML
----


plugin-active-task-client
`````````````````````````

.. image:: ./screen_navigation-tabs.web.jpg
  :align: center

::

        <div class="plugin-inbox">

            <ul class="nav nav-tabs"
                role="tablist">
                <li class="active"
                    role="presentation">
                    <a aria-controls="home"
                       data-toggle="tab"
                       href="http://localhost:4200/#inboxTasks"
                       role="tab">
                        Inbox

                    </a>
                </li>
                <li role="presentation">
                    <a aria-controls="profile"
                       data-toggle="tab"
                       href="http://localhost:4200/#inboxActivity"
                       role="tab">
                        Activity

                    </a>
                </li>
            </ul>
            <div class="tab-content">
                <div class="tab-pane active"
                     role="tabpanel"
                     id="inboxTasks">
                    <plugin-active-task-task-list></plugin-active-task-task-list>

                </div>
                <div class="tab-pane"
                     role="tabpanel"
                     id="inboxActivity">
                    <plugin-active-task-activity-list></plugin-active-task-activity-list>

                </div>
            </div>
        </div>



plugin-active-task-task-list
````````````````````````````

.. image:: ./inbox-tasks.web.jpg
  :align: center

::

        <div class="inbox">
            <div class="message"
                 *ngIf="tasks.length === 0">
                The inbox is empty.

            </div>
            <div class="task bg-success"
                 *ngFor="let task of tasks"
                 (click)="taskClicked(task)">
                <div class="icon">
                    <i class="fa fa-comment"
                       aria-hidden="true"></i>

                </div>
                <div class="info">
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
                <div class="btn read-more">
                    <i class="fa fa-chevron-right"
                       aria-hidden="true"></i>

                </div>
            </div>
        </div>



plugin-active-task-activity-list
````````````````````````````````

.. image:: ./inbox-activity.web.jpg
  :align: center

::

        <div class="activity">
            <div class="message"
                 *ngIf="activities.length === 0">
                There is no recent activity.

            </div>
            <div class="task"
                 *ngFor="let activity of activities"
                 (click)="activityClicked(activity)">
                <div class="info">
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
                <div class="btn read-more">
                    <i class="fa fa-chevron-right"
                       aria-hidden="true"></i>

                </div>
            </div>
        </div>



NativeScript
------------


plugin-active-task-client
`````````````````````````

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
````````````````````````````

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
````````````````````````````````

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

