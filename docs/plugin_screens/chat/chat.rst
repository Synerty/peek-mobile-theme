.. _peek_plugin_chat:

================
Peek Plugin Chat
================

Peek Plugin Chat displays active chat sessions and their messages.
The active chat sessions should indicate if there are unread messages.
The message lists will display sent messages on the right and received messages on the
left.
Background contextual colours will distinguish a successfully sent message or an
emergency "SOS" message received.


Components
----------

The **chat-list** component displays a list of active chat sessions that route to the
msg-list component.
The "New Chat" button in the Navigation Bar routes to the new-chat component.

The **new-chat** component creates new chat sessions.
The user builds a list of one or more users for a new chat session.

The **msg-list** component shows the list of sent and received messages for the
selected chat session.
The "angle-left" button in the Navigation Bar routes to the chat-list component.
The user has the option to compose a new message to send of send an "SOS" message.


Classes
-------

The :code:`.plugin-chat-list` class contain the classes specific to the
chat-list component.
The :code:`.plugin-chat-messages` class contains the classes specific to the msg-list
component.
The new-chat component uses generic classes, see :ref:`other_useful_styles`.

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
            }
            messaging-area{
            /* Contains the compose message area looks attributes unique to the
            Chat Messages */
                ...

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
----


chat-list component
```````````````````

::

        <!--TRANSITION WITH REASON DIALOG -->
        <pl-chat-new-chat
                *ngIf="isNewChatDialogShown()"
                (create)="dialogConfirmed($event)"
                (cancel)="dialogCanceled()"
                [data]="newChatDialogData">

        </pl-chat-new-chat>


        <div class="peek-nav-section">
            <div class="btn-group pull-left"
                 *ngIf="!isNewChatDialogShown()"
                 role="group">
                <button class="btn"
                        role="group"
                        (click)="newChatClicked()">
                    New Chat
                </button>
            </div>
        </div>

        <div class="plugin-chat-list">
            <!-- Use the template tag syntax, as this works with nativescript too -->
            <ng-template ngFor let-chat [ngForOf]="chats" let-i="index">
                <div class="messages" (click)="chatClicked(chat)">

                    <!-- Unread indicator -->
                    <fa class="icon" name="fw" *ngIf="isChatRead(chat)"></fa>
                    <fa class="icon" name="comment-o" *ngIf="!isChatRead(chat)"></fa>

                    <!-- Other Users -->
                    <div class="topic" *ngFor="let user of otherChatUsers(chat)">
                        {{userDisplayName(user)}} ({{user.userId}})
                    </div>
                </div>
            </ng-template>
        </div>


new-chat component
``````````````````

::

        <div [@dialogAnimation]="dialogAnimationState"
             (@dialogAnimation.done)="animationDone($event)">

            <div class="h2">
                Start a chat wth :
            </div>

            <div class="p"
                 *ngIf="!createButtonEnabled()">
                No users selected
            </div>
            <ul>
                <li *ngFor="let u of data.users">
                    {{u.displayName}}
                </li>
            </ul>

            <div class="form-group">
                <label class="h4"
                       for="userIdField">
                    Add User:
                </label>
                <select class="form-control"
                        id="userIdField"
                        name="userId"
                        [(ngModel)]="selectedUserIndex">
                    <option [value]="i" *ngFor="let i = index; let item of usersStrList">
                        {{item}}
                    </option>
                </select>
            </div>


            <!-- BEGIN HANDBACK DIALOG -->
            <div>
                <Button class="btn" (click)="addUserClicked()"
                        [disabled]="!newButtonEnabled()">
                    Add User
                </Button>

                <Button class="btn" (click)="confirmClicked(false)"
                        [disabled]="!createButtonEnabled()">
                    Create Chat
                </Button>

                <Button class="btn" (click)="cancelClicked(false)">
                    Cancel
                </Button>
            </div>
        </div>

msg-list component
``````````````````

::

        <div class="peek-nav-section">
            <div class="btn-group pull-left"
                 role="group">
                <button class="btn"
                        role="group"
                        (click)="navToChatsClicked()">
                    <fa name="angle-left"></fa>
                </button>
            </div>
        </div>

        <div class="plugin-chat-messages"
             #messageListRef>
            <!-- No Messages -->
            <div class="h3"
                 *ngIf="!haveMessages()">
                No messages

            </div>
            <div class="message-list">

                <div *ngFor="let i=index; let msg of messages()">
                    <!-- Unread marker -->
                    <hr *ngIf="isFirstUnreadMesage(i)"/>

                    <!-- From and Date -->
                    <div [class.sent]="isMessageFromThisUser(msg)"
                         [class.received]="!isMessageFromThisUser(msg)">
                        <div class="message-details"
                             *ngIf="!isMessageFromThisUser(msg)">
                            From {{userDisplayName(msg)}} ({{msg.fromUserId}}), {{timePast(msg)}}
                            ago

                        </div>
                        <div class="message-details"
                             *ngIf="isMessageFromThisUser(msg)">
                            {{timePast(msg)}} ago

                        </div>
                        <div [class.sent]="isMessageFromThisUser(msg)"
                             [class.received]="!isMessageFromThisUser(msg)"
                             [class.bg-success]="isNormalPriority(msg)"
                             [class.bg-danger]="isEmergencyPriority(msg)">

                            <div class="h5"
                                 *ngIf="isNormalPriority(msg)">
                                {{msg.message}}

                            </div>
                            <div class="h4"
                                 *ngIf="isEmergencyPriority(msg)">
                                {{msg.message}}

                            </div>
                        </div>
                    </div>
                </div>
            </div>

            <div class="messaging-area">
            <textarea class="form-control"
                      [(ngModel)]="newMessageText">

            </textarea>
                <button class="btn" type="button"
                        [disabled]="!sendEnabled()"
                        (click)="sendMsgClicked()">
                    Send

                </button>
                <button class="btn" type="button"
                        (click)="sendSosClicked()">
                    SOS

                </button>
            </div>
        </div>
