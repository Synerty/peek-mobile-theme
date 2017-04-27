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


Tabs
````

The following example shows tabs :code:`.nav-tabs`.

HTML: ::

        <ul class="nav nav-tabs" role="tablist">
            <li class="active" role="presentation">
                <a aria-controls="home" data-toggle="tab" href="http://localhost:4200/#activeTaskTasks" role="tab">Tasks</a>
            </li>
            <li role="presentation">
                <a aria-controls="profile" data-toggle="tab" href="http://localhost:4200/#activeTaskActivity" role="tab">Activity</a>
            </li>
        </ul>


.. image:: ./screen_navigation-tabs.web.jpg


Table
`````


Table :code:`.table`
````````````````````

The :code:`.table` class will contain:

*  :code:`table-striped`


Icon :code:`.inbox-icon`
~~~~~~~~~~~~~~~~~~~~~~~~

The :code:`.inbox-icon` class will contain styling for the plugin icon.


Inbox Row :code:`.inbox-row`
~~~~~~~~~~~~~~~~~~~~~~~~~~~~

The :code:`.inbox-row` class will contain styling for the row.


Title :code:`.inbox-title`
~~~~~~~~~~~~~~~~~~~~~~~~~~

The :code:`.inbox-title` class will contain:

*  :code:`h2`


Description :code:`.inbox-description`
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

The :code:`.inbox-description` class will contain:

*  :code:`h3`


Date & Time :code:`.inbox-date-time`
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

The :code:`.inbox-date-time` class will contain:

*  :code:`h5`


Button Group :code:`.inbox-btn-grp`
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

The :code:`.inbox-date-time` class will contain:

*  :code:`btn-grp`


Buttons :code:`.inbox-btn`
~~~~~~~~~~~~~~~~~~~~~~~~~~

The :code:`.inbox-button` class will contain:

*  :code:`btn`


Arrow :code:`.inbox-link-arrow`
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

The :code:`.inbox-link-arrow` class will contain styling for the read more arrow.


HTML Layout
-----------

The Inbox HTML layout classes are found in the :file:`_inbox.web.scss`.


Display Samples
---------------

Below is the HTML code extract of the first two rows from the
:ref:`inbox_inbox_example_tasks`: ::

        <div class="tab-content">
            <div class="tab-pane active" id="activeTaskTasks" role="tabpanel">
                <div class="peek-inbox">

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
                                    <div class="inbox-link-arrow"></div>
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
                                    <div class="inbox-link-arrow">
                                    </div>
                                </td>
                            </tr>
                        </tbody>
                    </table>
                </div>
            </div>
        </div>


Inbox Example
-------------

.. _inbox_inbox_example_tasks:

Tasks
`````

.. image:: ./inbox-tasks.web.jpg


Activity
````````

.. image:: ./inbox-activity.web.jpg
