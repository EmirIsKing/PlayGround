import PropTypes from 'prop-types'


function UserGreeting(props){

    const Welcome = <h2 className="welcome-msg">Welcome {props.username}</h2>
    const loginPrompt = <h2 className="login-prompt">Please Log in to continue</h2>


    if(props.isLoggedIn){
        return Welcome
    } else {
       return loginPrompt
    }

}

UserGreeting.proptypes = {
    username: PropTypes.string,
    isLoggedIn: PropTypes.bool
}

UserGreeting.defaultProps = {
    isLoggedIn: false,
    username: "Guest",
}

export default UserGreeting