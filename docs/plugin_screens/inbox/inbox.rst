.. _inbox:

=====
Inbox
=====

.. note:: Previously named Active Task


Looks Classes
-------------

The Inbox looks classes are found in the :file:`_inbox.scss`.

The :code:`.peek-inbox` class contain the classes specific to the
Inbox.

::

        .peek-inbox{
        <!-- Contains the Inbox screen looks classes -->
            ...

            .nav-tabs{
            <!-- Contains the navigation tabs looks attributes unique to Inbox -->
                ...

            }
            .table{
            <!-- Contains the table looks attributes unique to Inbox -->
                ...

            }
        }


.. note:: the :code:`.table` class is expanded in :ref:`inbox_table`.


.. _details_screen_nav_tabs:

Nav Tabs :code:`.nav-tabs`
``````````````````````````

.. image:: ./screen_navigation-tabs.web.jpg
  :align: center

The :code:`.nav-tabs` class contain the classes specific to a Inbox screen.

Below is a HTML code extract using :ref:`inbox_nav_tabs`: ::

        <div class="peek-inbox">
            <ul class="nav nav-tabs" role="tablist">
                <li class="active" role="presentation">
                    <a aria-controls="home" data-toggle="tab" role="tab">
                        Tasks

                    </a>
                </li>
                <li role="presentation">
                    <a aria-controls="profile" data-toggle="tab" role="tab">
                        Activity

                    </a>
                </li>
            </ul>
        </div>


.. _inbox_table:

Table :code:`.table`
````````````````````

The :code:`.table` class contain the classes specific to the Inbox screen.


.. _inbox_Tasks:

Tasks
~~~~~

.. image:: ./inbox-tasks.web.jpg
  :align: center


Activity
~~~~~~~~

.. image:: ./inbox-activity.web.jpg
  :align: center


scss
~~~~

::

        .inbox-table{
        <!-- Contains the inbox table looks classes unique to the Inbox -->
            ...

            .inbox-icon{
            <!-- Contains the icon looks attributes unique to the .inbox-table class -->
                ...

            }
            .inbox-row{
            <!-- Contains the row looks attributes unique to the .inbox-table class -->
                ...

                .inbox-title{
                <!-- Contains the title text looks attributes unique to the .inbox-row class -->
                    ...

                }
                .inbox-description{
                <!-- Contains the description text looks attributes unique to the .inbox-row class -->
                    ...

                }
                .inbox-date-time{
                <!-- Contains the date and time looks attributes unique to the .inbox-row class -->
                    ...

                }
                .inbox-btn-grp{
                <!-- Contains the button group looks attributes unique to the .inbox-row class -->
                    ...

                }
                .inbox-btn{
                <!-- Contains the button looks attributes unique to the .inbox-row class
                 -->
                    ...

                }
            }
            .inbox-read-more{
            <!-- Contains the read more link looks attributes unique to the .inbox-table class -->
                ...

            }
        }


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


Code Extract
------------

Below is the HTML code extract of the first two rows from the
:ref:`inbox_Tasks`: ::


        <div class="peek-inbox">
            <div class="tab-content">
                <div class="tab-pane active" id="activeTaskTasks" role="tabpanel">
                    <table class="table">
                        <tbody>
                            <tr>
                                <td class="td bg-success">
                                    <div class="inbox-icon">
                                        <i class="fa fa-comment" aria-hidden="true"></i>

                                    </div>
                                    <div class="inbox-row">
                                        <div class="inbox-title">New Message New Message New Message New Message</div>
                                        <div class="inbox-description">You have a new message You have a new message You have a new message You have a new message</div>
                                        <div class="inbox-date-time">13 hours ago 20:03 05-Mar</div>
                                        <div class="inbox-btn-grp">
                                            <button class="inbox-btn" type="button" name="button">button1</button>
                                            <button class="inbox-btn" type="button" name="button">button2</button>
                                            <button class="inbox-btn" type="button" name="button">button3</button>
                                            <button class="inbox-btn" type="button" name="button">button4</button>
                                            <button class="inbox-btn" type="button" name="button">button5</button>
                                            <button class="inbox-btn" type="button" name="button">button6</button>

                                        </div>
                                    </div>
                                    <div class="inbox-read-more"></div>

                                </td>
                            </tr>
                            <tr>
                                <td class="td bg-success">
                                    <div class="inbox-icon">
                                        <i class="fa fa-check-square-o" aria-hidden="true"></i>

                                    </div>
                                    <div class="inbox-row">
                                        <div class="inbox-title">Task</div>
                                        <div class="inbox-description">You have a new message You have a new message You have a new message You have a new message</div>

                                        <div class="inbox-date-time">13 hours ago 20:03 05-Mar</div>

                                        <div class="inbox-btn-grp">
                                            <button class="inbox-btn" type="button" name="button">button1</button>
                                            <button class="inbox-btn" type="button" name="button">button1</button>

                                        </div>
                                    </div>
                                    <div class="inbox-read-more"></div>

                                </td>
                            </tr>
                        </tbody>
                    </table>
                </div>
            </div>
        </div>

