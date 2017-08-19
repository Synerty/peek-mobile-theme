.. _peek_plugin_inbox:

===============================
Peek Plugin Inbox Style Example
===============================

Peek Plugin Inbox displays a list of unacknowledged items issued to the logged in user.

Inbox:

.. image:: ./inbox-tasks.web.jpg
  :align: center

Peek Plugin Activity display a log of items issued to the logged in user.

Activity:

.. image:: ./inbox-activity.web.jpg
  :align: center

If a device user has a role of performing tasks, which are managed by
Peek, Peek will issue items to the user via this plugin.

#.  The active task plugin receives items from other plugins

#.  The new items are persisted within the Peek Storage database

#.  Delivery to the users device is ensured

#.  Once the item is on the user device, it may be :

    #.  Selected from the 'Inbox' tab, this will route to the plugin that issued the
        item.

    #.  Actioned, actions will be delivered back to the initiating plugin back on the
        peek server.

#.  All items and the state of items are viewable from an administrators page.

#.  The Inbox Screen is accessed by the 'Tasks' button in the Title Bar.

#.  The 'Tasks' button also shows the number of tasks.

Examples:

#.  The following are use case examples of what can be done with the Active Task plugin.

#.  Notifications that arrive as read, and require no action. This can create an audit
    trail for the user.

#.  Notification that are unread until the user selects them. Selecting them will
    navigate to another plugin, the initiating plugin will be notified and it can then
    mark the task as read or delete it.

#.  Actions that are required. Actions can be created by initiating plugins, and stay
    "unread / unactioned" until the user completes what ever action is required within
    another plugin. The initiating plugin then removes or marks the action as completed.

#.  Question. A task can be created with multiple actions, upon selecting an action,
    the initiating plugin will be notified, it can then remove the task.


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

        .pl-inbox,
        .pl-inboxActivity,
        .pl-inboxTasks {

          .pl-inbox {
            /*
                Contains the style and classes for the inbox container
            */
            ...

            .pl-inbox-item {
              /*
                  Contains the style and classes for the
              */
              ...

              .pl-inbox-icon {
                /*
                    Contains the icon attributes unique to the .pl-inbox-item class
                */
                ...

              }
              .pl-inbox-info {
                /*
                    Contains the info attributes unique to the .pl-inbox-item class
                */
                ...

                .pl-inbox-title {
                  /*
                      Contains the title text attributes unique to the .pl-inbox-info class
                  */
                  ...

                }
                .pl-inbox-description {
                  /*
                      Contains the description text attributes unique to the .pl-inbox-info class
                  */
                  ...

                }
                .pl-inbox-date-time {
                  /*
                      Contains the date and time attributes unique to the .pl-inbox-info class
                  */
                  ...

                }
              }
            }
            .pl-inbox-read-more {
              /*
                  Contains the read more link attributes unique to the .plugin-inbox class
              */
              ...

              }
            }
          }
        }


SCSS Files
----------

The Inbox style classes are found in the
:file:`_plugin_inbox.scss`.

The Inbox HTML layout classes are found in the
:file:`_plugin_inbox.web.scss`.

The Inbox NativeScript layout classes are found in the
:file:`_plugin_inbox.ns.scss`.


HTML
----


plugin-active-task-client
`````````````````````````

::

        <div class="pl-inbox">

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

::

        <div class="pl-inbox-tasks">
            <div class="h3"
                 *ngIf="tasks.length === 0">
                The inbox is empty.

            </div>
            <div class="pl-inbox-item bg-success"
                 *ngFor="let task of tasks"
                 (click)="taskClicked(task)">
                <div class="pl-inbox-icon">
                    <i class="fa fa-comment"
                       aria-hidden="true"></i>

                </div>
                <div class="pl-inbox-info">
                    <div class="pl-inbox-title">
                        {{task.title}}

                    </div>
                    <div class="pl-inbox-description">
                        {{task.description}}

                    </div>
                    <div class="pl-inbox-date-time">
                        {{timePast(task)}} ago, {{dateTime(task)}}

                    </div>
                </div>
                <div class="pl-inbox-read-more">
                    <i class="fa fa-chevron-right"
                       aria-hidden="true"></i>

                </div>
            </div>
        </div>


plugin-active-task-activity-list
````````````````````````````````

::

        <div class="pl-inbox-activity">
            <div class="message"
                 *ngIf="activities.length === 0">
                There is no recent activity.

            </div>
            <div class="pl-inbox-item"
                 *ngFor="let activity of activities"
                 (click)="activityClicked(activity)">
                <div class="pl-inbox-info">
                    <div class="pl-inbox-title">
                        {{activity.title}}

                    </div>
                    <div class="pl-inbox-description">
                        {{activity.description}}

                    </div>
                    <div class="pl-inbox-date-time">
                        {{timePast(activity)}} ago, {{dateTime(activity)}}

                    </div>
                </div>
                <div class="pl-inbox-read-more">
                    <i class="fa fa-chevron-right"
                       aria-hidden="true"></i>

                </div>
            </div>
        </div>
