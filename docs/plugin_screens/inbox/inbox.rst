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
~~~~

::

        <div class="plugin-inbox">
            <div class="container-fluid">
                <div class="row">
                    <ul class="nav nav-tabs" role="tablist">
                        <li class="active" role="presentation">
                            <a aria-controls="home" data-toggle="tab"
                               href="http://localhost:4200/#inboxTasks"
                               role="tab">Inbox</a>
                        </li>
                        <li role="presentation">
                            <a aria-controls="profile" data-toggle="tab"
                               href="http://localhost:4200/#inboxActivity"
                               role="tab">Activity</a>
                        </li>
                    </ul>

                    <div class="tab-content">
                        <div class="tab-pane active" id="inboxTasks" role="tabpanel">
                            <div class="inbox">
                                <table class="table">
                                    <tr class="tr">
                                        <td class="td">
                                            <div class="icon">
                                                <i class="fa fa-comment"
                                                   aria-hidden="true"></i>
                                            </div>
                                            <div class="row">
                                                <div class="title">
                                                    1st Message Received
                                                </div>
                                                <div class="description">
                                                    This is you first message description
                                                </div>
                                                <div class="date-time">
                                                    13 hours ago 20:03 05-Mar
                                                </div>
                                                <div class="btn-group">
                                                    <button class="btn" role="button">
                                                        button1
                                                    </button>
                                                    <button class="btn" role="button">
                                                        button2
                                                    </button>
                                                    <button class="btn" role="button">
                                                        button3
                                                    </button>
                                                    <button class="btn" role="button">
                                                        button4
                                                    </button>
                                                    <button class="btn" role="button">
                                                        button5
                                                    </button>
                                                    <button class="btn" role="button">
                                                        button6
                                                    </button>
                                                </div>
                                            </div>
                                            <div class="read-more"></div>
                                        </td>
                                    </tr>

                                    <tr>
                                        <td class="td">
                                            <div class="icon">
                                                <i class="fa fa-check-square-o"
                                                   aria-hidden="true"></i>
                                            </div>
                                            <div class="row">
                                                <div class="title">
                                                    1st Task
                                                </div>
                                                <div class="description">
                                                    Your task if you choose to accept it.
                                                </div>
                                                <div class="date-time">
                                                    13 hours ago 20:03 05-Mar
                                                </div>
                                                <div class="btn-group">
                                                    <button class="btn" role="button">
                                                        button1
                                                    </button>
                                                    <button class="btn" role="button">
                                                        button2
                                                    </button>
                                                </div>
                                            </div>
                                            <div class="read-more">
                                            </div>
                                        </td>
                                    </tr>

                                </table>
                            </div>
                        </div>

                        <div class="tab-pane" id="inboxActivity" role="tabpanel">
                            <div class="activity">
                                <table class="table">
                                    <tr class="tr">
                                        <td class="td">
                                            <div class="row">
                                                <div class="title">
                                                    This happened
                                                </div>
                                                <div class="date-time">
                                                    13 hours ago 20:03 05-Mar
                                                </div>
                                                <div class="description">
                                                    A message came for uoi
                                                </div>
                                            </div>
                                            <a class="read-more"></a>
                                        </td>
                                    </tr>
                                    <tr class="tr">
                                        <td class="td">
                                            <div class="row">
                                                <div class="title">
                                                    Test Activity
                                                </div>
                                                <div class="date-time">
                                                    12 hours ago 20:03 05-Mar
                                                </div>
                                                <div class="description">
                                                    Only a test
                                                </div>
                                            </div>
                                            <a class="read-more"></a>
                                        </td>
                                    </tr>
                                </table>
                            </div>
                        </div>
                    </div>
                </div>
            </div>
        </div>

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
