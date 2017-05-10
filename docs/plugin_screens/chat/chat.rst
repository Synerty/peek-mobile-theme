.. _chat:

====
Chat
====

The Chat Screen is accessed through the Home Screen or from a task in the Inbox.


Peek Plugin Chat
----------------

The :code:`.plugin-chat-list` class contain the classes specific to the
Chat List Screen.  The :code:`.plugin-chat-messages` class contains the classes specific
to the Chat Messages Screen.

::

        .plugin-chat-list{
        /* Contains the Chat List screen looks classes */
            ...

            messages{
            /* Contains the Messages button looks attributes unique to the Chat List */
                ...

                icon{
                /* Contains the icon looks attributes unique to the message class */
                    ...

                }

                topic{
                /* Contains the topic text looks attributes unique to the message class */
                    ...

                }
            }
        }

        .plugin-chat-messages{
        /* Contains the Chat Messages screen looks classes */
            ...

            message-list{
            /* Contains the Messages list looks attributes unique to the Chat Messages */
                ...

                sent{
                /* Contains the sent message looks attributes unique to the message-list
                class */
                    ...

                }

                received{
                /* Contains the received text looks attributes unique to the message-list
                class */
                    ...

                }

                message-details{
                /* Contains the message details text looks attributes unique to the
                message-list class */
                    ...

                }

                message{
                /* Contains the message text looks attributes unique to the message-list
                class */
                    ...

                }
            }
        }


SCSS Files
----------

The Inbox looks classes are found in the :file:`_plugin_chat.scss`.

The Inbox HTML layout classes are found in the
:file:`_plugin_chat.web.scss`.

The Inbox NativeScript layout classes are found in the
:file:`_plugin_chat.ns.scss`.


HTML
````


plugin-chat-list
~~~~~~~~~~~~~~~~

The plugin-chat-list component displays a list of active chats that routes to the
filtered plugin-chat-messages component.

::

        <div class="plugin-chat-list">
            <div class="messages">
                <i class="icon fa fa-comment" aria-hidden="true"></i>
                <div class="topic">
                    Chief Wiggum (C917)

                </div>
            </div>
            <div class="messages">
                <i class="icon fa fa-comment" aria-hidden="true"></i>
                <div class="topic">
                    (PowerOn Fusion)

                </div>
            </div>
        </div>


plugin-chat-messages
~~~~~~~~~~~~~~~~~~~~



::

        <div class="plugin-chat-messages">
            <div class="message-list">
                <div class="sent">
                    <div class="message-details">
                        Message sent, 3 hours ago

                    </div>
                    <div class="message">
                        A message written by the user

                    </div>
                </div>
                <div class="received">
                    <div class="message-details">
                        From Chief Wiggum (C917), 2 hours ago

                    </div>
                    <div class="message">
                        A message written by a Chief Wiggum

                    </div>
                </div>
                <div class="sent">
                    <div class="message-details">
                        Message sent, 15 minutes ago

                    </div>
                    <div class="message">
                        A message written by the user

                    </div>
                </div>
            </div>

            <div class="messaging-area">
                <div class="messaging-text">
                    <textarea class="form-control ng-untouched ng-pristine ng-valid"></textarea>
                </div>
                <div class="buttons">
                    <button class="btn" type="button" disabled="">Send</button>
                    <button class="btn" type="button">SOS</button>
                </div>
            </div>
        </div>
